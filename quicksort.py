def qs(a):
    if len(a)<=1: return a
    p=a[len(a)//2]
    left=[x for x in a if x<p]
    mid=[x for x in a if x==p]
    right=[x for x in a if x>p]
    return qs(left)+mid+qs(right)
print(qs([3,6,8,10,1,2,1]))