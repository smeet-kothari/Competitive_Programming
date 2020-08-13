//
// Created by Smeet Kothari on 21-05-2020.
//
/* https://www.youtube.com/watch?v=-1jxt_DPl48 */
/* https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/ */

int lastStoneWeight(vector<int>& a)
{
    int n=a.size();
    priority_queue<int>max_heap;

    for (int i=0;i<n;i++)
        max_heap.push(a[i]);    //

    while(n>1)
    {
        int x,y;
        y=max_heap.top();
        max_heap.pop();
        x=max_heap.top();
        max_heap.pop();
        n -= 2;
        if(x!=y)
        {
            max_heap.push(y-x);
            n++;
        }
    }

    if(!max_heap.empty())
        return max_heap.top();
    return 0;
}

