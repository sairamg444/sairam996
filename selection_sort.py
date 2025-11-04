def ss(a):
    for i in range(len(a)):
        m=i
        for j in range(i+1,len(a)):
            if a[j]<a[m]: m=j
        a[i],a[m]=a[m],a[i]
    return a
print(ss([64,25,12,22,11]))