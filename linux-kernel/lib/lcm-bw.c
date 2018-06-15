/*
Copyright 2018 Jeffrin Jose T

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#include <linux/kernel.h>
#include <linux/export.h>
#include <linux/lcm.h>

unsigned long lcm(unsigned long a, unsigned long b) 
{

  int  r = 1;
  int  i = 2;
  int flag;

  while  ( (a != 1) &&  (b != 1))
    {
      flag = 0;
      if (( a % i) == 0) {                                                                                                   
	a = a/i;                                                                                                      
	flag = 1;                                                                                                       
      }                                                                                                          
      if ( (b % i) ==  0) {                                                                                                 
	b = b/i;                                                                                                      
	flag = 1;                                                                                                       
      }                                                                                                        
                                                                                                                            
      if ( flag == 1 ) {                                                                                                   
	r = r * i;                                                                                                      
      }
      else
	{                                                                                                                   
	  i = i + 1;                                                                                                      
	}                                                                                                           
    }                                                                                                            
  r = r * a * b;

  return r;

}

EXPORT_SYMBOL_GPL(lcm);
