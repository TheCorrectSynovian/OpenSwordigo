/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006149a0
 * Function: CPVRTString::compare
 * Signature: undefined __thiscall compare(CPVRTString * this, ulong param_1, ulong param_2, CPVRTString * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::compare(unsigned long, unsigned long, CPVRTString const&) const */

uint __thiscall
CPVRTString::compare(CPVRTString *this,ulong param_1,ulong param_2,CPVRTString *param_3)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
                    /* try { // try from 006149a8 to 007149fb has its CatchHandler @ 006148e8 */
  uVar5 = *(long *)(this + 0x10) - param_1;
  uVar4 = *(ulong *)(param_3 + 0x10);
  if (param_2 <= *(ulong *)(param_3 + 0x10)) {
    uVar4 = param_2;
  }
  uVar1 = uVar5;
  if (uVar4 <= uVar5) {
    uVar1 = uVar4;
  }
  if (param_2 <= uVar5) {
    uVar5 = param_2;
  }
  uVar3 = (uint)(uVar4 < uVar5);
  if (uVar5 < uVar4) {
    uVar3 = 0xffffffff;
  }
  if (uVar1 != 0) {
                    /* catch() { ... } // from try @ 00614920 with catch @ 006149dc
                       catch() { ... } // from try @ 0061499c with catch @ 006149dc */
                    /* catch() { ... } // from try @ 0061495c with catch @ 006149e0 */
    uVar4 = 0;
                    /* catch() { ... } // from try @ 0061498c with catch @ 006149e4 */
    do {
      cVar2 = *(char *)(*(long *)(this + 8) + param_1 + uVar4);
      if (cVar2 < *(char *)(*(long *)(param_3 + 8) + uVar4)) {
        return 0xffffffff;
      }
      if (*(char *)(*(long *)(param_3 + 8) + uVar4) < cVar2) {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}


