import random
def is_sorted(a):
    return all(a[i]<=a[i+1] for i in range(len(a)-1))
def bogosort(a):
    attempts=0
    while not is_sorted(a) and attempts<1000:
        random.shuffle(a);attempts+=1
    return a
print(bogosort([3,2,1]))