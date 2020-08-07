# cgoexample


Source files for https://www.thegoldfish.org/2019/04/using-c-libraries-from-go/

### 其中有一段编译的时候答主写错了，应该改为：
```bash
$ gcc hello.c -L. -lperson -o hello
然后将libperson.so文件复制到/usr/lib目录下，
在当前目录./hello则输出成功：
Hello C world: My name is tim, tim hughes.
```
