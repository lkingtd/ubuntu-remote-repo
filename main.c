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

当我对比
git diff HEAD HEAD^
和
git diff HEAD^ HEAD
的区别后
我发现上面的那种说法是错的
关于 git diff <A> <B> 正确的解释应该是
对比前者<A>，后者<B>有什么变化


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
