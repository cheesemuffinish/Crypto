
#include<stdio.h>
 
int main()
{
	char message[100], chars;
	int i, key;
	
	printf("Enter a message to encrypt: ");
	gets(message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		chars = message[i];
		
		if(chars >= 'a' && chars <= 'z'){
			chars = chars + key;
			
			if(chars > 'z'){
				chars = chars - 'z' + 'a' - 1;
			}
			
			message[i] = chars;
		}
		else if(chars >= 'A' && chars <= 'Z'){
			chars = chars + key;
			
			if(chars > 'Z'){
				chars = chars - 'Z' + 'A' - 1;
			}
			
			message[i] = chars;
		}
	}
	
	printf("Encrypted message: %s", message);
	
	return 0;
}