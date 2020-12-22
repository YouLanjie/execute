#!/bin/bash
if [ `dpkg --get-selections | grep gcc |wc -l` -eq 0 ]
then
echo "未安装gcc，需要安装"
sudo apt install gcc
fi
#echo "正在\"/usr/\"目录中创建\"execute\"文件夹..."
sudo mkdir /usr/execute
sudo chmod g=wrx,o=wrx /usr/execute
#echo "正在编译源文件并复制文件到/usr/execute文件夹中..."
gcc ./execute.c -o /usr/execute/execute
#echo "正在创建快捷方式..."
touch $HOME/桌面/执行.desktop
echo -e "[Desktop Entry]\nName=执行程序\nExec=/usr/execute/execute\nTerminal=true\nType=Application\nIcon=terminal\n" >> $HOME/桌面/执行.desktop
chmod +x $HOME/桌面/执行.desktop
cp $HOME/桌面/执行.desktop $HOME/.local/share/applications/
sudo ln -s /usr/execute/execute /usr/bin/execute
echo "Done... 完成"
