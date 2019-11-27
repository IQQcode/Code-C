clc;
img=imread('C:\Users\Administrator\Desktop\Tulips.jpg');
%imshow(img);
%灰度图
img1=rgb2gray(img);


%显示均衡化图
img2=histeq(img1);

figure;

%显示原图，灰度图，均衡化，直方图
subplot(221),imshow(img);title('原图');
subplot(222),imshow(img1);title('灰度图');
subplot(223),imshow(img2);title('均衡化');
subplot(224),imhist(img1);title('直方图');