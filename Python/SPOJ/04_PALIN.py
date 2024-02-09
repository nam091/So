def pal(num):
    if int(num) < 10:
        return 11
    nums = str(num)
    length = len(nums)
    p = num.copy()
    center = ""
    nums[length // 2 + 1:] = nums[:length // 2][::-1]

t = int(input())
num_list = []

for _ in range(t):
    num = int(input())
    num_list.append(num)
    
for n in num_list:
    result = pal(n)
    print(result)
