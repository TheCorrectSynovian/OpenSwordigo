/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f930
 * Function: Caver::AudioSystem::CanPlaySoundEffect
 * Signature: undefined __thiscall CanPlaySoundEffect(AudioSystem * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::CanPlaySoundEffect(boost::intrusive_ptr<Caver::SoundEffect> const&) */

undefined8 __thiscall
Caver::AudioSystem::CanPlaySoundEffect(AudioSystem *this,intrusive_ptr *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  plVar1 = *(long **)(this + 0x28);
  plVar2 = *(long **)(this + 0x30);
  do {
    if (plVar1 == plVar2) {
      return 1;
    }
    lVar5 = *plVar1;
    plVar4 = *(long **)(lVar5 + 0x28);
    if (plVar4 != (long *)0x0) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    }
    if (plVar4 == *(long **)param_1) {
      fVar6 = *(float *)(lVar5 + 0x48);
      fVar7 = *(float *)((long)plVar4 + 0x3c);
      if ((plVar4 != (long *)0x0) &&
         (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
        (**(code **)(*plVar4 + 8))();
      }
      if (fVar6 < fVar7) {
        return 0;
      }
    }
    else if ((plVar4 != (long *)0x0) &&
            (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


