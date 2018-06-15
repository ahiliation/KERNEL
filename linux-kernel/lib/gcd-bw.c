/*
copyright 2018 Jeffrin Jose T

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
#include <linux/gcd.h>
#include <linux/export.h>

unsigned long gcd(unsigned long a, unsigned long b)
{

  unsigned long r;

  if ( a == b)
    {
      r = a;
         return r;
    }

  while (a != b)
    {

      if ( a == 1)
	{
	  r = 1;
	 	  return r;
	}
      if ( b == 1 )
	{
	  r = 1;
		  return r;
	}

      if ( a > b )
	{
	  a = a - b;
	}
      else
	{
	  b = b - a;
	}
    }

  r = a;
   return r;
}
EXPORT_SYMBOL_GPL(gcd);
