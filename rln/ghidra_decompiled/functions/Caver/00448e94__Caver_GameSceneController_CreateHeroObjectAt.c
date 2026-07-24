/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00448e94
 * Function: Caver::GameSceneController::CreateHeroObjectAt
 * Signature: undefined __thiscall CreateHeroObjectAt(GameSceneController * this, Vector3 * param_1, int param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::CreateHeroObjectAt(Caver::Vector3 const&, int, bool) */

void __thiscall
Caver::GameSceneController::CreateHeroObjectAt
          (GameSceneController *this,Vector3 *param_1,int param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  SceneObject *pSVar7;
  long *plVar8;
  undefined *puVar9;
  string *psVar10;
  HealthComponent *this_00;
  undefined8 uVar11;
  EntityComponent *this_01;
  ManaComponent *this_02;
  string *extraout_x1;
  long lVar12;
  int *piVar13;
  int iVar14;
  float local_a0;
  float fStack_9c;
  long *local_98;
  undefined1 auStack_90 [8];
  long local_88;
  undefined1 auStack_80 [8];
  long local_78;
  string *local_70;
  long *local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
                    /* try { // try from 00448eb4 to 00548ec3 has its CatchHandler @ 0044cec8 */
  local_58 = *(long *)(lVar5 + 0x28);
  if (*(long *)(this + 0xd8) != 0) {
                    /* try { // try from 00448ed8 to 00548ee7 has its CatchHandler @ 0044e8a4 */
    *(undefined1 *)(*(long *)(this + 0xd8) + 0xe8) = 1;
  }
  pSVar7 = operator_new(0x128);
  SceneObject::SceneObject(pSVar7);
  *(int *)(pSVar7 + 8) = *(int *)(pSVar7 + 8) + 1;
  plVar8 = *(long **)(this + 0xd8);
  *(SceneObject **)(this + 0xd8) = pSVar7;
                    /* try { // try from 00448f00 to 00548f0f has its CatchHandler @ 0044cec8 */
  if ((plVar8 != (long *)0x0) &&
     (iVar14 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar14, iVar14 == 0)) {
    (**(code **)(*plVar8 + 8))();
    pSVar7 = *(SceneObject **)(this + 0xd8);
  }
                    /* try { // try from 00448f24 to 00548f37 has its CatchHandler @ 0044e8a0 */
  FUN_00666bb8(&local_78,&DAT_0068ea92,auStack_80);
  ObjectLibrary::LibraryWithName((ObjectLibrary *)&local_78,extraout_x1);
                    /* try { // try from 00448f54 to 00548f63 has its CatchHandler @ 0044cec0 */
  FUN_00666bb8(&local_88,&DAT_0068ea92,auStack_90);
  ObjectLibrary::TemplateForName(local_70,SUB81(&local_88,0));
                    /* try { // try from 00448f78 to 00548f87 has its CatchHandler @ 0044e83c */
  SceneObject::InitWithTemplate(pSVar7,(intrusive_ptr *)&local_a0);
  plVar8 = (long *)CONCAT44(fStack_9c,local_a0);
  if ((plVar8 != (long *)0x0) &&
     (iVar14 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar14, iVar14 == 0)) {
    (**(code **)(*plVar8 + 8))();
  }
                    /* try { // try from 00448fa0 to 00548faf has its CatchHandler @ 0044cec0 */
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_88 + -0x18) != PTR_DAT_007e5de8) {
    piVar13 = (int *)(local_88 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 00449314 to 00549323 has its CatchHandler @ 0044ce90 */
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_88 + -0x18));
    }
  }
                    /* try { // try from 00448fc4 to 00548fd7 has its CatchHandler @ 0044e838 */
  if ((local_68 != (long *)0x0) &&
     (lVar12 = local_68[1], local_68[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar12 = local_68[2];
    local_68[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 00448ff4 to 00549003 has its CatchHandler @ 0044ceb8 */
      (**(code **)(*local_68 + 0x18))(local_68);
    }
  }
  if ((undefined *)(local_78 + -0x18) != puVar6) {
    piVar13 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
                    /* try { // try from 00449338 to 00549347 has its CatchHandler @ 0044e5cc */
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
  pSVar7 = *(SceneObject **)(this + 0xd8);
                    /* try { // try from 00449018 to 00549027 has its CatchHandler @ 0044e7d4 */
  FUN_00666bb8(&local_a0,"hero",&local_88);
  SceneObject::SetIdentifier(pSVar7,(string *)&local_a0);
  puVar9 = (undefined *)(CONCAT44(fStack_9c,local_a0) + -0x18);
                    /* try { // try from 00449040 to 0054904f has its CatchHandler @ 0044ceb8 */
  if (puVar9 != puVar6) {
                    /* try { // try from 004492c0 to 005492cf has its CatchHandler @ 0044ce98 */
    piVar13 = (int *)(CONCAT44(fStack_9c,local_a0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 00449360 to 0054936f has its CatchHandler @ 0044ce90 */
    if (iVar14 < 1) {
      operator_delete(puVar9);
    }
  }
  pSVar7 = *(SceneObject **)(this + 0xd8);
  Vector2::Vector2((Vector2 *)&local_a0,param_1);
                    /* try { // try from 00449064 to 00549077 has its CatchHandler @ 0044e7d0 */
                    /* try { // try from 00449094 to 005490a3 has its CatchHandler @ 0044ceb0 */
  if ((DAT_00683488 < ABS(local_a0 - *(float *)(pSVar7 + 0x70))) ||
     (DAT_00683488 < ABS(fStack_9c - *(float *)(pSVar7 + 0x74)))) {
    *(float *)(pSVar7 + 0x70) = local_a0;
    *(float *)(pSVar7 + 0x74) = fStack_9c;
    if (pSVar7[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(pSVar7);
                    /* try { // try from 004490b8 to 005490c7 has its CatchHandler @ 0044e76c */
      pSVar7[0xb4] = (SceneObject)0x1;
    }
  }
  *(undefined4 *)(pSVar7 + 0x78) = *(undefined4 *)(param_1 + 8);
  psVar10 = (string *)
            SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0xd8),(long)PTR_Interface_007e7860);
                    /* try { // try from 004490e0 to 005490ef has its CatchHandler @ 0044ceb0 */
  CharacterState::HighestLevelItemOfType(&local_a0,*(long *)(this + 8) + 0x10,2);
  HeroEquipmentManager::ModelNameForArmor((shared_ptr *)(this + 0x100));
                    /* try { // try from 00449104 to 00549117 has its CatchHandler @ 0044e768 */
  ModelComponent::setModelName(psVar10);
  plVar8 = local_98;
  if ((undefined *)(local_78 + -0x18) != puVar6) {
                    /* try { // try from 004492e4 to 005492f7 has its CatchHandler @ 0044e630 */
    piVar13 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
                    /* try { // try from 00449384 to 00549397 has its CatchHandler @ 0044e5c8 */
      operator_delete((undefined *)(local_78 + -0x18));
      plVar8 = local_98;
    }
  }
                    /* try { // try from 00449134 to 00549143 has its CatchHandler @ 0044cea8 */
  if ((plVar8 != (long *)0x0) && (lVar12 = plVar8[1], plVar8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar12 = plVar8[2];
    plVar8[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 00449158 to 00549167 has its CatchHandler @ 0044e704 */
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  this_00 = operator_new(200);
  HealthComponent::HealthComponent(this_00);
  *(HealthComponent **)(this + 0xf0) = this_00;
                    /* try { // try from 00449180 to 0054918f has its CatchHandler @ 0044cea8 */
  *(undefined4 *)(this_00 + 0x88) = 1;
  lVar12 = *(long *)(this + 8);
  uVar1 = *(int *)(lVar12 + 0xbc) * 2 + 4;
  *(uint *)(this_00 + 0x7c) = uVar1;
  if (this_00[0x78] == (HealthComponent)0x0) {
    uVar2 = *(uint *)(lVar12 + 0xa8);
                    /* try { // try from 004491a4 to 005491b7 has its CatchHandler @ 0044e700 */
    if ((int)uVar1 <= (int)uVar2) {
      uVar2 = uVar1;
    }
    *(uint *)(this_00 + 0x80) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  }
  SceneObject::AddComponent(*(SceneObject **)(this + 0xd8),(Component *)this_00);
  uVar11 = SceneObject::ComponentWithInterface
                     (*(SceneObject **)(this + 0xd8),(long)PTR_Interface_007e7390);
                    /* try { // try from 004491d4 to 005491e3 has its CatchHandler @ 0044cea0 */
  *(undefined8 *)(this + 0xe0) = uVar11;
  this_01 = (EntityComponent *)
            SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0xd8),(long)PTR_Interface_007e5a28);
  *(EntityComponent **)(this + 0xe8) = this_01;
  EntityComponent::SetFacingDirection(this_01,param_2);
                    /* try { // try from 004491f8 to 00549207 has its CatchHandler @ 0044e69c */
  this_02 = operator_new(0x88);
  ManaComponent::ManaComponent(this_02);
  lVar12 = *(long *)(this + 8);
  *(ManaComponent **)(this + 0xf8) = this_02;
  uVar1 = *(int *)(lVar12 + 0xc4) * 0x14 + 10;
                    /* try { // try from 00449220 to 0054922f has its CatchHandler @ 0044cea0 */
  *(uint *)(this_02 + 0x70) = uVar1;
  uVar2 = *(uint *)(lVar12 + 0xac);
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = uVar1;
  }
  *(uint *)(this_02 + 0x74) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  SceneObject::AddComponent(*(SceneObject **)(this + 0xd8),(Component *)this_02);
  if (param_3) {
                    /* try { // try from 00449244 to 00549257 has its CatchHandler @ 0044e698 */
    AddHeroObjectToScene(this);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00449274 to 00549283 has its CatchHandler @ 0044ce98 */
  return;
}


