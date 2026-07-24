/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e504
 * Function: Caver::AudioSystem::~AudioSystem
 * Signature: undefined __thiscall ~AudioSystem(AudioSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::~AudioSystem() */

void __thiscall Caver::AudioSystem::~AudioSystem(AudioSystem *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  Shutdown(this);
  plVar5 = *(long **)(this + 0x70);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x28);
  plVar1 = *(long **)(this + 0x30);
  if (plVar5 != plVar1) {
    do {
      plVar3 = (long *)*plVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar1 != plVar5);
    plVar5 = *(long **)(this + 0x28);
  }
  if (plVar5 != (long *)0x0) {
    operator_delete(plVar5);
  }
  plVar5 = *(long **)(this + 0x10);
  plVar1 = *(long **)(this + 0x18);
  if (plVar5 != plVar1) {
    do {
      plVar3 = (long *)*plVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar1 != plVar5);
    plVar5 = *(long **)(this + 0x10);
  }
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0057e5fc to 0067e677 has its CatchHandler @ 0057e754 */
    operator_delete(plVar5);
    return;
  }
  return;
}


