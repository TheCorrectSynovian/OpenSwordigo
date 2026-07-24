/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006143c0
 * Function: CPVRTString::assign
 * Signature: undefined __thiscall assign(CPVRTString * this, ulong param_1, char param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::assign(unsigned long, char) */

CPVRTString * __thiscall CPVRTString::assign(CPVRTString *this,ulong param_1,char param_2)

{
  void *__ptr;
  
                    /* catch() { ... } // from try @ 0061332c with catch @ 006143d4 */
  __ptr = *(void **)(this + 8);
  if (*(ulong *)(this + 0x18) <= param_1) {
    free(__ptr);
    __ptr = malloc(param_1 + 1);
    *(void **)(this + 8) = __ptr;
    *(ulong *)(this + 0x18) = param_1 + 1;
  }
  *(ulong *)(this + 0x10) = param_1;
  memset(__ptr,(uint)(byte)param_2,param_1);
  *(undefined1 *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = 0;
  return this;
}


