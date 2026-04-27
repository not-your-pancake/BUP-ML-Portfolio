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
struct cmp
{
    bool operator()(Node*a , Node*b)
    {
        return a->freq>b->freq;
    }
};

void GC(Node *root,string code,map<char,string>&HC)
{
    if(!root)return;
    if(!root->left && !root->right)
    {
        HC[root->ch]= code;
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
        pq.push(new Node(c,f));

    }
    while(pq.size()>1)
    {
        Node*a=pq.top();pq.pop();
        Node*b=pq.top();pq.pop();
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
