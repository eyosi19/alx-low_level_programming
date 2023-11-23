#!/bin/bash


git add .

commit=$1
if [ $# -eq 0 ]
then
	echo "put a commit"
else
git commit -m "$commit"
git push
fi
