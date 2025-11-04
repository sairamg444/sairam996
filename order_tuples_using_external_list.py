tuples=[('b',2),('a',1),('c',3)]\order=['a','b','c']
print(sorted(tuples,key=lambda x: order.index(x[0])))