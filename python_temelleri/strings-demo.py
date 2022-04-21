website = "http://www.sadikturan.com"
course  = "Python Kursu: Baştan Sona Python Programlama Rehberiniz (40 Saat)"

# print(len(course))
# print(website[7:10])
# print(website[22:25])
# print(course[15:-15])
# print(course[::-1])
# print(course[])

name = "Murat"
surname = "Danacı"
age = 23
job = "mühendis"

tanisma = "Benim adım "+ name +" "+ surname +", Yaşım "+ str(age) +" ve mesleğim "+ job +"."
tanisma = "Benim adım {} {}, Yaşım {} ve mesleğim {}.".format(name,surname,age,job)
tanisma = f"Benim adım {name} {surname}, Yaşım {age} ve mesleğim {job}."
# print(tanisma)


s = "Hello world"
s = s[0:6] + 'W'+ s[-4:]
# print(s)

result = 'abc ' *3 
print(result)