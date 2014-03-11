if [ `tput cols` -lt 86 ]
then
    echo "please make your console at least 86 characters!!!"
else
    curl http://users.wpi.edu/~tjmeyer/birthday.txt
fi
