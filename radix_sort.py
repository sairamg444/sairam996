def radix(a):
    if not a: return a
    m=max(a)
    exp=1
    res=a[:]
    while m//exp>0:
        buckets=[[] for _ in range(10)]
        for n in res:
            buckets[(n//exp)%10].append(n)
        res=[x for b in buckets for x in b]
        exp*=10
    return res
print(radix([170,45,75,90,802,24,2,66]))