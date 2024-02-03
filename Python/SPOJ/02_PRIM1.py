def is_primes(m, n):
    primes = [True] * (n - m + 1)
    #Tao phan tu cua mot mang co m-n phan tu
    for i in range(2, int(n ** 0.5) + 1): # bat dau xet tu 2 den can n
        for j in range(max(i*i, (m + i - 1) // i * i), n + 1, i):
            # ham max de kiem tra cac so nam trong pham vi m-n con nhung so ngoai pham vi se khong can duyet
            primes[j - m] = False 
            #coi m la vi tri bat dau : 0
            #[j-m] de toi uu bo nho, vd muon duyet tu 20-30 thi can 11 phan tu chu khong can duyet ca 30 phan tu
    if m <= 1:
        primes[1 - m] = False
    return primes

t = int(input())

for _ in range(t):
    m, n = map(int, input().split())
    
    if n > m: 
        primes = is_primes(m, n)
        for i in range(m, n + 1):
            if primes[i - m]:
                print(i)
        print()
    else:
        print()