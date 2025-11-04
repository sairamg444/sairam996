l=[1,2,2,3,4,4,4]
freq={}
for i in l:
    freq[i]=freq.get(i,0)+1
print(freq)