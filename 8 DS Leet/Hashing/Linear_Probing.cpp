//@Author smeet_kothari
// Hashing using Linear Probing
#include<bits/stdc++.h>
using namespace std;

string hashTable[100];    //Using Arrays with Slots
int hashTableSize = 100;

int hashFunc(string s) //hasFunc return value form 0 to 99
{
    return 0;   //Implement your own Hashing Logic
}

void insert(string s)
{
    //Compute the index using the hash function
    int index = hashFunc(s);
    //Search for an unused slot and if the index will exceed the hashTableSize then roll back
    while(hashTable[index] != "")
        index = (index + 1) % hashTableSize;
    hashTable[index] = s;
}

void search(string s)   //Complexity will be O(slot kept for same hash_value)
{
    //Compute the index using the hash function
    int index = hashFunc(s);
        //Search for an unused slot and if the index will exceed the hashTableSize then roll back
    while(hashTable[index] != s and hashTable[index] != "")
        index = (index + 1) % hashTableSize;
    //Check if the element is present in the hash table
    if(hashTable[index] == s)
        cout << s << " is found at index:" <<index<<endl;
    else
        cout << s << " is not found!" << endl;
}

int main ()
{
    int n;
    cout<"Enter No of Entries";
    cin>>n;
    cout<<"Enter Your String";
    for (int i=0;i<n;i++)
    {
        cin>>hashTable[i];
        insert(hashTable[i]);
    }
    string s;
    cout<<"Enter String to be searched";
    cin>>s;
    search(s);
    return 0;
}
