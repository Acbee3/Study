'''
Author: Acbee3 2463254281@qq.com
Date: 2022-06-19 21:32:39
LastEditors: Acbee3 2463254281@qq.com
LastEditTime: 2022-06-19 23:04:16
FilePath: /Python/06/6.3.7.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
# 装饰器
def test(f):
    def wrapper(*params):
        print("before ...")
        f(*params)
        print("after ...")
    return wrapper
 
@test
def func():
    print("func was called")

func()



