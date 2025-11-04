data=[('a',1),('b',2),('a',3),('b',4)]
res={}
for k,v in data:
    res.setdefault(k,[]).append(v)
print([(k,tuple(v)) for k,v in res.items()])