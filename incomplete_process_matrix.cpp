void process_matrix(){
    int m,n;
    cin>>m>>n;
    int a[m][n], b[m][n], c[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }

    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j] = a[i][j] +b[i][j];
        }
    }
    
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ", c[i][j]);
        }
    }
    

}

int main(){
    int number_of_test_cases = 0;
    
    return 0;
}