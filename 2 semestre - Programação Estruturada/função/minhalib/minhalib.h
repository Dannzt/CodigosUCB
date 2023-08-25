void ordena_decrescente(char nomes[][30]){
	int i,j;
	char aux[30];
	for(i=0;i<10;i++){
	for(j=i+1;j<10;j++){
	 if (stricmp(nomes[i],nomes[j])<0){
		strcpy(aux,nomes[i]);
				strcpy(nomes[i],nomes[j]);
		strcpy(nomes[j],aux);
		}
	}
  }
}
void ordena_crescente(char nomes[][30]){
	int i,j;
	char aux[30];
	for(i=0;i<10;i++){
	for(j=i+1;j<10;j++){
	 if (stricmp(nomes[i],nomes[j])>0){
		strcpy(aux,nomes[i]);
		strcpy(nomes[i],nomes[j]);
		strcpy(nomes[j],aux);
		}
	}
   }
}
