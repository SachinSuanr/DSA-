

#include<stdio.h>
 int stack[5];
 int maxsize=5;
 int top=-1;
 
 void push(){
 	if (top==maxsize-1){
 		printf("Stack overflow\n");
	 }
	 else{
	 	top++;
	 	printf("Insert number ");
	 	scanf("%d",&stack[top]);
	 	printf(" The stack is %d  \t \n",stack[top]);
	 }
 }
 
  void pop(){
 	if (top==-1){
 		printf("\n Stack underflow");
	 }
	 else{
	 	printf("One element is deleted\n");
	 	top--;
	 }
 }
 
  
  void show(){
  	int i;
 	if (top==-1){
 		printf("\n Stack is empty");
	 }
	 else{
	 	for(i=top; i>=0;i-- )
	 	printf("The remaining stack is %d \t \n",stack[i]);
	 }
}

int main(){
	int counter;
	printf(".............Stack...........\n");
	do{
		printf("1.Insert  2.Delete  3.Show   4.Exit   What to do => ");
		scanf("%d",&counter);
		
		if(counter==1)
		push();
		
		else if(counter==2)
		pop();
		
		else if(counter==3)
		show();
		
		else if(counter==4)
		printf("\n Program end");
		
		else
		printf("\n Invalid");
		
	}while(counter!=4);
	

	
}





