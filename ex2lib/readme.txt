cd build/
cmake -S .. && make
sudo make install			# /usr/local/lib/libex2lib.a
> password
ls /usr/local/lib
nm /usr/local/lib/libex2lib.a
