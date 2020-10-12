T = int(input())
for i in range(T):
    N = int(input())
    a = list(map(int, input().split()))
    sum = [0] * N
    sum[0] = a[0]
    for j in range(1, N):
        sum[j] = sum[j - 1] + a[j]
    result = 0
    for i in range(N):
        result += (i + 1) * a[i] - sum[i]
    print(result)