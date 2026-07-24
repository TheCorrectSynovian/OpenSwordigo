/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af6e8
 * Function: Caver::SimpleGlowComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(SimpleGlowComponent * this, SimpleGlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::InitWithComponent(Caver::SimpleGlowComponent const*) */

void __thiscall
Caver::SimpleGlowComponent::InitWithComponent
          (SimpleGlowComponent *this,SimpleGlowComponent *param_1)

{
  undefined8 uVar1;
  
  GlowComponent::InitWithComponent((GlowComponent *)this,(GlowComponent *)param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa4);
  *(undefined8 *)(this + 0xac) = *(undefined8 *)(param_1 + 0xac);
  *(undefined8 *)(this + 0xa4) = uVar1;
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  uVar1 = *(undefined8 *)(param_1 + 0xb4);
  *(undefined8 *)(this + 0xbc) = *(undefined8 *)(param_1 + 0xbc);
  *(undefined8 *)(this + 0xb4) = uVar1;
  *(undefined8 *)(this + 0xcc) = *(undefined8 *)(param_1 + 0xcc);
  return;
}


