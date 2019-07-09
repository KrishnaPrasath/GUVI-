num =[]
for i in range(0,3):
    num.append(int(input()))
if(num[0]>num[1] and num[0]>num[2]):
    print(num[0])
elif(num[1]>num[0] and num[1]>num[2]):
    print(num[1])
else:
    print(num[2])


