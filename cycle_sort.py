def cycle_sort(a):
    writes=0
    for cycle_start in range(0,len(a)-1):
        item=a[cycle_start]
        pos=cycle_start
        for i in range(cycle_start+1,len(a)):
            if a[i]<item: pos+=1
        if pos==cycle_start: continue
        while item==a[pos]: pos+=1
        a[pos],item=item,a[pos]
        writes+=1
        while pos!=cycle_start:
            pos=cycle_start
            for i in range(cycle_start+1,len(a)):
                if a[i]<item: pos+=1
            while item==a[pos]: pos+=1
            a[pos],item=item,a[pos]
            writes+=1
    return a
print(cycle_sort([1,8,3,9,10,10,2,4]))