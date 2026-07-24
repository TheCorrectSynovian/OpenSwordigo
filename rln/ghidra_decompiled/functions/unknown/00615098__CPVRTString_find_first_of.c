/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615098
 * Function: CPVRTString::find_first_of
 * Signature: undefined __thiscall find_first_of(CPVRTString * this, char * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_first_of(char const*, unsigned long) const */

ulong __thiscall CPVRTString::find_first_of(CPVRTString *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  char cVar2;
  
  if (param_2 < *(ulong *)(this + 0x10)) {
    do {
      if (*param_1 != '\0') {
        pcVar1 = param_1;
        cVar2 = *param_1;
        do {
          pcVar1 = pcVar1 + 1;
          if (*(char *)(*(long *)(this + 8) + param_2) == cVar2) {
            return param_2;
          }
          cVar2 = *pcVar1;
        } while (cVar2 != '\0');
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(ulong *)(this + 0x10));
  }
  return 0xffffffffffffffff;
}


