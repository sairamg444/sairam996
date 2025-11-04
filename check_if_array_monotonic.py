a=[1,2,2,3]
inc=all(a[i]<=a[i+1]for i in range(len(a)-1))
dec=all(a[i]>=a[i+1]for i in range(len(a)-1))
print(inc or dec)