1a 
git log --globar user.email deekr777@gmail.com

1b file banaya aur usme modify kiya bina git add  aur commit kiye
branch banakr git stash apply kr denge 
git stash pop kr denge
git stash list


git init 
file banao
file ko modify kro 




2 
git init
create file in master and commit changes
create another branch git checkout -b feature
make file and commit changes
go to master git checkout master
now check for merged git branch --merged
git merge feature 
it will merge

3a make file git error log
git status
make file .gitignore
git status
.gitignore ke ander name likho error.log
git status

3b git checkout master will swtich to this branch
git checkout witll make new branch and switch it to that branch

3c first create one file in master and commit 
create 2 more branch git branch 2.0
then git log --oneline 
go to  2.0
make another file bug .txt commit changes inside 2.0
go to 1.0 and git cherry-pick id of the head of  .txt

4 git clone repo link 
main branch me file bana kr change kro
phir new branch banao usko edit kro
phir main brach me edit kro
uske baad pull req and merge conflict hatao

5a git revert
create file
make 3 commits
use oneline
git revert id of head
revert it 

5b 
master branch me banao file and commit kro
feature banao aur commit kro
git rebase feature/master 
git log --oneline

7a git tag
make file 
commit change
git tag version1.0
git tag
git tag -d delete tagname


7b file bana kr 4 commit
aur 2nd wale id ka use krke 
command daalo 
git reset --mixed --hard -soft
