def reverse(number):
    number1 = str(number)
    num_reversed = ""
    for ix in range(len(number1) - 1, -1, -1):
        num_reversed = num_reversed + number1[ix]
    return int(num_reversed)


def count(number):
    counted = 0
    rev = reverse(number)
    while number != rev:
        number = number + rev
        counted += 1
        rev = reverse(number)
    print(str(number) + " " + str(counted))


how_many = input()
how_many = int(how_many)
tab = []

for i in range(how_many):
    inp = input()
    inp = int(inp)
    tab.append(inp)

for i in range(how_many):
    count(tab[i])



