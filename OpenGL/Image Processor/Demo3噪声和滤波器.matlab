clc;
clear all;

%B = imfilter(A,H);对A进行H滤波
%fspecial('H',args);创建H滤波器，参数为args
%medfilt2；中值滤波器



 r = imread ('C:\Users\MK\Desktop\001.jpg');
 r=im2double(r);                        %把图像数据类型转换为double类型
 r=rgb2gray(r);
 J1=imnoise(r,'salt & pepper', 0.02);   %椒盐噪声处理
 J2=imnoise(r,'gaussian',0, 0.02);      %高斯噪声处理

figure;
subplot (3 ,3 ,1), imshow(r), title('灰度图');
subplot (3 ,3 ,2), imshow(J1), title('椒盐'); 
subplot (3 ,3 ,3), imshow(J2), title('高斯噪声'); 

G_J= fspecial('average',[3,3]);         %创建均值滤波器
M2=imfilter(J2,G_J);                    %对高斯噪声的灰度图进行均值滤波
subplot (3 ,3 ,4), imshow(M2), title('对高斯噪声均值滤波');

G_Z=medfilt2(J2,[3,3]);                 %对高斯噪声的灰度图进行中值滤波
subplot (3 ,3 ,5), imshow(G_Z), title('对高斯噪声中值滤波');

G_G= fspecial('gaussian',[3,3]);        %创建高斯滤波器
M3=imfilter(J2,G_G);                    %对椒盐噪声的灰度图进行高斯滤波
subplot (3 ,3 ,6), imshow(M3), title('对高斯噪声高斯滤波');
%---------------------------------------
%---------------------------------------
J_J= fspecial('average',[3,3]);         %创建均值滤波器
M4=imfilter(J1,J_J);                    %对椒盐噪声的灰度图进行均值滤波
subplot (3 ,3 ,7), imshow(M4), title('对椒盐噪声均值滤波');

J_Z=medfilt2(J1,[3,3]);                 %对高斯噪声的灰度图进行中值滤波
subplot (3 ,3 ,8), imshow(J_Z), title('对椒盐噪声中值滤波');

J_G= fspecial('gaussian',[3,3]);        %创建高斯滤波器
M5=imfilter(J1,J_G);                    %对椒盐噪声的灰度图进行高斯滤波
subplot (3 ,3 ,9), imshow(M5), title('对椒盐噪声高斯滤波');
