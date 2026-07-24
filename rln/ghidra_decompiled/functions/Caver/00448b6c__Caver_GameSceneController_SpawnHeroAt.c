/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00448b6c
 * Function: Caver::GameSceneController::SpawnHeroAt
 * Signature: undefined __thiscall SpawnHeroAt(GameSceneController * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::SpawnHeroAt(std::string const&) */

void __thiscall Caver::GameSceneController::SpawnHeroAt(GameSceneController *this,string *param_1)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  SceneObject *pSVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  string *psVar9;
  float fVar10;
  float fVar11;
  SceneObject *local_68;
  undefined4 local_60;
  undefined1 auStack_58 [8];
  long local_50;
  SceneObject *local_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00448b94 to 00548ba3 has its CatchHandler @ 0044cef0 */
  Scene::ObjectWithIdentifier(*(string **)(this + 0x20));
  if ((*(long *)(*(long *)param_1 + -0x18) == 0) || (local_48 == (SceneObject *)0x0)) {
    psVar9 = *(string **)(this + 0x20);
                    /* try { // try from 00448bb8 to 00548bc7 has its CatchHandler @ 0044eaac */
    FUN_00666bb8(&local_50,"spawn_default",auStack_58);
    Scene::ObjectWithIdentifier(psVar9);
    pSVar5 = local_48;
                    /* try { // try from 00448be0 to 00548bef has its CatchHandler @ 0044cef0 */
    if (local_68 != (SceneObject *)0x0) {
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    }
    local_48 = local_68;
                    /* try { // try from 00448c04 to 00548c17 has its CatchHandler @ 0044eaa8 */
    if ((pSVar5 != (SceneObject *)0x0) &&
       (iVar8 = *(int *)(pSVar5 + 8), *(int *)(pSVar5 + 8) = iVar8 + -1, iVar8 + -1 == 0)) {
                    /* try { // try from 00448c34 to 00548c43 has its CatchHandler @ 0044cee8 */
      (**(code **)(*(long *)pSVar5 + 8))(pSVar5);
    }
    if ((local_68 != (SceneObject *)0x0) &&
       (iVar8 = *(int *)(local_68 + 8), *(int *)(local_68 + 8) = iVar8 + -1, iVar8 + -1 == 0)) {
      (**(code **)(*(long *)local_68 + 8))();
    }
                    /* try { // try from 00448c58 to 00548c67 has its CatchHandler @ 0044ea44 */
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
                    /* try { // try from 00448d74 to 00548d83 has its CatchHandler @ 0044ced8 */
          iVar8 = *piVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
                    /* try { // try from 00448d98 to 00548da7 has its CatchHandler @ 0044e974 */
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    if (local_48 == (SceneObject *)0x0) goto LAB_00448d40;
  }
  lVar6 = SceneObject::ComponentWithInterface(local_48,(long)PTR_Interface_007e52f8);
  pSVar5 = local_48;
  local_68 = *(SceneObject **)(lVar6 + 0x74);
                    /* try { // try from 00448c80 to 00548c8f has its CatchHandler @ 0044cee8 */
  local_60 = *(undefined4 *)(lVar6 + 0x7c);
  Vector2::Vector2((Vector2 *)&local_50,(Vector3 *)&local_68);
                    /* try { // try from 00448ca4 to 00548cb7 has its CatchHandler @ 0044ea40 */
  fVar10 = *(float *)(lVar6 + 0x7c);
  fVar11 = *(float *)(local_48 + 0x78);
  iVar8 = *(int *)(lVar6 + 0x70);
  *(ulong *)(this + 0x14c) =
       CONCAT44((float)((ulong)*(long *)(pSVar5 + 0x70) >> 0x20) + (float)((ulong)local_50 >> 0x20),
                (float)*(long *)(pSVar5 + 0x70) + (float)local_50);
  *(float *)(this + 0x154) = fVar11 + fVar10;
  CreateHeroObjectAt(this,(Vector3 *)(this + 0x14c),iVar8,true);
  fVar10 = *(float *)(this + 0x14c);
                    /* try { // try from 00448cd4 to 00548ce3 has its CatchHandler @ 0044cee0 */
  fVar11 = *(float *)(this + 0x150);
  fVar1 = *(float *)(this + 0x154);
                    /* try { // try from 00448cf8 to 00548d07 has its CatchHandler @ 0044e9dc */
  *(float *)(this + 0x58) = fVar10;
  *(float *)(this + 0x5c) = fVar11;
  *(float *)(this + 0x60) = fVar1;
  *(float *)(this + 0x74) = fVar10;
  *(float *)(this + 0x78) = fVar11;
  *(float *)(this + 0x7c) = fVar1;
  *(float *)(this + 0x48) = *(float *)(this + 0x3c) + fVar10;
  *(float *)(this + 0x4c) = *(float *)(this + 0x40) + fVar11;
  *(float *)(this + 0x50) = *(float *)(this + 0x44) + fVar1;
  *(float *)(this + 0x68) = *(float *)(this + 0x3c) + fVar10;
  *(float *)(this + 0x6c) = *(float *)(this + 0x40) + fVar11;
  *(float *)(this + 0x70) = *(float *)(this + 0x44) + fVar1;
                    /* try { // try from 00448d20 to 00548d2f has its CatchHandler @ 0044cee0 */
  if ((local_48 != (SceneObject *)0x0) &&
     (iVar8 = *(int *)(local_48 + 8), *(int *)(local_48 + 8) = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)(*(long *)local_48 + 8))();
  }
LAB_00448d40:
                    /* try { // try from 00448d44 to 00548d57 has its CatchHandler @ 0044e9d8 */
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


