<<<<<<< HEAD
what??????

git diff 三种对比
工作区<>暂存区<>git diff
工作区<>版本库<>git diff HEAD
暂存区<>版本库<>git diff --cached <commit id>

注意：
更新程度
工作区>暂存区>版本库
所以说，diff 对比的角度是，站在旧的区上看，新的区有何变化，如下：
工作区(新)<>暂存区(旧)
工作区(新)<>版本库(旧)
暂存区(新)<>版本库(旧)



<<<<<<< HEAD
经过一些验证后
我发现原来的那种说法是对的：
站在旧的文件上看，新的文件有何变化
=======
#include <stdio.h>

int main()
{
    printf("Hello, world!");
    return 0;
}
>>>>>>> learn
=======

>>>>>>> parent of aee4780 (关于diff最后的测试验证)
