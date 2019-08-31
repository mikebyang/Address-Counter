typedef struct bst{
	unsigned long int addr;
	struct bst* naddr;
}bst;

void addrc(unsigned long int a, int* uniq, bst **b){
	if(*b == NULL){
		*b = (bst*)malloc(sizeof(bst));
		(*b)->addr = a;
		(*b)->naddr = NULL;
		*uniq = *uniq + 1;
		return;
	}
	else if((*b)->addr == a){
		return;
	}
	else{
		addrc(a, uniq, &(*b)->naddr);
		return;
	}
}
