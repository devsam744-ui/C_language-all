#include <stdio.h>
#define MAX_SIZE 10
int a_matrix(int i,int j);
int b_matrix(int i,int j);
int Product(int i,int j);
void main(){
    int i,j;
    int a_matrix();
    int b_matrix();
    int Product();
}
int a_matrix(int i,int j){
    int a[MAX_SIZE][MAX_SIZE];
    for(i=0;i<MAX_SIZE;i++){
        for(j=0;j<MAX_SIZE;j++){
            a[i][j]=i+j;
        }
    }
    return a[i][j];
}
int b_matrix(int i,int j){
    int b[MAX_SIZE][MAX_SIZE];
    for(i=0;i<MAX_SIZE;i++){
        for(j=0;j<MAX_SIZE;j++){
            b[i][j]=i*j;
        }
    }
    return b[i][j];
}
int Product(int i,int j){
    int p[MAX_SIZE][MAX_SIZE];
    int a_val,b_val;
    for(i=0;i<MAX_SIZE;i++){
        for(j=0;j<MAX_SIZE;j++){
            a_val = a_matrix(i,j);
            b_val = b_matrix(i,j);
            p[i][j] = a_val * b_val;
        }
    }
    return p[i][j];
}