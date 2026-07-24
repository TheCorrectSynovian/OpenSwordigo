/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00468c74
 * Function: Caver::HeroEquipmentManager::Init
 * Signature: undefined __thiscall Init(HeroEquipmentManager * this, shared_ptr * param_1, intrusive_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::Init(boost::shared_ptr<Caver::GameState> const&,
   boost::intrusive_ptr<Caver::SceneObject> const&) */

void __thiscall
Caver::HeroEquipmentManager::Init
          (HeroEquipmentManager *this,shared_ptr *param_1,intrusive_ptr *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar2 = *(long **)(this + 0x20);
  plVar5 = *(long **)(this + 0x18);
  for (plVar7 = plVar5; plVar2 != plVar7; plVar7 = plVar7 + 1) {
    plVar4 = (long *)*plVar7;
    if ((plVar4 != (long *)0x0) &&
       (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x30);
  plVar4 = *(long **)(this + 0x38);
                    /* catch() { ... } // from try @ 00468d24 with catch @ 00468cd8 */
  *(long **)(this + 0x20) = plVar5;
  for (plVar7 = plVar2; plVar4 != plVar7; plVar7 = plVar7 + 1) {
    plVar5 = (long *)*plVar7;
                    /* try { // try from 00468cfc to 00568d0f has its CatchHandler @ 00468e14 */
    if ((plVar5 != (long *)0x0) &&
       (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
                    /* try { // try from 00468d14 to 00568d23 has its CatchHandler @ 00468da4 */
  }
  *(long **)(this + 0x38) = plVar2;
  uVar1 = *(undefined8 *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
                    /* try { // try from 00468d24 to 00568e17 has its CatchHandler @ 00468cd8 */
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  }
  plVar7 = *(long **)(this + 8);
  *(undefined8 *)this = uVar1;
  *(long *)(this + 8) = lVar6;
  if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar6 = plVar7[2];
    plVar7[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar6 = *(long *)param_2;
      goto joined_r0x00468d70;
    }
  }
  lVar6 = *(long *)param_2;
joined_r0x00468d70:
  if (lVar6 != 0) {
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  }
  plVar7 = *(long **)(this + 0x10);
  *(long *)(this + 0x10) = lVar6;
  if ((plVar7 != (long *)0x0) &&
     (iVar3 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar3, iVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00468dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 8))();
    return;
  }
                    /* catch() { ... } // from try @ 00468d14 with catch @ 00468da4 */
  return;
}


