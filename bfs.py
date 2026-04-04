inpgp = {
    '0': ['1', '2'],
    '1': ['5', '6'],
    '2': ['9'],
    '5': [],
    '6': [],
    '9': []
}

vis = []
queue = []

def bfs(inpgp, start):
    vis.append(start)
    queue.append(start)

    while queue:
        nd = queue.pop(0)
        print(nd, end=" ")

        for nxt in inpgp[nd]:
            if nxt not in vis:
                vis.append(nxt)
                queue.append(nxt)

bfs(inpgp, '0')
