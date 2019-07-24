# Algorithms

 
  
* Algorithm  
>>An algorithm is a step-by-step procedure of providing calculations and instructions. {2, Page 1}.  
>>Many algorithms are iterative (for constructing algorithms)  
>>The actual steps and procedures depend on the algorithm used and the context of interest

  
  
Example:  
A simple algorithm for finding the square root of any positive number k > 0 or x.  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{t&plus;1}&space;=&space;\frac{1}{2}\left&space;(&space;x_{t}&plus;\frac{k}{x_{t}}&space;\right&space;)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{t&plus;1}&space;=&space;\frac{1}{2}\left&space;(&space;x_{t}&plus;\frac{k}{x_{t}}&space;\right&space;)" title="x_{t+1} = \frac{1}{2}\left ( x_{t}+\frac{k}{x_{t}} \right )" /></a>  
* For k = 7  
* Starting from a guess solution <a href="https://www.codecogs.com/eqnedit.php?latex=x_{0}\neq&space;0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{0}\neq&space;0" title="x_{0}\neq 0" /></a>  
* With <a href="https://www.codecogs.com/eqnedit.php?latex=x_{0}=&space;1" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{0}=&space;1" title="x_{0}= 1" /></a>  
* With t is the iteration counter or index or pseudo-time or generation counter.  

