
  
  

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

  

# 鲍竹涵的日常代码合集

这是一个GitHub代码仓库，它完整地克隆了我桌面上的coding文件夹。我会在里面更新我日常学习，训练用的代码。  

目前主要是一些C/C++ 和少量的Python 。我目前大一，就读于软件工程专业，同时在学习icpc竞赛。  

你可以在里面找到：  

  

1. LeetCode上面的每日一题

2. Codeforce上周赛的代码  

（[我的Codeforces主页](https://codeforces.com/profile/hengyuhan)）

3. 我学校课业的代码  

（pintia-C语言程序设计与实验）

4. 学校ACM赛队周赛的补题

  

很高兴认识你： )

## bzh的备忘录：
 1. 统计代码行数，powershell命令:  
    `(Get-ChildItem -Recurse -File | Get-Content | Measure-Object).Count`  
    or  
    `git log --format='%aN' | sort -u | while read name; do echo -en "$name\t"; git log --author="$name" --pretty=tformat: --numstat | awk '{ add += $1; subs += $2; loc += $1 - $2 } END { printf "added lines: %s, removed lines: %s, total lines: %s\n", add, subs, loc }' -; done`

# 更新日志：

  

注意：

以下时间均为北京时间(东八区)

Attention:

The following times are all Beijing Time(GMT+8)

This means you can subtract 8 hours to get Greenwich Mean Time(GMT+0)

## 重要更新（Important Updates）

**2024年1月27日14点30分**
 1. 补充了experiment7.3 和 experiment6
 2. 补充了全部 FreshemenGame

## 普通更新（General Updates）

**2024年1月27日13点18分**

 1. 完成了LeetCode每日一题，中等题  

> 二分查找（binary search）  
> 学到了一个新东西 ， "static_cost<long long>" ,   
> 用法 “static_cast<target-type>(expression)” Returns a value of type target-type.  
> 学到了一个新东西 ， "0ll" 是longlong 的 0  

## 重要更新（Important Updates）

**2024年1月24日20点00分**  

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

## 普通更新(General Updates)

**2024年1月24日12点31分**

更新日志：

1. 把一些复习文件转移到了Creview(class -> Creview)

  

**2024年1月23日19点38分**

更新日志：

  

1. 写完了Leetcode的每日挑战。

> 简单题：2765 最长交替子序列（循环，模拟）
> 
> 虽然是简单题但是一直WA，最后debug发现是在结尾时候忘记比较res和tmp的大小（res >
> tmp时更新res）。感叹自己的愚蠢，顺便的，下次记得循环的结尾更新判断。leetcode的官方题解是二层循环，但是其实一层循环就可以了。题目的核心是判断出交替子序列的本质是(nums[i]
> == nums[i-2]) 。

## 重要更新(Important Updates)
我创建了这个库。

