
// #include<stdio.h>      
// #include<stdlib.h>     
// #include<unistd.h>     
// #include<sys/types.h>  
// #include<sys/stat.h>   
// #include<fcntl.h>      
// #include<termios.h>    
// #include<errno.h>      
// #include<string.h>

// #include"uart.h"

// #define waitforstx1  1    // 检查包头
// #define waitforstx2  2 
// #define waitforstx3  3 
// #define waitfordata  4

// unsigned char data_buff[4];
//  int length=0,  lsize=0;
// float   jieguo =0.00;

// int main (int argc,char* argv[])
// {
//   int my_fd;
  
//   unsigned char rcv_buf[8];
//   unsigned char send_buf[8]={0x01,0x03,0x00,0x80,0xfa,0x00,0x06,0x82};

  
  
//   int len,i=0, state=1;
  
//    //uart initialization
//     my_fd = UART_Open(); 
//     UART_Init(my_fd,9600,0,8,1,'N');
//     //bzero(( unsigned char*)&temp_buff,1);


//   while(1) 
//   {
//     // UART_Send(my_fd,"ooks",4);
//       UART_Send(my_fd,  send_buf,8);

//       sleep(1);
//  //    len=UART_Recv(my_fd, rcv_buf,8);
// 			if ((len=UART_Recv(my_fd, rcv_buf,8)) > 0)
//       {	 


//       // printf("---------%d\n",len);
//       // printf("1=%x\n",rcv_buf[0]);
//       // printf("2=%x\n",rcv_buf[1]);
// 		  // printf("3=%x\n",rcv_buf[2]);
// 		  // printf("4=%x\n",rcv_buf[3]); 
//       // printf("5=%x\n",rcv_buf[4]);
//       // printf("6=%x\n",rcv_buf[5]);
// 		  // printf("7=%x\n",rcv_buf[6]);
// 		  // printf("8=%x\n",rcv_buf[7]); 
//         if(rcv_buf[0]== 0x01 && rcv_buf[1] == 0x03 && rcv_buf[2] == 0x04)
//         {
            
//             data_buff[0] = rcv_buf[3];
//             data_buff[1] = rcv_buf[4];
//             data_buff[2] = rcv_buf[5];
//             data_buff[3] = rcv_buf[6];

//       // printf("data_buff2=%x\n",data_buff[0]);
//       // printf("data_buff2=%x\n",data_buff[1]);
// 		  // printf("data_buff3=%x\n",data_buff[2]);
// 		  // printf("data_buff4=%x\n",data_buff[3]);
//      //jieguo = Hex_To_Decimal(data_buff,sizeof(data_buff));    //十六进制到浮点数
//      jieguo = data_buff[0]+(data_buff[1]<<8) + (data_buff[2]<<16)+ (data_buff[3]<<24);
//      printf("jieguo=%f,    size= %d\n", jieguo,  sizeof(data_buff));
      
//         }


// 			 }


//       // printf("data_buff2=%x\n",data_buff[1]);
// 		  // printf("data_buff3=%x\n",data_buff[2]);
// 		  // printf("data_buff4=%x\n",data_buff[3]);



//     }
//    UART_Close(my_fd); 
//   return 0;
// }
