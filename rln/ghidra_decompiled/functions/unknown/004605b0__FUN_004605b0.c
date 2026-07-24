/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004605b0
 * Function: FUN_004605b0
 * Signature: undefined FUN_004605b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_004605b0(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ProgramState *this;
  long lVar5;
  NotificationView *pNVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  long *local_68;
  NotificationView *local_60;
  long *local_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(&local_60,"gameController",&local_68);
  lVar5 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)&local_60);
  puVar4 = PTR_DAT_007e5de8;
  if (local_60 + -0x18 != (NotificationView *)PTR_DAT_007e5de8) {
    pNVar6 = local_60 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *(int *)pNVar6;
      *(int *)pNVar6 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pNVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pNVar6,0x10);
        if (bVar2) {
          *(int *)pNVar6 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
                    /* try { // try from 00460790 to 00560793 has its CatchHandler @ 00460bc0 */
      operator_delete(local_60 + -0x18);
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  pNVar6 = operator_new(0x1a8);
  Caver::NotificationView::NotificationView(pNVar6);
  boost::shared_ptr<Caver::NotificationView>::shared_ptr<Caver::NotificationView>
            ((shared_ptr<Caver::NotificationView> *)&local_60,pNVar6);
  local_68 = (long *)0x0;
  Caver::NotificationView::Init(local_60,(intrusive_ptr *)&local_68,(string *)&local_50);
  if ((local_68 != (long *)0x0) &&
     (iVar9 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_68 + 8))();
  }
  uVar7 = Caver::ProgramState::IsFloatAtStackIndex(this,2);
  if ((uVar7 & 1) != 0) {
    uVar10 = Caver::ProgramState::FloatAtStackIndex(this,2);
    *(undefined4 *)(local_60 + 400) = uVar10;
  }
  Caver::GameSceneView::ShowNotification(*(GameSceneView **)(lVar5 + 0xd8),(shared_ptr *)&local_60);
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = local_58[2];
    local_58[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_58 + 0x18))(local_58);
    }
  }
  if ((undefined *)(local_50 + -0x18) != puVar4) {
    piVar8 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
                    /* try { // try from 0046076c to 0056076f has its CatchHandler @ 00460bd0 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
                    /* try { // try from 004607b4 to 005607b7 has its CatchHandler @ 00460bb0 */
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00460b10 with catch @ 00460710
                       catch() { ... } // from try @ 00460fd0 with catch @ 00460710 */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


