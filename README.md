# Crypto


gcc <filename> ./a.out , add message to be encrypted/decrpyted and add key.


Using obtained knowledge on how a shift cipher functions it is known the key K determines the shift of the nominal case. For this example the answer is simple, but time consuming if done by hand essentially we know there exists 26 possible keys to obtain our decrypted message. 

Encryption:
The first step is to translate the characters in our message to their numerical counterparts, we then apply a key to add to each number which reduces each sum modulo 26 the result is the ciphertext.

Decryption:
you must convert the ciphertext back to its numerical counterpart, then subtract a given key to each value reducing modulo 26 and converting those numbers into our plaintext 
