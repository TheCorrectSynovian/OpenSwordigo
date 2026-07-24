/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057fa9c
 * Function: Caver::AudioSystem::CancelDelayedSoundEffectSource
 * Signature: undefined __thiscall CancelDelayedSoundEffectSource(AudioSystem * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::CancelDelayedSoundEffectSource(boost::intrusive_ptr<Caver::SoundEffectSource>
   const&) */

void __thiscall
Caver::AudioSystem::CancelDelayedSoundEffectSource(AudioSystem *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar6;
  long *plVar5;
  
  plVar2 = *(long **)(this + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0057f864 with catch @ 0057fab4
                        */
  if (*(long **)(this + 0x10) != plVar2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0057f7f8 with catch @ 0057fac0
                        */
    plVar4 = *(long **)(this + 0x10);
    do {
      plVar5 = plVar4 + 1;
      if (*plVar4 == *(long *)param_1) {
        if ((plVar2 + -1 != plVar4) && (0 < (long)plVar2 - (long)(plVar4 + 1))) {
          lVar6 = ((ulong)((long)plVar2 - (long)(plVar4 + 1)) >> 3) + 1;
          do {
            lVar3 = plVar4[1];
                    /* try { // try from 0057fb08 to 0067fb13 has its CatchHandler @ 0057f738 */
            if (lVar3 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0057fae0 with catch @ 0057fb10
                        */
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            }
            plVar2 = (long *)*plVar4;
            *plVar4 = lVar3;
            if ((plVar2 != (long *)0x0) &&
               (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
              (**(code **)(*plVar2 + 8))();
            }
            lVar6 = lVar6 + -1;
            plVar4 = plVar4 + 1;
          } while (1 < lVar6);
          plVar2 = *(long **)(this + 0x18);
        }
        *(long **)(this + 0x18) = plVar2 + -1;
        plVar2 = (long *)plVar2[-1];
        if (plVar2 == (long *)0x0) {
          return;
        }
        iVar1 = (int)plVar2[1] + -1;
        *(int *)(plVar2 + 1) = iVar1;
        if (iVar1 != 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0057fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
      plVar4 = plVar5;
    } while (plVar2 != plVar5);
  }
  return;
}


