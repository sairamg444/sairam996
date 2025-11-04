def comb(a):
    gap=len(a)
    shrink=1.3
    sorted=False
    while not sorted:
        gap=int(gap/shrink)
        if gap<=1: gap=1;sorted=True
        i=0
        while i+gap<len(a):
            if a[i]>a[i+gap]: a[i],a[i+gap]=a[i+gap],a[i];sorted=False
            i+=1
    return a
print(comb([8,4,1,56,3,0,23,5]))