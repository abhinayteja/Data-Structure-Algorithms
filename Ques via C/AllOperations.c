#include <stdio.h>
#define MAX 5
int Queue[MAX];
int front = -1;
int rear = -1;

void enque(int data){
    if (rear == MAX -1)    // Checking the condition wether 
    {                      // Queue is full Are Emty
        printf("The Queue is Full\n");
    }else{
        if (front == -1)
        {
            front = 0;
        }
        rear++;             // Here we increasing the count of the rear 
        Queue[rear] = data; // Adding the element to the Queue 
        printf("The element is succesfully Inserted \n");
        
    }
}
void deque(){ // Here We No need of the of the any parameter requried 
    if (front == -1 || front > rear)
    {
        printf("The Queue is empty\n");
    }else{
        printf("Element deleted : %d \n",Queue[front]);
        front = front + 1;
    }

}
void display(){
    if (front == -1 || front > rear)
    {
        printf("Queue Is Empty !!!");
    }else{
        for (int i = front; i <=rear; i++)
        {
           printf(" %d ",Queue[i]);
        }
        printf("\n");
    }
    
}

// void Peak(){
//     if (front == -1 || front > rear )
//     {
//         printf("The Queue is Empty");
//     }
    
// }

int main(){
    enque(10);
    enque(20);
    enque(30);
    deque();
    display();
    return 0;
}