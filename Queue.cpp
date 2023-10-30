#include <stdio.h>
#include <stdlib.h>
struct queue{
    int array[20];
    int front;
    int rear;
};



void enqueue(struct queue* q){

    int k;
    printf("Enter the element to add-\n");
    scanf("%d",&k);
    q->rear++;
    printf("Rear= %d\n",q->rear);
    q->array[q->rear]=k;
    printf("This %d\n",    q->array[q->rear]);

}
void dequeue(struct queue* q){
    printf("Front= %d\n",q->front);
        q->front++;
;

    
	printf("Element deleted %d\n", q->array[q->front]);
	q->front++;

}
void display(struct queue* q){
    for(int i=0;i<=q->rear;i++){
        printf("%d\n",q->array[i]);
    }
}
int main(){
struct queue* q;
q=(struct queue*)malloc(sizeof(struct queue*));
q->rear=-1;
q->front=-1;
  
    int t;
    while (1){
    printf("Enter your choice 1.Enqueue 2. Dequeue 3. Display\n");
    scanf("%d",&t);
    switch(t){
        case 1:
            enqueue(q);
            break;
        case 2:
            dequeue(q);
            break;
        case 3:
            display(q);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    printf("Continue? If yes, enter 1\n");
    int j;
    scanf("%d",&j);
    if (j!=1){
        break;}

        }
    }


