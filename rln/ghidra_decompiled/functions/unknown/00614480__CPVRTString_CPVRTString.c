/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614480
 * Function: CPVRTString::CPVRTString
 * Signature: undefined __thiscall CPVRTString(CPVRTString * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPVRTString::CPVRTString() */

void __thiscall CPVRTString::CPVRTString(CPVRTString *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  uVar2 = _UNK_0068b488;
  uVar1 = _DAT_0068b480;
  *(undefined **)this = PTR_vtable_007e7538 + 0x10;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  pvVar3 = calloc(1,1);
  *(void **)(this + 8) = pvVar3;
  return;
}


