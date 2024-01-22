#coding : utf-8

print("hello,python!")

import csv
import datetime as dt 
import random

#openFile = open('xxx.xlsx' , encoding = 'utf-8')
#readFile = csv.reader(openFile)
#list1 = list(readFile)

if True:
    print(True)
else:
    print(False)

str1 = "0123456789"

print(str1[0:1])
print(str1[::-1])

print(str1 , end = ' ' )
print("11111" ,end = '\n')

class cat:
    def __init__(self):
        self.color = 'black'
        self.long = 1 
        
    def run(self):
        print('run')

dt1 = dt.datetime(2021, 1,1)
dt2 = dt.datetime(2022,1,1)
dt3 = "2024-1-1"
dt3 = dt.datetime.strptime(dt3,"%Y-%m-%d")
dt3.strftime("%Y--%m--%d")
dt4 = dt2 - dt1
dt4 = 
