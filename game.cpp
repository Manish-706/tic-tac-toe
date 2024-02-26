// MANISH MANISH MANISH 
#include<iostream>
using namespace std;
int c=0;
int l = 2;
char a[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
int b[]={1,2,3,4,5,6,7,8,9};
int countU[5];
int countC[5];
void display(int q=-1,int c =0){
	
	for(int i=0;i<9;i++){
		if(b[i]==q) {
		if(c==1)a[i]='O';	
		else a[i]='X';
		}
	}
	
	if(c==1){
		cout<<endl;
		cout<<"computer's turn "<<endl;
		cout<<endl;
	}
	cout<<" "<<endl;
	cout<<"                          "<<a[0]<<" | "<<a[1]<<" | "<<a[2]<<"    "<<endl;
	cout<<"                         ---"<<" --- "<<"--- "<<endl;
    cout<<"                          "<<a[3]<<" | "<<a[4]<<" | "<<a[5]<<"    "<<endl;
	cout<<"                         ---"<<" --- "<<"--- "<<endl;
	cout<<"                          "<<a[6]<<" | "<<a[7]<<" | "<<a[8]<<"    "<<endl;
    cout<<" \n\n"<<endl;

}
int check1(){
	int g = 0;
	if(a[0]=='O' and a[8]==' ')     { display(9,1); g=1;countC[2]=9;}
	else if(a[0]==' ' and a[8]=='O'){ display(1,1); g=1;countC[2]=1;}
	
	else if(a[1]==' ' and a[7]=='O'){ display(2,1);	g=1;countC[2]=2;}
	else if(a[7]==' ' and a[1]=='O'){ display(8,1); g=1;countC[2]=8;}
	
	else if(a[2]==' ' and a[6]=='O'){ display(3,1); g=1;countC[2]=3;}
	else if(a[6]==' ' and a[2]=='O'){ display(7,1); g=1;countC[2]=7;}
	
	else if(a[3]==' ' and a[5]=='O'){ display(4,1);	g=1;countC[2]=4;}
	else if(a[3]=='O' and a[5]==' '){ display(6,1);	g=1;countC[2]=6;}
	
	else if(a[0]=='X' and a[1]=='X' and a[2]==' '){ display(3,1); 	g=2;countC[2]=3;}
	else if(a[0]=='X' and a[2]=='X' and a[1]==' '){ display(2,1);	g=2;countC[2]=2;}
	else if(a[1]=='X' and a[2]=='X' and a[0]==' '){ display(1,1);	g=2;countC[2]=1;}
	
	else if(a[3]=='X' and a[6]=='X' and a[0]==' '){ display(1,1);	g=2;countC[2]=1;}
	else if(a[0]=='X' and a[6]=='X' and a[3]==' '){ display(4,1);	g=2;countC[2]=4;}
	else if(a[0]=='X' and a[3]=='X' and a[6]==' '){ display(7,1);	g=2;countC[2]=7;}
	
	else if(a[7]=='X' and a[8]=='X' and a[6]==' '){ display(7,1);	g=2;countC[2]=7;}
	else if(a[6]=='X' and a[8]=='X' and a[7]==' '){ display(8,1);	g=2;countC[2]=8;}
	else if(a[6]=='X' and a[7]=='X' and a[8]==' '){ display(9,1);	g=2;countC[2]=9;}
	
	else if(a[2]=='X' and a[5]=='X' and a[8]==' '){ display(9,1);	g=2;countC[2]=9;}
	else if(a[2]=='X' and a[8]=='X' and a[5]==' '){ display(6,1);	g=2;countC[2]=6;}
	else if(a[8]=='X' and a[5]=='X' and a[2]==' '){ display(3,1);	g=2;countC[2]=3;}
	
	else if(a[1]=='O' and a[7]=='X' and a[3]==' '){ display(4,1);	g=2;countC[2]=4;}
	else if(a[1]=='O' and a[7]=='X' and a[5]==' '){ display(6,1);	g=2;countC[2]=6;}

	else if(a[7]=='O' and a[1]=='X' and a[5]==' '){ display(6,1);	g=2;countC[2]=6;}
	else if(a[7]=='O' and a[1]=='X' and a[3]==' '){ display(4,1);	g=2;countC[2]=4;}

	else if(a[3]=='O' and a[5]=='X' and a[1]==' '){ display(2,1);	g=2;countC[2]=2;}
	else if(a[3]=='O' and a[5]=='X' and a[7]==' '){ display(8,1);	g=2;countC[2]=8;}

	else if(a[5]=='O' and a[3]=='X' and a[1]==' '){ display(2,1);	g=2;countC[2]=2;}
	else if(a[5]=='O' and a[3]=='X' and a[7]==' '){ display(8,1);	g=2;countC[2]=8;}

	return g;
}

int check2(){
	cout<<"check2 ";
	int g=2;
    if(a[1]=='X' and a[7]==' ')         { display(8,1); 	g=2;countC[l++]=8;}
    
    else if(a[1]=='O'and a[2]==' ')     { display(3,1); 	g=3;countC[l++]=3;}
	else if(a[2]=='O'and a[1]==' ')     { display(2,1); 	g=3;countC[l++]=2;}
	else if(a[3]=='O'and a[6]==' ')     { display(7,1); 	g=3;countC[l++]=7;}
	else if(a[6]=='O'and a[3]==' ')     { display(4,1); 	g=3;countC[l++]=4;}
    
    else if(a[7]=='X' and a[1]==' ')    { display(2,1); 	g=2;countC[l++]=2;}
	
	else if(a[2]=='X' and a[6]==' ')    { display(7,1); 	g=2;countC[l++]=7;}
	else if(a[6]=='X' and a[2]==' ')    { display(3,1); 	g=2;countC[l++]=3;}
	
	else if(a[3]=='X' and a[5]==' ')    { display(6,1); 	g=2;countC[l++]=6;}
	else if(a[5]=='X' and a[3]==' ')    { display(4,1); 	g=2;countC[l++]=4;}
	
	
	else if(a[8]=='X'and a[7]==' ')     { display(8,1); 	g=2;countC[l++]=4;}
	else if(a[2]=='X'and a[1]==' ')     { display(2,1); 	g=2;countC[l++]=4;}
	return g;
}

int main(){
	cout<<"your move will be  'X' "<<endl;
	cout<<"computer's move will be  'O' "<<endl;
   while(true){
   	int j=0;
   	 int u=0;
	display();
	cout<<" Enter choice : ";
	cin>>u;
	countU[c++]=u;
	display(u);
	if(u== 1 || u==3|| u == 7 || u== 9){
		display(5,1);
		countC[0]=5;
	}
	else if(u== 2 || u==4|| u == 6 || u== 8){
		display(5,1);
		countC[0]=5;                       
	}
	else if(u==5){
		display(1,1);
		countC[0]=1;
	}
	int u1=u;
	cout<<"Your turn     ";
	for(int i=0;i<9;i++){
	 if(b[i] ==u || b[i] == countC[0]) 
	 continue;
	cout<<b[i]<<" ";
	}
	cout<<endl;
	cin>>u;
	while(u==u1 or u== countC[0]){
	cout<<"\nInvalid input  "<<endl;
	cout<<"Enter choice : ";
	cin>>u;
	}
	countU[c++]= u;
	display(u);
	if(countC[0]==5){
		if(u1== 1 || u1==3|| u1 == 7 || u1== 9){
			if(u1 == 1 and u == 2)      {display(3,1);countC[1]=3;}
			else if(u1 == 1 and u == 3) {display(2,1);countC[1]=2;}
			else if(u1 == 1 and u == 4) {display(7,1);countC[1]=7;}
			else if(u1 == 1 and u == 6) {display(8,1);countC[1]=8;}
			else if(u1 == 1 and u == 7) {display(4,1);countC[1]=4;}
			else if(u1 == 1 and u == 8) {display(6,1);countC[1]=6;}
			else if(u1 == 1 and u == 9) {display(8,1);countC[1]=8;}
			
			else if(u1 == 3 and u == 2) {display(1,1);countC[1]=1;}
			else if(u1 == 3 and u == 1) {display(2,1);countC[1]=2;}
			else if(u1 == 3 and u == 9) {display(6,1);countC[1]=6;}
			else if(u1 == 3 and u == 6) {display(9,1);countC[1]=9;}
			else if(u1 == 3 and u == 7) {display(8,1);countC[1]=8;}
			else if(u1 == 3 and u == 8) {display(4,1);countC[1]=4;}
			else if(u1 == 3 and u == 4) {display(8,1);countC[1]=8;}
			
			else if(u1 == 7 and u == 4) {display(1,1);countC[1]=1;}
			else if(u1 == 7 and u == 1) {display(4,1);countC[1]=4;}
			else if(u1 == 7 and u == 8) {display(9,1);countC[1]=9;}
			else if(u1 == 7 and u == 9) {display(8,1);countC[1]=8;}
			else if(u1 == 7 and u == 3) {display(2,1);countC[1]=2;}
			else if(u1 == 7 and u == 2) {display(6,1);countC[1]=6;}
			else if(u1 == 7 and u == 6) {display(2,1);countC[1]=2;}
			
			else if(u1 == 9 and u == 3) {display(6,1);countC[1]=6;}
			else if(u1 == 9 and u == 6) {display(3,1);countC[1]=3;}
			else if(u1 == 9 and u == 7) {display(8,1);countC[1]=8;}
			else if(u1 == 9 and u == 8) {display(7,1);countC[1]=7;}
			else if(u1 == 9 and u == 1) {display(2,1);countC[1]=2;}
			else if(u1 == 9 and u == 2) {display(4,1);countC[1]=4;}
			else if(u1 == 9 and u == 4) {display(2,1);countC[1]=2;}
			
		}
		else if(u1== 2 || u1==4|| u1 == 6 || u1== 8){
		    if(u1 == 2 and u == 1)      {display(3,1);countC[1]=5;}
			else if(u1 == 2 and u == 3) {display(1,1);countC[1]=1;}
			else if(u1 == 2 and u == 4) {display(7,1);countC[1]=7;}
			else if(u1 == 2 and u == 6) {display(9,1);countC[1]=9;}
			else if(u1 == 2 and u == 7) {display(6,1);countC[1]=6;}
			else if(u1 == 2 and u == 9) {display(4,1);countC[1]=4;}
			else if(u1 == 2 and u == 8) {display(1,1);countC[1]=1;}
			
			else if(u1 == 4 and u == 7) {display(1,1);countC[1]=1;}
			else if(u1 == 4 and u == 1) {display(7,1);countC[1]=7;}
			else if(u1 == 4 and u == 2) {display(3,1);countC[1]=3;}
			else if(u1 == 4 and u == 8) {display(9,1);countC[1]=9;}
			else if(u1 == 4 and u == 9) {display(2,1);countC[1]=2;}
			else if(u1 == 4 and u == 3) {display(8,1);countC[1]=8;}
			else if(u1 == 4 and u == 6) {display(7,1);countC[1]=7;}
			
			else if(u1 == 6 and u == 3) {display(9,1);countC[1]=9;}
			else if(u1 == 6 and u == 9) {display(3,1);countC[1]=3;}
			else if(u1 == 6 and u == 2) {display(1,1);countC[1]=1;}
			else if(u1 == 6 and u == 8) {display(7,1);countC[1]=7;}
			else if(u1 == 6 and u == 1) {display(8,1);countC[1]=8;}
			else if(u1 == 6 and u == 7) {display(2,1);countC[1]=2;}
			else if(u1 == 6 and u == 4) {display(3,1);countC[1]=3;}
			
			else if(u1 == 8 and u == 7) {display(9,1);countC[1]=9;}
			else if(u1 == 8 and u == 9) {display(7,1);countC[1]=7;}
			else if(u1 == 8 and u == 4) {display(1,1);countC[1]=1;}
			else if(u1 == 8 and u == 6) {display(3,1);countC[1]=3;}
			else if(u1 == 8 and u == 1) {display(6,1);countC[1]=6;}
			else if(u1 == 8 and u == 3) {display(4,1);countC[1]=4;}
			else if(u1 == 8 and u == 2) {display(9,1);countC[1]=9;}
		}
	}
	else if(countC[0]==1){
		    if(u1 == 5 and u == 2)      {display(8,1);countC[1]=8;}
			else if(u1 == 5 and u == 3) {display(7,1);countC[1]=7;}
			else if(u1 == 5 and u == 4) {display(6,1);countC[1]=6;}
			else if(u1 == 5 and u == 6) {display(4,1);countC[1]=4;}
			else if(u1 == 5 and u == 7) {display(3,1);countC[1]=3;}
			else if(u1 == 5 and u == 8) {display(2,1);countC[1]=2;}
			else if(u1 == 5 and u == 9) {display(7,1);countC[1]=7;}
	}
	int u2 = u;
	cout<<"your turn     ";
	for(int i=0;i<9;i++){
	 if(b[i] ==u1 || b[i] == countC[0] || b[i] == countC[1] || b[i] ==u2 ) 
	 continue;
	cout<<b[i]<<" ";
	}
	cout<<endl;
	cin>>u;
	while(u==u1 or u== countC[0] or u == countC[1] or u ==u2 ){
	cout<<"\nInvalid input  "<<endl;
	cout<<"Enter choice : ";
	cin>>u;
	}
	countU[c++]= u;
	display(u);
	int u3=u;





	if(countC[0]==5){
	int t = check1();
    if(t==1) cout<<"\n<<<<<<<<<<<<<<  YOU LOSE   >>>>>>>>>>>>>>>>"<<endl;
    else if(t==2){
    cout<<"your turn     ";
	for(int i=0;i<9;i++){
	if(b[i] ==u1 || b[i] == countC[0] || b[i] == countC[1] || b[i] ==u2 || b[i]==countC[2] || b[i]==u3 ) 
	continue;
	cout<<b[i]<<" ";
	}
	cout<<endl;
	cin>>u;
	while(u==u1 or u== countC[0] or u == countC[1] or u ==u2 or u==countC[2] || u==u3){
	cout<<"\nInvalid input  "<<endl;
	cout<<"Enter choice : ";
	cin>>u;
	}
	countU[c++]= u;
	display(u);
    int t1 =check1();
    if(t1==1) cout<<"\n<<<<<<<<<<<<<<  YOU LOSE   >>>>>>>>>>>>>>>>"<<endl;
    else cout<<"\n<<<<<<<<<<<<<<  TIE   >>>>>>>>>>>>>>>>"<<endl;
	}
	}







	else if(countC[0]==1){
	int t = check2();
    if(t==3) cout<<"\n<<<<<<<<<<<<<<  YOU LOSE   >>>>>>>>>>>>>>>>"<<endl;
	else{
	cout<<"your turn    ";
	for(int i=0;i<9;i++){
	if(b[i] ==u1 || b[i] == countC[0] || b[i] == countC[1] || b[i] ==u2 || b[i]==countC[2] || b[i]==u3 ) 
	continue;
	cout<<b[i]<<" ";
	}
	cout<<endl<<"\n";
	cin>>u;
	while(u==u1 or u== countC[0] or u == countC[1] or u ==u2 or u==countC[2] || u==u3){
	cout<<"\nInvalid input  "<<endl;
	cout<<"Enter choice : ";
	cin>>u;
	}
	countU[c++]= u;
	display(u);
    int t1 =check2();
    if(t1==3) cout<<"\n<<<<<<<<<<<<<<  YOU LOSE   >>>>>>>>>>>>>>>>"<<endl;
    else{
    	cout<<"\n<<<<<<<<<<<<<<  TIE   >>>>>>>>>>>>>>>>"<<endl;
	}
	}	
		
	}
	for(int i=0;i<9;i++) a[i]=' ';
   	c=0;
   	l = 2;
   	cout<<"\nPress 1 to continue or press 2 to exit  :  "; cin>>j;
   	if(j==2)break;
   	else continue;
   }   

	
}
