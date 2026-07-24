/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614fe0
 * Function: CPVRTString::find_first_not_of
 * Signature: undefined __thiscall find_first_not_of(CPVRTString * this, CPVRTString * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_first_not_of(CPVRTString const&, unsigned long) const */

ulong __thiscall
CPVRTString::find_first_not_of(CPVRTString *this,CPVRTString *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  
  if (param_2 < *(ulong *)(this + 0x10)) {
    uVar2 = param_2;
    do {
      if (*(long *)(param_1 + 0x10) == 0) {
        return param_2;
      }
      bVar1 = false;
      pcVar3 = *(char **)(param_1 + 8);
      lVar4 = *(long *)(param_1 + 0x10);
      do {
        if (bVar1) {
          bVar1 = true;
        }
        else {
          bVar1 = *(char *)(*(long *)(this + 8) + uVar2) == *pcVar3;
                    /* try { // try from 00615020 to 0071502b has its CatchHandler @ 00614c08 */
        }
        lVar4 = lVar4 + -1;
                    /* catch() { ... } // from try @ 00614e38 with catch @ 00615028 */
        pcVar3 = pcVar3 + 1;
                    /* catch() { ... } // from try @ 00615040 with catch @ 0061502c */
      } while (lVar4 != 0);
      if (!bVar1) {
                    /* catch() { ... } // from try @ 0061503c with catch @ 00615050 */
        return uVar2;
      }
      uVar2 = uVar2 + 1;
                    /* try { // try from 0061503c to 0071503f has its CatchHandler @ 00615050 */
    } while (uVar2 < *(ulong *)(this + 0x10));
  }
                    /* try { // try from 00615040 to 00715063 has its CatchHandler @ 0061502c */
  return 0xffffffffffffffff;
}


