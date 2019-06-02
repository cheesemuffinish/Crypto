
#include<stdio.h>
 
int main()
{
	char message[100], chars;
	int key = 0;
	
	printf("Message to decrypt: ");
	gets(&message);
	printf("Key to decrypt: ");
	scanf("%d", &key);
	
	for(int i = 0; message[i] != '\0'; ++i){
		chars = message[i];
		
		if(chars >= 'a' && chars <= 'z'){
			chars = chars - key;
			
			if(chars < 'a'){
				chars = chars + 'z' - 'a' + 1;
			}
			
			message[i] = chars;
		}
		else if(chars >= 'A' && chars <= 'Z'){
			chars = chars - key;
			
			if(chars < 'A'){
				chars = chars + 'Z' - 'A' + 1;
			}
			
			message[i] = chars;
		}
	}
	
	printf("Decrypted message: %s", message);
	
	return 0;
}