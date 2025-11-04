def counting_sort(a):
    if not a: return a
    m=max(a);mn=min(a)
    size=m-mn+1
    count=[0]*size
    for x in a: count[x-mn]+=1
    res=[]
    for i,c in enumerate(count): res+=[i+mn]*c
    return res
print(counting_sort([4,2,2,8,3,3,1]))