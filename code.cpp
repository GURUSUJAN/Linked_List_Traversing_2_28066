#include"iostream"
#include"bits/stdc++.h"
using namespace std;
struct Node
{
    int data;
    Node *link;
};
Node *head=NULL,*ptr,*nptr;
int main()
{
    int n,i;
    cin>>n;
    if(n>0)
    {
        for(i=0;i<n;i++)
        {
            if(head==NULL)
            {
                nptr=new Node;
                cin>>nptr->data;
                nptr->link=NULL;
                head=nptr;
            }
            else
            {
                nptr=new Node;
                cin>>nptr->data;
                nptr->link=head;
                head=nptr;
            }
        }
    }
    int count=0;
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data>18)
        {
            count++;
        }
        ptr=ptr->link;
    }
    cout<<count;
}
