#pragma once
void takeInput(int* arr, int size)
{
   
    int i, j, count = 0;
    for (i = 0; i < size; i++)
    {
        count = 0;
        for (j = 0; j < size; j++)
        {
            
            if (*(arr + i) == *(arr + j))
            {
                count++;
            }
            


            if (count==1)
            {
                
            }

        }
        
    }
    cout <<"count="<< count;

}

