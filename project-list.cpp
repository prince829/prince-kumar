#include<conio.h>
#include<stdio.h>
#include<stdlib.h>//for exit
#include<iostream>
using namespace std;
class list
{
private:
    struct node
    {
        int item;
        node *next;

    } *start;
public:

    list()
    {
        start=NULL;
    }
    void insertAtLast(int);
    void DeleteFirst();
    void viewlist();
    int menu();

};
void list::insertAtLast(int data)
{
    node *t;
   node *n=new node;
   n->item=data;
   n->next=NULL;
   if(start==NULL)
    start=n;
   else
   {
       t=start;
       while(t->next!=NULL)
       t=t->next;
       t->next=n;
   }

   }
   void list::DeleteFirst()
   {
       node *t;

       if(start==NULL)
        cout<<"UNDERFLOW";
       else{
            t=start;
       start=t->next;
       delete t;
       }
   }
 void list::viewlist()
 {
     node *t;
     t=start;
     while(t)
     {
         cout<<t->item<<"  ";
         t=t->next;
     }
 }
 int list::menu()
 {
     cout<<"\n1.Add item in the list:";
     cout<<"\n2.delete first item of the list";
     cout<<"\n3.view list:";
     cout<<"\n4.Exit from the list: ";

     int choice;
      cout<<"\n\n Enter your choice :";
     cin>>choice;
     return choice;
 }

main()
{
    list l1;
    int data;
    while(1)//infinite loop
    {
        system("cls");
        l1.viewlist();
        switch(l1.menu())
        {
        case 1:
            cout<<"Enter a number to add:";
            cin>>data;
            l1.insertAtLast(data);
            break;
        case 2:
            l1.DeleteFirst();
            break;
        case 3:
            l1.viewlist();
            break;
        case 4:
            exit(0);
        default:
            cout<<"invalid choice";


        }
    }
getch();

}
