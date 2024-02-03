def check(expression):
    return str(expression) == str(expression)[::-1]

def progress(expression):
    if expression < 10:
        return 11
    expression += 1
    while True:
        if check(expression):
            return expression
        expression += 1

t = int(input())

for _ in range(t):
    expression = int(input().strip())
    output = progress(expression)
    print(output)