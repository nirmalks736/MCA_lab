print("print leap year between given two year")
print("ente the start year")
startyear=int(input())
print("enter the last year")
lastyear=int(input())
print("list of leap year:")
for year in range(startyear,lastyear):
        if(0==year%4)and(0!=year%100)or(0==year%400):
                print(year)
