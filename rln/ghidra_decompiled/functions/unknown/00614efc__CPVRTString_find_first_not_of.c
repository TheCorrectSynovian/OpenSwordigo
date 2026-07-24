/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614efc
 * Function: CPVRTString::find_first_not_of
 * Signature: undefined __thiscall find_first_not_of(CPVRTString * this, char * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_first_not_of(char const*, unsigned long) const */

ulong __thiscall CPVRTString::find_first_not_of(CPVRTString *this,char *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_2 < *(ulong *)(this + 0x10)) {
    uVar2 = param_2;
    do {
      if (*param_1 == '\0') {
        return param_2;
      }
      bVar1 = false;
      pcVar3 = param_1;
      cVar4 = *param_1;
      do {
        pcVar3 = pcVar3 + 1;
        if (bVar1) {
          bVar1 = true;
        }
        else {
          bVar1 = *(char *)(*(long *)(this + 8) + uVar2) == cVar4;
        }
        cVar4 = *pcVar3;
      } while (cVar4 != '\0');
      if (!bVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(this + 0x10));
  }
  return 0xffffffffffffffff;
}


