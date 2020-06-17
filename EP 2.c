#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void createlist(int n);
void traverselist();
void insertfitst(int data);
void insertend(int data);
void insertmiddle(int data,int position);
void deletefirst();
void deleteend();
void deletemiddle(int x);

int main()
{
    int n,data,position,x;

    printf("Enter the number of node : ");
    scanf("%d",&n);
    printf("\n");

    createlist(n);
    printf("\n\n");
    traverselist();

   //For Insert first
    printf("\nEnter the data for new node which will be insert first : ");
    scanf("%d",&data);
    insertfirst(data);
    printf("\nAfter inserting first the new link list is : \n\n");
    traverselist();

    //For insert end
    printf("\nEnter the data for new node which will be insert end : ");
    scanf("%d",&data);
    insertend(data);
    printf("\nAfter inserting end the new link list is : \n\n");
    traverselist();

    //For insert by call position or middle

    printf("\nEnter the position where new node will create : ");
    scanf("%d",&position);
    printf("Enter the data for new node which will insert at given position : ");
    scanf("%d",&data);
    insertmiddle(data,position);
    traverselist();

    //For delete first
    deletefirst();
    printf("\nAfter delete first the new link list\n");
    traverselist();

    //For delete last
    deleteend();
    printf("\nAfter delete last the new node is\n ");
    traverselist();

    //For delete middle
    printf("\nEnter the position which data will delete : ");
    scanf("%d",&x);
    deletemiddle(x);
    printf("After delete the data of given position ");
    traverselist();


    return 0;


}

void createlist(int n)
{
    int i,data;
    struct node *temp,*newnode;

    head = (struct node*)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory");
        exit(0);
    }
    else
    {

        printf("Enter the data of node 1 : ");
        scanf("%d",&data);

        head->data = data;
        head->next = NULL;

        temp = head;

        for(i=2;i<=n;i++)
        {
            newnode= (struct node*)malloc(sizeof(struct node));

            printf("Enter the data of node %d : ",i);
            scanf("%d",&data);


            newnode->data = data;
            newnode->next = NULL;


            temp->next = newnode;

            temp = temp->next;
        }
    }
}
void traverselist()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("Link list is empty");

    }
    temp = head;

    while(temp!=NULL)
    {
        printf("%d\n",temp->data);

        temp=temp->next;
    }
}

void insertfirst(int data)
{
    struct node *newnode,*temp;

    newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode== NULL)
    {
        printf("Unable to allocate memory");
    }
    else
    {
       newnode->data=data;
       newnode->next=head;

       head= newnode;
    }
}


void insertend(data)
{
     struct node *newnode,*temp;

    newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode== NULL)
    {
        printf("Unable to allocate memory");
    }
    else
    {
       newnode->data=data;
       newnode->next=NULL;

       temp=head;

       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=newnode;
    }
}

void insertmiddle(int data,int position)
{
     int i;
     struct node *newnode,*temp;

     newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode== NULL)
    {
        printf("Unable to allocate memory");
    }

    else
    {
       newnode->data=data;
       newnode->next=NULL;

       temp=head;

       for(i=2;i<=position-1;i++)
       {
           temp=temp->next;
           if(temp==NULL)
            break;
       }

       if(temp!=NULL)
       {
           newnode->next=temp->next;
           temp->next=newnode;
       }
    }
}

void deletefirst()
{
    struct node*todelete;

    if(head == NULL)
    {
        printf("Link list is already empty");

    }
    else
    {
        todelete=head;
        head=head->next;

        free(todelete);
    }
}

void deleteend()
{

    if(head==NULL)
        return;

     struct node*temp;
     struct node*prev;

     temp=head;
     prev=NULL;

     while(temp->next!=NULL)
     {
         prev=temp;
         temp=temp->next;
     }

  if(prev!=NULL)
  {
      prev->next=temp->next;

      free(temp);
  }
}


void deletemiddle(int x)
{
    int i;
    struct node *temp,*prev;

    if(head==NULL)
        return;

    else
    {
        temp=head;
        prev=head;

        for(i=2;i<=x;i++)
        {
            prev=temp;
            prev=prev->next;
            if(temp==NULL)
                break;
        }
        if(temp!=NULL)
        {
            if(temp=head)
            {
                head=head->next;
                prev->next=temp->next;
                temp->next=NULL;
                free(temp);
            }
        }
    }


}
