struct Stack
{
  unsigned int StackVal[128];
  struct Stack* next;
  unsigned int* top;
}