#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int top=-1;
char s[405];

void push(char elem){

	s[++top] = elem;
}
char pop(){
	
	return(s[top--]);
}

int pr(char elem){
	
	switch(elem){
		case'#' : return 0;
		case'(' : return 1;
		case'+': 
		case'-': return 2;
		case'*': 
		case'/': return 3;
	}
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		char infx[405],pofx[405],ch,elem;
		int i=0,k=0;
		cin>>infx;
		push('#');
		
		while((ch=infx[i++])!='\0'){
			
			if(ch == '('){
				
				push(ch);
			}else if(isalnum(ch)){
				pofx[k++] = ch;
			}else if(ch==')'){
					while(s[top]!='(')
					pofx[k++] = pop();
					elem=pop();
				}else{
					while(pr(s[top]) >=pr(ch))
					pofx[k++] = pop();
					push(ch);
				}
			
		}
		while(s[top]!='#')
			pofx[k++] = pop();
			pofx[k] = '\0';
			cout<<pofx<<endl;
		
		
	}
	
	return 0;
	}
