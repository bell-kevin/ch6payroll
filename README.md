# ch6payroll
Create a project that calculates payroll for salaried and hourly employees. Ask for the name and category of the employee, and validate the category, repeating the prompt for input until the category is valid. If the category is for salaried employees, ask for the annual salary. If the category is for hourly employees, ask for the pay rate and for the hours worked. Validate those numbers (salary, pay rate, and hours worked) are greater than zero using a single function that validates any number and repeats the prompt for input until the number is good. Use an overloaded function to calculate the pay -- it needs only one argument for salaried employees, and two arguments for hourly employees, and returns the amount of pay. The function for calculating hourly pay must handle overtime pay (after 40 hours, pay rate becomes time-and-a-half). Do this work in a loop, asking the user if they want to calculate pay for another employee.

Here is an example when all input is valid:

Ch 6 Payroll good

And here is an example when all input is invalid at first:

Ch 6 Payroll bad

Create a table of test cases BEFORE you write and run the project. Be sure to test all validation. Run the project and use the test cases for input; take screenshots of each result.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots, the table of test cases, AND the root folder for the project.

![1](https://github.com/bell-kevin/ch6payroll/blob/main/Screenshot%20from%202022-10-07%2016-44-27.png)

![2](https://github.com/bell-kevin/ch6payroll/blob/main/Screenshot%20from%202022-10-08%2009-15-31.png)

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
