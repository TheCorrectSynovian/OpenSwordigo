/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066a110
 * Function: FUN_0066a110
 * Signature: undefined FUN_0066a110(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066a110(void)

{
  long *in_x3;
  ulong in_x4;
  
  if (in_x4 <= *(ulong *)(*in_x3 + -0x18)) {
    FUN_00669e1c();
    return;
  }
                    /* try { // try from 0066a140 to 0076a18f has its CatchHandler @ 0066a140
                       catch(type#1 @ 00000000) { ... } // from try @ 0066a140 with catch @ 0066a140
                       catch(type#1 @ 00000000) { ... } // from try @ 0066a194 with catch @ 0066a140
                       catch(type#1 @ 00000000) { ... } // from try @ 0066a200 with catch @ 0066a140
                        */
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
               in_x4,*(ulong *)(*in_x3 + -0x18));
}


