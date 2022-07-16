#include <iostream>
using namespace std;
typedef struct Queue{
	string elemen[5];
	int front,rear,count;
}kue;
void create(Queue *Q){
	Q->front=Q->rear=Q->count=0;
}
void Enqueue(string data, Queue *Q){
		Q->elemen[Q->rear]=data;
		Q->rear++;
		Q->count++;
}
void Dequeue(Queue *Q){
	string keeper;
	keeper = Q->elemen[Q->front];
	for(int i=Q->front;i<Q->rear;i++){
		Q->elemen[i]=Q->elemen[i+1];
	}
	Q->rear--;
	Q->count--;
}
void Pop(Queue *Q){
	string keeper;
	keeper=Q->elemen[Q->rear-1];
	Q->rear--;
	Q->count--;
}
void print(Queue *Q){
	if(Q->count!=0){
		for(int i=0;i<Q->rear;i++){
			cout<<Q->elemen[i];
		}
	} else{
		cout<<"data kosong"<<endl;
	}
}
int main(){
	kue Q;
	int pil;
	string input;
	create(&Q);
	do{
		system("cls");
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. Pop"<<endl;
		cout<<"4. Cetak Queue"<<endl;
		cout<<"Pilih : ";cin>>pil;
		
		if(pil==1){
			system("cls");
			cout<<"Masukan String : ";cin>>input;
			Enqueue(input,&Q);
		}
		else if(pil==2){
			system("cls");			
			Dequeue(&Q);
		}
		else if(pil==3){
			system("cls");			
			Pop(&Q);
		}
		else if(pil==4){
			system("cls");
			print(&Q);
			system("pause");
		}
	}
	while(pil!=0);
}
