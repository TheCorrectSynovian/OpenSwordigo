/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614354
 * Function: CPVRTString::CPVRTString
 * Signature: undefined __thiscall CPVRTString(CPVRTString * this, ulong param_1, char param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::CPVRTString(unsigned long, char) */

void __thiscall CPVRTString::CPVRTString(CPVRTString *this,ulong param_1,char param_2)

{
  void *__s;
  
                    /* catch() { ... } // from try @ 006133d8 with catch @ 00614380 */
                    /* catch() { ... } // from try @ 00613380 with catch @ 00614384 */
  *(undefined **)this = PTR_vtable_007e7538 + 0x10;
  __s = malloc(param_1 + 1);
  *(ulong *)(this + 0x10) = param_1;
  *(ulong *)(this + 0x18) = param_1 + 1;
  *(void **)(this + 8) = __s;
  memset(__s,(uint)(byte)param_2,param_1);
  *(undefined1 *)((long)__s + param_1) = 0;
  return;
}


