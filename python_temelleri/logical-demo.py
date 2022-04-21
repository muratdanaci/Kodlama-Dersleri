# 1- Girilen bir sayının 0-100 arasında olup olmadığını kontrol ediniz.
# sayi = float(input('Sayı: '))

# result = (sayi > 0) and (sayi<=100)
# print(f'Sayı 0-100 arasında mı: {result}')

# 2- Girilen bir sayının pozitif çift sayı olup olmadığını kontrol ediniz.
# sayi = int(input('Sayı: '))

# result = (sayi % 2 == 0) and (sayi > 0)
# print(f'Girilen sayı pozitif bir çift sayı mı: {result}')

# 3- Email ve parola bilgileri ile giriş kontrolü yapınız.
# email= 'muratdanaci@gmail.com'
# password = 'abc123'

# girilenEmail = input('Email: ')
# girilenPassword = input('Şifre: ')

# result = (girilenEmail == email) and (girilenPassword == password)
# print(f'Girilen Email ve şifre doğru mu: {result}')

# 4- Girilen 3 sayıyı büyüklük olarak karşılaştırınız.
# a = float(input('a: '))
# b = float(input('b: '))
# c = float(input('c: '))

# result = (a > b) and (a > c)
# print(f'a en büyük sayıdır: {result}')

# result = (b > a) and (b > c)
# print(f'b en büyük sayıdır: {result}')

# result = (c > a) and (c > b)
# print(f'c en büyük sayıdır: {result}')

# 5- Kullanıcıdan 2 vize (%60) ve final (%40) notunu alıp ortalama hesaplayınız.
#    Eğer ortalama 50 ve üstündeyse geçti, değilse kaldı yazdırın.
#    a-) Ortalama 50 olsa bile final notu en az 50 olmalıdır.
#    b-) Finalden 70 alındığında ortalamanın önemi olmasın.

# vize1 = int(input('1.Vize: '))
# vize2 = int(input('2.Vize: '))
# final = int(input('Final: '))

# ortalama = (((vize1 + vize2 ) /2 ) * 0.6) + (final * 0.4)
# result =  (ortalama>=50) and (final>=50)
# result = (ortalama>=50) or (final>=70)

# print(f'Öğrencinin ortalaması: {ortalama} ve geçme durumu: {result}')

# 6- Kişinin ad, kilo ve boy bilgilerini alıp kilo indekslerini hesaplayınız.
#    Formül: (Kilo / Boy uzunluğunun karesi)
#    Aşağıdaki tabloya göre kişi hangi gruba girmektedir.
#    0-18.4    => Zayıf
#    18.5-24.9 => Normal
#    25.0-29.9 => Fazla Kilolu
#    30.0-34.9 => Şişman (Obez)

name = input('Adınız: ')
cm = float(input('Boyunuz: '))
kg = float(input('Kilonuz: '))

index = (kg) / (cm ** 2)
zayif = (index >= 0) and (index <= 18.4) 
normal = (index >= 18.5) and (index <= 24.9)
kilolu = (index >= 25.0) and (index <= 29.9)
obez = (index >= 30.0) and (index <= 34.9)

print(f'{name} kilo indeksin: {index} ve kilo değerlendirmen zayıf: {zayif}')
print(f'{name} kilo indeksin: {index} ve kilo değerlendirmen normal: {normal}')
print(f'{name} kilo indeksin: {index} ve kilo değerlendirmen kilolu: {kilolu}')
print(f'{name} kilo indeksin: {index} ve kilo değerlendirmen obez: {obez}')