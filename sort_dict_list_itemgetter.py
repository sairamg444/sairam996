from operator import itemgetter
l=[{'a':1},{'a':3},{'a':2}]
print(sorted(l,key=itemgetter('a')))