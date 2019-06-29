import sys

#sbox from the tutorial
#sbox = [0xe, 4, 0xd, 1, 2, 0xf, 0xb, 8, 3, 0xa, 6, 0xc, 5, 9, 0, 7]
#sbox = [0xf, 3, 0xa, 6, 4, 1, 0xb, 9, 0xe, 5, 0, 0xd, 2, 0xc, 7, 8]
#sbox = [0xe, 2, 1, 3, 0xd, 9, 0, 6, 0xf, 4, 5, 0xa, 8, 0xc, 7, 0xb]




sbox = [8, 4, 2, 1, 0xC, 6, 3, 0xD, 0xA, 5, 0xE, 7, 0xF, 0xB, 9, 0]
SIZE_SBOX = len(sbox)

def linearApprox(inputX, outputY):
    total = 0
    # range over the input
    for index in range(SIZE_SBOX):
        # get input and output of our equations
        maskedX = index & inputX
        maskedY = sbox[index] & outputY
        # same result?
        if (bin(maskedX).count("1") - bin(maskedY).count("1")) % 2 == 0:
            total += 1 
    # get the number of results compared to 8/16
    result = total # - (SIZE_SBOX//2)
    return str(result)


def main():
    # rows
    sys.stdout.write( "    | ")
    for i in range(SIZE_SBOX):
        sys.stdout.write(hex(i)[2:].rjust(3) + " ")
    print ("")
    print (" " + "-" * (SIZE_SBOX * 4 + 4))
    for row in range(SIZE_SBOX):
        sys.stdout.write(hex(row)[2:].rjust(3) +  " | ")
        # cols
        for col in range(SIZE_SBOX):
            # print the linear approx
            sys.stdout.write( linearApprox(row, col).rjust(3) + " ")

        print ("")

if __name__ == "__main__":
    main()