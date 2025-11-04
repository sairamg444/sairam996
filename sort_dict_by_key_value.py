d={'a':2,'c':1,'b':3}
print(dict(sorted(d.items())))
print(dict(sorted(d.items(),key=lambda x:x[1])))