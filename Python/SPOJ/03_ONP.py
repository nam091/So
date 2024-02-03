def operation(token):
    return token in ['+', '-', '*', '/', '^']

def order(operation):
    if operation == '+' or operation == '-':
        return 1
    elif operation == '*' or operation == '/':
        return 2
    elif operation == '^':
        return 3
    else:
        return 0
    
def infix_to_rpn(expression):
    output = []
    stack = []
    
    for token in expression:
        if token.isalpha():
            output.append(token)
        elif token == '(':
            stack.append(token)
        elif token == ')':
            while len(stack) > 0 and stack[-1] != '(': #Kiểm tra xem phần tử cuối cùng khác '(' thì cho vào output
                output.append(stack.pop()) #Sử dựng stack.pop() để lấy phần tử đầu tiên trong ngăn xếp và đồng thời xóa nó khỏi stack luôn
            stack.pop() # xoa dau '(' khoi stack #hieu nôm na .pop() la di chuyen phan tử
        elif operation(token):
            while len(stack) > 0 and operation(stack[-1]) and order(stack[-1]) >= order(token):
                output.append(stack.pop())
            stack.append(token)
        
    while len(stack) > 0:
        output.append(stack.pop())
    
    return ''.join(output)

t = int(input())
expressions = []

for _ in range(t):
    expression = input().strip()
    expressions.append(expression)

for expression in expressions:
    rpn = infix_to_rpn(expression)
    print(rpn)