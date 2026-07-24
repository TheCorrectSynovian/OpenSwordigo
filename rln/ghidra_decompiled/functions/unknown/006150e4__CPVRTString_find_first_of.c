/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006150e4
 * Function: CPVRTString::find_first_of
 * Signature: undefined __thiscall find_first_of(CPVRTString * this, char * param_1, ulong param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_first_of(char const*, unsigned long, unsigned long) const */

ulong __thiscall
CPVRTString::find_first_of(CPVRTString *this,char *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  do {
    if (*(ulong *)(this + 0x10) <= param_2) {
      return 0xffffffffffffffff;
    }
    if (param_3 != 0) {
      uVar1 = 0;
      do {
        if (*(char *)(*(long *)(this + 8) + param_2) == param_1[uVar1]) {
          return param_2;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_3);
    }
                    /* catch() { ... } // from try @ 00615138 with catch @ 00615118
                       catch() { ... } // from try @ 0061519c with catch @ 00615118 */
    param_2 = param_2 + 1;
  } while( true );
}


