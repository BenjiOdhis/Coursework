#we are creating variables in python
x= 5
y= "John"
print(x,y)
y= 7
z=5
print (x,y)
#casting refers to specifing the data type rather than letting the program decide
x=str(3)# x will be '3'
y=int(3)# y will be 3
Z=float(3)# z will be 3.0
print(x,y,z)
#getting the type
print(type(x))
#string can be declared using both single or double quote
x= "John"
x='Johns'
#variables are case sensitive
a='bynum'
A='Ben'
print(a,A)
#different type of naming variables 
myvar='Ben'
my_var='Ben'
My_var='Ben'
MYVAR='Ben'#when everything is in caps declares consts
Myvar1='Ben'
#python allows one to assign values to multiple variables in one line
x,y,z='Ben','Bin','Ban'
print(x,y,z)
#assigning same value to multilple variables
x=y=z='Ben'
print(x,y,z)
#unpacking a collection
Goats=["messi","ronaldo","maradona","pele"]
a,b,c,d=Goats
print(a)
print(b)
print(c)
print(d)
#output you use either comma or + to output multiple variables
x= "benji"
y="is"
z="working"
print(x + y+ z)

#it is better to use comma since it supports diff data types and includes space btn outputs
print(x,y,z)
#to create a global variable inside a fun use the global keyword
def myfunc():
    x="Grace"
    global t 
    t= 35
    print("Python will be conquered by ",x)

myfunc()
print (type(t))