def compare_and_swap(a,i,j,dir):
    if (dir==1 and a[i]>a[j]) or (dir==0 and a[i]<a[j]): a[i],a[j]=a[j],a[i]

def bitonic_merge(a,low,cnt,dir):
    if cnt>1:
        k=cnt//2
        for i in range(low,low+k): compare_and_swap(a,i,i+k,dir)
        bitonic_merge(a,low,k,dir);bitonic_merge(a,low+k,k,dir)

def bitonic_sort_util(a,low,cnt,dir):
    if cnt>1:
        k=cnt//2
        bitonic_sort_util(a,low,k,1)
        bitonic_sort_util(a,low+k,k,0)
        bitonic_merge(a,low,cnt,dir)

def bitonic_sort(a):
    bitonic_sort_util(a,0,len(a),1)
    return a
print(bitonic_sort([3,7,4,8,6,2,1,5]))