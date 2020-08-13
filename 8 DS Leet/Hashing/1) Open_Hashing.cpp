//@Author smeet_kothari
// Open Hashing
vector <string> hashTable[128]; //Using Linked List
int hashTableSize=128;

int hashFunc(string s)  //Universal Hash Func
{
    static int h=1;
    int a=31415,b=27183;
    while(*s++) {
        a = a*b%(128-1);
        h=(a*h+ *s)%128;
    }
    return h;
}
void insert(string s)
{
    // Compute the index using Hash Function
    int index = hashFunc(s);
    // Insert the element in the linked list at the particular index
    hashTable[index].push_back(s);
}

void search(string s)
{
    //Compute the index by using the hash function
    int index = hashFunc(s);
    //Search the linked list at that specific index
    for(int i = 0;i < hashTable[index].size();i++)
    {
        if(hashTable[index][i] == s)
        {
            cout << s << " is found!" << endl;
            return;
        }
    }
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
