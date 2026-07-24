/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004116f0
 * Function: Caver::Proto::SoundEffectComponent::Swap
 * Signature: undefined __thiscall Swap(SoundEffectComponent * this, SoundEffectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffectComponent::Swap(Caver::Proto::SoundEffectComponent*) */

void __thiscall
Caver::Proto::SoundEffectComponent::Swap(SoundEffectComponent *this,SoundEffectComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 00411700 to 005117b7 has its CatchHandler @ 0041163c */
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x1c);
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x1c) = uVar2;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


