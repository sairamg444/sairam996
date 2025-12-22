#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* chain[TABLE_SIZE];

int linearTable[TABLE_SIZE];
int quadraticTable[TABLE_SIZE];
int doubleHashTable[TABLE_SIZE];

void initTables() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        linearTable[i] = -1;
        quadraticTable[i] = -1;
        doubleHashTable[i] = -1;
        chain[i] = NULL;
    }
}

int hash1(int key) { 
    return key % TABLE_SIZE; 
}

int hash2(int key) { 
    return 7 - (key % 7); 
}

/* ------------------ UPDATED LINEAR PROBING ------------------ */
void insertLinear(int key) {
    int index = hash1(key);

    /* 1. Check hashed index */
    if (linearTable[index] == -1) {
        linearTable[index] = key;
        return;
    }

    /* 2. Move forward: index+1 to last */
    for (int i = index + 1; i < TABLE_SIZE; i++) {
        if (linearTable[i] == -1) {
            linearTable[i] = key;
            return;
        }
    }

    /* 3. Wrap: 0 to index-1 */
    for (int i = 0; i < index; i++) {
        if (linearTable[i] == -1) {
            linearTable[i] = key;
            return;
        }
    }

    /* 4. Table is full */
    printf("Linear Probing (Wrap): Table full! Cannot insert %d\n", key);
}

/* ------------------ Quadratic Probing ------------------ */
void insertQuadratic(int key) {
    int index = hash1(key);
    int i = 1;

    while (quadraticTable[index] != -1) {
        index = (index + i * i) % TABLE_SIZE;
        i++;
    }
    quadraticTable[index] = key;
}

/* ------------------ Double Hashing ------------------ */
void insertDoubleHash(int key) {
    int index = hash1(key);
    int step = hash2(key);

    while (doubleHashTable[index] != -1)
        index = (index + step) % TABLE_SIZE;

    doubleHashTable[index] = key;
}

/* ------------------ Separate Chaining ------------------ */
void insertChaining(int key) {
    int index = hash1(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = key;
    newNode->next = chain[index];
    chain[index] = newNode;
}

/* ------------------ Display Functions ------------------ */
void displayOpenAddressing(int arr[]) {
    for (int i = 0; i < TABLE_SIZE; i++)
        printf("%d --> %d\n", i, arr[i]);
}

void displayChaining() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("%d --> ", i);
        Node* temp = chain[i];
        while (temp) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

/* ------------------ MAIN ------------------ */
int main() {
    initTables();

    int arr[] = {23, 43, 13, 27, 39, 20, 34, 50, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        insertLinear(arr[i]);
        insertQuadratic(arr[i]);
        insertDoubleHash(arr[i]);
        insertChaining(arr[i]);
    }

    printf("\n---- Linear Probing ----\n");
    displayOpenAddressing(linearTable);

    printf("\n---- Quadratic Probing ----\n");
    displayOpenAddressing(quadraticTable);

    printf("\n---- Double Hashing ----\n");
    displayOpenAddressing(doubleHashTable);

    printf("\n---- Separate Chaining ----\n");
    displayChaining();

    return 0;
}
