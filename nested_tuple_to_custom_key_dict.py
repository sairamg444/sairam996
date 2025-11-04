nt=((('a',1),('b',2)),(('c',3),))
res={}
for group in nt:
    for k,v in group:
        res.setdefault(k,[]).append(v)
print(res)