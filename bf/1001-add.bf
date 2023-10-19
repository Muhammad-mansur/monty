>,           (Read the first digit and store it in cell 0)
>,           (Read the second digit and store it in cell 1)
<            (Move to cell 0)

[->+<]       (Move the value from cell 1 to cell 0)
++++++++     (Add 8 to cell 0 to check for carry)

[            (Start of loop to subtract 1 from cell 0 for each carry)
 >------     (Subtract 6 from cell 0)
<-           (Move back to cell 0)
]

>.           (Print the result)

