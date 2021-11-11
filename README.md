# Project goal : Recode the printf function


Recode the printf function using the name "_printf". Project realised with Thomas LENORMAND, Jason LEUCHART, Ryan DHONDT
<br></br>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/lQ4Ecz5ZX_H3fk2qhKO-RA" title="Secrets of printf" target="_blank">Secrets of printf</a> </li>
<li><strong>Group Projects</strong> concept page (<em>Don&rsquo;t forget to read this</em>)</li>
<li><strong>Flowcharts</strong> concept page</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>printf (3)</code></li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Note that we will not provide the <code>_putchar</code> function for this project</li>
</ul>

<h3>GitHub</h3>

<p><strong>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</strong></p>

<h2>More Info</h2>

<h3>Authorized functions and macros</h3>

<ul>
<li><code>write</code> (<code>man 2 write</code>)</li>
<li><code>malloc</code> (<code>man 3 malloc</code>)</li>
<li><code>free</code> (<code>man 3 free</code>)</li>
<li><code>va_start</code> (<code>man 3 va_start</code>)</li>
<li><code>va_end</code> (<code>man 3 va_end</code>)</li>
<li><code>va_copy</code> (<code>man 3 va_copy</code>)</li>
<li><code>va_arg</code> (<code>man 3 va_arg</code>)</li>
</ul>

<h3>Compilation</h3>

<ul>
<li>Your code will be compiled this way:</li>
</ul>

<pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
</code></pre>
<br></br>

<h2>Main functions :</h2>

<li><b>_printf</b> : function that prints anything</li>
<li><b>_putchar</b> : write the character c to print</li>
<li><b>_main.h</b> : used for all prototypes of the functions</li>
<br></br>

<b>0. I&#39;m not going anywhere. You can print that wherever you want to. I&#39;m here and I&#39;m a Spur for life</b>

<p>Write a function that produces output according to a format.</p>

<ul>
<li>Prototype: <code>int _printf(const char *format, ...);</code></li>
<li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li>
<li>write output to stdout, the standard output stream</li>
<li><code>format</code> is a character string. The format string is composed of zero or more directives. See <code>man 3 printf</code> for more detail. You need to handle the following conversion specifiers:

<ul>
<li><code>c</code></li>
<li><code>s</code></li>
<li><code>%</code></li>
</ul></li>
<li>You don&rsquo;t have to reproduce the buffer handling of the C library <code>printf</code> function</li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>

<b>Our functions :</b>

  <li><b>_get_char</b> : get the char from _printf %c
  <li><b>_get_percent</b> : get the percent from _printf %%</li>
  <li><b>_get_string</b> : get the string from _printf %s</li>
<br></br>

<b>1. Education is when you read the fine print. Experience is what you get if you don&#39;t</b>

<p>Handle the following conversion specifiers:</p>

<ul>
<li><code>d</code></li>
<li><code>i</code></li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>

<b>Our functions :</b>

  <li><b>_get_integer</b> : get the integer from _printf %d</li>
  <li><b>_print integer</b> : print integer given</li>
<br></br>

<b>2. Just because it's in print doesn't mean it's the gospel</b>

<p>Create a man page for your function.</p>

<b>Our functions :</b>

  <li><b>man_3_printf</b> : man page for _printf</li>
<br></br>

<b>3. With a face like mine, I do better in print</b>

<p>Handle the following custom conversion specifiers:</p>

<ul>
<li><code>b</code>: the unsigned int argument is converted to binary</li>
</ul>

<pre><code>alex@ubuntu:~/c/printf$ cat main.c
#include &quot;main.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf(&quot;%b\n&quot;, 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
</code></pre>

<b>Our functions :</b>

<li><b>_get_binary</b> : get the integer from printf %b, then convert it into a binary using the _print_integer function</li>
<br></br>

<b>4. What one has not experienced, one will never understand in print</b>

<p>Handle the following conversion specifiers:</p>

<ul>
<li><code>u</code></li>
<li><code>o</code></li>
<li><code>x</code></li>
<li><code>X</code></li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>

<b>Our functions :</b>

