/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e6cc
 * Function: __cxa_deleted_virtual
 * Signature: undefined __cxa_deleted_virtual(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_deleted_virtual(void)

{
  write(2,"deleted virtual method called\n",0x1e);
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


