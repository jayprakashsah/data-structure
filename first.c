#include <stdio.h>
#define MAX 100
void insert ();
void display();
void delete();
int arr[MAX],num,i;


int main ()
{
    printf("enter the element of array");
    scanf("%d",&num);
    printf("enter element:");
    int choice;
    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);
        do{
            printf("enter 1 for insert\n");
            printf("enter 2 for delete\n");
            printf("enter 3 for display\n");
            printf("enter 4 for exit\n");
            printf("enter your choice:");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                insert();
                break;
                case 2:
                delete();
                break;
                case 3:
                display();
                break;
                case 4:
                break;
                default:
                printf("invalid choice\n");
            }
        } while(choice!=4);
    
    return 0;
}
void insert(){
    int pos,element;
    printf("enter the position:");
    scanf("%d",&pos);
    printf("enter the element:");
    scanf("%d",&element);
    if(pos<=0||pos>=MAX){
        printf("invalid position\n");
    } else {
    for(i=num;i>=pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    num++;
}
}
void delete(){
    int pos;
    printf("enter the position:");
    scanf("%d",&pos);
    for(i=pos;i<num;i++){
        arr[i-1]=arr[i];
    }
    num--;
}
void display(){
    for(i=0;i<num;i++){
        printf("%d",arr[i]);
    }
}







