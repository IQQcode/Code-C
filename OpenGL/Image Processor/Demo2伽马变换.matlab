clc;
clear all;
gamma=input('gamma值=');
a=input('输入a=');
 r = imread ('C:\Users\Administrator\Desktop\Koala.jpg');
 r=im2double(r);
 r=rgb2gray(r);
 s = a * (r .^ gamma); 
subplot (1 ,2 ,1), imshow(r), title('原图');
 subplot (1 ,2 ,2), imshow(s), title(sprintf('伽马系数: %0.1f',gamma)); 