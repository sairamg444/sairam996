from collections import OrderedDict
od=OrderedDict([('b',2),('c',3)])
od.update({'a':1})
od.move_to_end('a',last=False)
print(od)