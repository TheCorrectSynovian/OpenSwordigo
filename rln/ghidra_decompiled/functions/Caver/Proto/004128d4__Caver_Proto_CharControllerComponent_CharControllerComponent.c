/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004128d4
 * Function: Caver::Proto::CharControllerComponent::CharControllerComponent
 * Signature: undefined __thiscall CharControllerComponent(CharControllerComponent * this, CharControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::CharControllerComponent(Caver::Proto::CharControllerComponent
   const&) */

void __thiscall
Caver::Proto::CharControllerComponent::CharControllerComponent
          (CharControllerComponent *this,CharControllerComponent *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0068b470;
  puVar1 = PTR_vtable_007e6f20 + 0x10;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(CharControllerComponent **)(this + 0x48) = this + 0x58;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x50) = uVar2;
  *(undefined8 *)(this + 0x68) = 0;
  MergeFrom(this,param_1);
  return;
}


