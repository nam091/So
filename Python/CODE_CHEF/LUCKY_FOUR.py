def find_four(number):
    count = 0
    numbers = list(str(number))
    for _ in numbers:
        if _ == '4':
            count = count + 1
    return count
    
t = int(input())
for _ in range(t):
    number = int(input())
    result = find_four(number)
    print(result)