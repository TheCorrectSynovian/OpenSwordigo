/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615330
 * Function: CPVRTString::find_last_of
 * Signature: undefined __thiscall find_last_of(CPVRTString * this, char param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_last_of(char, unsigned long) const */

ulong __thiscall CPVRTString::find_last_of(CPVRTString *this,char param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x10);
  uVar1 = (uVar2 - param_2) - 1;
  if (uVar2 <= uVar1) {
    return 0xffffffffffffffff;
  }
  do {
    if (*(char *)(*(long *)(this + 8) + uVar1) == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 - 1;
  } while (uVar1 < uVar2);
  return 0xffffffffffffffff;
}


