/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046a510
 * Function: Caver::HeroEquipmentManager::ApplyTrinketToSpell
 * Signature: undefined __thiscall ApplyTrinketToSpell(HeroEquipmentManager * this, SceneObject * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEquipmentManager::ApplyTrinketToSpell(Caver::SceneObject*,
   boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::HeroEquipmentManager::ApplyTrinketToSpell
          (HeroEquipmentManager *this,SceneObject *param_1,shared_ptr *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar7 = SceneObject::ComponentWithInterface(param_1,(long)PTR_Interface_007e6cd0);
  if (*(long *)this == 0) {
    uVar5 = 1;
    lVar8 = *(long *)param_2;
  }
  else {
    uVar5 = CharacterState::ItemCount((CharacterState *)(*(long *)this + 0x10),param_2);
    lVar8 = *(long *)param_2;
  }
  if (lVar8 == 0) goto LAB_0046a5fc;
  FUN_0066a528(local_58,lVar8 + 8);
  FUN_006689e0(local_58,"firetrinket");
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) == PTR_DAT_007e5de8) {
LAB_0046a5b8:
                    /* catch() { ... } // from try @ 0046a648 with catch @ 0046a5b8 */
    lVar8 = *(long *)param_2;
  }
  else {
    piVar9 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 0046a634 with catch @ 0046a66c */
      iVar6 = *piVar9;
                    /* catch() { ... } // from try @ 0046a61c with catch @ 0046a670 */
                    /* catch() { ... } // from try @ 0046a604 with catch @ 0046a674 */
      *piVar9 = iVar6 + -1;
    }
    else {
      do {
                    /* try { // try from 0046a634 to 0056a647 has its CatchHandler @ 0046a66c */
        iVar6 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 0046a5ec with catch @ 0046a678 */
    if (0 < iVar6) goto LAB_0046a5b8;
    operator_delete((undefined *)(local_58[0] + -0x18));
    lVar8 = *(long *)param_2;
  }
  if (lVar8 != 0) {
    FUN_0066a528(local_58,lVar8 + 8);
    iVar6 = FUN_006689e0(local_58,0x68eb35);
                    /* try { // try from 0046a5ec to 0056a5ff has its CatchHandler @ 0046a678 */
    if ((undefined *)(local_58[0] + -0x18) != puVar4) {
                    /* try { // try from 0046a648 to 0056a67b has its CatchHandler @ 0046a5b8 */
      piVar9 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
    if ((lVar7 != 0) && (iVar6 == 0)) {
      *(undefined4 *)(lVar7 + 0xc0) = uVar5;
    }
  }
LAB_0046a5fc:
                    /* try { // try from 0046a604 to 0056a617 has its CatchHandler @ 0046a674 */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0046a61c to 0056a62f has its CatchHandler @ 0046a670 */
  return;
}


