/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061523c
 * Function: CPVRTString::find_last_not_of
 * Signature: undefined __thiscall find_last_not_of(CPVRTString * this, char * param_1, ulong param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_last_not_of(char const*, unsigned long, unsigned long) const */

ulong __thiscall
CPVRTString::find_last_not_of(CPVRTString *this,char *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  
  uVar2 = (*(ulong *)(this + 0x10) - param_2) - 1;
  uVar3 = uVar2;
  while( true ) {
    if (*(ulong *)(this + 0x10) <= uVar3) {
      return 0xffffffffffffffff;
    }
    if (param_3 == 0) break;
    bVar1 = false;
    pcVar4 = param_1;
    uVar5 = param_3;
    do {
      if (bVar1) {
        bVar1 = true;
      }
      else {
        bVar1 = *(char *)(*(long *)(this + 8) + uVar3) != *pcVar4;
      }
      uVar5 = uVar5 - 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar5 != 0);
    if (!bVar1) {
      return uVar3;
    }
    uVar3 = uVar3 - 1;
  }
  return uVar2;
}


