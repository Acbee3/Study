'''
Author: Acbee3 2463254281@qq.com
Date: 2022-06-19 23:05:20
LastEditors: Acbee3 2463254281@qq.com
LastEditTime: 2022-06-19 23:08:13
FilePath: /Python/06/6.4.2.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
def odd(x):
    return x % 2

temp = filter(odd, range(10))

aaa = list(temp)
print(aaa)