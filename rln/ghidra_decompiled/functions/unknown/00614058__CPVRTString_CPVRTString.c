/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614058
 * Function: CPVRTString::CPVRTString
 * Signature: undefined __thiscall CPVRTString(CPVRTString * this, char * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::CPVRTString(char const*, unsigned long) */

void __thiscall CPVRTString::CPVRTString(CPVRTString *this,char *param_1,ulong param_2)

{
  void *pvVar1;
  size_t __n;
  
                    /* catch() { ... } // from try @ 006139a8 with catch @ 00614060 */
  *(undefined **)this = PTR_vtable_007e7538 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (param_2 == 0xffffffffffffffff) {
    __n = strlen(param_1);
    pvVar1 = malloc(__n + 1);
    *(size_t *)(this + 0x10) = __n;
    *(size_t *)(this + 0x18) = __n + 1;
    memcpy(pvVar1,param_1,__n);
    *(undefined1 *)((long)pvVar1 + __n) = 0;
    if (pvVar1 != (void *)0x0) {
      *(void **)(this + 8) = pvVar1;
    }
  }
  else {
    pvVar1 = malloc(param_2 + 1);
    *(ulong *)(this + 0x10) = param_2;
    *(ulong *)(this + 0x18) = param_2 + 1;
    memcpy(pvVar1,param_1,param_2);
    *(undefined1 *)((long)pvVar1 + param_2) = 0;
    if (pvVar1 != (void *)0x0) {
                    /* catch() { ... } // from try @ 0061399c with catch @ 006140bc */
      *(void **)(this + 8) = pvVar1;
    }
  }
  return;
}


