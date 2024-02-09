def cal(jars, peo, jars_num):
    waste = [float('inf')] * jars
    
    for i in range(jars):
        if jars_num[i] // peo > 0:
            waste[i] = jars_num[i] - (jars_num[i] // peo) * peo
    
    min_waste = min(waste)
    if min_waste == float('inf'):
        return -1
    else:
        return min_waste
    
t = int(input())
for _ in range(t):
    jars, peo = map(int, input().split())
    jars_num = list(map(int, input().split()))
    result = cal(jars, peo, jars_num)
    print(result)