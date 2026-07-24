/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d3998
 * Function: Caver::GUIPopoverView::GUIPopoverView
 * Signature: undefined __thiscall GUIPopoverView(GUIPopoverView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPopoverView::GUIPopoverView() */

void __thiscall Caver::GUIPopoverView::GUIPopoverView(GUIPopoverView *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  GUIRoundedRect *pGVar6;
  GUITexturedRect *pGVar7;
  long lVar8;
  int iVar9;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  GUIRoundedRect *local_48;
  long *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar5 = PTR_vtable_007e5d40;
  this[0xe9] = (GUIPopoverView)0x0;
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined **)this = puVar5 + 0x10;
  *(undefined8 *)(this + 0x145) = 0;
  pGVar6 = operator_new(0xa8);
  GUIRoundedRect::GUIRoundedRect(pGVar6);
  local_48 = pGVar6;
  boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>((shared_count *)&local_40,pGVar6)
  ;
  boost::detail::sp_enable_shared_from_this(&local_48,pGVar6,pGVar6);
  pGVar6 = *(GUIRoundedRect **)(this + 0x128);
  plVar1 = *(long **)(this + 0x130);
  *(GUIRoundedRect **)(this + 0x128) = local_48;
  *(long **)(this + 0x130) = local_40;
  local_48 = pGVar6;
  local_40 = plVar1;
  if ((plVar1 != (long *)0x0) && (lVar8 = plVar1[1], plVar1[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar8 = plVar1[2];
    plVar1[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  pGVar6 = *(GUIRoundedRect **)(this + 0x128);
  FUN_00666bb8(&local_48,"ui_popover_border",auStack_50);
  GUIRoundedRect::InitWithTextureName(pGVar6,(string *)&local_48);
  puVar5 = PTR_DAT_007e5de8;
  if (local_48 + -0x18 != (GUIRoundedRect *)PTR_DAT_007e5de8) {
    pGVar6 = local_48 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *(int *)pGVar6;
      *(int *)pGVar6 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pGVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pGVar6,0x10);
        if (bVar3) {
          *(int *)pGVar6 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 005d3c18 to 006d3c3f has its CatchHandler @ 005d3c54 */
    if (iVar9 < 1) {
      operator_delete(local_48 + -0x18);
    }
  }
  pGVar7 = operator_new(0x70);
  GUITexturedRect::GUITexturedRect(pGVar7);
  local_48 = (GUIRoundedRect *)pGVar7;
  boost::detail::shared_count::shared_count<Caver::GUITexturedRect>
            ((shared_count *)&local_40,pGVar7);
                    /* try { // try from 005d3aec to 006d3b2b has its CatchHandler @ 005d04f4 */
                    /* catch() { ... } // from try @ 005d1184 with catch @ 005d3af4 */
                    /* catch() { ... } // from try @ 005d2318 with catch @ 005d3af8 */
  boost::detail::sp_enable_shared_from_this(&local_48,pGVar7,pGVar7);
  pGVar6 = *(GUIRoundedRect **)(this + 0x138);
  plVar1 = *(long **)(this + 0x140);
  *(GUIRoundedRect **)(this + 0x138) = local_48;
  *(long **)(this + 0x140) = local_40;
  local_48 = pGVar6;
  local_40 = plVar1;
  if ((plVar1 != (long *)0x0) && (lVar8 = plVar1[1], plVar1[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 005d3b2c to 006d3b53 has its CatchHandler @ 005d3b64 */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar8 = plVar1[2];
    plVar1[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  pGVar7 = *(GUITexturedRect **)(this + 0x138);
                    /* catch() { ... } // from try @ 005d3b2c with catch @ 005d3b64 */
                    /* catch() { ... } // from try @ 005d10ec with catch @ 005d3b68 */
  FUN_00666bb8(&local_48,"ui_popover_arrow",auStack_50);
                    /* catch() { ... } // from try @ 005d1158 with catch @ 005d3b70 */
  local_58 = DAT_00697200;
  GUITexturedRect::InitWithTextureName(pGVar7,(string *)&local_48,(Vector2 *)&local_58);
                    /* try { // try from 005d3b8c to 006d3bef has its CatchHandler @ 005d3c50 */
  if (local_48 + -0x18 != (GUIRoundedRect *)puVar5) {
    pGVar6 = local_48 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *(int *)pGVar6;
      *(int *)pGVar6 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pGVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pGVar6,0x10);
        if (bVar3) {
          *(int *)pGVar6 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_48 + -0x18);
    }
  }
                    /* catch() { ... } // from try @ 005d10c0 with catch @ 005d3ba4 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


