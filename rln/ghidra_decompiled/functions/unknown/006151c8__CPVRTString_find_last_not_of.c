/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006151c8
 * Function: CPVRTString::find_last_not_of
 * Signature: undefined __thiscall find_last_not_of(CPVRTString * this, char * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_last_not_of(char const*, unsigned long) const */

ulong __thiscall CPVRTString::find_last_not_of(CPVRTString *this,char *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char cVar6;
  
                    /* try { // try from 006151c8 to 007151f7 has its CatchHandler @ 006151ac */
  uVar3 = *(ulong *)(this + 0x10);
  uVar2 = (uVar3 - param_2) - 1;
  if (uVar2 < uVar3) {
                    /* catch() { ... } // from try @ 006151c0 with catch @ 006151e4 */
    uVar4 = uVar2;
    do {
      if (*param_1 == '\0') {
        return uVar2;
      }
      bVar1 = false;
      pcVar5 = param_1;
      cVar6 = *param_1;
      do {
        pcVar5 = pcVar5 + 1;
        if (bVar1) {
          bVar1 = true;
        }
        else {
          bVar1 = *(char *)(*(long *)(this + 8) + uVar4) != cVar6;
        }
        cVar6 = *pcVar5;
      } while (cVar6 != '\0');
      if (!bVar1) {
        return uVar4;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < uVar3);
  }
  return 0xffffffffffffffff;
}


