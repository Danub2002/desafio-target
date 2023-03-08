import json
dias = []
with open("dados.json") as f:
    dias = f.read()

dias = json.loads(dias)

menor = dias[0]["valor"]
maior = dias[0]["valor"]
dias_uteis = 0
soma = 0

for dia in dias:
    if dia["valor"] != 0:
        menor = min(menor,dia["valor"])
        maior = max(maior,dia["valor"])
        dias_uteis += 1
        soma += dia["valor"]
    
media = soma / dias_uteis
dias_com_faturamento_maior_que_media = 0
for dia in dias:
    if dia["valor"] > media:
        dias_com_faturamento_maior_que_media += 1


print(f'O maior e o menor faturamento foram, respectivamente, {maior}, e {menor}')
print(f'E o numero de dias com faturamento maior que a media foram {dias_com_faturamento_maior_que_media}')