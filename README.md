

# BaoZhuhan's daily coding:

This is a GitHub code repository that has cloned the "coding" folder on my desktop in its entirety. I will update it with the code I use for **daily learning and practice**. 
Currently, it mainly consists of C/C++ and a small amount of Python. I am currently a freshman majoring in software engineering and am also studying for the *ICPC* . 
You can find the following in it: 
1. Daily problems from LeetCode 
2. Codes from last week's Codeforces competition 
	([My codeforces  home page](https://codeforces.com/profile/hengyuhan))
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

# 更新日志：

注意：  
以下时间均为北京时间(东八区)  
Attention:  
The following times are all Beijing Time(GMT+8)  
This means you can subtract 8 hours to get Greenwich Mean Time(GMT+0)  

## 2024年1月24日12点31分
更新日志：
 1. 把一些复习文件转移到了Creview(class -> Creview)

## 2024年1月23日19点38分
更新日志：

 1. 写完了Leetcode的每日挑战。
 
	 简单题：2765 最长交替子序列（循环，模拟）
	 虽然是简单题但是一直WA，最后debug发现是在结尾时候忘记比较res和tmp的大小（res > tmp时更新res）。感叹自己的愚蠢，顺便的，下次记得循环的结尾更新判断。leetcode的官方题解是二层循环，但是其实一层循环就可以了。题目的核心是判断出交替子序列的本质是(nums[i] == nums[i-2]) 。