Build Process
```
$ sudo zypper install systetap-sdt-devel
$ dtrace -C -h -s provider.d -o provider.h
$ gcc -c my_prob.c -o my_prob.o
$ dtrace -C -G -s provider.d -o provider.o my_prob.o
$ gcc -o my_prob my_prob.o provider.o
```
