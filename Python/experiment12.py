#review 

import csv 
import datetime as dt 


    
openFile =  open('xxx.csv',encoding = 'utf-8')
readFile = csv.reader(openFile)
potus = list(readFile)

"""
datetime.datetime
datetime.time
datetime.timedelta
"""

date1 = dt.datetime(1999,9,9)

date2 = dt.datetime(1999,9,9,9,59,59)

#strftime and strptime
dateStr3 = "2021-1-1"
date3 = dt.datetime.strptime(dateStr3,"%Y-%m-%d")

date4 = dt.datetime(2020,1,1)
dateStr4 = "{}-{}-{}".format(date4.day,date4.month,date4.year) 
date5 = date4.strftime("%Y-%d/%m")

#compare
flag = dt.datetime(2024,1,1) > dt.datetime(2023,12,12)

#max and min
times = [
           dt.datetime(2020,1,21),
           dt.datetime(2020,1,22),
           dt.datetime(2020,1,23),
        ]

print(min(times))
print(max(times))

#dt.timedelta

timeDiff = date4 - date1
