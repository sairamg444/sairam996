def ims(a):
    width=1
    n=len(a)
    res=a[:]
    while width<n:
        for i in range(0,n,2*width):
            left=res[i:i+width]
            right=res[i+width:i+2*width]
            l=r=0
            tmp=[]
            while l<len(left) and r<len(right):
                if left[l]<right[r]: tmp.append(left[l]);l+=1
                else: tmp.append(right[r]);r+=1
            tmp+=left[l:]+right[r:]
            res[i:i+len(tmp)]=tmp
        width*=2
    return res
print(ims([3,1,4,1,5,9,2,6]))