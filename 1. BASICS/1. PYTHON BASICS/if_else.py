m = int(input('marks='))
if 0 <= m <= 100:
    if m >= 90:
         print('Grade A')
    elif m >= 70:
        print('Grade B')
    elif m >= 50:
        print('Grade C')
    elif m >= 35:
        print('Grade D')
    else:
        print('Fail')
else:
    print('Invalid marks') 