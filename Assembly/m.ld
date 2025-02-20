MEMORY
{
    RAM (rwx) : ORIGIN = 0x80000000, LENGTH = 4K
}

SECTIONS
{
   .text : {
     *(.text*)
   } > RAM
  
}
