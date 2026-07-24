/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614b5c
 * Function: CPVRTString::compare
 * Signature: undefined __thiscall compare(CPVRTString * this, ulong param_1, ulong param_2, char * param_3, ulong param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::compare(unsigned long, unsigned long, char const*, unsigned long) const */

uint __thiscall
CPVRTString::compare(CPVRTString *this,ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
                    /* try { // try from 00614b70 to 00714b7b has its CatchHandler @ 00614bd4 */
                    /* try { // try from 00614b7c to 00714bf3 has its CatchHandler @ 00614ae4 */
  uVar6 = *(long *)(this + 0x10) - param_1;
  uVar4 = strlen(param_3);
  uVar2 = param_2;
  if (param_4 <= param_2) {
    uVar2 = param_4;
  }
  uVar1 = uVar4;
  if (uVar2 <= uVar4) {
    uVar1 = uVar2;
  }
  uVar2 = uVar6;
  if (uVar1 <= uVar6) {
    uVar2 = uVar1;
  }
  if (param_2 <= uVar6) {
    uVar6 = param_2;
  }
  if (param_4 <= uVar4) {
    uVar4 = param_4;
  }
  uVar5 = (uint)(uVar4 < uVar6);
  if (uVar6 < uVar4) {
    uVar5 = 0xffffffff;
  }
  if (uVar2 != 0) {
    uVar6 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00614b70 with catch @ 00614bd4
                        */
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00614b3c with catch @ 00614bd8
                        */
      cVar3 = *(char *)(*(long *)(this + 8) + param_1 + uVar6);
      if (cVar3 < param_3[uVar6]) {
                    /* try { // try from 00614bfc to 00714c07 has its CatchHandler @ 00614ae4 */
                    /* catch() { ... } // from try @ 00614e00 with catch @ 00614c08
                       catch() { ... } // from try @ 00615020 with catch @ 00614c08 */
        return 0xffffffff;
      }
      if (param_3[uVar6] < cVar3) {
        return 1;
      }
      uVar6 = uVar6 + 1;
                    /* try { // try from 00614bf4 to 00714bfb has its CatchHandler @ 00614c04 */
    } while (uVar6 < uVar2);
  }
  return uVar5;
}


