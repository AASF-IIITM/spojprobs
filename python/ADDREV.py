def rev(num): 
    num = num.strip("0")
    return num[::-1]

n = int(input())

for i in range(n):
    inp = input()
    arr = inp.split()
    sum = int(rev(arr[0])) + int(rev(arr[1]))
    print (rev(str(sum)))
