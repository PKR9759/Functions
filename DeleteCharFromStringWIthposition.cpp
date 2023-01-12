void deletet(char *c,int pos){
    int len=strlen(c);
    
    for(;pos<len+1;pos++){
        *(c+pos)=*(c+pos+1);

    }
}
