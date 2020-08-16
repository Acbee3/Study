# Github
### 配置基本用户信息
	git config --global user.name <你的用户名>
	git config --global user.name "coolBoy"
	git config --global user.name <你的邮箱地址>
	git config --global user.email "123456@qq.com"

### 创建一个新仓库
	git init

### 从远程服务器克隆一个仓库
	git clone <远程仓库的 Url>
	git clone "https://github.com/CoderWqk/ShitouJiandaoBu.git"

### 显示当前的工作目录下的提交文件状态
	git status

### 将指定文件 Stage（标记为要被提交的文件）
	git add <文件路径>
	// 一般都是全部提交
	git add .

### 将指定文件 Unstage（取消标记为将要被提交的文件）
	git reset <文件路径>

### 创建一个提交并提供提交信息
	git commit -m "标记信息"

### 显示提交历史
	git log

### 向远程仓库推送（Push）
	git push

### 从远程仓库拉取（Pull）
	git pull

### 创建分支
	git branch <分支名称>

### 查看分支信息
	git branch

### 切换分支
	git checkout <分支名称>

### 提交并推送分支
	git add .
	git commit -m "xxx"
	git push origin <分支名称>

### 合并分支
	git merge <分支名称>

### 推送到主分支
	git push origin master

### 删除子分支
	git branch -d <子分支名称>

### 删除远程子分支
	git push origin --delete <远程子分支名称>


### 网站1：
	https://blog.csdn.net/qq_41782425/article/details/85183250?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param

### 网站2：
	https://jingyan.baidu.com/article/5d368d1ec614c33f60c057bd.html