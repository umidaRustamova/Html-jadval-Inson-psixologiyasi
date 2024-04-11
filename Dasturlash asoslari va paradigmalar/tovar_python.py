class Tovar:
    def __init__(self, nomi, narxi, miqdori):
        self.nomi = nomi
        self.narxi = narxi
        self.miqdori = miqdori

def tovarlarni_chiqar(tovarlar):
    for tovar in tovarlar:
        print("Nomi:", tovar.nomi)
        print("Narxi:", tovar.narxi)
        print("Miqdori:", tovar.miqdori)
        print()

def tovar_qidir(tovarlar, nomi):
    for tovar in tovarlar:
        if tovar.nomi == nomi:
            print()
            print("Tovar mavjud!")
            print(".............")
            print("Narxi:", tovar.narxi)
            print("Miqdori:", tovar.miqdori)
            return
    print("Bunday tovar mavjud emas!")

tovarlar = []
# 5 ta tovar yaratamiz
for i in range(1, int(input("Tovar miqdorini kiriting: "))+1):
    print(f'{i}-tovar')
    tovarlar.append(Tovar(input("Nomi: "), int(input('Narxi: ')), int(input('Miqdori: '))))
    print('-----------------')

# Tovarlar ro'yxatini chiqaramiz
print("Barcha tovarlar:")
print("................")
tovarlarni_chiqar(tovarlar)

# Tovar qidirish
tovar_qidir(tovarlar, input("Tovar nomi bilan qidiring: "))