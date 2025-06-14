void pw_reverse_array(int *arr, int size){

if(arr == 0 || size <= 0)
return;

int start = 0;
int end = size -1;

while(start < end){
int tmp = arr[start];
arr[start] = arr[end];
arr[end] = tmp;
start++;
end--;
}

}
