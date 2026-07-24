/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005358dc
 * Function: Caver::SceneLoadingView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(SceneLoadingView * this, shared_ptr * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneLoadingView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,
   boost::shared_ptr<Caver::MapNode> const&) */

void __thiscall
Caver::SceneLoadingView::InitWithGameState
          (SceneLoadingView *this,shared_ptr *param_1,shared_ptr *param_2)

{
  SceneLoadingView *pSVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  MapView *pMVar8;
  size_t __n;
  long lVar9;
  long lVar10;
  code *pcVar11;
  void *pvVar12;
  int *piVar13;
  long *plVar14;
  size_t *psVar15;
  StripeView *pSVar16;
  GUILabel *pGVar17;
  void *local_80;
  long *local_78;
  void *local_70;
  long *local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar2 = *(undefined8 *)param_1;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
  }
  plVar14 = *(long **)(this + 0x128);
  *(undefined8 *)(this + 0x120) = uVar2;
  *(long *)(this + 0x128) = lVar9;
  if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  lVar9 = *(long *)(*(long *)(this + 0x120) + 0x170);
  plVar14 = *(long **)(*(long *)(this + 0x120) + 0x178);
  if ((plVar14 == (long *)0x0) || (plVar14[1] != 0)) {
LAB_005359a4:
    lVar10 = *(long *)(this + 0x170);
  }
  else {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar10 = plVar14[2];
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 != 0) goto LAB_005359a4;
                    /* catch() { ... } // from try @ 00535ee8 with catch @ 00535e7c */
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar10 = *(long *)(this + 0x170);
  }
  if (lVar9 == 0) {
    *(undefined1 *)(lVar10 + 0xe4) = 1;
    *(undefined1 *)(*(long *)(this + 0x160) + 0xe4) = 1;
    goto LAB_00535ea0;
  }
  *(undefined1 *)(lVar10 + 0xe4) = 0;
  pSVar1 = this + 0x170;
  *(undefined1 *)(*(long *)(this + 0x160) + 0xe4) = 0;
  if ((lVar10 != 0) && (*(long *)param_2 != 0)) {
    pGVar17 = *(GUILabel **)(this + 0x180);
    MapNode::Title();
    pvVar12 = local_70;
    psVar15 = (size_t *)((long)local_70 + -0x18);
    if ((*psVar15 != *(size_t *)((long)*(void **)(pGVar17 + 0x100) + -0x18)) ||
       (iVar7 = memcmp(local_70,*(void **)(pGVar17 + 0x100),*psVar15), iVar7 != 0)) {
      FUN_0066a6a8(pGVar17 + 0x100,&local_70);
      GUILabel::UpdateText(pGVar17);
      psVar15 = (size_t *)((long)local_70 + -0x18);
      pvVar12 = local_70;
    }
    puVar6 = PTR_DAT_007e5de8;
    if (psVar15 != (size_t *)PTR_DAT_007e5de8) {
      piVar13 = (int *)((long)pvVar12 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(psVar15);
      }
    }
    pSVar16 = *(StripeView **)pSVar1;
    MapNode::Title();
    StripeView::SetTitle(pSVar16,(string *)&local_70);
    if ((undefined *)((long)local_70 + -0x18) != puVar6) {
      piVar13 = (int *)((long)local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)((long)local_70 + -0x18));
      }
    }
  }
  pMVar8 = operator_new(0x420);
  MapView::MapView(pMVar8);
  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>
            ((shared_ptr<Caver::MapView> *)&local_70,pMVar8);
  pvVar12 = *(void **)(this + 0x130);
  plVar14 = *(long **)(this + 0x138);
  *(void **)(this + 0x130) = local_70;
  *(long **)(this + 0x138) = local_68;
  if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    local_70 = pvVar12;
    local_68 = plVar14;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  local_70 = *(void **)(this + 0x130);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  local_68 = *(long **)(this + 0x138);
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
  (*pcVar11)(this,&local_70);
  plVar14 = local_68;
  if ((local_68 != (long *)0x0) && (lVar9 = local_68[1], local_68[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  local_70 = *(void **)(*(long *)(this + 0x120) + 0x170);
  local_68 = *(long **)(*(long *)(this + 0x120) + 0x178);
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
  pMVar8 = *(MapView **)(this + 0x130);
  local_80 = *(void **)(**(long **)param_1 + 0x48);
  local_78 = *(long **)(**(long **)param_1 + 0x50);
  if (local_78 != (long *)0x0) {
    local_78[1] = local_78[1] + 1;
  }
  MapView::Init(pMVar8,(shared_ptr *)&local_80,param_1,false,false);
  plVar14 = local_78;
  if ((local_78 != (long *)0x0) && (lVar9 = local_78[1], local_78[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_78 + 0x10))(local_78);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 00535c14 with catch @ 00535be4 */
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
                    /* try { // try from 00535c00 to 00635c13 has its CatchHandler @ 00535c38 */
  MapView::HideFarNodes
            (*(MapView **)(this + 0x130),(shared_ptr *)&local_70,DAT_00692418,DAT_00688c90);
  pvVar12 = *(void **)param_2;
  if (pvVar12 == (void *)0x0) {
LAB_00535cec:
    if (*(long *)pSVar1 == 0) goto LAB_00535d98;
    pGVar17 = *(GUILabel **)(this + 0x180);
    MapNode::Title();
    pvVar12 = local_80;
    psVar15 = (size_t *)((long)local_80 + -0x18);
                    /* try { // try from 00535d14 to 00635d2f has its CatchHandler @ 00535dc8 */
    if ((*psVar15 != *(size_t *)((long)*(void **)(pGVar17 + 0x100) + -0x18)) ||
       (iVar7 = memcmp(local_80,*(void **)(pGVar17 + 0x100),*psVar15), iVar7 != 0)) {
                    /* try { // try from 00535d30 to 00635d5f has its CatchHandler @ 00535cc0 */
      FUN_0066a6a8(pGVar17 + 0x100,&local_80);
      GUILabel::UpdateText(pGVar17);
      psVar15 = (size_t *)((long)local_80 + -0x18);
      pvVar12 = local_80;
    }
    puVar6 = PTR_DAT_007e5de8;
    if (psVar15 != (size_t *)PTR_DAT_007e5de8) {
      piVar13 = (int *)((long)pvVar12 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
                    /* try { // try from 00536024 to 00636027 has its CatchHandler @ 00536118 */
                    /* try { // try from 00536028 to 0063612b has its CatchHandler @ 00535f74 */
        operator_delete(psVar15);
      }
    }
    pSVar16 = *(StripeView **)pSVar1;
                    /* try { // try from 00535d60 to 00635d63 has its CatchHandler @ 00535db4 */
                    /* try { // try from 00535d64 to 00635dcb has its CatchHandler @ 00535cc0 */
    MapNode::Title();
    StripeView::SetTitle(pSVar16,(string *)&local_80);
    if ((undefined *)((long)local_80 + -0x18) != puVar6) {
      piVar13 = (int *)((long)local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)((long)local_80 + -0x18));
      }
    }
    this[0x1a4] = (SceneLoadingView)0x1;
    plVar14 = local_68;
  }
  else {
                    /* try { // try from 00535c14 to 00635c3b has its CatchHandler @ 00535be4 */
    if ((local_70 != (void *)0x0) && (local_70 != pvVar12)) {
      lVar9 = *(long *)(param_2 + 8);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
      }
      plVar14 = *(long **)(this + 0x148);
      *(void **)(this + 0x140) = pvVar12;
      *(long *)(this + 0x148) = lVar9;
                    /* catch() { ... } // from try @ 00535c00 with catch @ 00535c38 */
      if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        lVar9 = plVar14[2];
        plVar14[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 00535cb4 with catch @ 00535c6c */
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
      }
      if (local_68 != (long *)0x0) {
        local_68[1] = local_68[1] + 1;
      }
      plVar14 = *(long **)(this + 0x158);
      *(void **)(this + 0x150) = local_70;
      *(long **)(this + 0x158) = local_68;
                    /* try { // try from 00535c98 to 00635c9b has its CatchHandler @ 00535ca8 */
                    /* catch() { ... } // from try @ 00535c98 with catch @ 00535ca8 */
      if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
                    /* try { // try from 00535cac to 00635cb3 has its CatchHandler @ 00535cbc */
                    /* try { // try from 00535cb4 to 00635cbf has its CatchHandler @ 00535c6c */
        (**(code **)(*plVar14 + 0x10))(plVar14);
                    /* catch() { ... } // from try @ 00535cac with catch @ 00535cbc */
        lVar9 = plVar14[2];
                    /* try { // try from 00535cc0 to 00635d13 has its CatchHandler @ 00535cc0
                       catch() { ... } // from try @ 00535cc0 with catch @ 00535cc0
                       catch() { ... } // from try @ 00535d30 with catch @ 00535cc0
                       catch() { ... } // from try @ 00535d64 with catch @ 00535cc0
                       catch() { ... } // from try @ 00535dd4 with catch @ 00535cc0 */
        plVar14[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
      }
      this[0x1b0] = (SceneLoadingView)0x1;
      if (*(long *)param_2 == 0) goto LAB_00535cec;
    }
LAB_00535d98:
    pGVar17 = *(GUILabel **)(this + 400);
    MapNode::Title();
    pvVar12 = local_80;
    psVar15 = (size_t *)((long)local_80 + -0x18);
                    /* catch() { ... } // from try @ 00535d60 with catch @ 00535db4 */
                    /* catch() { ... } // from try @ 00535d14 with catch @ 00535dc8 */
                    /* try { // try from 00535dcc to 00635dd3 has its CatchHandler @ 00535ddc */
    if ((*psVar15 != *(size_t *)((long)*(void **)(pGVar17 + 0x100) + -0x18)) ||
       (iVar7 = memcmp(local_80,*(void **)(pGVar17 + 0x100),*psVar15), iVar7 != 0)) {
                    /* try { // try from 00535dd4 to 00635ddf has its CatchHandler @ 00535cc0 */
      FUN_0066a6a8(pGVar17 + 0x100,&local_80);
                    /* catch() { ... } // from try @ 00535dcc with catch @ 00535ddc */
                    /* catch() { ... } // from try @ 00535e28 with catch @ 00535de0
                       catch() { ... } // from try @ 00535e44 with catch @ 00535de0 */
      GUILabel::UpdateText(pGVar17);
      psVar15 = (size_t *)((long)local_80 + -0x18);
      pvVar12 = local_80;
    }
    if (psVar15 != (size_t *)PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 00535ec4 with catch @ 00535ef0 */
      piVar13 = (int *)((long)pvVar12 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
                    /* try { // try from 00535f74 to 00636023 has its CatchHandler @ 00535f74
                       catch() { ... } // from try @ 00535f74 with catch @ 00535f74
                       catch() { ... } // from try @ 00536028 with catch @ 00535f74 */
        operator_delete(psVar15);
      }
    }
    __n = *(size_t *)((long)*(void **)(*(long *)(this + 0x180) + 0x100) + -0x18);
    if ((__n != *(size_t *)((long)*(void **)(*(long *)(this + 400) + 0x100) + -0x18)) ||
       (iVar7 = memcmp(*(void **)(*(long *)(this + 0x180) + 0x100),
                       *(void **)(*(long *)(this + 400) + 0x100),__n), plVar14 = local_68,
       iVar7 != 0)) {
                    /* try { // try from 00535e24 to 00635e27 has its CatchHandler @ 00535e38 */
                    /* try { // try from 00535e28 to 00635e3b has its CatchHandler @ 00535de0 */
      this[0x1a5] = (SceneLoadingView)0x1;
      plVar14 = local_68;
    }
  }
  local_68 = plVar14;
                    /* catch() { ... } // from try @ 00535e24 with catch @ 00535e38 */
                    /* try { // try from 00535e3c to 00635e43 has its CatchHandler @ 00535e4c */
  if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 00535e44 to 00635e4f has its CatchHandler @ 00535de0 */
                    /* catch() { ... } // from try @ 00535e3c with catch @ 00535e4c */
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
LAB_00535ea0:
  if (DAT_00683944 < *(float *)(this + 0x8c)) {
                    /* try { // try from 00535ec0 to 00635ec3 has its CatchHandler @ 00535edc */
    (**(code **)(*(long *)this + 0x58))(this);
  }
                    /* try { // try from 00535ec4 to 00635ecb has its CatchHandler @ 00535ef0 */
  if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00535ec0 with catch @ 00535edc */
                    /* try { // try from 00535ee0 to 00635ee7 has its CatchHandler @ 00535eec */
                    /* try { // try from 00535ee8 to 00635f03 has its CatchHandler @ 00535e7c */
                    /* catch() { ... } // from try @ 00535ee0 with catch @ 00535eec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


