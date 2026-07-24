/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e6ac
 * Function: __cxa_pure_virtual
 * Signature: undefined __cxa_pure_virtual(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_pure_virtual(void)

{
                    /* try { // try from 0061e6b8 to 0071ec37 has its CatchHandler @ 0061e2f8 */
  write(2,"pure virtual method called\n",0x1b);
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


