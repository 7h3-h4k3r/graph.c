
import sys

class Graph:
    
    def __init__(self,verteies):
        self.vertex = verteies
        self.adj={}
    def set_vertex(self):
        for i in range(1,self.vertex+1):
            self.adj[i] = []
        return True
        

    
    def addEdge(self,v1,v2):
        if v2 not in self.adj[v1]:
            self.adj[v1].append(v2)
            return 
        print("duplicate value")
    
    def dfs(self,start=1,visited=[]):
        if not visited:
            visited.append(start)
        for i in self.adj[start]:
            if i in visited:
                print("cycle found")
                exit()
            else:
                visited.append(i)
            self.dfs(i,visited)
        return 0
    
    def ouput(self):
        print(self.adj)
    
def main(args):
    graph_struct = list(map(int,args))
    vertex = 4
    edge = [(1, 2), (2, 3), (3, 4), (4, 2)]
    g = Graph(vertex)
    g.set_vertex()
    for v , u in edge:
        g.addEdge(v,u)
    g.ouput()
    print(g.dfs())
    
if __name__ == "__main__":
    main(sys.argv[1:])
