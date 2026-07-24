/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006152b4
 * Function: CPVRTString::find_last_not_of
 * Signature: undefined __thiscall find_last_not_of(CPVRTString * this, CPVRTString * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_last_not_of(CPVRTString const&, unsigned long) const */

ulong __thiscall CPVRTString::find_last_not_of(CPVRTString *this,CPVRTString *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(this + 0x10);
  uVar2 = (uVar3 - param_2) - 1;
  if (uVar2 < uVar3) {
    uVar4 = uVar2;
    do {
      if (*(long *)(param_1 + 0x10) == 0) {
        return uVar2;
      }
      bVar1 = false;
      pcVar5 = *(char **)(param_1 + 8);
      lVar6 = *(long *)(param_1 + 0x10);
      do {
        if (bVar1) {
          bVar1 = true;
        }
        else {
          bVar1 = *(char *)(*(long *)(this + 8) + uVar4) != *pcVar5;
        }
        lVar6 = lVar6 + -1;
        pcVar5 = pcVar5 + 1;
      } while (lVar6 != 0);
      if (!bVar1) {
        return uVar4;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < uVar3);
  }
  return 0xffffffffffffffff;
}


