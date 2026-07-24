/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a8b4
 * Function: Caver::SoundEffectComponent::SoundEffectSourceDidFinishPlaying
 * Signature: undefined __thiscall SoundEffectSourceDidFinishPlaying(SoundEffectComponent * this, SoundEffectSource * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::SoundEffectComponent::SoundEffectSourceDidFinishPlaying(Caver::SoundEffectSource*) */

void __thiscall
Caver::SoundEffectComponent::SoundEffectSourceDidFinishPlaying
          (SoundEffectComponent *this,SoundEffectSource *param_1)

{
  int iVar1;
  
  if (((*(SoundEffectSource **)(this + 0x20) == param_1) &&
      (*(undefined8 *)(this + 0x20) = 0, param_1 != (SoundEffectSource *)0x0)) &&
     (iVar1 = *(int *)(param_1 + 8), *(int *)(param_1 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0033a8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))(param_1);
    return;
  }
  return;
}


