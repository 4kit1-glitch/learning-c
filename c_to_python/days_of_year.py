
day = int(input("enter the day"))
month = int(input("enter the month"))
year = int (input("enter the year"))

month_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
day_sum = 0

def is_leap(year):
    if year % 4 == 0 and year % 100 != 0:
        return True
    elif year % 4 == 0 and year % 100 == 0 and year % 400 == 0:
        return True
    return False

