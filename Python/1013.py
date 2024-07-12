A, B, C = input().split()

A = int(A)
B = int(B)
C = int(C)

maior = (A+B+abs(A-B))/2
maior = (maior+C+abs(maior-C))/2
maior = int(maior)

print("{} eh o maior".format(maior))