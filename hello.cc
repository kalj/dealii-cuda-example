/* -*- c-basic-offset:2; tab-width:2; indent-tabs-mode:nil -*-
 *
 *
 */


#include <deal.II/lac/gpu_vector.h>

using namespace dealii;

typedef double number;

int main()
{
    GpuVector v(1024);

    v.foo();

    v.hello();

//  srand(1);
//  printf("d: %d, p: %d\n",dimension,degree_finite_element);


//  GrowingVectorMemory<GpuVector<number> >::release_unused_memory();

  return 0;
}
