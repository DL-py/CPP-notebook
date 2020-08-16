/*
map/multimap容器：
1.基本概念：
 1.map中所有的元素都是pair
 2.pair第一个元素是键值（key）,起到索引作用，第二个元素为实值（value）
 3.所有的元素都会根据元素的键值自动排序
2.本质：
 1.map/multimap属于关联式容器，底层结构是用二叉树实现
3.优点：
 1.可以根据key值找到value值
4.map和multimap的区别：
 1.map不允许容器中有重复的key值元素
 2.multimap允许容器中有重复的key值元素

*/