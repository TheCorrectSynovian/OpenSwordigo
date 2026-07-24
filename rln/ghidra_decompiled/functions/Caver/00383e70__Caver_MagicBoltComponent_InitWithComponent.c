/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00383e70
 * Function: Caver::MagicBoltComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(MagicBoltComponent * this, MagicBoltComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::InitWithComponent(Caver::MagicBoltComponent const*) */

void __thiscall
Caver::MagicBoltComponent::InitWithComponent(MagicBoltComponent *this,MagicBoltComponent *param_1)

{
  undefined8 uVar1;
  
  SpellComponent::InitWithComponent((SpellComponent *)this,(SpellComponent *)param_1);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(this + 0x110) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(this + 0x108) = uVar1;
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  return;
}


