# Assignment 01

## 1. Create an account at [github.com]

- You may use your existing account if there is any

## 2. Create an empty private repository at your github account

- Remember the path to the remote repository
- example: **git@github.com:hongbyungwoo/assignment01.git**

## 3. Create a new directory at your local drive

- example: **/Users/home/hong/class/DiscreteMathematic/Assignment/01**

## 4. Create an empty text file **README.md** in the created directory

- example: **/Users/home/hong/class/DiscreteMathematic/Assignment/01/README.md**

```console
$ cd /Users/home/hong/class/DiscreteMathematic/Assignment/01
$ touch README.md
```

## 5. Make an initial git commit at your local drive (first commit)

- Change the working directory to the local drive (**/Users/home/hong/class/DiscreteMathematic/Assignment/01**)
- Execute the following git commands at the local drive

```console
$ git init
$ git add .
$ git commit -a -m "initial commit"
$ git remote add origin **path to the reposity (git@github.com:hongbyungwoo/assignment01.git)**
$ git push -u origin master
```

## 6. Modify the file **README.md**

- Edit the file **README.md** following the markdown syntax at the local drive 
- example : add your name to **README.md**

## 7. Commit the modification  (second commit)

- Commit the modification made at the file **README.md** at the local drive 

```console
$ git commit -a -m "second commit"
$ git push -u origin master
```

## 8. Modify the file **README.md**

- Edit the file **README.md** again following the markdown syntax at the local drive 
- example : add your student ID to **README.md**

## 9. Commit the modification (third commit) 

- Commit the modification made at the file **README.md** at the local drive 

```console
$ git commit -a -m "third commit"
$ git push -u origin master
```

## 10. Submit the history of the commits

- Save the commits page of the repository at github website as a PDF file
- Submit the PDF file at Google Classroom
- Make sure that you properly submit the assignment at Google Classroom
- Late submission is not allowed
- No execuse for technical mistakes
