
"""a=int(input('day='))
if 1<=a<=7:
    match a:
        case 1:
            print('monday')
        case 2:
            print('tuesday')
        case 3:
            print('wednesday')
        case 4:
            print('thursday')
        case 5:
            print('friday')
        case 6:
            print('saturday')
        case 7:
            print('sunday')
else:
    print('invalid day number')   """

#tuf approach
class Solution:
    def whichWeekDay(self, day):
        match day:
            case 1:
                print('Monday')
            case 2:
                print('Tuesday')
            case 3:
                print('Wednesday')
            case 4:
                print('Thursday')
            case 5:
                print('Friday')
            case 6:
                print('Saturday')
            case 7:
                print('Sunday')
            case _:
                print('Invalid')
s=Solution()
s.whichWeekDay(int(input('day=')))