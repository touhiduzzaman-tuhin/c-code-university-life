/*int main(){
    int a[5], i;

    for(i = 0; i < 5; i++)
    {
        printf("%u\n",&(a[i])); //print address of each element
    }
    return 0;
}*/
void print()
{
		node *current_node=root;
		while(current_node!=NULL) //loop until you reach null
		{
			printf("%d\n",current_node->roll);
			current_node=current_node->next;
		}
}
int main(){

	append(1);
	append(2);
	append(6);
	print();
    return 0;
}
