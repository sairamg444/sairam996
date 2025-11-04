def ms(a):
    if len(a)<=1: return a
    m=len(a)//2
    left=ms(a[:m]);right=ms(a[m:])
    res=[]
    i=j=0
    while i<len(left) and j<len(right):
        if left[i]<right[j]: res.append(left[i]);i+=1
        else: res.append(right[j]);j+=1
    res+=left[i:]+right[j:]
    return res
print(ms([38,27,43,3,9,82,10]))