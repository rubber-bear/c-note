/*
指针与const

  - 指针是const
    表示一旦得到了某个变量的地址，不能再指向其他变量
    int *const q = &i; // q是const q的值不能被改变，q不能再指向其他
    *q = 26; // ok
    q++  //error

  - 所指的是const
    表示不能通过这个指针取修改那个变量（并不能使那个变量成为const）
    const int *p = &i             // i 依然可以变
    *p = 26; // ERROR !!!       (*p) 是const
    i = 26; // ok
    p = &j; // OK

  - 其他细节：
    int i;
    const int *p1 = &i  // 所指的值不能被修改
    int const *p2 = &i  // 所指的值不能被修改
    int * const p3 = &i  // 指针不能被修改

    判断那个被const了的标志是const 在* 前面还是后面

  - 转换
    总是可以把一个非const的值转换成const的值
      void f(const int * x) // f: 给我一个指针，我不会懂指针所指的值
      int a = 15;
      f(&a); // ok
      const int b = a;
      f(&b); // ok
      b = a+1; // error

    当要传递的参数的类型比地址大的时候，这是常用的手段，既能用比较少的字节数传递值给参数
      又能避免函数对外面的变量的修改

  - const 数组
    const int a[] = {1,2,3,4,5,6}
    数组变量已经是const的指针了，这里的const 表明数组的每个单元都是const int
    所以必须通过初始化进行赋值
  
  - 保护数组值
    因为把数组传入函数时传递的是地址，所以那个函数内部可以修改数组的值
    为了保护数组不被函数破坏，可以设置参数为const

      int sum(const int a[], int length)
*/