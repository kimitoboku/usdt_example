Build Process
```
$ sudo zypper install systetap-sdt-devel
$ dtrace -C -h -s provider.d -o provider.h
$ gcc -c my_prob.c -o my_prob.o
$ dtrace -C -G -s provider.d -o provider.o my_prob.o
$ gcc -o my_prob my_prob.o provider.o
$ /usr/share/bcc/tools/tplist -l ./my_prob
b'./my_prob' b'my_prob':b'start__process__val'
b'./my_prob' b'my_prob':b'end__process__val'
```


`systemtap-sdt-devel` provide dtace compatibile layer.
```
$ ls /usr/bin/dtrace
/usr/bin/dtrace
kimitoboku@kimitoboku-dev:~/dev/src/github.com/kimitoboku/usdt_example> tail -30 /usr/include/sys/sdt.h
/* DTrace compatible macro names.  */
#define DTRACE_PROBE(provider,probe)            \
  STAP_PROBE(provider,probe)
#define DTRACE_PROBE1(provider,probe,parm1)     \
  STAP_PROBE1(provider,probe,parm1)
#define DTRACE_PROBE2(provider,probe,parm1,parm2)       \
  STAP_PROBE2(provider,probe,parm1,parm2)
#define DTRACE_PROBE3(provider,probe,parm1,parm2,parm3) \
  STAP_PROBE3(provider,probe,parm1,parm2,parm3)
#define DTRACE_PROBE4(provider,probe,parm1,parm2,parm3,parm4)   \
  STAP_PROBE4(provider,probe,parm1,parm2,parm3,parm4)
#define DTRACE_PROBE5(provider,probe,parm1,parm2,parm3,parm4,parm5)     \
  STAP_PROBE5(provider,probe,parm1,parm2,parm3,parm4,parm5) 
...
```
