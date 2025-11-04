from collections import defaultdict,deque
def topo(edges):
    g=defaultdict(list);ind={}
    for u,v in edges:
        g[u].append(v);ind[v]=ind.get(v,0)+1;ind.setdefault(u,0)
    q=deque([u for u in ind if ind[u]==0])
    res=[]
    while q:
        u=q.popleft();res.append(u)
        for v in g[u]:
            ind[v]-=1
            if ind[v]==0: q.append(v)
    return res
print(topo([(5,2),(5,0),(4,0),(4,1),(2,3),(3,1)]))