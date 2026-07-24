/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004647f8
 * Function: Caver::HeroEquipmentManager::~HeroEquipmentManager
 * Signature: undefined __thiscall ~HeroEquipmentManager(HeroEquipmentManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::~HeroEquipmentManager() */

void __thiscall Caver::HeroEquipmentManager::~HeroEquipmentManager(HeroEquipmentManager *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x30);
  plVar1 = *(long **)(this + 0x38);
  if (plVar5 != plVar1) {
    do {
      plVar3 = (long *)*plVar5;
                    /* try { // try from 00464828 to 005652d3 has its CatchHandler @ 004641e4 */
      if ((plVar3 != (long *)0x0) &&
         (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar1 != plVar5);
    plVar5 = *(long **)(this + 0x30);
  }
  if (plVar5 != (long *)0x0) {
    operator_delete(plVar5);
  }
  plVar5 = *(long **)(this + 0x18);
  plVar1 = *(long **)(this + 0x20);
  if (plVar5 != plVar1) {
    do {
      plVar3 = (long *)*plVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar1 != plVar5);
    plVar5 = *(long **)(this + 0x18);
  }
  if (plVar5 != (long *)0x0) {
    operator_delete(plVar5);
  }
  plVar5 = *(long **)(this + 0x10);
  if ((plVar5 != (long *)0x0) &&
     (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 8);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00464928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5);
      return;
    }
  }
  return;
}


