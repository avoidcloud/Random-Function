#include<stdio.h>
#include<iostream>
using namespace std;


class linkedList
{
    /* Create a structure with 2 box
       One is for carry the data Value or element
       Another one is for carry the next index location
    */
    struct Node
    {
        int data;
        Node* newtLink;
    };
    /* initial the list length as zero. this length will increase
       when ever user insert a new data in a new node and will
       decrease when user delete any node from this linked list
    */
    int listLength = 0;
    Node* head;
    /* From here all functions can accessible in any function or class
       As because these are defined as public
    */
public:
    linkedList()
    {
        /* default constructor
           Initial the head pointer as NULL

           ::::::Using Syntax:::::
           linkedList mylist;
        */
        head = NULL;
    }
    bool isListEmpty()
    {
        /* this is a boolean return type function
           this function return true if linked list is empty
           if linked list is not empty then this will return false

           ::::::Using Syntax:::::
           mylist.isListEmpty();
        */
        if(listLength == 0)
            return true;
        else
            return false;
    }
    int getLength()
    {
        /* this function return the list length

           ::::::Using Syntax:::::
           mylist.getLength();
        */
        return listLength;
    }
    int getTop()
    {
        /* this function will return the last or top value in the list
           firstly the function check whether the list has any element or not
           if list is not empty then this will return the top value

           :::::::Using Syntax:::::
           mylist.getTop();
        */
        if(listLength != 0)
        {
            Node* tempHead = head;
            for(int i=0; i<listLength-1; i++)
            {
                tempHead = tempHead->newtLink;
            }
            return tempHead->data;
        }
    }
    int getFront()
    {
        /* this function will return the first or front value in the list
           first, the function check whether the list has any element or not
           if list is not empty then this will return the front value

           :::::::Using Syntax:::::
           mylist.getFront();
        */
        if(listLength != 0)
            return head->data;
    }
    int getItemAt(int index)
    {
        /* this function will return the i-th index value, where i inputted from user
           first, the function check whether the index is exist or not in this list
           if exist then the function return the i-th index value

           :::::::Using Syntax:::::
           mylist.getItemAt( index_Number );
        */
        if(index<=listLength)
        {
            Node* tempHead = head;
            for(int i=0; i<index; i++)
            {
                tempHead = tempHead->newtLink;
            }
            return tempHead->data;
        }
    }
    void printList()
    {
        /* this function will print all whole list from start to end
           here, canSpaced boolean is use for handle the space between
           element when printing in console

           :::::::Using Syntax:::::
           mylist.printList();
        */
        bool canSpaced = false;
        Node* tempHead = head;
        while(tempHead != NULL)
        {
            if(canSpaced)
                printf(" %d",tempHead->data);
            else
                printf("%d",tempHead->data);
            tempHead = tempHead->newtLink;
            canSpaced=true;
        }
    }
    void insertFront(int newData)
    {
        /* this function insert a new data at the front position in the list
           after insert a new data in the list, length will increase by 1

           :::::::Using Syntax:::::
           mylist.insertFront( new_data );
        */
        Node* tempNode = new Node();
        tempNode->data = newData;
        tempNode->newtLink = head;
        head =  tempNode;
        listLength++;
    }
    void insertBack(int newData)
    {
        /* this function insert a new data at the last position in the list
           after insert a new data in the list, length will increase by 1
           -->when the list is empty, that means insert at last or first is same

           :::::::Using Syntax:::::
           mylist.insertBack( new_data );
        */
        if(listLength != 0)
        {
            Node* tempNode = new Node();
            tempNode->data = newData;
            Node* tempHead = head;
            for(int i=0; i<listLength-1; i++)
            {
                tempHead = tempHead->newtLink;
            }
            tempNode->newtLink = tempHead->newtLink;
            tempHead->newtLink = tempNode;
            listLength++;
        }
        else
            insertFront(newData);
    }
    void insertAt(int newData, int index)
    {
        /* this function insert a data in user defined index in the list
           first, function will check whether the index is exist or not in the list
           if exist, then function will insert the new data in the list otherwise not
           then list length will increase by 1

           :::::::Using Syntax:::::
           mylist.insertBack( new_data , index_number );

        */
        if(index<=listLength)
        {
            Node* tempNode = new Node();
            tempNode->data = newData;
            Node* tempHead = head;
            for(int i=0;i<index-1;i++)
            {
                tempHead = tempHead->newtLink;
            }
            tempNode->newtLink = tempHead->newtLink;
            tempHead->newtLink = tempNode;
            listLength++;
        }

    }
    void deleteFront()
    {
        /* this function will remove the front or first element of the list
           first, function will check whether the list is empty or not
           after deletion list length will decrease by 1

           :::::::Using Syntax:::::
           mylist.deleteFront();
        */
        if(listLength != 0)
        {
            Node* tempNode = new Node();
            tempNode = head->newtLink;
            head = tempNode;
            delete(tempNode);
            listLength--;
        }
    }
    void deleteBack()
    {
        /* this function will remove the last element of the list
           if list length is 1 that means delete the first or last element is same
           if list length is greater than 1 then delete back operation execute
           if list is empty, nothing will execute.
           after deletion list length will decrease by 1

           :::::::Using Syntax:::::
           mylist.deleteBack();
        */
        if(listLength == 1)
            deleteFront();
        else if(listLength > 1)
        {
            Node* tempHead = head;
            for(int i=0; i<listLength-2; i++)
            {
                tempHead = tempHead->newtLink;
            }
            Node* tempNode = tempHead->newtLink;
            tempHead->newtLink = NULL;
            delete(tempNode);
            listLength--;
        }
    }
    void deleteAt(int index)
    {
        /* this function will delete the i-th index element, where i
           inputted from user.
           first, function will check whether the index exist or not
           if exist, then delete operation will execute, otherwise not
           after deletion list length will decrease by 1

           :::::::Using Syntax:::::
           mylist.deleteAt( index_number );
        */
        if(index <= listLength)
        {
            Node* tempHead = head;
            for(int i=0;i<index-1;i++)
            {
                tempHead = tempHead->newtLink;
            }
            Node* tempNode = tempHead->newtLink;
            tempHead->newtLink = tempNode->newtLink;
            delete(tempNode);
            listLength--;
        }
    }
    void reverseList()
    {
        /* this function will reverse the whole list
        */
        Node* Previous;
        Node* Current;
        Node* Next;

        Previous = NULL;
        Current = head;
        while(Current != NULL)
        {
            Next = Current->newtLink;
            Current->newtLink = Previous;
            Previous = Current;
            Current = Next;
        }
        head = Previous;
    }
    void clearList()
    {
        /* this function will clear all element of the list and make it empty
           after making empty, list length will be zero
        */
        while(head != NULL)
        {
            Node* tempNode = head;
            head = tempNode->newtLink;
            delete(tempNode);
            listLength--;
        }
    }

};
int main()
{

}

