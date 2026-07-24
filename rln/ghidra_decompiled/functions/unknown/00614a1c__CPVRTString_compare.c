/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614a1c
 * Function: CPVRTString::compare
 * Signature: undefined __thiscall compare(CPVRTString * this, ulong param_1, ulong param_2, CPVRTString * param_3, ulong param_4, ulong param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::compare(unsigned long, unsigned long, CPVRTString const&, unsigned long, unsigned
   long) const */

uint __thiscall
CPVRTString::compare
          (CPVRTString *this,ulong param_1,ulong param_2,CPVRTString *param_3,ulong param_4,
          ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)(param_3 + 0x10);
  uVar2 = param_2;
  if (param_5 <= param_2) {
    uVar2 = param_5;
  }
  uVar6 = *(long *)(this + 0x10) - param_1;
  uVar1 = uVar5;
  if (uVar2 <= uVar5) {
    uVar1 = uVar2;
  }
  uVar2 = uVar6;
  if (uVar1 <= uVar6) {
    uVar2 = uVar1;
  }
  if (param_2 <= uVar6) {
    uVar6 = param_2;
  }
  if (param_5 <= uVar5) {
    uVar5 = param_5;
  }
  uVar4 = (uint)(uVar5 < uVar6);
  if (uVar6 < uVar5) {
    uVar4 = 0xffffffff;
  }
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      cVar3 = *(char *)(*(long *)(this + 8) + param_1 + uVar5);
      if (cVar3 < *(char *)(*(long *)(param_3 + 8) + uVar5)) {
        return 0xffffffff;
      }
      if (*(char *)(*(long *)(param_3 + 8) + uVar5) < cVar3) {
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar4;
}


