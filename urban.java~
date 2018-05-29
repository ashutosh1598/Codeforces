/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class urban
{
	public static void main (String[] args) throws Exception
	{
	    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n;int n1,n2;
		String test = br.readLine().trim();
n=Integer.parseInt(test.split(" ")[0]);
n1=Integer.parseInt(test.split(" ")[1]);
n2=Integer.parseInt(test.split(" ")[2]);
int a[]=new int[n];

String[] nums = br.readLine().trim().split(" ");

for(int i=0;i<n;i++)
{
	a[i]=Integer.parseInt(nums[i]);
}
Arrays.sort(a);
 long sum1=0,sum2=0;
 int t=n1;
n1=Math.min(n1,n2);
if(n1!=t)n2=t;
int i=n-n1-n2;


for(;i<n-n1;i++)
{
sum1+=a[i];
}
for(i=n-n1;i<n;i++)
{
sum2+=a[i];
}
System.out.print(sum1/(double)n2+sum2/(double)n1);
	}
}

