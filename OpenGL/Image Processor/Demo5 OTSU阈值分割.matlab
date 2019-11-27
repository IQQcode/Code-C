close;
clear;
clc;

%im2double将输入转换成double类型


I=im2double(imread('C:\Users\MK\Desktop\001.jpg'));
k=graythresh(I);              %得到最优阈值
J=im2bw(I,k);                  %转换成二值图，k为分割阈值
subplot(121);imshow(I);title('原图'); 
subplot(122);imshow(J);title('阈值化后的图');