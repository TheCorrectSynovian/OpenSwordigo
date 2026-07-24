/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418db0
 * Function: Caver::Proto::BreakableObjectComponent::BreakableObjectComponent
 * Signature: undefined __thiscall BreakableObjectComponent(BreakableObjectComponent * this, BreakableObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::BreakableObjectComponent(Caver::Proto::BreakableObjectComponent
   const&) */

void __thiscall
Caver::Proto::BreakableObjectComponent::BreakableObjectComponent
          (BreakableObjectComponent *this,BreakableObjectComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7a60;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (BreakableObjectComponent)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x20) = 0;
  MergeFrom(this,param_1);
  return;
}


