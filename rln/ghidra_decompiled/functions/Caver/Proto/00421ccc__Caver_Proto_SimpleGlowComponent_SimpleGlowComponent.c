/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00421ccc
 * Function: Caver::Proto::SimpleGlowComponent::SimpleGlowComponent
 * Signature: undefined __thiscall SimpleGlowComponent(SimpleGlowComponent * this, SimpleGlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::SimpleGlowComponent(Caver::Proto::SimpleGlowComponent const&)
    */

void __thiscall
Caver::Proto::SimpleGlowComponent::SimpleGlowComponent
          (SimpleGlowComponent *this,SimpleGlowComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e71b0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x38) = 0;
  MergeFrom(this,param_1);
  return;
}


