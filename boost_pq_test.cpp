//#include <boost/heap/priority_queue.hpp>
//#include <boost/heap/binomial_heap.hpp>
//#include <boost/heap/heap_merge.hpp>

#include <iostream>
#include <cassert>
#include <ext/pb_ds/priority_queue.hpp>
//#include <ext/pb_ds/assoc_container.hpp>

#include <vector>
#include <queue>
#include <iostream>

#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */


int main()
{
  typedef std::priority_queue<int, std::vector<int> > pq_t;
  //typedef boost::heap::priority_queue<int> pq_t;
  //typedef boost::heap::binomial_heap<int> pq_t;
  pq_t pq;

  clock_t t;
  t = clock();
  
  int sz = 1e7; 
  for (int i = 0; i < sz; ++i) {
    pq.push(i);
  }
  /*
  for (int i = 0; i < sz;) {
    int chunk_sz = 1e4;
    pq_t pq2;
    std::cout << "1.1 " << i << std::endl;
    for (int max_i = i + chunk_sz; i < max_i; ++i) {
      pq2.push(i);
    }
    std::cout << "1.2" << std::endl;
    //pq.merge(pq2);
    boost::heap::heap_merge(pq, pq2);
    std::cout << "1.3" << std::endl;
  }
  */
  
  t = clock() - t;
  printf ("It took me %lu clicks (%f seconds).\n", t, ((float)t)/CLOCKS_PER_SEC);

  t = clock();
  for (int i = 0; i < sz; ++i) {
    pq.pop();
  }
  t = clock() - t;
  printf ("It took me %lu clicks (%f seconds).\n", t, ((float)t)/CLOCKS_PER_SEC);

  return 0;
}