In fact, the true value is 2.64575131106  (please, using scientific calculator)  
From the description, we have  
  
  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{0}=&space;1" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{0}=&space;1" title="x_{0}= 1" /></a>  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{1}=&space;\frac{1}{2}\left&space;(&space;x_{0}&plus;\frac{7}{x_{0}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;1&plus;\frac{7}{1}&space;\right&space;)=&space;\frac{8}{2}=4" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{1}=&space;\frac{1}{2}\left&space;(&space;x_{0}&plus;\frac{7}{x_{0}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;1&plus;\frac{7}{1}&space;\right&space;)=&space;\frac{8}{2}=4" title="x_{1}= \frac{1}{2}\left ( x_{0}+\frac{7}{x_{0}} \right )= \frac{1}{2}\left ( 1+\frac{7}{1} \right )= \frac{8}{2}=4" /></a>  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{2}=&space;\frac{1}{2}\left&space;(&space;x_{1}&plus;\frac{7}{x_{1}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;4&plus;\frac{7}{4}&space;\right&space;)=&space;\frac{1}{2}(\frac{23}{4})=&space;2.875" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{2}=&space;\frac{1}{2}\left&space;(&space;x_{1}&plus;\frac{7}{x_{1}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;4&plus;\frac{7}{4}&space;\right&space;)=&space;\frac{1}{2}(\frac{23}{4})=&space;2.875" title="x_{2}= \frac{1}{2}\left ( x_{1}+\frac{7}{x_{1}} \right )= \frac{1}{2}\left ( 4+\frac{7}{4} \right )= \frac{1}{2}(\frac{23}{4})= 2.875" /></a>  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{3}=&space;\frac{1}{2}\left&space;(&space;x_{2}&plus;\frac{7}{x_{2}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;2.875&plus;\frac{7}{2.875}&space;\right&space;)=&space;\frac{1}{2}(5.3097826087)=&space;2.65489130435" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{3}=&space;\frac{1}{2}\left&space;(&space;x_{2}&plus;\frac{7}{x_{2}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;2.875&plus;\frac{7}{2.875}&space;\right&space;)=&space;\frac{1}{2}(5.3097826087)=&space;2.65489130435" title="x_{3}= \frac{1}{2}\left ( x_{2}+\frac{7}{x_{2}} \right )= \frac{1}{2}\left ( 2.875+\frac{7}{2.875} \right )= \frac{1}{2}(5.3097826087)= 2.65489130435" /></a>  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{4}=&space;\frac{1}{2}\left&space;(&space;x_{3}&plus;\frac{7}{x_{3}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;2.65489130435&plus;\frac{7}{2.65489130435}&space;\right&space;)=&space;2.64576704419" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{4}=&space;\frac{1}{2}\left&space;(&space;x_{3}&plus;\frac{7}{x_{3}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;2.65489130435&plus;\frac{7}{2.65489130435}&space;\right&space;)=&space;2.64576704419" title="x_{4}= \frac{1}{2}\left ( x_{3}+\frac{7}{x_{3}} \right )= \frac{1}{2}\left ( 2.65489130435+\frac{7}{2.65489130435} \right )= 2.64576704419" /></a>  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{5}=&space;\frac{1}{2}\left&space;(&space;x_{4}&plus;\frac{7}{x_{4}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;2.64576704419&plus;\frac{7}{2.64576704419}&space;\right&space;)=&space;2.64575131111" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{5}=&space;\frac{1}{2}\left&space;(&space;x_{4}&plus;\frac{7}{x_{4}}&space;\right&space;)=&space;\frac{1}{2}\left&space;(&space;2.64576704419&plus;\frac{7}{2.64576704419}&space;\right&space;)=&space;2.64575131111" title="x_{5}= \frac{1}{2}\left ( x_{4}+\frac{7}{x_{4}} \right )= \frac{1}{2}\left ( 2.64576704419+\frac{7}{2.64576704419} \right )= 2.64575131111" /></a>  
  
Voila !!  
If u try once again, u will get:  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{6}=\frac{1}{2}\left&space;(&space;x_{5}&plus;\frac{7}{x_{5}}&space;\right&space;)\rightarrow" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{6}=\frac{1}{2}\left&space;(&space;x_{5}&plus;\frac{7}{x_{5}}&space;\right&space;)\rightarrow" title="x_{6}=\frac{1}{2}\left ( x_{5}+\frac{7}{x_{5}} \right )\rightarrow" /></a>  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{6}=\frac{1}{2}\left&space;(&space;2.64575131111&plus;\frac{7}{2.64575131111}&space;\right&space;)=&space;2.64575131106" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{6}=\frac{1}{2}\left&space;(&space;2.64575131111&plus;\frac{7}{2.64575131111}&space;\right&space;)=&space;2.64575131106" title="x_{6}=\frac{1}{2}\left ( 2.64575131111+\frac{7}{2.64575131111} \right )= 2.64575131106" /></a>  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{7}=\frac{1}{2}\left&space;(x_{6}&space;&plus;\frac{7}{x_{6}}&space;\right&space;)n&space;\to" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{7}=\frac{1}{2}\left&space;(x_{6}&space;&plus;\frac{7}{x_{6}}&space;\right&space;)n&space;\to" title="x_{7}=\frac{1}{2}\left (x_{6} +\frac{7}{x_{6}} \right )n \to" /></a>  
<a href="https://www.codecogs.com/eqnedit.php?latex=x_{7}=&space;\frac{1}{2}\left&space;(&space;2.64575131106&plus;\frac{7}{2.64575131106}&space;\right&space;)=&space;2.64575131106" target="_blank"><img src="https://latex.codecogs.com/gif.latex?x_{7}=&space;\frac{1}{2}\left&space;(&space;2.64575131106&plus;\frac{7}{2.64575131106}&space;\right&space;)=&space;2.64575131106" title="x_{7}= \frac{1}{2}\left ( 2.64575131106+\frac{7}{2.64575131106} \right )= 2.64575131106" /></a>  
  
A good choice of the initial value x will speed up the convergence {2, Page 2}  
This highlights the importance of choosing the right initial starting point {2, Page 4}  
The way to design a good iterative formula is very important {2, Page 3}  

Another topic is ...  
* Newton's Method  
>>Newton's method is a widely used classic method for finding the zeros of a nonlinear univariate function of f(x) on the interval [a, b].  
  
>>A Taylor Series is an expansion of a function into an infinite sum of terms, with increasing exponents of a variable, like x, x2, x3, etc.  
>>Example : a taylor series of for <a href="https://www.codecogs.com/eqnedit.php?latex=e^{x}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?e^{x}" title="e^{x}" /></a>  
   

- Newton-Rapson Method  
* Optimization  
- Gradient-Based ALgorithm  
- Hill Climbing with random Restart  



  
**Refer to:**  
[1] Omid Bozorg-Haddad (2018), Advanced Optimization by Nature-Inspired Algorithms (Studies Computational Intelligence), Springer.  
[2] Xin-She Yang (2014), Nature-Inspired Optimization Algorithms, Elsevier Inc.
