def bsr(arr,l,r,x):
    if l>r:
        return -1
    m=(l+r)//2
    if arr[m]==x:
        return m
    if arr[m]>x:
        return bsr(arr,l,m-1,x)
    return bsr(arr,m+1,r,x)
arr=[1,3,5,7]
print(bsr(arr,0,len(arr)-1,5))