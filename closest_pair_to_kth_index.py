t=(10,22,14,26,35,19)
k=2
val=t[k]
closest=sorted(t,key=lambda x: (abs(x-val),x))[1]
print(closest)