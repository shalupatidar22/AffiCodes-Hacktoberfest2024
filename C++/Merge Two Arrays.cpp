#include<iostream>
using namespace std;
	int A[20];
	int size;
	int length;
};struct array {

struct array* merge(struct array *arr1, struct array *arr2){
	int i=0,j=0,k=0;
	struct array *arr3=new struct array;
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];	
		}
		else{
			arr3->A[k++]=arr2->A[j++];
		}
	}
	for(;i<arr1->length){
		arr3->A[k++]=arr1->A[i];
	}
	for(;j<arr2->length){
		arr3->A[k++]=arr2->A[j];
	}
	arr3->length=arr1->length+arr2->length;
	arr3->size=20;	
}
int main(){
	struct Array ar1 = {{2, 3, 4, 7, 8}, 20, 5};
    struct Array ar2 = {{4, 5, 1, 2, 5, 9}, 20, 6};

    struct Array* mergedArray = merge(&ar1, &ar2);

    cout << "Merged Array: ";
    for (int i = 0; i < mergedArray->length; i++) {
        cout << mergedArray->A[i] << " ";
    }
}
