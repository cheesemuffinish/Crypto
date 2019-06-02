#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main()
{
	char message[1000], chars;
	char key[1000];
	
	printf("Message to decrypt: ");
	gets(message);
	printf("Key to decrypt: ");
	scanf("%s", key);
	int len = strlen(key);
	printf("key is : %s  and len is: %u \n", key, len);
	printf("message length: %u \n", strlen(message));

	for(int i = 0; message[i] != '\0'; ++i){
		chars = message[i];			
		
		if(chars >= 'A' && chars <= 'Z'){
			int mod = i % len;
			chars = chars - key[mod];			
			if(chars < 'A'){
				if(chars < 0){
					chars = chars+26;
				}
				chars = chars % 26 + 'A';
				}
			message[i] = chars;
		}
	}
	printf("Decrypted message: %s \n", message);
	return 0;
}