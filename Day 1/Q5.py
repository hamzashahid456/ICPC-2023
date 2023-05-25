# start of source code
l = int (input ("Enter no.of test cases: "))
weight = [] # weights values
for i in range(l):
    students = int ( input("Enter no.of students: ") )
    print("Enter their weight: ")
    weight = list(map(int, input().split(" ")))

    # Dividing team
    if(students % 2 == 0):
        team1 = int (students / 2)
        team2 = team1
    else:
        team1 = int (students / 2)
        team2 = team1+1

    weight.sort(reverse=True)




    # print(team1)
    # print(team2)
# end of source code