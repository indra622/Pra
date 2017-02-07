#include <stdio.h>
#include <stdlib.h>

int str = 0;
int Stack[10];
int main(){
	int i=0,select;

	//이게 뭐얔ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ Hosung.
	printf("push : 1 pop : 2 end : 3\n");
	scanf("%d",&select);
	while(1){
		if(select==1){
			if(i<9){
				printf("push :");
				scanf("%d",&Stack[i]);
			}
			else{
				printf("too many\n");
			}
		}
		else if(select==2){
			if(i<0){
				printf("Nothing to pop\n");
			}
			else{
				printf("pop: %d\n",Stack[i]);
			}
		}
		else break;
	}
	return 0;
}
