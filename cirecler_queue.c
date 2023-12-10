#include<stdio.h>
#define N 5

int queue[N];

int front = -1;
int rear = -1;


int isemtiy()
{
    return front == -1 & rear == -1;
}

int isfull()
{
    return (rear + 1) % N == front;
}

void enqueue(int i)
{

    if(isfull())
    {
        printf("list is full");
    }
    else if(isemtiy())
    {
        front = 0;
        rear = 0;
        queue[rear] = i;
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = i;
    }
}

void dequeue()
{
    if(isemtiy())
    {
        printf("list is emtiy");
    }
    else if( front == rear)
    {
        front = -1;
        rear = -1;
    }
    else 
    {
        front = (front + 1) % N; 
    }
}


void dispaly()
{
    if(isemtiy())
    {
        printf("list is emtiy");
    }
    else
    {
        printf("output : \n");
        int i = front;
        do 
        {
            printf("%d \n", queue[i]);
            i = (i + 1) % N; 
        }
        while(i != (rear + 1) % N);
    }
}

int main()
{

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    dispaly();

    dequeue();

    dispaly();

    enqueue(5);
    enqueue(6);

    dispaly();

    return 0;

}