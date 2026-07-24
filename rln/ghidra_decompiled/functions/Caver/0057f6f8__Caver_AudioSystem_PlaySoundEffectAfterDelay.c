/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f6f8
 * Function: Caver::AudioSystem::PlaySoundEffectAfterDelay
 * Signature: undefined __cdecl PlaySoundEffectAfterDelay(intrusive_ptr * param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,
   float, float) */

void Caver::AudioSystem::PlaySoundEffectAfterDelay
               (intrusive_ptr *param_1,float param_2,float param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  SoundEffectSource *in_x1;
  intrusive_ptr *extraout_x1;
  intrusive_ptr *extraout_x1_00;
  intrusive_ptr *piVar7;
  long *in_x8;
  long lVar8;
  float fVar9;
  float fVar10;
  SoundEffectSource *local_70;
  long local_68;
  
                    /* try { // try from 0057f6f8 to 0067f6ff has its CatchHandler @ 0057f71c */
                    /* try { // try from 0057f700 to 0067f72f has its CatchHandler @ 0057f6e4 */
  lVar5 = tpidr_el0;
                    /* catch() { ... } // from try @ 0057f6f8 with catch @ 0057f71c */
  local_68 = *(long *)(lVar5 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0057f88c with catch @ 0057f738
                       catch(type#1 @ 00000000) { ... } // from try @ 0057fb08 with catch @ 0057f738
                        */
  if ((*(long *)(param_1 + 8) == 0) || (param_1[0x78] == (intrusive_ptr)0x0)) {
LAB_0057f83c:
    *in_x8 = 0;
  }
  else {
    plVar3 = *(long **)(param_1 + 0x30);
    piVar7 = (intrusive_ptr *)in_x1;
    for (plVar1 = *(long **)(param_1 + 0x28); plVar1 != plVar3; plVar1 = plVar1 + 1) {
      lVar8 = *plVar1;
      plVar6 = *(long **)(lVar8 + 0x28);
      if (plVar6 != (long *)0x0) {
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      }
      if (plVar6 == *(long **)in_x1) {
        fVar9 = *(float *)(lVar8 + 0x48);
        fVar10 = *(float *)((long)plVar6 + 0x3c);
        if ((plVar6 != (long *)0x0) &&
           (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
          (**(code **)(*plVar6 + 8))();
          piVar7 = extraout_x1_00;
        }
        if (fVar9 < fVar10) goto LAB_0057f83c;
      }
      else if ((plVar6 != (long *)0x0) &&
              (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
        (**(code **)(*plVar6 + 8))();
        piVar7 = extraout_x1;
      }
    }
    SoundEffectSource::DequeueSourceForEffect(in_x1,piVar7);
    *(float *)(local_70 + 0x44) = param_2;
    SoundEffectSource::setGain(local_70,*(float *)(param_1 + 0x7c) * param_3);
                    /* try { // try from 0057f7f8 to 0067f81f has its CatchHandler @ 0057fac0 */
    if (*(long *)(local_70 + 0x20) == 0) {
      if (*(float *)(local_70 + 0x44) <= DAT_006895f8) {
        puVar2 = *(undefined8 **)(param_1 + 0x30);
        if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
          std::
          vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
          ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
                           *)(param_1 + 0x28),puVar2,&local_70);
        }
        else {
          *puVar2 = local_70;
          *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
                    /* try { // try from 0057f88c to 0067fadf has its CatchHandler @ 0057f738 */
          *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
        }
      }
      else {
        puVar2 = *(undefined8 **)(param_1 + 0x18);
        if (puVar2 == *(undefined8 **)(param_1 + 0x20)) {
          std::
          vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
          ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
                           *)(param_1 + 0x10),puVar2,&local_70);
        }
        else {
          *puVar2 = local_70;
          *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
          *(undefined8 **)(param_1 + 0x18) = puVar2 + 1;
        }
      }
      *(intrusive_ptr **)(local_70 + 0x20) = param_1;
    }
    if (*(float *)(local_70 + 0x44) <= DAT_006895f8) {
      SoundEffectSource::Play(local_70);
    }
    *in_x8 = (long)local_70;
    if ((local_70 != (SoundEffectSource *)0x0) && (*(int *)(local_70 + 8) == 0)) {
      (**(code **)(*(long *)local_70 + 8))();
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0057f864 to 0067f88b has its CatchHandler @ 0057fab4 */
  return;
}


