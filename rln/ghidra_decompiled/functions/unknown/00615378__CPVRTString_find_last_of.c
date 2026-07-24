/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615378
 * Function: CPVRTString::find_last_of
 * Signature: undefined __thiscall find_last_of(CPVRTString * this, char * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_last_of(char const*, unsigned long) const */

ulong __thiscall CPVRTString::find_last_of(CPVRTString *this,char *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char cVar4;
  
  uVar2 = *(ulong *)(this + 0x10);
  uVar1 = (uVar2 - param_2) - 1;
                    /* try { // try from 0061538c to 007153f3 has its CatchHandler @ 0061538c
                       catch() { ... } // from try @ 0061538c with catch @ 0061538c
                       catch() { ... } // from try @ 00615b2c with catch @ 0061538c
                       catch() { ... } // from try @ 00615cb0 with catch @ 0061538c
                       catch() { ... } // from try @ 00615e1c with catch @ 0061538c */
  if (uVar1 < uVar2) {
    do {
      if (*param_1 != '\0') {
        pcVar3 = param_1;
        cVar4 = *param_1;
        do {
          pcVar3 = pcVar3 + 1;
          if (*(char *)(*(long *)(this + 8) + uVar1) == cVar4) {
            return uVar1;
          }
          cVar4 = *pcVar3;
        } while (cVar4 != '\0');
      }
      uVar1 = uVar1 - 1;
    } while (uVar1 < uVar2);
  }
  return 0xffffffffffffffff;
}


