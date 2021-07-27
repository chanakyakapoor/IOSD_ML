def findMean(a, n):
 
    sum = 0
    for i in range(0, n):
        sum += a[i]
 
    return float(sum/n)

def findMedian(a, n):
 
    sorted(a)
    if n % 2 != 0:
        return float(a[int(n/2)])
 
    return float((a[int((n-1)/2)] +
                  a[int(n/2)])/2.0)
 

a=[]
n = int(input("size: "))
print("elements:")
for i in range(0,n):
    num = int(input())
    a.append(num)

print("Mean =", findMean(a, n))
print("Median =", findMedian(a, n))
