def stooge(a):
    if a[0]>a[-1]: a[0],a[-1]=a[-1],a[0]
    if len(a)>2:
        t=len(a)//3
        stooge(a[:len(a)-t])
        stooge(a[t:])
        stooge(a[:len(a)-t])
    return a
print(stooge([2,4,5,3,1]))