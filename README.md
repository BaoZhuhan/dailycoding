# BaoZhuhan's daily coding:

This is a GitHub code repository that has cloned the "coding" folder on my desktop in its entirety. I will update it with the code I use for **daily learning and practice**.

Currently, it mainly consists of C/C++ and a small amount of Python. I am currently a freshman majoring in software engineering and am also studying for the *ICPC* .

You can find the following in it:

1. Daily problems from LeetCode
2. Codes from last week's Codeforces competition

([My codeforces home page](https://codeforces.com/profile/hengyuhan))

3. Codes for my school coursework

(C language programming design and experiments)

4. Supplemental problems from our school's ACM team weekly competitions.

Have a nice day : )

## bzh的备忘录：

1. 统计代码行数，powershell命令:
   `(Get-ChildItem -Recurse -File | Get-Content | Measure-Object).Count`
   or
   `git log --format='%aN' | sort -u | while read name; do echo -en "$name\t"; git log --author="$name" --pretty=tformat: --numstat | awk '{ add += $1; subs += $2; loc += $1 - $2 } END { printf "added lines: %s, removed lines: %s, total lines: %s\n", add, subs, loc }' -; done`

## 更新日志：

注意：

以下时间均为北京时间(东八区)

Attention:

The following times are all Beijing Time(GMT+8)

This means you can subtract 8 hours to get Greenwich Mean Time(GMT+0)

### 普通更新(General Updates)

#### 2024年3月26日19点11分

BaoZhuhan       added lines: 31698, removed lines: 469, total lines: 31229

更新日志：

 1.天梯训练赛第一场

 2.天梯训练赛第二场

 3.数据结构实验一

 4.数据结构实验二

### 普通更新(General Updates)

#### 2024年2月22日21点34分

BaoZhuhan       added lines: 29034, removed lines: 376, total lines: 28658

更新日志：

 1.Newcoder寒假第四场

 2.Newcoder寒假第五场

 3.一部分补题

 4.一部分luogu train

### 普通更新(General Updates)

#### **2024年2月16日22点47分**

BaoZhuhan       added lines: 27762, removed lines: 227, total lines: 27535

更新日志：

1.MergeSort by vector.

> 尝试使用vector容器实现MergeSort , 但是结果很失败，程序没有输出，我想是因为vector在函数之间传输的过程不太对。

#### **2024年2月16日18点34分**

BaoZhuhan       added lines: 26861, removed lines: 227, total lines: 26634

更新日志：
 1.去南京旅游了几天，外加年假。

### 普通更新(General Updates)

#### **2024年2月3日09点34分**

更新日志：
 1.牛客寒假算法训练营第一场
   （[2024牛客寒假算法基础集训营1](https://ac.nowcoder.com/acm/contest/67741)）

#### **2024年1月31日17点47分**

24596 Lines

更新日志： 1.一些初等动态规划的板子题

> 01背包问题，DAG问题，完全背包问题，LIS问题

#### **2024年1月30日20点24分**

24400 lines

更新日志：

1. 令人疲惫
2. 数学 ， 数论 ， 图论 ， 最短路  、

#### **2024年1月28日21点11分**

23456 Lines

更新日志：

 1.class封装的并查集 2.大量的错误代码

> 真tmd服了，都什么乱七八糟的东西，什么档次让我写了四个小时开了两道板子题，tmd最傻逼的是我抄答案都tmd抄不急，我真是服了。

#### 2024年1月28日15点02分

更新日志：

1. kruskal最小生成树的模板代码

**2024年1月28日12点51分**

更新日志:

1. 寒假集训第一天，学习了并查集

> 路径压缩，按秩合并，启发式合并

### 重要更新（Important Updates）

#### **2024年1月27日14点30分**

1. 补充了experiment7.3 和 experiment6
2. 补充了全部 FreshemenGame

### 普通更新（General Updates）

#### **2024年1月27日13点18分**

1. 完成了LeetCode每日一题，中等题

> 二分查找（binary search）
> 学到了一个新东西 ， "static_cost `<long long>`" ,
> 用法 “static_cast `<target-type>`(expression)” Returns a value of type target-type.
> 学到了一个新东西 ， "0ll" 是longlong 的 0

### 重要更新（Important Updates）

#### **2024年1月24日20点00分**

1. 我重构了原来Cclass的文件夹

> Rename "Cclass" to "CBasisAndExperiment"
> new "CBasisAndExperiment\wwl"
> new "CBasisAndExperiment\TestAndHomework"
> new "CBasisAndExperiment\PintiaExperiment"
> new "CBasisAndExperiment\FinalTestReview"
> new "CBasisAndExperiment\ClassroomTeaching"

2. 补充了部分Pintia上的代码到本地

> Including:
> experiment1
> experiment2.1
> experiment2.2
> experiment2.3
> experiment2.4
> experiment2.5
> experiment3
> experiment4.1
> experiment4.2
> experiment5

3. 文件不再以"A,B,C"命名，而是以他们的功能命名

#### **2024年1月24日12点31分**

更新日志：

1. 把一些复习文件转移到了Creview(class -> Creview)

#### **2024年1月23日19点38分**

更新日志：

1. 写完了Leetcode的每日挑战。

> 简单题：2765 最长交替子序列（循环，模拟）
>
> 虽然是简单题但是一直WA，最后debug发现是在结尾时候忘记比较res和tmp的大小（res >
> tmp时更新res）。感叹自己的愚蠢，顺便的，下次记得循环的结尾更新判断。leetcode的官方题解是二层循环，但是其实一层循环就可以了。题目的核心是判断出交替子序列的本质是(nums[i]
> == nums[i-2]) 。

### 重要更新(Important Updates)

#### **(Inaccurate time)2023年11月**

> 我创建了这个库。
