idade = int(input())

ano = int(idade/365)

mes = int((idade%365)/30)

dia = int((idade%365)%30)

print("{} ano(s)".format(ano))
print("{} mes(es)".format(mes))
print("{} dia(s)".format(dia))