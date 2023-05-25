nums = int(input())

for i in range(nums):
    inputs = input()
    opp = list(map(int, input().strip().split(" ")))

    tried = []
    for count, j in enumerate(opp):
        if j not in tried:
            tried.append(j)

    res = []
    for count, j in enumerate(tried):
        sum = 0
        for count2, k in enumerate(opp):
            if k != j-1 and k != j+1:
                sum += k
        res.append(sum)

    print('Answer:',max(res))