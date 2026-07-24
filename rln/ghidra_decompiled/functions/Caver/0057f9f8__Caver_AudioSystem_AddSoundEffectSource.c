/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f9f8
 * Function: Caver::AudioSystem::AddSoundEffectSource
 * Signature: undefined __thiscall AddSoundEffectSource(AudioSystem * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::AddSoundEffectSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
    */

void __thiscall Caver::AudioSystem::AddSoundEffectSource(AudioSystem *this,intrusive_ptr *param_1)

{
  AudioSystem *pAVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  if (*(long *)(lVar3 + 0x20) != 0) {
    return;
  }
  if (*(float *)(lVar3 + 0x44) <= DAT_006895f8) {
    plVar2 = *(long **)(this + 0x30);
    if (plVar2 != *(long **)(this + 0x38)) {
      *plVar2 = lVar3;
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      *(long **)(this + 0x30) = plVar2 + 1;
      goto LAB_0057fa88;
    }
    pAVar1 = this + 0x28;
  }
  else {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != *(long **)(this + 0x20)) {
      *plVar2 = lVar3;
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      *(long **)(this + 0x18) = plVar2 + 1;
      goto LAB_0057fa88;
    }
    pAVar1 = this + 0x10;
  }
  std::
  vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
  ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
                   *)pAVar1,plVar2,param_1);
LAB_0057fa88:
  *(AudioSystem **)(*(long *)param_1 + 0x20) = this;
  return;
}


