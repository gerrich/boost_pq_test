boost_pq_test: boost_pq_test.cpp
	g++ boost_pq_test.cpp -o boost_pq_test -O3 -g0 -I/usr/include/c++/4.2.1 -lstdc++
  
clear:
	rm -rf boost_pq_test 
