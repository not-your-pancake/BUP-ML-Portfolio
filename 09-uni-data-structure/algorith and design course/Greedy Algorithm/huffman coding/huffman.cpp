#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char ch;
    int freq;
    Node *left,*right;

    Node(char c,int f)
    {
        ch=c;
        freq=f;
        left=right=NULL;
    }
};
struct cmp /// eitar kaj smallest freq always stays at the top
{
    bool operator()(Node*a , Node*b)
    {
        return a->freq>b->freq;
    }
};

void GC(Node *root,string code,map<char,string>&HC)
{
    if(!root)return; /// dead end
    if(!root->left && !root->right) /// both arms empty hoile bujhbe she letter not brach
    {
        HC[root->ch]= code; /// map to save the codes
    }
    GC(root->left,code+"0",HC);
    GC(root->right,code+"1",HC);
}

int main()
{
    int n;
    cin>>n;
   priority_queue<Node*, vector<Node*>, cmp> pq;
    for(int i=0;i<n;i++)
    {
        char c;int f;
        cin>>c>>f;
        pq.push(new Node(c,f)); /// priority queqe te rakhlam

    }
    while(pq.size()>1) /// tree bainilam
    {
        Node*a=pq.top();pq.pop(); /// smallest
        Node*b=pq.top();pq.pop(); /// 2nd samllewst
        Node * merged= new Node('\0',a->freq+b->freq);
        merged->left= a;
        merged->right= b;
        pq.push(merged);

    }
    Node*root=pq.top();

    map<char,string>HC;
    GC(root,"",HC);
    cout<<"Huffman code"<<endl;
    for(auto p:HC)
    {
        cout<<p.first<<":"<<p.second<<endl;
    }

}
