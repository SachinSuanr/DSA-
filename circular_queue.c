// Circular Queue 
# include <stdio.h>

int MAXSIZE = 5;
int CQUEUE[5];
int FRONT = -1;
int REAR = -1;

void cENQUEUE(){
	if(FRONT == (REAR + 1) % MAXSIZE){
		printf("Queue is full.\n");
	}
	else{
		if(FRONT == -1){
			FRONT = 0;
		}
			REAR = (REAR + 1) % MAXSIZE;
			printf("Enter the value of Queue: ");
			scanf("%d",&CQUEUE[REAR]);
			printf("The queue element is %d\n",CQUEUE[REAR]);
	}
}

void cDEQUEUE(){
	if(FRONT == -1){
		printf("Queue is empty.");
	}
	else{
		if(FRONT == REAR){
			FRONT = -1;
			REAR = -1;
		}
		else{
			FRONT = (FRONT + 1) % MAXSIZE;
			printf("One queue element is removed.\n");
		}
	}
	
}

void SHOW(){
    if(FRONT == -1){
        printf(" Queue is Empty\n");
    }
    else{
        int i = FRONT;
        while ( i != REAR)
        {
            printf("%d", CQUEUE[i]);
            i = (i + 1) % MAXSIZE;
        }
        printf("The remaining queue is: ");
        printf("%d\n",CQUEUE[REAR]);
    }
}


int main(){
	int choice;
    printf("................Circular Queue...............\n");
	do{
		printf("1.Insert   2.Delete   3.Show   4.Exit    What to do => ");
		scanf("%d",&choice);
		
		if(choice == 1){
			cENQUEUE();
		}
		else if(choice == 2){
			cDEQUEUE();
		}
		else if(choice == 3){
			SHOW();
		}
		else if(choice == 4){
			printf("Exit");
		}
		else{
			printf("Invalid");
		}
	}
	while(choice != 4);
	return 0;
}