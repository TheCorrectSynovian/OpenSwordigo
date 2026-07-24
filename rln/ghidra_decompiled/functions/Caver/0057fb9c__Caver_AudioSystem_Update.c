/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057fb9c
 * Function: Caver::AudioSystem::Update
 * Signature: undefined __thiscall Update(AudioSystem * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::Update(float) */

void __thiscall Caver::AudioSystem::Update(AudioSystem *this,float param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  AudioSystem *pAVar12;
  float fVar13;
  float fVar14;
  SoundEffectSource *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (*(MusicPlayer **)(this + 0x68) != (MusicPlayer *)0x0) {
    MusicPlayer::Update(*(MusicPlayer **)(this + 0x68),param_1);
  }
  plVar10 = *(long **)(this + 0x10);
  if (*(long **)(this + 0x18) != plVar10) {
    do {
      local_80 = (SoundEffectSource *)*plVar10;
      if (local_80 != (SoundEffectSource *)0x0) {
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      }
      fVar13 = *(float *)(local_80 + 0x44);
      *(float *)(local_80 + 0x44) = fVar13 - param_1;
      if (0.0 <= fVar13 - param_1) {
        plVar10 = plVar10 + 1;
      }
      else {
        plVar11 = *(long **)(local_80 + 0x28);
        *(undefined4 *)(local_80 + 0x44) = 0;
        if (plVar11 != (long *)0x0) {
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        }
        plVar9 = *(long **)(this + 0x30);
        for (plVar6 = *(long **)(this + 0x28); plVar6 != plVar9; plVar6 = plVar6 + 1) {
          lVar7 = *plVar6;
          plVar5 = *(long **)(lVar7 + 0x28);
          if (plVar5 != (long *)0x0) {
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          }
          if (plVar5 == plVar11) {
            fVar13 = *(float *)(lVar7 + 0x48);
            fVar14 = *(float *)((long)plVar11 + 0x3c);
            if ((plVar5 != (long *)0x0) &&
               (iVar2 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar2, iVar2 == 0)) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
            if (fVar13 < fVar14) {
              bVar4 = false;
              goto joined_r0x0057fd14;
            }
          }
          else if ((plVar5 != (long *)0x0) &&
                  (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        bVar4 = true;
joined_r0x0057fd14:
        if ((plVar11 != (long *)0x0) &&
           (iVar2 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
        if (bVar4) {
          SoundEffectSource::Play(local_80);
          puVar1 = *(undefined8 **)(this + 0x30);
          if (puVar1 == *(undefined8 **)(this + 0x38)) {
            std::
            vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
            ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
                             *)(this + 0x28),puVar1,&local_80);
          }
          else {
            *puVar1 = local_80;
            if (local_80 != (SoundEffectSource *)0x0) {
              *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
            }
            *(undefined8 **)(this + 0x30) = puVar1 + 1;
          }
        }
        plVar9 = *(long **)(this + 0x18);
        plVar11 = plVar10 + 1;
        plVar6 = plVar11;
        if ((plVar11 != plVar9) && (plVar6 = plVar9, 0 < (long)plVar9 - (long)plVar11)) {
          lVar7 = ((ulong)((long)plVar9 - (long)plVar11) >> 3) + 1;
          plVar11 = plVar10;
          do {
            lVar8 = plVar11[1];
            if (lVar8 != 0) {
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            }
            plVar6 = (long *)*plVar11;
            *plVar11 = lVar8;
            if ((plVar6 != (long *)0x0) &&
               (iVar2 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar2, iVar2 == 0)) {
              (**(code **)(*plVar6 + 8))();
            }
            lVar7 = lVar7 + -1;
            plVar11 = plVar11 + 1;
          } while (1 < lVar7);
          plVar6 = *(long **)(this + 0x18);
        }
        *(long **)(this + 0x18) = plVar6 + -1;
        plVar11 = (long *)plVar6[-1];
        if ((plVar11 != (long *)0x0) &&
           (iVar2 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      if ((local_80 != (SoundEffectSource *)0x0) &&
         (iVar2 = *(int *)(local_80 + 8), *(int *)(local_80 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*(long *)local_80 + 8))();
      }
    } while (*(long **)(this + 0x18) != plVar10);
  }
  pAVar12 = this + 0x30;
  plVar10 = *(long **)(this + 0x28);
  if (*(long **)pAVar12 != plVar10) {
    do {
      local_80 = (SoundEffectSource *)*plVar10;
      if (local_80 != (SoundEffectSource *)0x0) {
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      }
      SoundEffectSource::Update(local_80,param_1);
      if (local_80[0x18] == (SoundEffectSource)0x0) {
        plVar10 = plVar10 + 1;
      }
      else {
        *(undefined8 *)(local_80 + 0x20) = 0;
                    /* try { // try from 0057fe8c to 0067feab has its CatchHandler @ 0057fe8c
                       catch() { ... } // from try @ 0057fe8c with catch @ 0057fe8c
                       catch() { ... } // from try @ 0057feb4 with catch @ 0057fe8c
                       catch() { ... } // from try @ 0057fefc with catch @ 0057fe8c */
        SoundEffectSource::EnqueueSource((intrusive_ptr *)&local_80);
        plVar9 = *(long **)pAVar12;
        plVar11 = plVar10 + 1;
        plVar6 = plVar11;
                    /* try { // try from 0057feac to 0067feb3 has its CatchHandler @ 0057fee4 */
        if ((plVar11 != plVar9) && (plVar6 = plVar9, 0 < (long)plVar9 - (long)plVar11)) {
                    /* try { // try from 0057feb4 to 0067feef has its CatchHandler @ 0057fe8c */
          lVar7 = ((ulong)((long)plVar9 - (long)plVar11) >> 3) + 1;
          plVar11 = plVar10;
          do {
            lVar8 = plVar11[1];
            if (lVar8 != 0) {
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            }
            plVar6 = (long *)*plVar11;
            *plVar11 = lVar8;
                    /* catch() { ... } // from try @ 0057feac with catch @ 0057fee4 */
            if ((plVar6 != (long *)0x0) &&
               (iVar2 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar2, iVar2 == 0)) {
                    /* try { // try from 0057fef0 to 0067fef3 has its CatchHandler @ 0057fef4 */
              (**(code **)(*plVar6 + 8))();
            }
                    /* catch() { ... } // from try @ 0057fef0 with catch @ 0057fef4 */
            lVar7 = lVar7 + -1;
                    /* try { // try from 0057fef8 to 0067fefb has its CatchHandler @ 0057ff04 */
                    /* try { // try from 0057fefc to 0067ff07 has its CatchHandler @ 0057fe8c */
            plVar11 = plVar11 + 1;
          } while (1 < lVar7);
                    /* catch() { ... } // from try @ 0057fef8 with catch @ 0057ff04 */
          plVar6 = *(long **)pAVar12;
        }
        *(long **)pAVar12 = plVar6 + -1;
        plVar11 = (long *)plVar6[-1];
        if ((plVar11 != (long *)0x0) &&
           (iVar2 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      if ((local_80 != (SoundEffectSource *)0x0) &&
         (iVar2 = *(int *)(local_80 + 8), *(int *)(local_80 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*(long *)local_80 + 8))();
      }
    } while (*(long **)pAVar12 != plVar10);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


