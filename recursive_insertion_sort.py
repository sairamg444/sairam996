def ris(a,n=None):
    if n is None: n=len(a)
    if n<=1: return a
    ris(a,n-1)
    last=a[n-1];j=n-2
    while j>=0 and a[j]>last:
        a[j+1]=a[j];j-=1
    a[j+1]=last
    return a
print(ris([3,1,4,2]))