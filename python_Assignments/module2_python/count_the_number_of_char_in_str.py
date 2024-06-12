#((Q-13)Write a Python Programme count The Number Of Character In String.....)

a=input("Enter your string : ")
b=input("Enter your find character : ")
m=0

for i in a:
    if  i==b:
         m+=1

print(b," : ",m)
