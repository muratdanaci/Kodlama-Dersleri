
# 1- Girilen 2 sayıdan hangisi büyüktür?

# sayi1 = int(input('1. sayıyı giriniz: '))
# sayi2 = int(input('2. sayıyı giriniz: '))

# result = (sayi1 > sayi2)
# print(f'1. sayı: {sayi1}, 2. sayı: {sayi2} den büyüktür: {result}')

# 2- Kullanıcıdan 2 vize (%60) ve final (%40) notunu alıp ortalama hesaplayınız. Eğer ortalama 50 ve üstündeyse geçti, değilse kaldı yazdırın.

# vize1 = float(input('1.vize sınavı :'))
# vize2 = float(input('2.vize sınavı :'))
# final = float(input('Final sınavı :'))

# ortalama = (((vize1 + vize2) / 2) * 0.6) + (final * 0.4)
# print(f'Ortalamanız {ortalama}  ve dersten geçme durumunuz: {ortalama >= 50}.')

# 3- Girilen bir sayının tek mi çift mi olduğunu yazdırın.

# sayi = int(input('Sayı giriniz: '))
# tekcift = (sayi % 2 == 0)
# print(f'Girilen sayı çift olma durumu: {tekcift}')

# 4- Girilen bir sayının negatif pozitif durumunu yazdırın.

# sayi = int(input('Sayı giriniz: '))
# negatifpozitif = (sayi > 0)

# print(f'Girmiş olduğunuz sayının pozitif olma durumu: {negatifpozitif}.')

# 5- Parola ve email bilgisini isteyip doğruluğunu kontrol ediniz. (email: email@muratdanaci.com parola: abc123)

email = 'email@muratdanaci.com'
password = 'abc123'

girilenEmail = input('Email: ')
girilenPassword = input('Parola: ')

isEmail = (email == girilenEmail.lower().strip())
isPassword = (password == girilenPassword.lower())

print(f'Email bilgisi doğru mu: {isEmail} ve Parola doğru mu: {isPassword}')