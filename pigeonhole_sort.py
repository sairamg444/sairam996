def pigeonhole(a):
    if not a: return a
    mi=min(a);ma=max(a)
    size=ma-mi+1
    holes=[[] for _ in range(size)]
    for x in a: holes[x-mi].append(x)
    res=[]
    for h in holes: res+=h
    return res
print(pigeonhole([8,3,2,7,4,6,8]))