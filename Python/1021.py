n = float(input())

n = int(n * 100)

print("NOTAS:")
print("{} nota(s) de R$ 100.00".format(int(n / 10000)))
n = n % 10000
print("{} nota(s) de R$ 50.00".format(int(n / 5000)))
n = n % 5000
print("{} nota(s) de R$ 20.00".format(int(n / 2000)))
n = n % 2000
print("{} nota(s) de R$ 10.00".format(int(n / 1000)))
n = n % 1000
print("{} nota(s) de R$ 5.00".format(int(n / 500)))
n = n % 500
print("{} nota(s) de R$ 2.00".format(int(n / 200)))
n = n % 200

print("MOEDAS:")
print("{} moeda(s) de R$ 1.00".format(int(n / 100)))
n = n % 100
print("{} moeda(s) de R$ 0.50".format(int(n / 50)))
n = n % 50
print("{} moeda(s) de R$ 0.25".format(int(n / 25)))
n = n % 25
print("{} moeda(s) de R$ 0.10".format(int(n / 10)))
n = n % 10
print("{} moeda(s) de R$ 0.05".format(int(n / 5)))
n = n % 5
print("{} moeda(s) de R$ 0.01".format(int(n)))
