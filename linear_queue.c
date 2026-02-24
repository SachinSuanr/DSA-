//Queue 
# include <stdio.h>

int MAXSIZE = 5;
int QUEUE[5];
int FRONT = -1;
int REAR = -1;

void ENQUEUE(){
	if(REAR == MAXSIZE-1){
		printf("Queue is full.\n");
	}
	else{
		if(FRONT == -1){
			FRONT = 0;
		}
			REAR++;
			printf("Enter the value of Queue: ");
			scanf("%d",&QUEUE[REAR]);
			printf("The queue element is %d\n",QUEUE[REAR]);
	}
}

void DEQUEUE(){
	if(FRONT == -1){
		printf("Queue is empty.");
	}
	else{
		if(FRONT == REAR){
			FRONT = -1;
			REAR = -1;
		}
		else{
			FRONT ++;
			printf("One queue element is removed.\n");
		}
	}
	
}

void SHOW(){
    int i;
    if(FRONT == -1){
        printf("Empty\n");
    }
    else{
        printf("Queue elements: ");
        for(i = FRONT; i <= REAR; i++){
            printf("%d ", QUEUE[i]);
        }
        printf("\n");
    }
}


int main(){
	int choice;
    printf("................Linear Queue...............\n");
	do{
		printf("1.Insert   2.Delete   3.Show   4.Exit    What to do => ");
		scanf("%d",&choice);
		
		if(choice == 1){
			ENQUEUE();
		}
		else if(choice == 2){
			DEQUEUE();
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