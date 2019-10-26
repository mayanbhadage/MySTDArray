//
// Created by Mayan Bhadage on 2019-10-26.
//



#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H

template <typename type, size_t N>
class Array{
  public:

    type* begin()
    {
        return value;
    }

    type* end()
    {
        return (value+N);
    }

    size_t getSize()
    {
        return N;
    }

    type & operator[](int index)
    {
        return value[index];
    }

    type & at(int index)
    {
        if(index > N || index < 0)
        {
            return value[index];
        }
        else
        {
          std::perror("Array Index out of bound ");

        }
    }

    type & front()
    {
        return value[0];
    }

    type & back()
    {
        return value[N-1];
    }


    friend std::ostream & operator << (std::ostream &out, Array<type,N> &arr)
    {
            for(int i = 0; i < N; i++)
            {
                out<<arr[i]<<"\n";
            }
        return out;
    }

private:
    type value[N];// Initializing the array with 0
};

#endif //ARRAY_ARRAY_H


