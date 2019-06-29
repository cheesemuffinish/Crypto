table_for_key=[ 57 , 49 , 41, 33 ,25, 17, 9,1 , 58 ,50 ,42,34 ,26,18,10 ,2,59,51,43 ,35,27,19,11 ,3 ,60,52  ,44,36,63,55,47, 39 ,31, 23,15,7,62, 54,46 ,38,30,22,14 , 6,61,53,45,37,29,21, 13,5,28, 20,12,4]
full_key = "0000111100001111000011110000111100001111000011110000111100001111"
#full_key = "0011011000110100011000100110100101110100010010110110010101111001"
#full_key = "0001001100110100010101110111100110011011101111001101111111110001"
new_key = []
k1 =[]
print(len(full_key))
for index in table_for_key:
    new_key.append(full_key[index-1])

c0 = new_key[0:28]
d0 = new_key[28: 56]

def shift(string,d):
    Lfirst = string[0 : d]
    Lsecond = string[d :]
    return Lsecond+Lfirst
print("full_key below")
print(full_key)
print("new_key below")
print(new_key)
print("c0 below")
print(c0)
print("d0 below")
print(d0)

c1 = shift(c0, 1)
d1 = shift(d0, 1)

c1d1 = c1 + d1


print(c1)
print(d1)


PC=[ 14,17,11,24,1,5,3 ,28 ,15 ,6 ,21, 10,23,19, 12,4  ,26 ,8,16,  7,27, 20, 13,2,41,52 ,31,37,47,55,30 ,40, 51 ,45 ,33  , 48,44  ,49,39,56,  34 ,53,46, 42,50, 36, 29, 32]
for index in PC:
    k1.append(c1d1[index-1])
print("k1 below")
print(k1)
