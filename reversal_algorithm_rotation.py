def reverse(a,s,e):
    while s<e:
        a[s],a[e]=a[e],a[s]
        s+=1
        e-=1
def rotate(a,d):
    n=len(a)
    reverse(a,0,d-1)
    reverse(a,d,n-1)
    reverse(a,0,n-1)
a=[1,2,3,4,5]
d=2
rotate(a,d)
print(a)