# 9237번 이장님 초대

N=int(input())
arr=list(map(int,input().split()))
arr.sort(reverse=True)
for i in range(N):
    arr[i]+=i+1
print(max(arr)+1)