import pandas as pd

indice_meses = ['ENERO', 'FEBRERO', 'MARZO', 'ABRIL', 'MAYO', 'JUNIO']

data = pd.read_csv("./presenciaredes.csv")

for dato in range( len(data["RED SOCIAL"])):
    if data["RED SOCIAL"][dato] == "TWITTER" and "SEGUIDORES" in data["CONCEPTO"][dato]:
        followers_enero = int((data["ENERO"][dato]).replace(",",""))
        followers_junio = int((data["JUNIO"][dato]).replace(",",""))
        print("Diferencia de followers (enero - junio) :", followers_junio - followers_enero)

print()

print("Indice de los meses:")
for mes in range(len(indice_meses)):
    print("  %i - %s" % (mes+1, indice_meses[mes]))

print("Introduce el indice de los meses que quieres comparar las visualizaciones de youtube:")
mes_1 = int(input("Mes 1: ")) - 1
mes_2 = int(input("Mes 2: ")) - 1

if mes_1 > mes_2:
    print("El mes 1 no puede ser mayor que el mes 2")
else:
    for dato in range( len(data["RED SOCIAL"])):
        if data["RED SOCIAL"][dato] == "YOUTUBE" and "VISUALIZACIONES" in data["CONCEPTO"][dato]:
            vistas_mes_1 = int((data[indice_meses[mes_1]][dato]).replace(",",""))
            vistas_mes_2 = int((data[indice_meses[mes_2]][dato]).replace(",",""))
            diferencia_vistas = vistas_mes_2 - vistas_mes_1
            print("La diferencia de visualizaciones de youtube entre los meses %s (%i) y %s (%i) es: %i" % (indice_meses[mes_1], vistas_mes_1, indice_meses[mes_2], vistas_mes_2, diferencia_vistas))

print()

promedio_twitter = 0
promedio_facebook = 0


for dato in range( len(data["RED SOCIAL"])):
    if data["RED SOCIAL"][dato] == "TWITTER" and "CRECIMIENTO DE FOLLOWERS" in data["CONCEPTO"][dato]:
        promedio_twitter += int((data["ENERO"][dato]).replace(",",""))
        promedio_twitter += int((data["FEBRERO"][dato]).replace(",",""))
        promedio_twitter += int((data["MARZO"][dato]).replace(",",""))
        promedio_twitter += int((data["ABRIL"][dato]).replace(",",""))
        promedio_twitter += int((data["MAYO"][dato]).replace(",",""))
        promedio_twitter += int((data["JUNIO"][dato]).replace(",",""))
        print("suma twitter:",promedio_twitter)
        promedio_twitter = round(promedio_twitter / 6)

    if data["RED SOCIAL"][dato] == "FACEBOOK" and "CRECIMIENTO (seguidores)" in data["CONCEPTO"][dato]:
        promedio_facebook += int((data["ENERO"][dato]).replace(",",""))
        promedio_facebook += int((data["FEBRERO"][dato]).replace(",",""))
        promedio_facebook += int((data["MARZO"][dato]).replace(",",""))
        promedio_facebook += int((data["ABRIL"][dato]).replace(",",""))
        promedio_facebook += int((data["MAYO"][dato]).replace(",",""))
        promedio_facebook += int((data["JUNIO"][dato]).replace(",",""))
        print("suma facebook:",promedio_facebook)
        promedio_facebook = round(promedio_facebook / 6)

print("Promedio de crecimiento de los seguidores (enero - junio) de twitter:", promedio_twitter)
print("Promedio de crecimiento de los seguidores (enero - junio) de facebook:", promedio_facebook)
