/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006050bc
 * Function: CPVRTModelPOD::DestroyImpl
 * Signature: undefined __thiscall DestroyImpl(CPVRTModelPOD * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::DestroyImpl() */

void __thiscall CPVRTModelPOD::DestroyImpl(CPVRTModelPOD *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x80);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 0x10));
      pvVar1 = *(void **)(this + 0x80);
    }
    if (*(void **)((long)pvVar1 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 0x18));
      pvVar1 = *(void **)(this + 0x80);
    }
    if (*(void **)((long)pvVar1 + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 0x20));
      pvVar1 = *(void **)(this + 0x80);
    }
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    *(undefined8 *)(this + 0x80) = 0;
  }
                    /* try { // try from 00605120 to 00705143 has its CatchHandler @ 0060567c */
  return;
}


