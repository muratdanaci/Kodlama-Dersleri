names = ['Ali','Yağmur', 'Hakan', 'Deniz']
years = [1998, 2000, 1998, 1987]

# 1- "Murat" ismini listenin sonuna ekleyiniz.
# names.append('Murat')

# 2- "Beste" ismini listenin başına ekleyiniz.
# names.insert(0, 'Beste')

# 3- "Deniz" ismini listeden siliniz.
# names.remove('Deniz')

# 4- "Deniz" isminin indeksi nedir?
# index = names.index('Deniz')

# 5- "Ali" listenin bir elemanı mıdır?
# names = 'Ali' in names

# 6- Liste elemanlarını ters çevirin.
# names.reverse()

# 7- Liste elemanlarını alfabetik olarak sıralayınız.
# names.sort()

# 8-years listesini rakamsal büyüklüğüne göre sıralayınız.
# years.sort()

# 9- str = "Chevrolet,Dacia" karakter dizisini listeye çeviriniz.
# str = "Chevrolet,Dacia"
# result = str.split(',')

# 10- years dizisinin en büyük ve en küçük elemanı nedir?
min = min(years)
max = max(years)
# print(min,max)

# 11- years dizisinde kaç tane 1998 değeri vardır?
result = years.count(1998)
# print(result)

# 12- years dizisinin tüm elemanlarını siliniz.
years.clear()
# print(years)

# 13- Kullanıcıdan alacağınız 3 tane marka bilgisini bir listede saklayınız.
markalar = []

marka = input("Marka: ")
markalar.append(marka)

marka = input("Marka: ")
markalar.append(marka)

marka = input("Marka: ")
markalar.append(marka)

print(markalar)