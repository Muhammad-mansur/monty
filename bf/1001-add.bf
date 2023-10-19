++++++++++               (Set the first cell to 10 for the loop)
[>+++++<-]               (Loop to read the first digit and subtract 1)
>---                     (Set the second cell to 3 to prepare for input)

>,>,                     (Read two digits and store them in cell 0 and cell 1)
<                        (Move to cell 0)

[->+<]                   (Move the value from cell 1 to cell 0)
>                        (Move to cell 1)

<                        (Move to cell 0)

[->>-<<]                 (Move the value from cell 0 back to cell 1 and set cell 0 to 0)
>>.                      (Move to cell 1 and print the result)

