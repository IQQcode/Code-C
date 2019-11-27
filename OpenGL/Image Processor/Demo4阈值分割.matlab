clc;
clear all;
close all;
A = imread('C:\Users\MK\Desktop\001.jpg');
A=rgb2gray(A);
figure;
subplot(121);imshow(A);title('原图')
T = mean2(A);   %取均值作为初始阈值
done = false;   %定义跳出循环的量
i = 0;
% while循环进行迭代
while ~done
    r1 = find(A<=T);  %小于阈值的部分
    r2 = find(A>T);   %大于阈值的部分
    Tnew = (mean(A(r1)) + mean(A(r2))) / 2;  %计算分割后两部分的阈值均值的均值
    done = abs(Tnew - T) < 1;     %判断迭代是否收敛
    T = Tnew;      %如不收敛,则将分割后的均值的均值作为新的阈值进行循环计算
    i = i+1;
end
A(r1) = 0;   %将小于阈值的部分赋值为0
A(r2) = 1;   %将大于阈值的部分赋值为1   这两步是将图像转换成二值图像

subplot(122);imshow(A,[]);title('迭代处理后')
