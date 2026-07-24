/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ca1b8
 * Function: Caver::ConsumableItemView::SetItem
 * Signature: undefined __thiscall SetItem(ConsumableItemView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::ConsumableItemView::SetItem(ConsumableItemView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  GUIAnimation *pGVar6;
  string *psVar7;
  GUIAnimation *pGVar8;
  GUIPropertyValue *pGVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  undefined8 local_78;
  long *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 uStack_58;
  GUIAnimation *local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
  }
  plVar13 = *(long **)(this + 0x1e8);
  *(undefined8 *)(this + 0x1e0) = uVar1;
  *(long *)(this + 0x1e8) = lVar10;
  if ((plVar13 != (long *)0x0) && (lVar10 = plVar13[1], plVar13[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar10 = plVar13[2];
    plVar13[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      lVar10 = *(long *)param_1;
      goto joined_r0x004ca554;
    }
  }
  lVar10 = *(long *)param_1;
joined_r0x004ca554:
  if (lVar10 == 0) {
    local_70 = (long *)0x0;
                    /* catch() { ... } // from try @ 004ca590 with catch @ 004ca560 */
    GUIButton::SetImage((GUIButton *)this,(intrusive_ptr *)&local_70);
                    /* try { // try from 004ca57c to 005ca58f has its CatchHandler @ 004ca5b4 */
    if ((local_70 != (long *)0x0) &&
       (iVar12 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar12, iVar12 == 0)) {
      (**(code **)(*local_70 + 8))();
    }
                    /* try { // try from 004ca590 to 005ca5b7 has its CatchHandler @ 004ca560 */
    this[0xe4] = (ConsumableItemView)0x1;
  }
  else {
    psVar7 = (string *)TextureLibrary::sharedLibrary();
    FUN_0066a528(&local_40,*(long *)param_1 + 8);
    FUN_0035a030(&local_50,"overlayitem_",&local_40);
    TextureLibrary::TextureForName(psVar7,SUB81(&local_50,0));
    GUIButton::SetImage((GUIButton *)this,(intrusive_ptr *)&local_70);
    if ((local_70 != (long *)0x0) &&
       (iVar12 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar12, iVar12 == 0)) {
      (**(code **)(*local_70 + 8))();
    }
    puVar5 = PTR_DAT_007e5de8;
    if (local_50 + -0x18 != (GUIAnimation *)PTR_DAT_007e5de8) {
                    /* try { // try from 004ca5b8 to 005ca667 has its CatchHandler @ 004ca5b8
                       catch() { ... } // from try @ 004ca5b8 with catch @ 004ca5b8
                       catch() { ... } // from try @ 004ca694 with catch @ 004ca5b8
                       catch() { ... } // from try @ 004ca828 with catch @ 004ca5b8 */
      pGVar8 = local_50 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *(int *)pGVar8;
        *(int *)pGVar8 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *(int *)pGVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pGVar8,0x10);
          if (bVar3) {
            *(int *)pGVar8 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete(local_50 + -0x18);
      }
    }
    if ((undefined *)(local_40 + -0x18) != puVar5) {
      piVar11 = (int *)(local_40 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_40 + -0x18));
      }
    }
    pGVar8 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar8);
    local_50 = pGVar8;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_48,pGVar8)
    ;
    boost::detail::sp_enable_shared_from_this(&local_50,pGVar8,pGVar8);
    pGVar8 = local_50;
    local_78 = DAT_00692298;
    local_40 = DAT_00692290;
    *(undefined4 *)(local_50 + 0x30) = 1;
    pGVar9 = (GUIPropertyValue *)
             GUIAnimationCurve::GUIAnimationCurve
                       ((GUIAnimationCurve *)&local_70,(Vector2 *)&local_40,(Vector2 *)&local_78);
    pGVar6 = local_50;
    *(undefined8 *)(pGVar8 + 0x3c) = uStack_68;
    *(long **)(pGVar8 + 0x34) = local_70;
    *(undefined8 *)(pGVar8 + 0x4c) = uStack_58;
    *(long **)(pGVar8 + 0x44) = local_60;
                    /* catch() { ... } // from try @ 004ca3c0 with catch @ 004ca358
                       catch() { ... } // from try @ 004ca3dc with catch @ 004ca358 */
    pGVar9 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar9,DAT_00683944);
    *(undefined4 *)(pGVar6 + 0x70) = local_70._0_4_;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar13 = *(long **)(pGVar6 + 0x80);
    *(undefined8 *)(pGVar6 + 0x78) = uStack_68;
    *(long **)(pGVar6 + 0x80) = local_60;
    if ((plVar13 != (long *)0x0) &&
       (lVar10 = plVar13[1], plVar13[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      pGVar9 = (GUIPropertyValue *)(**(code **)(*plVar13 + 0x10))(plVar13);
      lVar10 = plVar13[2];
      plVar13[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
                    /* try { // try from 004ca3bc to 005ca3bf has its CatchHandler @ 004ca3d0 */
                    /* try { // try from 004ca3c0 to 005ca3d3 has its CatchHandler @ 004ca358 */
        pGVar9 = (GUIPropertyValue *)(**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    plVar13 = local_60;
                    /* catch() { ... } // from try @ 004ca3bc with catch @ 004ca3d0 */
                    /* try { // try from 004ca3d4 to 005ca3db has its CatchHandler @ 004ca3e4 */
    if ((local_60 != (long *)0x0) &&
       (lVar10 = local_60[1], local_60[1] = lVar10 + -1, lVar10 + -1 == 0)) {
                    /* try { // try from 004ca3dc to 005ca3e7 has its CatchHandler @ 004ca358 */
                    /* catch() { ... } // from try @ 004ca3d4 with catch @ 004ca3e4 */
                    /* catch() { ... } // from try @ 004ca474 with catch @ 004ca3e8 */
      pGVar9 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x10))(local_60);
      lVar10 = plVar13[2];
      plVar13[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        pGVar9 = (GUIPropertyValue *)(**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    pGVar8 = local_50;
    GUIPropertyValue::ValueWithFloat(pGVar9,1.0);
    *(undefined4 *)(pGVar8 + 0x88) = local_70._0_4_;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar13 = *(long **)(pGVar8 + 0x98);
    *(undefined8 *)(pGVar8 + 0x90) = uStack_68;
    *(long **)(pGVar8 + 0x98) = local_60;
                    /* try { // try from 004ca44c to 005ca44f has its CatchHandler @ 004ca468 */
                    /* try { // try from 004ca450 to 005ca457 has its CatchHandler @ 004ca47c */
    if ((plVar13 != (long *)0x0) &&
       (lVar10 = plVar13[1], plVar13[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar10 = plVar13[2];
                    /* catch() { ... } // from try @ 004ca44c with catch @ 004ca468 */
                    /* try { // try from 004ca46c to 005ca473 has its CatchHandler @ 004ca478 */
      plVar13[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
                    /* try { // try from 004ca474 to 005ca48f has its CatchHandler @ 004ca3e8 */
                    /* catch() { ... } // from try @ 004ca46c with catch @ 004ca478 */
                    /* catch() { ... } // from try @ 004ca450 with catch @ 004ca47c */
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
                    /* try { // try from 004ca490 to 005ca4ab has its CatchHandler @ 004ca490
                       catch() { ... } // from try @ 004ca490 with catch @ 004ca490
                       catch() { ... } // from try @ 004ca4b0 with catch @ 004ca490 */
    if ((local_60 != (long *)0x0) &&
       (lVar10 = local_60[1], local_60[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
                    /* try { // try from 004ca4ac to 005ca4af has its CatchHandler @ 004ca4f4 */
      lVar10 = local_60[2];
                    /* try { // try from 004ca4b0 to 005ca507 has its CatchHandler @ 004ca490 */
      local_60[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
    *(undefined8 *)(local_50 + 0x58) = _DAT_006922a0;
    GUIView::RemoveAllAnimations((GUIView *)this);
    GUIView::AddAnimation((GUIView *)this,(shared_ptr *)&local_50);
    this[0xe4] = (ConsumableItemView)0x0;
                    /* catch() { ... } // from try @ 004ca4ac with catch @ 004ca4f4 */
    if ((local_48 != (long *)0x0) &&
       (lVar10 = local_48[1], local_48[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar10 = local_48[2];
      local_48[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_48 + 0x18))(local_48);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 004ca57c with catch @ 004ca5b4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


