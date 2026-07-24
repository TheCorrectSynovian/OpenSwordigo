/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e774
 * Function: Caver::AudioSystem::Shutdown
 * Signature: undefined __thiscall Shutdown(AudioSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::Shutdown() */

void __thiscall Caver::AudioSystem::Shutdown(AudioSystem *this)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  SoundLibrary *this_00;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  plVar11 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 0057e7c4 to 0067e88f has its CatchHandler @ 0057e7c4
                       catch() { ... } // from try @ 0057e7c4 with catch @ 0057e7c4
                       catch() { ... } // from try @ 0057e8c0 with catch @ 0057e7c4
                       catch() { ... } // from try @ 0057ea34 with catch @ 0057e7c4 */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar7 = plVar11[2];
    plVar11[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  SoundEffectSource::ClearSourceCache();
  plVar2 = *(long **)(this + 0x30);
  plVar1 = *(long **)(this + 0x28);
  for (plVar11 = plVar1; plVar2 != plVar11; plVar11 = plVar11 + 1) {
    plVar6 = (long *)*plVar11;
    if ((plVar6 != (long *)0x0) &&
       (iVar10 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  *(long **)(this + 0x30) = plVar1;
  this_00 = (SoundLibrary *)SoundLibrary::sharedLibrary();
  SoundLibrary::Clear(this_00);
  if (*(long *)(this + 8) != 0) {
    lVar7 = alcGetCurrentContext();
    lVar8 = *(long *)(this + 8);
    if (lVar7 == lVar8) {
      alcMakeContextCurrent(0);
      FUN_00666bb8(local_58,"alcMakeContextCurrent",auStack_60);
      alGetError();
      if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
        piVar9 = (int *)(local_58[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar9;
                    /* catch() { ... } // from try @ 0057e8ac with catch @ 0057e9e4 */
          *piVar9 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar4) {
              *piVar9 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
                    /* catch() { ... } // from try @ 0057e890 with catch @ 0057e9e8 */
        if (iVar10 < 1) {
          operator_delete((undefined *)(local_58[0] + -0x18));
        }
      }
      lVar8 = *(long *)(this + 8);
    }
                    /* try { // try from 0057e890 to 0067e8a7 has its CatchHandler @ 0057e9e8 */
    alcDestroyContext(lVar8);
    FUN_00666bb8(local_58,"alcDestroyContext",auStack_60);
    alGetError();
                    /* try { // try from 0057e8ac to 0067e8b3 has its CatchHandler @ 0057e9e4 */
                    /* try { // try from 0057e8b4 to 0067e8bf has its CatchHandler @ 0057e980 */
                    /* try { // try from 0057e8c0 to 0067ea0b has its CatchHandler @ 0057e7c4 */
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar9 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
                    /* catch() { ... } // from try @ 0057e8b4 with catch @ 0057e980 */
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(long *)this != 0) {
    alcCloseDevice();
    FUN_00666bb8(local_58,"alcCloseDevice",auStack_60);
    alGetError();
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar9 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
    *(undefined8 *)this = 0;
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


