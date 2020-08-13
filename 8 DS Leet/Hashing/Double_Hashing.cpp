//@Author smeet_kothari
// Double Hashing
#include<bits/stdc++.h>
using namespace std;

string hashTable[100];    //Using Arrays with Slots
int hashTableSize = 100;

int hashFunc1(string s) //hasFunc return value form 0 to 99
{
    return 0;   //Implement your own Hashing Logic
}
int hashFunc2(string s) //hasFunc return value form 0 to 99
{
    return 0;   //Implement your own Hashing Logic
}

void insert(string s)
{
    //Compute the index using the hash function1
    int index = hashFunc1(s);
    int indexH = hashFunc2(s);
    //Search for an unused slot and if the index exceeds the hashTableSize roll back
    while(hashTable[index] != "")
        index = (index + indexH) % hashTableSize;
    hashTable[index] = s;
}

void search(string s)
{
    //Compute the index using the hash function
    int index = hashFunc1(s);
    int indexH = hashFunc2(s);
    //Search for an unused slot and if the index exceeds the hashTableSize roll back
    while(hashTable[index] != s and hashTable[index] != "")
        index = (index + indexH) % hashTableSize;
    //Is the element present in the hash table
    if(hashTable[index] == s)
        cout << s << " is found!" << endl;
    else
        cout << s << " is not found!" << endl;
}

int main ()
{
    int n;
    cout<"Enter No of Entries";
    cin>>n;
    cout<<"Enter Your String";
    for (int i=0;i<n;i++) {
        cin>>hashTable[i];
        insert(hashTable[i]);
    }
    string s;
    cout<<"Enter String to be searched";
    cin>>s;
    search(s);
    return 0;
}
