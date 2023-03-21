
with open('test.py','a',encoding='utf-8') as f:
    f.write("add another line ")
    f.close()
    f= open('test.py','r',encoding='utf-8')
    read_data=f.read()
    print(read_data)
#'a' --> will append the end of any file 
#'w' --> will overwrite any file 
#'x"-->creates a file and returns an error if the file already exist

f.closed()    