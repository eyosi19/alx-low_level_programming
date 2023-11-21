#!/bin/bash


git add .

echo "Commit: "
read commit

git commit -m "$commit"
git push
