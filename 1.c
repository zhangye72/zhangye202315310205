// 循环从1到999的数字，查找水仙花数
for(int i=100;i<=999;i++){
  int bai = i/100; // 将该数的百位提取
  int shi = (i-bai*100)/10; // 将该数的十位提取
  int ge = i-bai*100-shi*10; // 将该数的个位提取
  //判断条件
  if(i == bai*bai*bai + shi*shi*shi + ge*ge*ge){
    printf("%d\n",i);
  }
}