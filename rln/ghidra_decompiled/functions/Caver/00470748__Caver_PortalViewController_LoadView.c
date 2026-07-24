/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00470748
 * Function: Caver::PortalViewController::LoadView
 * Signature: undefined __thiscall LoadView(PortalViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalViewController::LoadView() */

void __thiscall Caver::PortalViewController::LoadView(PortalViewController *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  PortalView *pPVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  int iVar11;
  GUIControl *pGVar12;
  long *plVar13;
  undefined *local_70;
  long *local_68;
  undefined8 uStack_60;
  PortalViewController *local_58;
  long *local_50;
  undefined8 uStack_48;
  PortalViewController *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pPVar5 = operator_new(0x180);
  PortalView::PortalView(pPVar5);
  boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>
            ((shared_ptr<Caver::PortalView> *)&local_70,pPVar5);
  puVar1 = *(undefined **)(this + 0x80);
  plVar9 = *(long **)(this + 0x88);
  *(undefined **)(this + 0x80) = local_70;
  *(long **)(this + 0x88) = local_68;
  local_70 = puVar1;
  local_68 = plVar9;
  if ((plVar9 != (long *)0x0) && (lVar8 = plVar9[1], plVar9[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar8 = plVar9[2];
    plVar9[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pPVar5 = *(PortalView **)(this + 0x80);
  if (*(int *)(pPVar5 + 0x70) != 0x12) {
    plVar9 = *(long **)(pPVar5 + 0x58);
    *(undefined4 *)(pPVar5 + 0x70) = 0x12;
    if ((plVar9 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar9 + 0x8c))) {
      (**(code **)(*plVar9 + 0x58))(plVar9);
      pPVar5 = *(PortalView **)(this + 0x80);
    }
  }
  lVar8 = *(long *)(this + 0x70);
  local_70 = *(undefined **)(lVar8 + 0x80);
  local_68 = *(long **)(lVar8 + 0x88);
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
  PortalView::InitWithGameState(pPVar5,(shared_ptr *)&local_70,*(bool *)(lVar8 + 0xc0));
  plVar9 = local_68;
  if ((local_68 != (long *)0x0) && (lVar8 = local_68[1], local_68[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 004708c0 with catch @ 00470874 */
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar8 = plVar9[2];
    plVar9[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* try { // try from 00470898 to 005708ab has its CatchHandler @ 004709b0 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  lVar8 = *(long *)(this + 0x80);
                    /* try { // try from 004708b0 to 005708bf has its CatchHandler @ 00470940 */
  *(PortalViewController **)(*(long *)(lVar8 + 0x110) + 0xf0) = this + 0x48;
  puVar1 = PTR_ButtonPressed_007e6c00;
                    /* try { // try from 004708c0 to 005709b3 has its CatchHandler @ 00470874 */
  pGVar12 = *(GUIControl **)(lVar8 + 0x120);
  local_70 = (undefined *)0x0;
  uStack_48 = 0;
  local_50 = (long *)PTR_ButtonPressed_007e6c00;
  local_40 = this;
  uVar6 = boost::detail::function::has_empty_target(&local_50);
  if ((uVar6 & 1) == 0) {
    local_58 = local_40;
    uStack_60 = uStack_48;
    local_68 = local_50;
    local_70 = PTR_stored_vtable_007e7310;
  }
  else {
    local_70 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar12,this,&local_70,0x40);
  if (((local_70 != (undefined *)0x0) && (((ulong)local_70 & 1) == 0)) &&
     (*(code **)((ulong)local_70 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 004708b0 with catch @ 00470940 */
    (**(code **)((ulong)local_70 & 0xfffffffffffffffe))(&local_68,&local_68,2);
  }
  pGVar12 = *(GUIControl **)(*(long *)(this + 0x80) + 0x130);
  local_70 = (undefined *)0x0;
  uStack_48 = 0;
  local_50 = (long *)puVar1;
  local_40 = this;
  uVar6 = boost::detail::function::has_empty_target(&local_50);
  if ((uVar6 & 1) == 0) {
    local_58 = local_40;
    uStack_60 = uStack_48;
    local_68 = local_50;
    local_70 = PTR_stored_vtable_007e7310;
  }
  else {
    local_70 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar12,this,&local_70,0x40);
                    /* catch() { ... } // from try @ 00470898 with catch @ 004709b0 */
  if (((local_70 != (undefined *)0x0) && (((ulong)local_70 & 1) == 0)) &&
     (*(code **)((ulong)local_70 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_70 & 0xfffffffffffffffe))(&local_68,&local_68,2);
  }
  pGVar12 = *(GUIControl **)(*(long *)(this + 0x80) + 0x140);
  local_70 = (undefined *)0x0;
                    /* try { // try from 004709f0 to 00570a77 has its CatchHandler @ 004709f0
                       catch() { ... } // from try @ 004709f0 with catch @ 004709f0
                       catch() { ... } // from try @ 00470a7c with catch @ 004709f0
                       catch() { ... } // from try @ 00470b30 with catch @ 004709f0
                       catch() { ... } // from try @ 00470bc8 with catch @ 004709f0 */
  uStack_48 = 0;
  local_50 = (long *)puVar1;
  local_40 = this;
  uVar6 = boost::detail::function::has_empty_target(&local_50);
  if ((uVar6 & 1) == 0) {
    local_58 = local_40;
    uStack_60 = uStack_48;
    local_68 = local_50;
    local_70 = PTR_stored_vtable_007e7310;
  }
  else {
    local_70 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar12,this,&local_70,0x40);
  if (local_70 != (undefined *)0x0) {
    if ((((ulong)local_70 & 1) == 0) &&
       (*(code **)((ulong)local_70 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_70 & 0xfffffffffffffffe))(&local_68,&local_68,2);
    }
    local_70 = (undefined *)0x0;
  }
  pPVar5 = *(PortalView **)(this + 0x80);
  if (*(char *)(*(long *)(pPVar5 + 0x110) + 0x3f8) != '\0') {
                    /* try { // try from 00470a78 to 00570a7b has its CatchHandler @ 00470b80 */
                    /* try { // try from 00470a7c to 00570b07 has its CatchHandler @ 004709f0 */
    MapNode::Title();
    PortalView::SetDescription(pPVar5,(string *)&local_70);
    if (local_70 + -0x18 != PTR_DAT_007e5de8) {
                    /* try { // try from 00470bc0 to 00570bc7 has its CatchHandler @ 00470bd0 */
      piVar10 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
                    /* try { // try from 00470bc8 to 00570bd3 has its CatchHandler @ 004709f0 */
          iVar11 = *piVar10;
                    /* catch() { ... } // from try @ 00470bc0 with catch @ 00470bd0 */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
                    /* try { // try from 00470bd4 to 00570ca3 has its CatchHandler @ 00470bd4
                       catch() { ... } // from try @ 00470bd4 with catch @ 00470bd4
                       catch() { ... } // from try @ 00470ca8 with catch @ 00470bd4
                       catch() { ... } // from try @ 00470d00 with catch @ 00470bd4
                       catch() { ... } // from try @ 00470e44 with catch @ 00470bd4 */
        } while (cVar2 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete(local_70 + -0x18);
      }
    }
    pPVar5 = *(PortalView **)(this + 0x80);
  }
  PortalView::SetHelpButtonVisible(pPVar5,true);
  lVar8 = *(long *)(this + 0x80);
  *(PortalViewController **)(*(long *)(lVar8 + 0x170) + 0xf0) = this + 0x50;
  plVar9 = *(long **)(this + 0x88);
  if (plVar9 != (long *)0x0) {
    plVar9[1] = plVar9[1] + 2;
  }
  plVar13 = *(long **)(this + 0x20);
  *(long *)(this + 0x18) = lVar8;
  *(long **)(this + 0x20) = plVar9;
  if ((plVar13 != (long *)0x0) && (lVar8 = plVar13[1], plVar13[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 00470b08 to 00570b0f has its CatchHandler @ 00470ba4 */
                    /* try { // try from 00470b14 to 00570b2f has its CatchHandler @ 00470b94 */
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar8 = plVar13[2];
    plVar13[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* try { // try from 00470b30 to 00570bbf has its CatchHandler @ 004709f0 */
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  puVar7 = *(undefined8 **)(this + 0x40);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,this);
  }
  if ((plVar9 != (long *)0x0) && (lVar8 = plVar9[1], plVar9[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar8 = plVar9[2];
    plVar9[2] = lVar8 + -1;
                    /* catch() { ... } // from try @ 00470a78 with catch @ 00470b80 */
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* catch() { ... } // from try @ 00470b14 with catch @ 00470b94 */
  if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00470b08 with catch @ 00470ba4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


