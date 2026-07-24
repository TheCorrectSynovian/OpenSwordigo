/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615428
 * Function: CPVRTString::find_last_of
 * Signature: undefined __thiscall find_last_of(CPVRTString * this, CPVRTString * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_last_of(CPVRTString const&, unsigned long) const */

ulong __thiscall CPVRTString::find_last_of(CPVRTString *this,CPVRTString *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x10);
                    /* try { // try from 00615434 to 007154f3 has its CatchHandler @ 00615dc0 */
  uVar1 = (uVar2 - param_2) - 1;
  if (uVar1 < uVar2) {
    do {
      if (*(ulong *)(param_1 + 0x10) != 0) {
        uVar3 = 0;
        do {
          if (*(char *)(*(long *)(this + 8) + uVar1) != *(char *)(*(long *)(param_1 + 8) + uVar3)) {
            return uVar1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulong *)(param_1 + 0x10));
      }
      uVar1 = uVar1 - 1;
    } while (uVar1 < uVar2);
  }
  return 0xffffffffffffffff;
}


