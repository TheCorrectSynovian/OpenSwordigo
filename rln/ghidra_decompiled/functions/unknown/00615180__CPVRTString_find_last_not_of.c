/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615180
 * Function: CPVRTString::find_last_not_of
 * Signature: undefined __thiscall find_last_not_of(CPVRTString * this, char param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_last_not_of(char, unsigned long) const */

ulong __thiscall CPVRTString::find_last_not_of(CPVRTString *this,char param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
                    /* try { // try from 00615180 to 00715183 has its CatchHandler @ 00615194 */
                    /* catch() { ... } // from try @ 00615170 with catch @ 00615184 */
  uVar2 = *(ulong *)(this + 0x10);
  uVar1 = (uVar2 - param_2) - 1;
                    /* catch() { ... } // from try @ 00615180 with catch @ 00615194 */
  if (uVar2 <= uVar1) {
                    /* try { // try from 006151c0 to 007151c7 has its CatchHandler @ 006151e4 */
    return 0xffffffffffffffff;
  }
                    /* try { // try from 00615198 to 0071519b has its CatchHandler @ 006151a4 */
  do {
                    /* try { // try from 0061519c to 007151a7 has its CatchHandler @ 00615118 */
                    /* catch() { ... } // from try @ 00615198 with catch @ 006151a4 */
    if (*(char *)(*(long *)(this + 8) + uVar1) != param_1) {
      return uVar1;
    }
    uVar1 = uVar1 - 1;
                    /* catch() { ... } // from try @ 006151c8 with catch @ 006151ac */
  } while (uVar1 < uVar2);
  return 0xffffffffffffffff;
}


