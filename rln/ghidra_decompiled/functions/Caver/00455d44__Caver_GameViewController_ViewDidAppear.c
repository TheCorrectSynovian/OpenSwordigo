/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00455d44
 * Function: Caver::GameViewController::ViewDidAppear
 * Signature: undefined __thiscall ViewDidAppear(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::ViewDidAppear() */

void __thiscall Caver::GameViewController::ViewDidAppear(GameViewController *this)

{
  string *psVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  NotificationView *pNVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long local_70;
  long *local_68;
  NotificationView *local_60;
  long *local_58;
  long local_50;
  long *local_48;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar9 = *(long *)(*(long *)(this + 0x98) + 0x48);
  plVar2 = *(long **)(*(long *)(this + 0x98) + 0x50);
  if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar8 = plVar2[2];
    plVar2[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* catch() { ... } // from try @ 00455f44 with catch @ 00455f5c */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 00455f40 with catch @ 00455f64 */
  if (lVar9 != 0) {
    psVar1 = *(string **)(*(long *)(this + 0x98) + 0x48);
    plVar2 = *(long **)(*(long *)(this + 0x98) + 0x50);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    FUN_0066a528(&local_60,*(long *)(this + 0xa8) + 0x158);
    Map::NodeForName(psVar1);
    puVar6 = PTR_DAT_007e5de8;
    if (local_60 + -0x18 != (NotificationView *)PTR_DAT_007e5de8) {
      pNVar7 = local_60 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *(int *)pNVar7;
                    /* try { // try from 00456100 to 005561bf has its CatchHandler @ 00456100
                       catch() { ... } // from try @ 00456100 with catch @ 00456100
                       catch() { ... } // from try @ 00456320 with catch @ 00456100
                       catch() { ... } // from try @ 0045688c with catch @ 00456100 */
        *(int *)pNVar7 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *(int *)pNVar7;
                    /* try { // try from 004560a0 to 005560b3 has its CatchHandler @ 004560d8 */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pNVar7,0x10);
          if (bVar4) {
            *(int *)pNVar7 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete(local_60 + -0x18);
      }
    }
    if ((plVar2 != (long *)0x0) && (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar9 = plVar2[2];
      plVar2[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (local_50 != 0) {
      pNVar7 = operator_new(0x1a8);
      NotificationView::NotificationView(pNVar7);
      boost::shared_ptr<Caver::NotificationView>::shared_ptr<Caver::NotificationView>
                ((shared_ptr<Caver::NotificationView> *)&local_60,pNVar7);
      local_68 = (long *)0x0;
      MapNode::Title();
      NotificationView::Init(local_60,(intrusive_ptr *)&local_68,(string *)&local_70);
      if ((undefined *)(local_70 + -0x18) != puVar6) {
                    /* catch() { ... } // from try @ 004560a0 with catch @ 004560d8 */
        piVar10 = (int *)(local_70 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *piVar10;
          *piVar10 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete((undefined *)(local_70 + -0x18));
        }
      }
                    /* catch() { ... } // from try @ 00455ee0 with catch @ 00455ea4
                       catch() { ... } // from try @ 00455efc with catch @ 00455ea4 */
      if ((local_68 != (long *)0x0) &&
         (iVar11 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar11, iVar11 == 0)) {
        (**(code **)(*local_68 + 8))();
      }
      GameSceneView::ShowNotification(*(GameSceneView **)(this + 0xd8),(shared_ptr *)&local_60);
      if ((local_58 != (long *)0x0) &&
         (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 00455edc to 00555edf has its CatchHandler @ 00455ef0 */
                    /* try { // try from 00455ee0 to 00555ef3 has its CatchHandler @ 00455ea4 */
        (**(code **)(*local_58 + 0x10))(local_58);
        lVar9 = local_58[2];
                    /* catch() { ... } // from try @ 00455edc with catch @ 00455ef0 */
        local_58[2] = lVar9 + -1;
                    /* try { // try from 00455ef4 to 00555efb has its CatchHandler @ 00455f04 */
        if (lVar9 + -1 == 0) {
                    /* try { // try from 00455efc to 00555f07 has its CatchHandler @ 00455ea4 */
                    /* catch() { ... } // from try @ 00455ef4 with catch @ 00455f04 */
          (**(code **)(*local_58 + 0x18))(local_58);
        }
      }
    }
                    /* catch() { ... } // from try @ 00455f70 with catch @ 00455f08 */
    if ((local_48 != (long *)0x0) &&
       (lVar9 = local_48[1], local_48[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar9 = local_48[2];
      local_48[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* try { // try from 00455f40 to 00555f43 has its CatchHandler @ 00455f64 */
                    /* try { // try from 00455f44 to 00555f4b has its CatchHandler @ 00455f5c */
        (**(code **)(*local_48 + 0x18))(local_48);
      }
    }
  }
                    /* try { // try from 00455f68 to 00555f6f has its CatchHandler @ 00455f80 */
  lVar9 = *(long *)(*(long *)(this + 0xa8) + 0x170);
  plVar2 = *(long **)(*(long *)(this + 0xa8) + 0x178);
                    /* try { // try from 00455f70 to 00555f83 has its CatchHandler @ 00455f08 */
  if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
                    /* catch() { ... } // from try @ 00455f68 with catch @ 00455f80 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar8 = plVar2[2];
    plVar2[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
                    /* catch() { ... } // from try @ 004560b4 with catch @ 00456084 */
    }
  }
  if (lVar9 != 0) {
    plVar2 = *(long **)(*(long *)(this + 0xa8) + 0x178);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    MapNode::MusicName();
    FUN_0066a6a8((string *)(this + 0xf0),&local_50);
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 004560b4 to 005560db has its CatchHandler @ 00456084 */
      piVar10 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    if ((plVar2 != (long *)0x0) && (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar9 = plVar2[2];
      plVar2[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    lVar9 = AudioSystem::sharedSystem();
    MusicPlayer::PlayMusicWithName(*(MusicPlayer **)(lVar9 + 0x68),(string *)(this + 0xf0),false);
    lVar9 = AudioSystem::sharedSystem();
    MusicPlayer::SetLooping(*(MusicPlayer **)(lVar9 + 0x68),true);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


