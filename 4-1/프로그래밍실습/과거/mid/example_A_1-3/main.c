#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int hakbun;
    int score;
};

void sort_by_hakbun(struct student arr[], int size);
void sort_by_score(struct student arr[], int size);
void print_data(struct student arr[], int size);

int main(void)
{
    struct student data[] = {
    {"James", 201224530, 80},
    {"Tom", 201344522, 95},
    {"Kate", 201246621, 99},
    {"Grace", 201543229,73},
    {"David", 201322581, 59}
    };

    sort_by_hakbun(data, 5);
    print_data(data, 5);
    printf("\n");
    sort_by_score(data, 5);
    print_data(data, 5);
}

void sort_by_hakbun(struct student arr[], int size)
{
    int i,j,index;
    struct student temp;


    for(i=0; i<size-1; i++)
    {
    index = i;
    for(j=i+1; j<size; j++)
    {
        if(arr[index].hakbun > arr[j].hakbun)
            index = j;
    }
    temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
    }
}

void sort_by_score(struct student arr[], int size)
{
  int i,j,index;
    struct student temp;


    for(i=0; i<size-1; i++)
    {
    index = i;
    for(j=i+1; j<size; j++)
    {
        if(arr[index].score > arr[j].score)
            index = j;
    }
    temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
    }
}

void print_data(struct student arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    printf("%s %d %d\n",
           arr[i].name,
           arr[i].hakbun,
           arr[i].score);
}
