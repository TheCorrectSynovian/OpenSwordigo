/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615064
 * Function: CPVRTString::find_first_of
 * Signature: undefined __thiscall find_first_of(CPVRTString * this, char param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_first_of(char, unsigned long) const */

ulong __thiscall CPVRTString::find_first_of(CPVRTString *this,char param_1,ulong param_2)

{
  if (param_2 < *(ulong *)(this + 0x10)) {
    do {
      if (*(char *)(*(long *)(this + 8) + param_2) == param_1) {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(ulong *)(this + 0x10));
  }
  return 0xffffffffffffffff;
}


