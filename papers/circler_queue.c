#include<stdio.h>

#define N 5

int queue[N];

int front = -1;
int rear = -1;

int isfull()
{
    return (rear + 1) % N == front;
}

int isemtiy()
{
    return front == -1 && rear == -1;
}

void enqueue(int v)
{
    if(isfull())
    {
        printf("\nlist is full");
    }

    else
    {
        if(isemtiy())
        {
            front = 0;
            rear = 0;
            queue[rear] = v;
        }
        else
        {
            rear = (rear + 1) % N;
            queue[rear] = v;
        }
    }
}

void dequeue()
{
    if(isemtiy())
    {
        printf("\nlist is emtiy");
    }
    else if(rear == front)
    {
        rear = -1;
        front =-1;
    }
    else
    {
        front = (front + 1) % N;
    }

}

void display()
{
    if(isemtiy())
    {
        printf("list is emtiy");
    }
    else
    {
        printf("\nuotput: \n");
        int i = front;
        do
        {
            printf("\n%d\t", queue[i]);
            i = (i + 1) % N;
        } while (i != (rear + 1) % N );
        
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    display();

    dequeue();

    display();

    enqueue(5);
    enqueue(6);

    display();

    return 0;
}