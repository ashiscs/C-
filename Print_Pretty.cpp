cout<<hex<<left<<showbase<<nouppercase;
cout<<(long long) A<<endl;

cout<<dec<<right<<setw(15)<<setfill('_')<<showpos<<fixed<<setprecision(2);
cout<<B<<endl;

cout<<scientific<<uppercase<<noshowpos<<setprecision(9);
cout<<C<<endl;

/* OUTPUT

1  
100.345 2006.008 2331.41592653498

0x64             
_______+2006.01  
2.331415927E+03

*/

/*

MANIPULATORS

hex = outputting the number in hexadecimal format.
left = aligning the number to the left.
showbase = which will make sure hexadecimal has a '0X' at the beginning
nouppercase = converts all alphabetic hexadecimal values to lowercase

dec = switch back to decimal number again
right = aligns value to the right.
setw(width) = sets a required fixed width.
setfill('desired symbol') = if spaces left fill it with this desired symbol.
showpos = to print the plus sign.
fixed = ensures whole number is printed(without scientific notation).
setprecision = sets the number of decimal places.

scientific = prints output in scientific format.
uppercase = ensures 'E' in the scientific manipulation is maintained.
noshowpos = get rid of plus sign.
setprecision = sets the number of decimal places.


*/
