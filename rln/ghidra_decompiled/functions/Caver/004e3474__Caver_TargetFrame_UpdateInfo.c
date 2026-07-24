/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e3474
 * Function: Caver::TargetFrame::UpdateInfo
 * Signature: undefined __thiscall UpdateInfo(TargetFrame * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TargetFrame::UpdateInfo() */

void __thiscall Caver::TargetFrame::UpdateInfo(TargetFrame *this)

{
  FontText *this_00;
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  float fVar13;
  undefined *local_88;
  long local_80 [2];
  undefined8 local_70;
  float local_68;
  undefined4 uStack_64;
  char acStack_5c [4];
  long local_58;
  
                    /* catch() { ... } // from try @ 004e346c with catch @ 004e347c */
                    /* try { // try from 004e3480 to 005e3487 has its CatchHandler @ 004e3490 */
                    /* try { // try from 004e3488 to 005e3493 has its CatchHandler @ 004e3428 */
                    /* catch() { ... } // from try @ 004e3480 with catch @ 004e3490 */
  lVar5 = tpidr_el0;
                    /* try { // try from 004e3494 to 005e34db has its CatchHandler @ 004e3494
                       catch(type#1 @ 00000000) { ... } // from try @ 004e3494 with catch @ 004e3494
                       catch(type#1 @ 00000000) { ... } // from try @ 004e34f8 with catch @ 004e3494
                       catch(type#1 @ 00000000) { ... } // from try @ 004e35d8 with catch @ 004e3494
                        */
  local_58 = *(long *)(lVar5 + 0x28);
  this_00 = (FontText *)(this + 0x120);
  FontText::Clear(this_00);
  local_70 = CONCAT44(local_70._4_4_,0xffffffff);
  FontText::SetColor(this_00,(Color *)&local_70);
  FUN_00666bb8(&local_70,"Level ",&local_88);
  local_80[0] = 0;
                    /* try { // try from 004e34dc to 005e34f7 has its CatchHandler @ 004e35cc */
  FontText::AddText(this_00,(string *)&local_70,0.0,(Vector2 *)local_80);
  puVar6 = PTR_DAT_007e5de8;
                    /* try { // try from 004e34f8 to 005e35cf has its CatchHandler @ 004e3494 */
  if ((undefined *)(local_70 + -0x18) == PTR_DAT_007e5de8) {
LAB_004e3504:
    if (this[0x104] != (TargetFrame)0x0) goto LAB_004e3520;
LAB_004e350c:
    iVar11 = *(int *)(this + 0x100) - *(int *)(this + 0xf0);
    if (4 < iVar11) goto LAB_004e3520;
    if (iVar11 < 2) {
      if (iVar11 < -2) {
        if (iVar11 < -4) {
          GameInterfaceBuilder::TextGradient(0.0,0.0,DAT_0068ea1c,1.0);
          lVar9 = CONCAT44(uStack_64,local_68);
          if (lVar9 != 0) {
            *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
          }
          plVar12 = *(long **)(this + 0x140);
          *(long *)(this + 0x138) = local_70;
          *(long *)(this + 0x140) = lVar9;
          if ((plVar12 != (long *)0x0) &&
             (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            lVar9 = plVar12[2];
            plVar12[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
          }
        }
        else {
          GameInterfaceBuilder::TextGradient(DAT_0068ea18,1.0,DAT_0068ea1c,1.0);
          lVar9 = CONCAT44(uStack_64,local_68);
          if (lVar9 != 0) {
            *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
          }
          plVar12 = *(long **)(this + 0x140);
          *(long *)(this + 0x138) = local_70;
          *(long *)(this + 0x140) = lVar9;
          if ((plVar12 != (long *)0x0) &&
             (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            lVar9 = plVar12[2];
            plVar12[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
          }
        }
      }
      else {
                    /* catch() { ... } // from try @ 004e3798 with catch @ 004e37b0 */
                    /* catch() { ... } // from try @ 004e3794 with catch @ 004e37b8 */
                    /* try { // try from 004e37bc to 005e37c3 has its CatchHandler @ 004e37d4 */
                    /* try { // try from 004e37c4 to 005e37d7 has its CatchHandler @ 004e3774 */
        GameInterfaceBuilder::TextGradient(DAT_00692c08,1.0,DAT_0068ea1c,1.0);
        lVar9 = CONCAT44(uStack_64,local_68);
        if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 004e37bc with catch @ 004e37d4 */
          *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
        }
        plVar12 = *(long **)(this + 0x140);
        *(long *)(this + 0x138) = local_70;
        *(long *)(this + 0x140) = lVar9;
        if ((plVar12 != (long *)0x0) &&
           (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          lVar9 = plVar12[2];
          plVar12[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
      }
    }
    else {
      GameInterfaceBuilder::TextGradient(DAT_00687974,1.0,DAT_0068ea1c,1.0);
      lVar9 = CONCAT44(uStack_64,local_68);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
      }
      plVar12 = *(long **)(this + 0x140);
      *(long *)(this + 0x138) = local_70;
      *(long *)(this + 0x140) = lVar9;
      if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
                    /* catch() { ... } // from try @ 004e37c4 with catch @ 004e3774 */
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar9 = plVar12[2];
        plVar12[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
                    /* try { // try from 004e3794 to 005e3797 has its CatchHandler @ 004e37b8 */
                    /* try { // try from 004e3798 to 005e379f has its CatchHandler @ 004e37b0 */
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
    }
    plVar12 = (long *)CONCAT44(uStack_64,local_68);
    if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar9 = plVar12[2];
      plVar12[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    if (this[0x104] != (TargetFrame)0x0) goto LAB_004e35f0;
    uVar2 = *(uint *)(this + 0x100);
    uVar1 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    local_88 = puVar6 + 0x18;
    pcVar8 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_5c);
    puVar7 = puVar6 + 0x18;
    if ((int)uVar2 < 0) {
      pcVar8 = pcVar8 + -1;
      *pcVar8 = '-';
      puVar7 = local_88;
    }
    FUN_00669e1c(&local_88,0,*(undefined8 *)(puVar7 + -0x18),pcVar8,(long)acStack_5c - (long)pcVar8)
    ;
    FUN_0066a528(local_80,&local_88);
    FUN_006677d4(local_80,&DAT_006923a5,1);
    local_70 = 0;
    FontText::AddText(this_00,(string *)local_80,0.0,(Vector2 *)&local_70);
    if ((undefined *)(local_80[0] + -0x18) != puVar6) {
      piVar10 = (int *)(local_80[0] + -8);
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
        operator_delete((undefined *)(local_80[0] + -0x18));
      }
    }
    puVar7 = local_88 + -0x18;
    if (puVar7 == puVar6) goto LAB_004e362c;
    piVar10 = (int *)(local_88 + -8);
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
  }
  else {
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
    if (0 < iVar11) goto LAB_004e3504;
    operator_delete((undefined *)(local_70 + -0x18));
    if (this[0x104] == (TargetFrame)0x0) goto LAB_004e350c;
LAB_004e3520:
    GameInterfaceBuilder::TextGradient(DAT_0068798c,1.0,DAT_0068ea1c,1.0);
    lVar9 = CONCAT44(uStack_64,local_68);
    if (lVar9 != 0) {
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
    plVar12 = *(long **)(this + 0x140);
    *(long *)(this + 0x138) = local_70;
    *(long *)(this + 0x140) = lVar9;
    if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar9 = plVar12[2];
      plVar12[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    plVar12 = (long *)CONCAT44(uStack_64,local_68);
    if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar9 = plVar12[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e34dc with catch @ 004e35cc
                        */
                    /* try { // try from 004e35d0 to 005e35d7 has its CatchHandler @ 004e35e0 */
      plVar12[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* try { // try from 004e35d8 to 005e35e3 has its CatchHandler @ 004e3494 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e35d0 with catch @ 004e35e0
                        */
                    /* catch() { ... } // from try @ 004e3608 with catch @ 004e35e4
                       catch() { ... } // from try @ 004e3624 with catch @ 004e35e4 */
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    this[0x104] = (TargetFrame)0x1;
LAB_004e35f0:
    FUN_00666bb8(&local_70,&DAT_00692c1e,&local_88);
                    /* try { // try from 004e3604 to 005e3607 has its CatchHandler @ 004e3618 */
    local_80[0] = 0;
                    /* try { // try from 004e3608 to 005e361b has its CatchHandler @ 004e35e4 */
                    /* catch() { ... } // from try @ 004e3604 with catch @ 004e3618 */
    FontText::AddText(this_00,(string *)&local_70,0.0,(Vector2 *)local_80);
                    /* try { // try from 004e361c to 005e3623 has its CatchHandler @ 004e362c */
    puVar7 = (undefined *)(local_70 + -0x18);
                    /* try { // try from 004e3624 to 005e362f has its CatchHandler @ 004e35e4 */
    if (puVar7 == puVar6) goto LAB_004e362c;
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
  }
  if (iVar11 < 1) {
    operator_delete(puVar7);
  }
LAB_004e362c:
                    /* catch() { ... } // from try @ 004e361c with catch @ 004e362c */
  local_70 = CONCAT44(local_70._4_4_,0xffffffff);
  FontText::SetColor(this_00,(Color *)&local_70);
  local_70 = 0;
  FontText::AddText(this_00,(string *)(this + 0xf8),0.0,(Vector2 *)&local_70);
  uStack_64 = *(undefined4 *)(this + 0x80);
  fVar13 = *(float *)(this + 0x168) + DAT_00688634;
  if (*(float *)(this + 0x168) + DAT_00688634 <= _DAT_00692c0c) {
    fVar13 = _DAT_00692c0c;
  }
  local_68 = (float)(int)(fVar13 * 0.5) + (float)(int)(fVar13 * 0.5);
  local_70 = CONCAT44(*(undefined4 *)(this + 0x78),
                      (*(float *)(this + 0x74) + *(float *)(this + 0x7c) * 0.5) - local_68 * 0.5);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_70);
  local_70 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                      (float)((ulong)DAT_00692c00 >> 0x20),
                      (float)*(undefined8 *)(this + 0x84) + (float)DAT_00692c00);
  FontText::Translate(this_00,(Vector2 *)&local_70);
  UpdateHealthText(this);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