<li><b>_get_octal</b> : get the unsigned integer from _printf %o, then convert it into an octal</li>
<li><b>_get_unsigned_decimal_integer</b> : get the unsigned integer from _printf %u</li>
<li><b>_get_unsigned_hexadecimal_lowercase</b> : get the hexadecimal from _printf %x</li>
<li><b>_get_unsigned_hexadecimal_uppercase</b> : get the hexadecimal from _printf %X</li>
<li><b>_print_unsigned_decimal_integer</b> : print unsigned integer given</li>
<li><b>_print_octal</b> : convert integer to octal and print it</li>
<li><b>_print_unsigned_hexadecimal_lowercase</b> : print unsigned hexadecimal given (in lowercase)</li>
<li><b>_print_unsigned_hexadecimal_uppercase</b> : print unsigned hexadecimal given (in uppercase)</li>
<br></br>

<b>5. Nothing in fine print is ever good news</b>

<p>Use a local buffer of 1024 chars in order to call <code>write</code> as little as possible.</p>

<b>Our code :</b>

checked
<br></br>

<b>7. My weakness is wearing too much leopard print</b>

<p>Handle the following custom conversion specifier:</p>

<ul>
<li><code>S</code> : prints the string.</li>
<li>Non printable characters (0 &lt; ASCII value &lt; 32 or &gt;= 127) are printed this way: <code>\x</code>, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)</li>
</ul>

<pre><code>alex@ubuntu:~/c/printf$ cat main.c
#include &quot;main.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf(&quot;%S\n&quot;, &quot;Best\nSchool&quot;);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
Best\x0ASchool
alex@ubuntu:~/c/printf$
</code></pre>

<b>Our function :</b>

<li><b>_get_string_conversion</b> : get the string from printf %S, then print the string</li>
<li><b>_print_string_conversion</b> : print string given</li>
<br></br>

<b>6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print</b>

<p>Handle the following conversion specifier: <code>p</code>.</p>

<ul>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>

<b>Our function :</b>

<li><b>_get_pointer<b> : get the adress from _printf %p then print the address</li>
<br></br>

<b>8. The big print gives and the small print takes away</b>

<p>Handle the following flag characters for non-custom conversion specifiers:</p>

<ul>
<li><code>+</code></li>
<li>space</li>
<li><code>#</code></li>
</ul>

<b>Our code :</b>

Not checked
<br></br>

<b>8. The big print gives and the small print takes away</b>

<p>Handle the following flag characters for non-custom conversion specifiers:</p>

<ul>
<li><code>+</code></li>
<li>space</li>
<li><code>#</code></li>
</ul>

<b>Our code :</b>

Not checked
<br></br>

<b>9. Sarcasm is lost in print</b>

<p>Handle the following length modifiers for non-custom conversion specifiers:</p>

<ul>
<li><code>l</code></li>
<li><code>h</code></li>
</ul>

<b>Our code :</b>

Not checked
<br></br>

<b>10. Print some money and give it to us for the rain forests</b>

<p>Handle the field width for non-custom conversion specifiers.</p>

<b>Our code :</b>

Not checked
<br></br>

<b>11. The negative is the equivalent of the composer's score, and the print the performance</b>

<p>Handle the precision for non-custom conversion specifiers.</p>

<b>Our code :</b>

Not checked
<br></br>

<b>12. It's depressing when you're still around and your albums are out of print</b>

<p>Handle the <code>0</code> flag character for non-custom conversion specifiers.</p>

<b>Our code :</b>

Not checked
<br></br>

<b>13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection</b>

<p>Handle the <code>-</code> flag character for non-custom conversion specifiers.</p>

<b>Our code :</b>

Not checked
<br></br>

<b>14. Print is the sharpest and the strongest weapon of our party</b>

<p>Handle the following custom conversion specifier:</p>

<ul>
<li><code>r</code> : prints the reversed string</li>
</ul>

<b>Our code :</b>

<li><b>_get_reverse</b> : get the string from _printf %r then print the reverse string</li>
<br></br>

<b>15. The flood of print has turned reading into a process of gulping rather than savoring</b>

<p>Handle the following custom conversion specifier:</p>

<ul>
<li><code>R</code>: prints the rot13&#39;ed string</li>
</ul>

<b>Our code :</b>

<li><b>_get_rot13</b> : get the string from _printf %R then print the rot13 string</li>
<br></br>

<b>16. *</b>

<p>All the above options work well together.</p>

<b>Our code :</b>

Not checked
<br></br>
