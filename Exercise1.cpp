#import <iostream>
using namespace std;
#define MAXLEN 100
struct stack{
	int top=0;
	int items[MAXLEN];
};

 stack s;
//IsEmpty(s), IsFull(s), Add(s), and Delete(s)

int IsEmpty(stack *s){
	if(s->top==0){
		return 1;
	}else{
		return 0;
	}
}

int IsFull(stack *s){
	if(s->top>=MAXLEN){
		return 1;
	}else{
		return 0;
	}
}

void Add(int item,stack *s){
	if(IsFull(s)){
		printf("Stack is full!\n");
	}
	else{
		s->top++;
		s->items[s->top]=item;
	}
}

int Delete(stack *s){
	if(IsEmpty(s)){
		printf("Stack is empty!\n");
	}else{
		int data = s->items[s->top];
		s->top--;
		return data;
	}
}
int main(){
	int i;
	Delete(&s);
	Add(1,&s);
	printf("%d\n",Delete(&s));
	
	for(i=0;i<100;i++){
		Add(3,&s);
	}
	Add(3,&s);
	for(i=0;i<100;i++){
		Delete(&s);
	}
	Delete(&s);
	return 0;
	
}


