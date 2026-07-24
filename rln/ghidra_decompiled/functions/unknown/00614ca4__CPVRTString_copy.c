/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614ca4
 * Function: CPVRTString::copy
 * Signature: undefined __thiscall copy(CPVRTString * this, char * param_1, ulong param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::copy(char*, unsigned long, unsigned long) const */

ulong __thiscall CPVRTString::copy(CPVRTString *this,char *param_1,ulong param_2,ulong param_3)

{
  size_t __n;
  ulong uVar1;
  
                    /* try { // try from 00614cb8 to 00714cdf has its CatchHandler @ 00614e9c */
  __n = param_2;
  if (*(long *)(this + 0x10) - param_3 <= param_2) {
    __n = *(long *)(this + 0x10) - param_3;
  }
  memcpy(param_1,(void *)(*(long *)(this + 8) + param_3),__n);
  uVar1 = 0;
  if (param_1 != (char *)0x0) {
    uVar1 = param_2;
  }
  return uVar1;
}


