struct Stack
{
  unsigned int data[128];
  struct Stack* last;
  unsigned int* top;
}
bool addDataToStack(struct Stack** stack,unsigned int data)
{
  if ((**stack).top < 127){
    (**stack).data[++(**stack).top] = data;
  }else{
    
  }
}