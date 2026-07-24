/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00590f48
 * Function: Caver::GUIAlertView::AddLink
 * Signature: undefined __thiscall AddLink(GUIAlertView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::AddLink(std::string const&) */

int __thiscall Caver::GUIAlertView::AddLink(GUIAlertView *this,string *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  GUIButton *pGVar8;
  GUILabel *pGVar9;
  GUIFrameView *pGVar10;
  string *psVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  GUIView *pGVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  GUIView *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  GUIAlertView *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  GUIFrameView *local_a0;
  long *local_98;
  undefined8 local_90;
  GUIButton *local_88;
  long *local_80;
  uint local_78 [2];
  long *local_70;
  undefined8 uStack_68;
  GUIAlertView *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_78[0] = 0xffffc8b4;
  pGVar8 = operator_new(0x1d0);
  GUIButton::GUIButton(pGVar8,0);
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>
            ((shared_ptr<Caver::GUIButton> *)&local_88,pGVar8);
  pGVar9 = (GUILabel *)GUIButton::titleLabel(local_88);
  lVar13 = *(long *)(*(long *)(this + 0x130) + 0xf0);
  if (lVar13 != *(long *)(pGVar9 + 0xf0)) {
    lVar18 = *(long *)(*(long *)(this + 0x130) + 0xf8);
    if (lVar18 != 0) {
      *(long *)(lVar18 + 8) = *(long *)(lVar18 + 8) + 1;
    }
    plVar21 = *(long **)(pGVar9 + 0xf8);
    *(long *)(pGVar9 + 0xf0) = lVar13;
    *(long *)(pGVar9 + 0xf8) = lVar18;
    if ((plVar21 != (long *)0x0) &&
       (lVar13 = plVar21[1], plVar21[1] = lVar13 + -1, lVar13 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar13 = plVar21[2];
      plVar21[2] = lVar13 + -1;
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  pGVar9 = (GUILabel *)GUIButton::titleLabel(local_88);
  uVar20 = local_78[0] >> 8 & 0xff;
  uVar19 = local_78[0] >> 0x10 & 0xff;
  if (((((local_78[0] & 0xff) != (uint)(byte)pGVar9[0x108]) || (uVar20 != (byte)pGVar9[0x109])) ||
      (uVar19 != (byte)pGVar9[0x10a])) || (local_78[0] >> 0x18 != (uint)(byte)pGVar9[0x10b])) {
    plVar21 = *(long **)(pGVar9 + 0x118);
    *(uint *)(pGVar9 + 0x108) =
         local_78[0] & 0xff | uVar20 << 8 | uVar19 << 0x10 | (local_78[0] >> 0x18) << 0x18;
    *(undefined8 *)(pGVar9 + 0x110) = 0;
    *(undefined8 *)(pGVar9 + 0x118) = 0;
    if ((plVar21 != (long *)0x0) &&
       (lVar13 = plVar21[1], plVar21[1] = lVar13 + -1, lVar13 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar13 = plVar21[2];
      plVar21[2] = lVar13 + -1;
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  pGVar9 = (GUILabel *)GUIButton::titleLabel(local_88);
  uVar6 = DAT_00688c08;
  pGVar9[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar9 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar9 + 0x148) = uVar6;
  GUILabel::UpdateText(pGVar9);
  GUIButton::SetTitle(local_88,param_1);
  pGVar8 = local_88;
  FUN_00666bb8(&local_d8,"click",&local_a0);
  FUN_0066a6a8(pGVar8 + 0x1c0,&local_d8);
  puVar7 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 005906e8 with catch @ 00591144 */
                    /* catch() { ... } // from try @ 00590a74 with catch @ 00591148 */
  if (local_d8 + -0x18 != (GUIView *)PTR_DAT_007e5de8) {
    pGVar16 = local_d8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar17 = *(int *)pGVar16;
      *(int *)pGVar16 = iVar17 + -1;
    }
    else {
      do {
        iVar17 = *(int *)pGVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar16,0x10);
        if (bVar4) {
          *(int *)pGVar16 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 0058f1a8 with catch @ 00591510 */
      } while (cVar3 != '\0');
    }
    if (iVar17 < 1) {
      operator_delete(local_d8 + -0x18);
    }
  }
                    /* catch() { ... } // from try @ 00590818 with catch @ 0059114c */
  pGVar8 = local_88;
  GUIButton::titleLabel(local_88);
  GUILabel::TextSize();
  local_d8 = *(GUIView **)(pGVar8 + 0x74);
                    /* try { // try from 00591170 to 00692da3 has its CatchHandler @ 00593064 */
  local_d0 = (long *)CONCAT44((float)((ulong)local_90 >> 0x20) +
                              (float)((ulong)DAT_00696cb0 >> 0x20),
                              (float)local_90 + (float)DAT_00696cb0);
  GUIView::SetFrame((GUIView *)pGVar8,(Rectangle *)&local_d8);
  pGVar10 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar10);
                    /* catch() { ... } // from try @ 00590780 with catch @ 0059119c */
                    /* catch() { ... } // from try @ 005905fc with catch @ 005911a0 */
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_a0,pGVar10);
  pGVar10 = local_a0;
  psVar11 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"white",auStack_a8);
  TextureLibrary::TextureForName(psVar11,(bool)((char)&stack0xfffffffffffffff0 + -0x60));
  GUIFrameView::SetFrameTexture(pGVar10,(intrusive_ptr *)&local_d8,true);
                    /* catch() { ... } // from try @ 0059029c with catch @ 005911f0 */
                    /* catch() { ... } // from try @ 00590060 with catch @ 005911f4 */
                    /* catch() { ... } // from try @ 0058fdf0 with catch @ 005911f8 */
                    /* catch() { ... } // from try @ 0058f888 with catch @ 005911fc */
                    /* catch() { ... } // from try @ 0058f4ac with catch @ 00591200 */
  if ((local_d8 != (GUIView *)0x0) &&
     (iVar17 = *(int *)(local_d8 + 8), *(int *)(local_d8 + 8) = iVar17 + -1, iVar17 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0058f118 with catch @ 00591204 */
                    /* catch() { ... } // from try @ 0058ee2c with catch @ 00591208 */
                    /* catch() { ... } // from try @ 0058ea90 with catch @ 0059120c */
    (**(code **)(*(long *)local_d8 + 8))();
  }
                    /* catch() { ... } // from try @ 0058e8b0 with catch @ 00591210 */
                    /* catch() { ... } // from try @ 0058e64c with catch @ 00591214 */
                    /* catch() { ... } // from try @ 0058e44c with catch @ 00591218 */
                    /* catch() { ... } // from try @ 0059021c with catch @ 0059121c */
  if (local_70 + -3 != (long *)puVar7) {
    plVar21 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar17 = (int)*plVar21;
                    /* catch() { ... } // from try @ 0058ed7c with catch @ 00591564 */
      *(int *)plVar21 = iVar17 + -1;
    }
    else {
      do {
        iVar17 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 0058eaf4 with catch @ 00591568 */
                    /* catch() { ... } // from try @ 0058e994 with catch @ 0059156c */
    if (iVar17 < 1) {
      operator_delete(local_70 + -3);
    }
  }
                    /* catch() { ... } // from try @ 005901f8 with catch @ 00591220 */
  GUIFrameView::SetFrameColor(local_a0,(Color *)local_78);
                    /* catch() { ... } // from try @ 0058f42c with catch @ 00591230 */
                    /* catch() { ... } // from try @ 0058f408 with catch @ 00591234 */
  local_b8 = *(undefined8 *)(local_88 + 0x84);
  local_b0 = *(undefined4 *)(local_88 + 0x8c);
                    /* catch() { ... } // from try @ 0058f308 with catch @ 00591244 */
  uStack_ac = 0x3f000000;
  GUIView::SetFrame((GUIView *)local_a0,(Rectangle *)&local_b8);
  pcVar14 = *(code **)(*(long *)local_88 + 0x60);
  local_d8 = (GUIView *)local_a0;
  local_d0 = local_98;
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
                    /* catch() { ... } // from try @ 0058f25c with catch @ 00591274 */
  (*pcVar14)(local_88,&local_d8);
  plVar21 = local_d0;
  if ((local_d0 != (long *)0x0) &&
     (lVar13 = local_d0[1], local_d0[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_d0 + 0x10))(local_d0);
                    /* catch() { ... } // from try @ 0058f098 with catch @ 005912a4 */
    lVar13 = plVar21[2];
                    /* catch() { ... } // from try @ 0058f074 with catch @ 005912a8 */
    plVar21[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
                    /* catch() { ... } // from try @ 0058ef74 with catch @ 005912b8 */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pcVar14 = *(code **)(*(long *)this + 0x60);
  local_d8 = (GUIView *)local_88;
  local_d0 = local_80;
  if (local_80 != (long *)0x0) {
    local_80[1] = local_80[1] + 1;
  }
                    /* catch() { ... } // from try @ 0058eec8 with catch @ 005912e8 */
  (*pcVar14)(this,&local_d8);
  plVar21 = local_d0;
  if ((local_d0 != (long *)0x0) &&
     (lVar13 = local_d0[1], local_d0[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_d0 + 0x10))(local_d0);
                    /* catch() { ... } // from try @ 005904e8 with catch @ 00591318 */
    lVar13 = plVar21[2];
                    /* catch() { ... } // from try @ 00590168 with catch @ 0059131c */
    plVar21[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  lVar13 = *(long *)(this + 0x170);
  puVar1 = *(undefined8 **)(this + 0x178);
  lVar18 = *(long *)(this + 0x158);
  lVar2 = *(long *)(this + 0x160);
  if (*(undefined8 **)(this + 0x180) == puVar1) {
    std::
    vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
    ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
                     *)(this + 0x170),puVar1,&local_88);
  }
  else {
    *puVar1 = local_88;
    puVar1[1] = local_80;
    if (local_80 != (long *)0x0) {
      local_80[1] = local_80[1] + 1;
    }
                    /* catch() { ... } // from try @ 005900f0 with catch @ 0059136c */
                    /* catch() { ... } // from try @ 0058ff74 with catch @ 00591370 */
    *(undefined8 **)(this + 0x178) = puVar1 + 2;
  }
  local_d8 = (GUIView *)0x0;
  uStack_68 = 0;
  local_70 = (long *)PTR_ButtonPressed_007e6a40;
  local_60 = this;
  uVar12 = boost::detail::function::has_empty_target(&local_70);
  if ((uVar12 & 1) == 0) {
                    /* catch() { ... } // from try @ 0058fe80 with catch @ 005913c0 */
                    /* catch() { ... } // from try @ 0058fd04 with catch @ 005913c4 */
    local_c0 = local_60;
    uStack_c8 = uStack_68;
    local_d0 = local_70;
    local_d8 = (GUIView *)PTR_stored_vtable_007e5160;
  }
  else {
    local_d8 = (GUIView *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent((GUIControl *)local_88,this,&local_d8,0x40);
  if (local_d8 != (GUIView *)0x0) {
    if ((((ulong)local_d8 & 1) == 0) &&
       (*(code **)((ulong)local_d8 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 0058fbfc with catch @ 00591414 */
      (**(code **)((ulong)local_d8 & 0xfffffffffffffffe))(&local_d0,&local_d0,2);
    }
                    /* catch() { ... } // from try @ 0058f9a4 with catch @ 00591418 */
    local_d8 = (GUIView *)0x0;
  }
  UpdateLayout(this);
  if ((local_98 != (long *)0x0) &&
     (lVar15 = local_98[1], local_98[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar15 = local_98[2];
    local_98[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 0058f90c with catch @ 00591468 */
      (**(code **)(*local_98 + 0x18))(local_98);
    }
  }
                    /* catch() { ... } // from try @ 0058f5c4 with catch @ 0059146c */
  if ((local_80 != (long *)0x0) &&
     (lVar15 = local_80[1], local_80[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    lVar15 = local_80[2];
    local_80[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*local_80 + 0x18))(local_80);
    }
  }
                    /* catch() { ... } // from try @ 0058f53c with catch @ 005914bc */
                    /* catch() { ... } // from try @ 0058f378 with catch @ 005914c0 */
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)((ulong)((long)puVar1 - lVar13) >> 4) + (int)((ulong)(lVar2 - lVar18) >> 4);
}


