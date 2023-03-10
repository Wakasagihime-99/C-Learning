<!--
 * @Date: 2023-03-06
 * @LastEditors: Wakasagihime
 * @LastEditTime: 2023-03-13
 * @FilePath: \\pythond:\\code\\c\\blog\\CPrimerPlusChapter12.md
 * @Description: 
-->
# C Primer Plus Chapter 12

存储类别、链接和内存管理

## 存储类别

1. 对象

    &emsp;&emsp;目前所使用的编程示例数据都存储在内存中，从硬件方面看，被存储的每个值都占用一定的物理内存，C语言把这样的一块内存称为**对象**(object)。对象可以存储一个或多个值，可能并未存储实际的值，但它在存储适当的值时一定具有相应的大小；从软件方面看，程序需要一种方法访问对象，这可以通过声明变量来完成。

    &emsp;&emsp;变量名不是指定对象的唯一途径。如：

    ```c
    int entity = 3;
    int *pt = &entity;
    int ranks[10];
    ```

    &emsp;&emsp;行1创建了名为entity的**标识符**(indentifier)标识符是一个名称，可用来**指定**(designate)特定对象的内容。

    &emsp;&emsp;而行2中，pt是一个标识符，指定了一个存储地址的对象。*pt不是标识符，是**表达式**，同时也是是**左值**（内存中有具体位置的对象），可以被赋值。entity既是标识符也是左值。

    &emsp;&emsp;ranks声明创建了一个可容纳10个int类型元素的对象，该数组每个元素也是一个对象。ranks + 2 *entity既不是标识符，也不是左值。但\*(ranks + 2 \* entity)是左值。

    ```c
    const char *pc = "Behold a string literal!";
    ```

    &emsp;&emsp;pc是一个可修改的左值，而*pc是不可修改的左值。字符串这个数组是一个对象，每个字符也是一个对象。字符串字面量是不可修改的左值。

    &emsp;&emsp;可以用**存储期**(storage duration)描述对象，可以用**作用域**(scope)和**链接**(linkage)描述标识符，标识符的作用域和链接表明了程序哪些部分可以使用它。标识符可以在源代码的多文件中共享、也可以只在特定文件特定函数的某部分中。对象可存在于程序的执行期，也可仅存在于它所在函数的执行期。可以通过函数调用的方式显示分配和释放内存。

2. 作用域

    &emsp;&emsp;一个C变量的作用域可以是块作用域、函数作用域、函数原型作用域和文件作用域。在某一作用域使用变量或函数前，必须在该作用域下声明该变量或函数。

    &emsp;&emsp;定义在块中的变量具有**块作用域**(block scope)。在函数声明中定义的形参虽然在花括号之前，但也是具有块作用域的。

    &emsp;&emsp;**函数作用域**(function scope)仅对goto的标签有用，标签(label)可以被定义在函数的任何位置，与内外层、在使用前定义还是使用后定义无关，在函数内定义即可被使用。

    &emsp;&emsp;**函数原型作用域**(function prototype scope)即声明函数原型时，里面形参的作用域只有声明的这一行。所以可以省略形参变量的名字（除了变长数组），也可以在函数定义时形参换一个名字。
