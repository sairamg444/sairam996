def iqsort(a):
    stack=[(0,len(a)-1)]
    while stack:
        l,h=stack.pop()
        if l>=h: continue
        p=a[h];i=l
        for j in range(l,h):
            if a[j]<=p:
                a[i],a[j]=a[j],a[i];i+=1
        a[i],a[h]=a[h],a[i]
        stack.append((l,i-1));stack.append((i+1,h))
    return a
print(iqsort([4,2,6,9,2,1]))