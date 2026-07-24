/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004499e4
 * Function: Caver::GameSceneController::EquipItem
 * Signature: undefined __thiscall EquipItem(GameSceneController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::EquipItem(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::GameSceneController::EquipItem(GameSceneController *this,shared_ptr *param_1)

{
  shared_ptr *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  SceneObject *this_01;
  long lVar8;
  int *piVar9;
  size_t *psVar10;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  long local_48;
  
                    /* try { // try from 004499f4 to 00549a03 has its CatchHandler @ 0044ce38 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00449a18 to 00549a27 has its CatchHandler @ 0044e154 */
  if (**(int **)param_1 == 2) {
                    /* try { // try from 00449a64 to 00549a77 has its CatchHandler @ 0044e150 */
    lVar8 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0xd8),(long)PTR_Interface_007e7860);
    FUN_0066a528(&local_60,lVar8 + 0x70);
    this_00 = (shared_ptr *)(this + 0x100);
    HeroEquipmentManager::ModelNameForArmor(this_00);
                    /* try { // try from 00449a94 to 00549aa3 has its CatchHandler @ 0044ce30 */
    psVar10 = (size_t *)((long)local_68 + -0x18);
    if (*(size_t *)((long)local_60 + -0x18) == *psVar10) {
      iVar7 = memcmp(local_60,local_68,*(size_t *)((long)local_60 + -0x18));
      bVar6 = iVar7 != 0;
                    /* try { // try from 00449ab8 to 00549ac7 has its CatchHandler @ 0044e0ec */
    }
    else {
      bVar6 = true;
    }
    puVar4 = PTR_DAT_007e5de8;
    if (psVar10 != (size_t *)PTR_DAT_007e5de8) {
      piVar9 = (int *)((long)local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar9;
        *piVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar9;
                    /* try { // try from 00449b34 to 00549b43 has its CatchHandler @ 0044ce28 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
                    /* try { // try from 00449b80 to 00549b8f has its CatchHandler @ 0044ce28 */
        operator_delete(psVar10);
      }
    }
                    /* try { // try from 00449ae0 to 00549aef has its CatchHandler @ 0044ce30 */
    if ((undefined *)((long)local_60 + -0x18) != puVar4) {
      piVar9 = (int *)((long)local_60 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar9;
                    /* try { // try from 00449ba4 to 00549bb7 has its CatchHandler @ 0044e080 */
        *piVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar9;
                    /* try { // try from 00449b58 to 00549b67 has its CatchHandler @ 0044e084 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)((long)local_60 + -0x18));
      }
    }
    if (bVar6) {
      this_01 = *(SceneObject **)(this + 0xd8);
      local_60 = *(void **)(this_01 + 0x70);
      local_58 = (long *)CONCAT44(local_58._4_4_,*(undefined4 *)(this_01 + 0x78));
                    /* try { // try from 00449b04 to 00549b17 has its CatchHandler @ 0044e0e8 */
      lVar8 = SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e6c60);
      CreateHeroObjectAt(this,(Vector3 *)&local_60,*(int *)(lVar8 + 0x70),false);
      goto LAB_00449c40;
    }
    HeroEquipmentManager::EquipArmor((HeroEquipmentManager *)this_00,param_1);
                    /* try { // try from 00449bd4 to 00549be3 has its CatchHandler @ 0044ce20 */
    local_60 = *(void **)(*(long *)(this + 8) + 0x88);
    local_58 = *(long **)(*(long *)(this + 8) + 0x90);
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    HeroEquipmentManager::ApplyArmorTrinket((HeroEquipmentManager *)this_00,(shared_ptr *)&local_60)
    ;
  }
  else {
    if (**(int **)param_1 != 1) goto LAB_00449c40;
    HeroEquipmentManager::EquipWeapon((HeroEquipmentManager *)(this + 0x100),param_1);
    local_60 = *(void **)(*(long *)(this + 8) + 0x78);
    local_58 = *(long **)(*(long *)(this + 8) + 0x80);
                    /* try { // try from 00449a40 to 00549a4f has its CatchHandler @ 0044ce38 */
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    HeroEquipmentManager::ApplyWeaponTrinket
              ((HeroEquipmentManager *)(this + 0x100),(shared_ptr *)&local_60);
  }
                    /* try { // try from 00449bf8 to 00549c07 has its CatchHandler @ 0044e01c */
  plVar5 = local_58;
  if ((local_58 != (long *)0x0) && (lVar8 = local_58[1], local_58[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
                    /* try { // try from 00449c20 to 00549c2f has its CatchHandler @ 0044ce20 */
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
LAB_00449c40:
                    /* try { // try from 00449c44 to 00549c57 has its CatchHandler @ 0044e018 */
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


