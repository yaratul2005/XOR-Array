import sys
input = sys.stdin.readline

SHIFT1 = 1 << 20
SHIFT2 = 1 << 21

t = int(input())
for _ in range(t):
    n, l, r = map(int, input().split())

    P = [0] * (n + 1)

    # Region 1: i < l
    for i in range(1, l):
        P[i] = i

    # Region 2: l ≤ i < r
    for i in range(l, r):
        P[i] = SHIFT1 + i

    # Forced equality: P[r] = P[l-1]
    P[r] = P[l - 1]

    # Region 3: i > r
    for i in range(r + 1, n + 1):
        P[i] = SHIFT2 + i

    # Compute array a
    a = [0] * n
    for i in range(1, n + 1):
        a[i - 1] = P[i] ^ P[i - 1]

    print(*a)
