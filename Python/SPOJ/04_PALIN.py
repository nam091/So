def pal(num):
    if num < 10:
        return 11
    if len(str(num)) % 2 == 0:
        num += 1
        result = even(num)
    else: 
        result = odd(num)
    return result

def even(num):
    length = len(str(num))
    nums = list(str(num))
    lefts = "".join(nums[0:length//2])
    rights = "".join(nums[length//2:])
    if lefts > rights[::-1]:
        rights = str(lefts)[::-1]
    elif lefts < rights[::-1]:
        lefts = int(lefts) + 1
        rights = str(lefts)[::-1]
    else: 
        return num
    result = str(lefts) + str(rights)
    return result
    
def odd(num):
    length = len(str(num))
    nums = list(str(num))
    center = nums[length // 2]
    lefts = "".join(nums[:length // 2])
    rights = "".join(nums[length // 2 + 1:])
    if lefts > rights[::-1]:
        rights = str(lefts)[::-1]
    elif lefts < rights[::-1]:
        lefts = int(lefts) + 1
        rights = str(lefts)[::-1]
    elif lefts == rights[::-1]:
        center = int(center) + 1
    result = str(lefts) + str(center) + str(rights)
    return result

t = int(input())
num_list = []

for _ in range(t):
    num = int(input())
    num_list.append(num)
    
for n in num_list:
    result = pal(int(n))
    print(result)