def binary_search_pos(a,val,si,ei):
    while si<ei:
        mid=(si+ei)//2
        if a[mid]==val: return mid+1
        elif a[mid]<val: si=mid+1
        else: ei=mid
    return si if a[si]>val else si+1

def bis(a):
    for i in range(1,len(a)):
        val=a[i]
        j=i-1
        pos=binary_search_pos(a,val,0,j)
        while j>=pos:
            a[j+1]=a[j];j-=1
        a[j+1]=val
    return a
print(bis([37,23,0,17,12,72,31]))