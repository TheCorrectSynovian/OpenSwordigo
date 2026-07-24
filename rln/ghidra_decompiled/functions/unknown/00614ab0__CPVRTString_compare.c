/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614ab0
 * Function: CPVRTString::compare
 * Signature: undefined __thiscall compare(CPVRTString * this, ulong param_1, ulong param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::compare(unsigned long, unsigned long, char const*) const */

uint __thiscall CPVRTString::compare(CPVRTString *this,ulong param_1,ulong param_2,char *param_3)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *(long *)(this + 0x10) - param_1;
  uVar3 = strlen(param_3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00614b7c with catch @ 00614ae4
                       catch(type#1 @ 00000000) { ... } // from try @ 00614bfc with catch @ 00614ae4
                        */
  if (param_2 <= uVar3) {
    uVar3 = param_2;
  }
  uVar1 = uVar5;
  if (uVar3 <= uVar5) {
    uVar1 = uVar3;
  }
  if (param_2 <= uVar5) {
    uVar5 = param_2;
  }
  uVar4 = (uint)(uVar3 < uVar5);
  if (uVar5 < uVar3) {
    uVar4 = 0xffffffff;
  }
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      cVar2 = *(char *)(*(long *)(this + 8) + param_1 + uVar3);
      if (cVar2 < param_3[uVar3]) {
                    /* try { // try from 00614b3c to 00714b47 has its CatchHandler @ 00614bd8 */
        return 0xffffffff;
      }
      if (param_3[uVar3] < cVar2) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return uVar4;
}


