
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

// unsigned char data_buff[70];
//  int length=0,  lsize=0;


// int main (int argc,char* argv[])
// {
//   int my_fd;
  
//   unsigned char rcv_buf[8];
//   unsigned char send_buf[8]={0x01,0x03,0x00,0x80,0xfa,0x00,0x06,0x82};

  
  
//   int len,i=0, state=1;
//   float Hdecimal=0.0;
//    //uart initialization
//     my_fd = UART_Open(); 
//     UART_Init(my_fd,9600,0,8,1,'N');
//     //bzero(( unsigned char*)&temp_buff,1);


//   while(1) 
//   {
//     // UART_Send(my_fd,"ooks",4);
//       UART_Send(my_fd,  send_buf,8);

//       sleep(3);
//  //    len=UART_Recv(my_fd, rcv_buf,8);
// 			if ((len=UART_Recv(my_fd, rcv_buf,8)) > 0)
//       {	 


//       printf("---------%d\n",len);
//       printf("1=%x\n",rcv_buf[0]);
//       printf("2=%x\n",rcv_buf[1]);
// 		  printf("3=%x\n",rcv_buf[2]);
// 		  printf("4=%x\n",rcv_buf[3]); 
//       printf("5=%x\n",rcv_buf[4]);
//       printf("6=%x\n",rcv_buf[5]);
// 		  printf("7=%x\n",rcv_buf[6]);
// 		  printf("8=%x\n",rcv_buf[7]); 

// 				 switch(state)
// 				 {
//               //  printf("data_buff1=");

// 				  case waitforstx1:
// 				  if(rcv_buf[0]==0x01)               //   if(temp_buff[0]==0xfa)   
// 				  state=waitforstx2;
// 				  else
// 				  state=waitforstx1;
// 				  break;

// 				  case waitforstx2:
// 				  if(rcv_buf[0]==0x03)                    //  if(temp_buff[0]==0xff)            
// 				  state=waitforstx3;
// 				  else 
// 				  state=waitforstx1;
// 				  break;

//            case waitforstx3:
// 				  if(rcv_buf[0]==0x04)                    //  if(temp_buff[0]==0xff)            
// 				  state=waitfordata;
// 				  else 
// 				  state=waitforstx1;
// 				  break;

// 				  case waitfordata:
// 				  if(length==lsize+2)      // length =4+2
// 				       {
// 					    state=1;
//               length=0;
// 					      }
// 				  else
// 				  {
// 				    data_buff[length++]=rcv_buf[0];
// 				    i++;
// 					lsize= data_buff[0];
// 				  // state=4;  
// 				//  printf("length=%d,length1=%d\n",lsize,length);     

//      printf("data_buff1=%x\n",data_buff[0]);


// 				  }
// 				  break;

// 				 }


// 			 }


//       // printf("data_buff2=%x\n",data_buff[1]);
// 		  // printf("data_buff3=%x\n",data_buff[2]);
// 		  // printf("data_buff4=%x\n",data_buff[3]);



//     }
//    UART_Close(my_fd); 
//   return 0;
// }
