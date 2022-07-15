#include <iostream>
#include <conio.h>
using namespace std;

struct node
{
	char data;
	node *kiri;
	node *kanan;
};

node *akar=NULL;

void addNode (node **akar, char isi)
{
	if((*akar)==NULL)
	{
		node *baru;
		baru = new node;
		baru -> data = isi;
		baru -> kiri = NULL;
		baru -> kanan = NULL;
		(*akar)= baru;
	}
}

void preOrder (node *akar)
{
	if(akar!=NULL)
	{
		cout << " " << akar -> data;
		preOrder(akar -> kiri);
        preOrder(akar -> kanan);
	}
}

void inOrder (node *akar)
{
	if(akar!=NULL){
		inOrder (akar -> kiri);
		cout << " " << akar -> data;
		inOrder ( akar -> kanan);
	}
}

void postOrder (node *akar)
{
	if (akar!=NULL)
	{
		postOrder (akar -> kiri);
		postOrder (akar -> kanan);
		cout << " " << akar -> data;
	}
}

void cariminimum (node *akar)
{
	if(akar!=NULL)
{
	if(akar->kiri->kanan==NULL)
    cout <<" Minimum Element = "<< akar->data;
}
}

int count(node *akar)
{
       if(akar==NULL)
       {
           if(akar->kiri->kanan==NULL)
            return count(akar);
       }
}

int main()
{
	char abjad;
	cout << "\n\n\t Posisi Awal Tree : \n\n";
	cout << "\t     A\n\t    /\\\n\t   B  C\n\t  /\n\t  D\n\t / \\\n\tE   F\n\n";
	addNode(&akar, abjad = 'A');
	addNode(&akar -> kiri, abjad = 'B');
	addNode(&akar -> kanan, abjad = 'C');
	addNode(&akar -> kiri -> kiri, abjad = 'D');
	addNode(&akar -> kiri -> kiri -> kiri, abjad = 'E');
	addNode(&akar -> kiri -> kiri -> kanan, abjad = 'F');
	cout<<  "Tampilan PreOrder : ";
	preOrder(akar);
	cout<<endl;
	cout << "\nTampilan InOrder : ";
	inOrder(akar);
	cout<<endl;
	cout << "\nTampilan PostOrder : ";
	postOrder(akar);
	cout<<endl;
	cout << "\nCari Minimum ";
	cariminimum(akar);
	cout<<endl;
	cout <<"\nJumlah Node Pada Pohon =";
	count(akar);
	cout<<endl;
	return 0;
}
