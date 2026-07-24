/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006153cc
 * Function: CPVRTString::find_last_of
 * Signature: undefined __thiscall find_last_of(CPVRTString * this, char * param_1, ulong param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::find_last_of(char const*, unsigned long, unsigned long) const */

ulong __thiscall
CPVRTString::find_last_of(CPVRTString *this,char *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10) - param_2;
  do {
    do {
      uVar1 = uVar1 - 1;
      if (*(ulong *)(this + 0x10) <= uVar1) {
        return 0xffffffffffffffff;
      }
                    /* try { // try from 006153f4 to 00715407 has its CatchHandler @ 00615db0 */
    } while (param_3 == 0);
    uVar2 = 0;
    do {
                    /* try { // try from 00615408 to 0071541b has its CatchHandler @ 00615d40 */
      if (*(char *)(*(long *)(this + 8) + uVar1) != param_1[uVar2]) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  } while( true );
}


