/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00532a08
 * Function: Caver::QuestsView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(QuestsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestsView::LayoutSubviews() */

void __thiscall Caver::QuestsView::LayoutSubviews(QuestsView *this)

{
  GUIView *pGVar1;
  GUIView *this_00;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  char cVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined8 uVar21;
  code *pcVar22;
  bool bVar23;
  undefined *puVar24;
  GUIView *this_01;
  long *plVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  undefined4 local_f4;
  float local_f0;
  float local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_b8;
  float local_b0;
  long local_a8;
  
                    /* try { // try from 00532a34 to 00632a37 has its CatchHandler @ 00532aa0 */
                    /* try { // try from 00532a38 to 00632ab7 has its CatchHandler @ 00532928 */
  lVar8 = tpidr_el0;
  local_a8 = *(long *)(lVar8 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  fVar28 = *(float *)(this + 0x84);
  uVar6 = *(undefined4 *)(this + 0x90);
  GUIView::safeBounds();
  local_d0 = 0;
  uStack_c8 = CONCAT44(uVar6,(local_b8 + local_b0) - fVar28);
  GUIView::SetFrame(*(GUIView **)(this + 0x108),(Rectangle *)&local_d0);
  plVar12 = *(long **)(this + 0x108);
                    /* catch() { ... } // from try @ 00532a34 with catch @ 00532aa0 */
  local_d0 = 0;
  uStack_c8 = (ulong)*(uint *)((long)plVar12 + 0x8c);
  (**(code **)(*plVar12 + 0x130))(plVar12,&local_d0);
  fVar9 = DAT_00694c48;
  fVar27 = DAT_00689378;
  fVar26 = DAT_00684324;
  fVar28 = DAT_00684320;
  puVar19 = *(undefined8 **)(this + 0x118);
  puVar2 = *(undefined8 **)(this + 0x120);
                    /* catch() { ... } // from try @ 00532990 with catch @ 00532ab4 */
  if (puVar19 != puVar2) {
                    /* try { // try from 00532ab8 to 00632abf has its CatchHandler @ 00532ac8 */
                    /* try { // try from 00532ac0 to 00632acb has its CatchHandler @ 00532928 */
                    /* catch() { ... } // from try @ 00532ab8 with catch @ 00532ac8 */
                    /* catch() { ... } // from try @ 00532b14 with catch @ 00532acc
                       catch() { ... } // from try @ 00532b30 with catch @ 00532acc */
    puVar24 = PTR_DAT_007e5de8;
    fVar30 = DAT_00689378;
    do {
      uVar21 = *puVar19;
      FUN_0066a528(&local_d0,uVar21);
                    /* try { // try from 00532bac to 00632baf has its CatchHandler @ 00532bc8 */
                    /* try { // try from 00532bb0 to 00632bb7 has its CatchHandler @ 00532bdc */
      puVar13 = (undefined8 *)
                std::
                map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                ::operator[]((map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                              *)(this + 0x160),(string *)&local_d0);
      pGVar1 = (GUIView *)*puVar13;
      plVar12 = (long *)puVar13[1];
      if (plVar12 != (long *)0x0) {
        plVar12[1] = plVar12[1] + 1;
      }
                    /* catch() { ... } // from try @ 00532bac with catch @ 00532bc8 */
                    /* try { // try from 00532bcc to 00632bd3 has its CatchHandler @ 00532bd8 */
                    /* try { // try from 00532bd4 to 00632bef has its CatchHandler @ 00532b68 */
      if ((undefined *)(local_d0 + -0x18) != puVar24) {
                    /* try { // try from 00532b10 to 00632b13 has its CatchHandler @ 00532b24 */
                    /* try { // try from 00532b14 to 00632b27 has its CatchHandler @ 00532acc */
        piVar15 = (int *)(local_d0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar17 = *piVar15;
          *piVar15 = iVar17 + -1;
        }
        else {
          do {
            iVar17 = *piVar15;
                    /* catch() { ... } // from try @ 00532b10 with catch @ 00532b24 */
            cVar7 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar23) {
              *piVar15 = iVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
                    /* try { // try from 00532b28 to 00632b2f has its CatchHandler @ 00532b38 */
          } while (cVar7 != '\0');
        }
        if (iVar17 < 1) {
                    /* catch() { ... } // from try @ 00532bd4 with catch @ 00532b68 */
          operator_delete((undefined *)(local_d0 + -0x18));
        }
      }
      if (pGVar1 != (GUIView *)0x0) {
                    /* catch() { ... } // from try @ 00532bb0 with catch @ 00532bdc */
        fVar30 = fVar30 - (*(float *)(*(long *)(pGVar1 + 0xf0) + 0x48) + 5.0);
        local_d0 = CONCAT44(fVar30,0x42200000);
        uStack_c8 = CONCAT44(*(float *)(*(long *)(pGVar1 + 0xf0) + 0x48),
                             *(float *)(*(long *)(this + 0x108) + 0x8c) + fVar27);
        GUIView::SetFrame(pGVar1,(Rectangle *)&local_d0);
        uStack_c8 = *(ulong *)(*(long *)(this + 0x108) + 0xf4);
        local_d0 = *(long *)(*(long *)(this + 0x108) + 0xec);
        Rectangle::ExpandToincludeRectangle((Rectangle *)&local_d0,(Rectangle *)(pGVar1 + 0x74));
        (**(code **)(**(long **)(this + 0x108) + 0x130))(*(long **)(this + 0x108),&local_d0);
        FUN_0066a528(&local_e0,uVar21);
        plVar14 = (long *)std::
                          map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                          ::operator[]((map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                                        *)(this + 0x130),(string *)&local_e0);
        if ((undefined *)(local_e0 + -0x18) != puVar24) {
                    /* try { // try from 00532b30 to 00632b3b has its CatchHandler @ 00532acc */
                    /* catch() { ... } // from try @ 00532b28 with catch @ 00532b38 */
          piVar15 = (int *)(local_e0 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar17 = *piVar15;
            *piVar15 = iVar17 + -1;
          }
          else {
            do {
              iVar17 = *piVar15;
              cVar7 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar23) {
                *piVar15 = iVar17 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          if (iVar17 < 1) {
            operator_delete((undefined *)(local_e0 + -0x18));
          }
        }
                    /* try { // try from 00532c6c to 00632ec3 has its CatchHandler @ 00532c6c
                       catch() { ... } // from try @ 00532c6c with catch @ 00532c6c
                       catch() { ... } // from try @ 00532ec8 with catch @ 00532c6c */
        plVar25 = (long *)*plVar14;
        plVar14 = (long *)plVar14[1];
        fVar30 = fVar30 + -8.0;
        puVar24 = PTR_DAT_007e5de8;
        if (plVar25 != plVar14) {
          bVar23 = false;
          do {
            pGVar1 = (GUIView *)plVar25[3];
            plVar3 = (long *)plVar25[4];
            if (plVar3 != (long *)0x0) {
              plVar3[1] = plVar3[1] + 1;
            }
            this_00 = (GUIView *)plVar25[5];
            plVar4 = (long *)plVar25[6];
            if (plVar4 != (long *)0x0) {
              plVar4[1] = plVar4[1] + 1;
            }
            plVar18 = (long *)*plVar25;
            plVar5 = (long *)plVar25[1];
            if (plVar18 != plVar5) {
              fVar29 = 0.0;
              bVar20 = true;
              do {
                local_e0 = 0;
                uStack_d8 = CONCAT44(*(undefined4 *)(*(long *)((GUIView *)*plVar18 + 0xf0) + 0x48),
                                     *(float *)(*(long *)(this + 0x108) + 0xf4) + fVar9);
                GUIView::SetFrame((GUIView *)*plVar18,(Rectangle *)&local_e0);
                this_01 = (GUIView *)*plVar18;
                GUILabel::TextSize();
                fVar11 = local_e4;
                GUILabel::TextSize();
                fVar10 = local_f0;
                GUILabel::TextSize();
                local_e0 = (ulong)(uint)(fVar29 - fVar11) << 0x20;
                uStack_d8 = CONCAT44(local_f4,fVar10 + 4.0);
                GUIView::SetFrame(this_01,(Rectangle *)&local_e0);
                lVar16 = *plVar18;
                fVar29 = *(float *)(lVar16 + 0x78);
                if (bVar20) {
                  pcVar22 = *(code **)(*(long *)pGVar1 + 0xf8);
                  Rectangle::RectangleByOutsetting((Rectangle *)(lVar16 + 0x74),15.0);
                  (*pcVar22)(pGVar1,&local_e0);
                }
                else {
                  uStack_d8 = *(undefined8 *)(pGVar1 + 0x8c);
                  local_e0 = *(long *)(pGVar1 + 0x84);
                  Rectangle::RectangleByOutsetting((Rectangle *)(lVar16 + 0x74),15.0);
                  Rectangle::ExpandToincludeRectangle
                            ((Rectangle *)&local_e0,(Rectangle *)&local_108);
                  (**(code **)(*(long *)pGVar1 + 0xf8))(pGVar1,&local_e0);
                }
                plVar18 = plVar18 + 2;
                bVar20 = false;
                fVar29 = fVar29 + -10.0;
              } while (plVar5 != plVar18);
            }
            fVar29 = 25.0;
            uStack_d8 = *(undefined8 *)(pGVar1 + 0x7c);
            if (bVar23) {
              fVar29 = (*(float *)(*(long *)(this + 0x108) + 0xec) +
                        *(float *)(*(long *)(this + 0x108) + 0xf4) + -25.0) -
                       *(float *)(pGVar1 + 0x7c);
            }
            local_e0 = CONCAT44(fVar30 - *(float *)(pGVar1 + 0x80),fVar29);
            GUIView::SetFrame(pGVar1,(Rectangle *)&local_e0);
            local_100 = *(float *)(this_00 + 0x7c);
            fStack_fc = *(float *)(this_00 + 0x80);
            if (!bVar23) {
              fVar29 = (*(float *)(pGVar1 + 0x84) + *(float *)(pGVar1 + 0x8c) + fVar26) - local_100;
            }
            else {
              fVar29 = *(float *)(pGVar1 + 0x84) + fVar28;
            }
            this_00[0x108] = (GUIView)bVar23;
            local_108 = CONCAT44((*(float *)(pGVar1 + 0x88) + 3.0) - fStack_fc,fVar29);
            GUIView::SetFrame(this_00,(Rectangle *)&local_108);
            fVar29 = *(float *)(pGVar1 + 0x80);
            uStack_118 = *(undefined8 *)(*(long *)(this + 0x108) + 0xf4);
            local_120 = *(undefined8 *)(*(long *)(this + 0x108) + 0xec);
                    /* try { // try from 00532ec4 to 00632ec7 has its CatchHandler @ 00532ffc */
                    /* try { // try from 00532ec8 to 0063300f has its CatchHandler @ 00532c6c */
            Rectangle::ExpandToincludeRectangle
                      ((Rectangle *)&local_120,(Rectangle *)(pGVar1 + 0x74));
            (**(code **)(**(long **)(this + 0x108) + 0x130))(*(long **)(this + 0x108),&local_120);
            if ((plVar4 != (long *)0x0) &&
               (lVar16 = plVar4[1], plVar4[1] = lVar16 + -1, lVar16 + -1 == 0)) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              lVar16 = plVar4[2];
              plVar4[2] = lVar16 + -1;
              if (lVar16 + -1 == 0) {
                (**(code **)(*plVar4 + 0x18))(plVar4);
              }
            }
            if ((plVar3 != (long *)0x0) &&
               (lVar16 = plVar3[1], plVar3[1] = lVar16 + -1, lVar16 + -1 == 0)) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              lVar16 = plVar3[2];
              plVar3[2] = lVar16 + -1;
              if (lVar16 + -1 == 0) {
                (**(code **)(*plVar3 + 0x18))(plVar3);
              }
            }
            plVar25 = plVar25 + 7;
            fVar30 = fVar30 - (fVar29 + 20.0);
            bVar23 = (bool)(bVar23 ^ 1);
            puVar24 = PTR_DAT_007e5de8;
          } while (plVar25 != plVar14);
        }
      }
      if ((plVar12 != (long *)0x0) &&
         (lVar16 = plVar12[1], plVar12[1] = lVar16 + -1, lVar16 + -1 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar16 = plVar12[2];
        plVar12[2] = lVar16 + -1;
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar2);
  }
  plVar12 = *(long **)(this + 0x108);
                    /* catch() { ... } // from try @ 00532ec4 with catch @ 00532ffc */
  fVar28 = *(float *)(plVar12 + 0x1e) + -30.0;
  fVar26 = (*(float *)(plVar12 + 0x1e) + *(float *)(plVar12 + 0x1f)) - fVar28;
  if (fVar26 < *(float *)(plVar12 + 0x12)) {
    fVar26 = fVar28 + fVar26;
    fVar28 = fVar26 - *(float *)(plVar12 + 0x12);
    fVar26 = fVar26 - fVar28;
  }
  uStack_c8 = CONCAT44(fVar26,*(undefined4 *)((long)plVar12 + 0xf4));
  local_d0 = CONCAT44(fVar28,*(undefined4 *)((long)plVar12 + 0xec));
  (**(code **)(*plVar12 + 0x130))(plVar12,&local_d0);
  fVar28 = DAT_00683944;
  lVar16 = *(long *)(this + 0x108);
  fVar26 = -*(float *)(lVar16 + 0xec);
  fVar27 = -*(float *)(lVar16 + 0xf0);
  if (DAT_00683944 < ABS(fVar26 - *(float *)(lVar16 + 0x108))) {
    *(undefined4 *)(lVar16 + 0x124) = 0;
  }
  *(undefined1 *)(lVar16 + 0x104) = 1;
  *(float *)(lVar16 + 0x108) = fVar26;
  if (fVar28 < ABS(fVar27 - *(float *)(lVar16 + 0x134))) {
    *(undefined4 *)(lVar16 + 0x150) = 0;
  }
  *(undefined1 *)(lVar16 + 0x130) = 1;
  *(float *)(lVar16 + 0x134) = fVar27;
  *(float *)(lVar16 + 0x100) = fVar26;
  *(float *)(lVar16 + 300) = fVar27;
  if (*(long *)(lVar8 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


