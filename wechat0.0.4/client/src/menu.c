
#include "../include/head.h"
#include "../include/wechat.h"

void MainMenu();
void AllMenu();
void FriendManageMenu(); //好友管理菜单
void GroupManageMenu(); //群管理菜单
void ChatMenu(); //聊天菜单
void MainMenu();

void ManageMenu()
{
    putchar(10);
    printf("****************************************\n");
    printf("*            1.好友管理                *\n");
    printf("*            2.群管理                  *\n");
    printf("*            3.返回上一层              *\n");
    printf("*            4.退出                    *\n");
    printf("****************************************\n");
    printf("请选择:");

}
void FriendManageMenu() //好友管理菜单
{
    putchar(10);
    printf("****************************************\n");
    printf("*            1.添加好友                *\n");
    printf("*            2.删除好友                *\n");
    printf("*            3.查看我的好友            *\n");
    printf("*            4.修改好友备注            *\n");
    printf("*            5.返回上一层              *\n");
    printf("*            6.退出                    *\n");
    printf("****************************************\n");
    printf("请选择:");
    
}
void GroupManageMenu() //群管理菜单
{
    putchar(10);
    printf("****************************************\n");
    printf("*            1.加入群                  *\n");
    printf("*            2.退群                    *\n");
    printf("*            3.查看已加入群            *\n");
    printf("*            4.返回上一层              *\n");
    printf("*            5.退出                    *\n");
    printf("****************************************\n");
    printf("请选择:");
    
}
void ChatMenu() //聊天菜单
{
    putchar(10);
    printf("****************************************\n");
    printf("*            1.群聊天                  *\n");
    printf("*            2.好友聊天                *\n");
    printf("*            3.返回上一层              *\n");
    printf("*            4.退出                    *\n");
    printf("****************************************\n");
    printf("请选择:");
    
}
void RedPacketMenu() //红包菜单
{
    
}

void MainMenu()
{
    putchar(10);
    printf("*************************************\n");
    printf("*            1.聊天系统             *\n");
    printf("*            2.管理系统             *\n");
    printf("*            3.退出                 *\n");
    printf("*************************************\n");
    printf("请选择:");
    
}

void LoginMenu()
{
    putchar(10);
    printf("*************************************\n");
    printf("*            1.登录                 *\n");
    printf("*            2.注册                 *\n");
    printf("*            3.退出                 *\n");
    printf("*************************************\n");
    printf("请选择:");

}
