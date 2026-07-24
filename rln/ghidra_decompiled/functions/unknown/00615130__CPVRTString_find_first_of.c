/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615130
 * Function: CPVRTString::find_first_of
 * Signature: undefined __thiscall find_first_of(CPVRTString * this, CPVRTString * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_first_of(CPVRTString const&, unsigned long) const */

ulong __thiscall CPVRTString::find_first_of(CPVRTString *this,CPVRTString *param_1,ulong param_2)

{
  ulong uVar1;
  
                    /* try { // try from 00615130 to 00715137 has its CatchHandler @ 00615168 */
                    /* try { // try from 00615138 to 0071516f has its CatchHandler @ 00615118 */
  if (param_2 < *(ulong *)(this + 0x10)) {
    do {
      if (*(ulong *)(param_1 + 0x10) != 0) {
        uVar1 = 0;
        do {
          if (*(char *)(*(long *)(this + 8) + param_2) == *(char *)(*(long *)(param_1 + 8) + uVar1))
          {
            return param_2;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(ulong *)(param_1 + 0x10));
      }
                    /* catch() { ... } // from try @ 00615130 with catch @ 00615168 */
      param_2 = param_2 + 1;
                    /* try { // try from 00615170 to 00715177 has its CatchHandler @ 00615184 */
    } while (param_2 < *(ulong *)(this + 0x10));
  }
  return 0xffffffffffffffff;
}


