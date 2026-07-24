/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054a9f4
 * Function: Caver::ModelInstance::ModelInstance
 * Signature: undefined __thiscall ModelInstance(ModelInstance * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelInstance::ModelInstance() */

void __thiscall Caver::ModelInstance::ModelInstance(ModelInstance *this)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (ModelInstance)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(long *)(this + 0x3c) = auVar1._8_8_;
  *(long *)(this + 0x34) = auVar1._0_8_;
  *(undefined2 *)(this + 0x44) = 1;
  return;
}


