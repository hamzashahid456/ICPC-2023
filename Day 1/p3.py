nums = int(input())

def closest(num, arr):

    if(num > sum(arr)):
        return -1

    arr.sort()
    iter = 0

    while num > 1:
        flag = 0
        for count, i in enumerate(arr):
            if i > num:
                flag = 1
                arr.pop(count)
                num -= i
                iter += 1
                break

        if flag == 0:
            num -= arr[-1]
            arr.pop(-1)
            iter += 1

    return iter
            

for i in range(nums):
    vals, Y = list(map(int, input().split(' ')))
    inlst = list(map(int, input().split(' ')))

    num1 = closest(Y, inlst)
    num2 = closest(Y, inlst)

    if num1 + num2 > 0:
        print(num1 + num2)
    
    else:
        print(-1)
