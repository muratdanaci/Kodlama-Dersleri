# 1-100 e kadar

# x = 1
# while x <=100:
#     if x % 2==1:
#         print(f'Sayı tek: {x}')
#     else:
#         print(f'Sayı çift: {x}')
#     x += 1

# print('Bitti...')


name = '' #False
while not name.strip():
    name = input('İsminizi giriniz: ')

print(f'Merhaba, {name}')