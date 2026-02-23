# include<stdio.h>
int maxsize = 5;
int top = -1;
int stack[5];

void PUSH(){
    if(top == maxsize - 1){
        printf("Stack is overflow\n");
    }
    else{
        top++;
        printf("Enter the stack......\n");
        scanf("%d ",&stack[top]);
        printf("The stack is %d.\n",stack[top]);
    }
}

void POP(){
    if(top == -1){
        printf("Stack is underflow.\n");
    }
    else{
        top--;
        printf("Remove stack......\n");
        printf("The removed stack is %d.",stack[top]);
    }
}

void SHOW(){
    if(top == -1){
        printf("Stack is empty.");
    }
    else{
        for(int i = top;i >= 0;i++){
            printf("The stack are %d.", stack[i]);
        }
    }
}
int main(){
    int choice;
    do{
        printf("\n1. Insert");
		printf("\n2, Delete ");
		printf("\n3. Show");
		printf("\n4. Exit");
		printf("\n What to do.\n");
		scanf("%d" ,&choice);
		
		if(choice == 1){
			PUSH();
		}
		else if(choice == 2){
			POP();
		}
		else if(choice == 3){
			SHOW();
		}
		else if(choice == 4){
			printf("\n END");
		}
		else{
			printf("\nInvalid ");
		}
	}
	while(choice != 4);

    return 0;
}