/*
string容器：
1.string是c++风格的字符串，string的本质是一个类
2.string和char*的区别：
 1.char*是一个指针
 2.string是一个类，类内部封装了char*,管理这个字符串，是一个char*型的容器
3.特点：
 1.string内部封装了很多成员方法，如查找find、拷贝copy、删除delete
 2.string管理char*所分配的内存，不用担心复制越界和取值越界，由类内部进行负责


*/