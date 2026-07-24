/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051f8c4
 * Function: Caver::MapMenuPage::MapViewDidTapSelectedNode
 * Signature: undefined __cdecl MapViewDidTapSelectedNode(MapView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView*) */

void Caver::MapMenuPage::MapViewDidTapSelectedNode(MapView *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  DidEnterPortalGameEvent *this;
  int *piVar5;
  int iVar6;
  long *plVar7;
  undefined1 auStack_58 [8];
  long local_50;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1[0x1f8] != (MapView)0x0) {
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x118) +
                       *(long *)(*(long *)(param_1 + 0x1c8) + 0x400) * 0x10);
    this = operator_new(0x80);
    FUN_0066a528(local_48,*plVar7 + 0x10);
    FUN_00666bb8(&local_50,"portal",auStack_58);
    DidEnterPortalGameEvent::DidEnterPortalGameEvent(this,(string *)local_48,(string *)&local_50);
    GameEvent::SendEvent((GameEvent *)this);
    puVar4 = PTR_DAT_007e5de8;
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
      piVar5 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar5;
        *piVar5 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    if ((undefined *)(local_48[0] + -0x18) != puVar4) {
      piVar5 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar5;
        *piVar5 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


