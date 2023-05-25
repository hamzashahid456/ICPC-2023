_ = input()
arr = list(map(int, input().split(" ")))


res = []
index = 0
size = len(arr)

while index < size-1:
    left = index
    i = 0
    while i < size-1 and arr[i] < arr[i+1]:
        left += 1
        i += 1
        break


    maxim = left + 1
    right = maxim

    while maxim < size:
        if arr[maxim] > arr[right]:
            right = maxim
        maxim += 1

    index = right

    sum = 0
    sub = min(arr[left], arr[right])
    for i in range(left + 1, right):
        sum += sub - arr[i]
    res.append(sum)

print(max(res))