class location:
    def __init__(self, _x, _y) -> None:
        self.x = _x
        self.y = _y
        self.d1 = _x + _y
        self.d2 = _x - _y
        self.jump = [-1]*4
    
    def update(self,ind,val) -> None:
        self.jump[ind] = val

def processJumps(locations,queries):
    points, o = [], [i for i in range(len(locations))]
    for loc in locations:
        points.append(location(loc[0], loc[1]))

    o.sort(lambda index: points[index].d1)
    for i in range(1,len(locations)):
        if(points[o[i-1]].d1 == points[o[i]].d1):
            points[o[i-1]].update(1,o[i])
            points[o[i]].update(2,o[i-1])
    
    o.sort(lambda index: points[index].d2)
    for i in range(1,len(locations)):
        if(points[o[i-1]].d2 == points[o[i]].d2):
            points[o[i-1]].update(0,o[i])
            points[o[i]].update(3,o[i-1])
        
    cur = 0
    for query in queries:
        next = points[cur].jump[query]
        if(next == -1): continue

        for j in range(0,4):
            if(points[cur].jump[j]!=-1):
                points[points[cur].jump[j]].jump[3-j] = points[cur].jump[3-j]
        
        cur = next

    return [points[cur].x, points[cur].y]
    
