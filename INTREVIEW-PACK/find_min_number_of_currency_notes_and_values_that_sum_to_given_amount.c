#include<stdio.h>
int main()
{
  int amount;
  int notes[9] = {2000,500,200,100,50,20,10,5,1};
  int note_counter[9] = {0};
  scanf("%d",&amount);
  for(int i=0;i<9;i++)
  {
    if(amount >= notes[i])
    {
      note_counter[i] = amount / notes[i];
      amount = amount - note_counter[i] * notes[i];
    }
  }
  for(int i=0;i<9;i++)
  {
    if(note_counter[i] != 0)
      printf("%d : %d\n",notes[i],note_counter[i]);
  }
}
