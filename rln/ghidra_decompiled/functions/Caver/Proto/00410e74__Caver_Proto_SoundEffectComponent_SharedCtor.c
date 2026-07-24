/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410e74
 * Function: Caver::Proto::SoundEffectComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::SoundEffectComponent::SharedCtor() */

void __thiscall Caver::Proto::SoundEffectComponent::SharedCtor(SoundEffectComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = _DAT_00683948;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_name__007e7518;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00410dfc with catch @ 00410e84
                        */
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  return;
}


