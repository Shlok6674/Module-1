import pymysql

mydb = pymysql.connect(host='localhost', user='root', password="")
mycursor = mydb.cursor()

mycursor.execute("CREATE DATABASE IF NOT EXISTS mydatabase")
mydb.commit()


mydb = pymysql.connect(host='localhost', user='root', password="", database='mydatabase')
mycursor = mydb.cursor()

mycursor.execute("CREATE TABLE IF NOT EXISTS users(id int primary key auto_increment, name varchar(80), email varchar(80), password varchar(80))")
mydb.commit()