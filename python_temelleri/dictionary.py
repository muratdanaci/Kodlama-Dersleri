# key - value

# 67 => zonguldak 34 => istanbul

# sehirler = ['zonguldak','istanbul']
# plakalar = [67, 34]

# print(plakalar[sehirler.index('zonguldak')])
# print(plakalar[sehirler.index('istanbul')])

# print(plakalar['zonguldak']) =>67
# print(plakalar['istanbul']) =>34

#       plakalar = {'key' : 'value'}
# plakalar = {'zonguldak' : 67, 'istanbul' : 34}

# print(plakalar['zonguldak'])
# print(plakalar['istanbul'])

# plakalar['ankara'] = 6
# plakalar['zonguldak'] = 'new value'

# print(plakalar)



users = {
    'muratdanaci' : {
        'age' : 24,
        'roles': ['users'],
        'email': 'muratdanaci7@gmail.com',
        'address':'Zonguldak',
        'phone': '05314506130'
    
    },
    'bestedemirkesen' : {
        'age': 25,
        'roles': ['admin','users'],
        'email': 'demirkesenbeste@gmail.com',
        'address':'Zonguldak',
        'phone': '05417797537'
    }
}

print(users['bestedemirkesen']['age'])
print(users['bestedemirkesen']['email'])
print(users['bestedemirkesen']['roles'][0])
print(users['bestedemirkesen']['address'])
