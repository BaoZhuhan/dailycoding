from pyecharts.charts import Kline
import pandas as pd
from sqlalchemy import create_engine
import pymysql
data = pd.read_csv("000002-2024.csv")
#把你数据库打开然后连接
engine = create_engine('mysql+pymysql://username:password@localhost:3306/mydatabase')
data.to_sql('mytable', con=engine, if_exists='replace', index=False)

conn = pymysql.connect(host='localhost', user='username', password='password', database='database_name')
cursor = conn.cursor()


#功能1

input_date = #把日期输入
query = f"SELECT * FROM table_name WHERE 表头 = '{input_date}'"
cursor.execute(sql_query)
results = cursor.fetchall()

for row in results:
    print(row)#按照他的要求把result输出，改一改

#功能2
cursor = conn.cursor()
sql_query = "SELECT COUNT(*) FROM table_name WHERE 表头 > 25"#改一下表头
cursor.execute(sql_query)
total_days = cursor.fetchone()[0]
print(total_days)#你自己写一下输出

cursor.close()
conn.close()

#K线图
conn = pymysql.connect(host='localhost', user='username', password='password', database='database_name')
cursor = conn.cursor()
#
sql_query = "SELECT 表头, 表头, 表头, 表头, 表头...... FROM table_name WHERE date_column >= '2023-01-19'"#改一改表头
cursor.execute(sql_query)
results = cursor.fetchall()
date_list = [row[0] for row in results]
data_list = [[row[1], row[2], row[3], row[4] ......."""你需要跟着表头改"""] for row in results]

#K线图，没学过，下面的代码是Copilot帮我写的
kline = (
    Kline()
    .add_xaxis(date_list)
    .add_yaxis("K线图", data_list)
    .set_global_opts(
        xaxis_opts=opts.AxisOpts(is_scale=True),
        yaxis_opts=opts.AxisOpts(is_scale=True),
        title_opts=opts.TitleOpts(title="000002最近一年的K线图"),
    )
)
kline.render("kline_chart.html")

# 关闭连接
cursor.close()
conn.close()
