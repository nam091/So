def cal(students):
    count = 0
    points = list(map(int,input().split()))
    times = list(map(int,input().split()))
    for i in range(students):
        if i == 0 and int(times[i]) <= int(points[i]):
            count += 1
        elif i != 0 and int(times[i]) <= int(points[i]) - int(points[i - 1]):
            count += 1
    return count
        
    
t = int(input())
for _ in range(t):
    students = int(input())
    result = cal(students)
    print(result)