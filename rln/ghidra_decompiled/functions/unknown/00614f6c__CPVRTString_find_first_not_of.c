/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614f6c
 * Function: CPVRTString::find_first_not_of
 * Signature: undefined __thiscall find_first_not_of(CPVRTString * this, char * param_1, ulong param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_first_not_of(char const*, unsigned long, unsigned long) const */

ulong __thiscall
CPVRTString::find_first_not_of(CPVRTString *this,char *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar1 = param_2;
  while( true ) {
    if (*(ulong *)(this + 0x10) <= uVar1) {
      return 0xffffffffffffffff;
    }
    if (param_3 == 0) break;
    bVar2 = false;
    pcVar3 = param_1;
    uVar4 = param_3;
    do {
      if (bVar2) {
        bVar2 = true;
      }
      else {
        bVar2 = *(char *)(*(long *)(this + 8) + uVar1) == *pcVar3;
      }
      uVar4 = uVar4 - 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar4 != 0);
    if (!bVar2) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  }
  return param_2;
}


