def gnome(a):
    index=0
    while index<len(a):
        if index==0 or a[index]>=a[index-1]: index+=1
        else: a[index],a[index-1]=a[index-1],a[index];index-=1
    return a
print(gnome([34,2,10,6,7]))