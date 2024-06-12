#( ( Q:-9 ) write a python programme of sum of three given integers,however if two values are equal sum will be zero....)



x=input("Enter x value : ").split()
y=input("Enter y Value :").split()
z=input("enter z value :").split()

if x==y:
    print("the sum of : 0",x,y)
elif y==z:
    print("the sum of : 0",z,y)
elif z==x:
    print("the sum of : 0",z,x)

else:
    print("your ans is" ,[x+y+z])
    
    
    

   
    

