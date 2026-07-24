/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b71c
 * Function: Caver::Proto::HeroEntityComponent::HeroEntityComponent
 * Signature: undefined __thiscall HeroEntityComponent(HeroEntityComponent * this, HeroEntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::HeroEntityComponent(Caver::Proto::HeroEntityComponent const&)
    */

void __thiscall
Caver::Proto::HeroEntityComponent::HeroEntityComponent
          (HeroEntityComponent *this,HeroEntityComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e77d8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}


