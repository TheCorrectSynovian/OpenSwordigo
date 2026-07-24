/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066dd68
 * Function: FUN_0066dd68
 * Signature: undefined FUN_0066dd68(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066dd68(void)

{
  long *in_x3;
  ulong in_x4;
  
  if (in_x4 <= *(ulong *)(*in_x3 + -0x18)) {
    FUN_0066da58();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
               in_x4,*(ulong *)(*in_x3 + -0x18));
}


