a=input()
b=float(input())
try:
    for i in range(len(a)):
        if a[i] =='$':
            print("{:.2f}¥".format(eval(a[:-1])*b))
        elif a[i] == '¥':
            print("{:.2f}$".format(eval(a[:-1])/b))
        else :
            raise IndexError
except: 
    print("Data error!")
