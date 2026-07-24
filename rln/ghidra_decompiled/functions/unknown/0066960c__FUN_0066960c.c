/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066960c
 * Function: FUN_0066960c
 * Signature: undefined FUN_0066960c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066960c(long *param_1)

{
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 0066930c with catch @ 0066960c */
                    /* catch() { ... } // from try @ 006692d8 with catch @ 00669614 */
  uVar1 = *(ulong *)(*param_1 + -0x18) - 1;
  if (uVar1 <= *(ulong *)(*param_1 + -0x18)) {
    FUN_00668cb8(param_1,uVar1,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase");
}


