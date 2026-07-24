/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ce554
 * Function: Caver::ExperienceBar::UpdateText
 * Signature: undefined __thiscall UpdateText(ExperienceBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ExperienceBar::UpdateText() */

void __thiscall Caver::ExperienceBar::UpdateText(ExperienceBar *this)

{
  FontText *this_00;
  FontText *this_01;
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  char *pcVar6;
  FontText *this_02;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  undefined *puVar11;
  uint uVar12;
  float fVar13;
  int iVar14;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90 [2];
  undefined8 local_80;
  long *local_78;
  char acStack_6c [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this_00 = (FontText *)(this + 0x218);
  FontText::Clear(this_00);
  this_01 = (FontText *)(this + 0x128);
  FontText::Clear(this_01);
  this_02 = (FontText *)(this + 0x308);
                    /* catch() { ... } // from try @ 004ce5d4 with catch @ 004ce5a4 */
  FontText::Clear(this_02);
                    /* try { // try from 004ce5c0 to 005ce5d3 has its CatchHandler @ 004ce5f8 */
                    /* try { // try from 004ce5d4 to 005ce5fb has its CatchHandler @ 004ce5a4 */
  iVar14 = (int)(*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5 +
                *(float *)(*(long *)(this + 0x128) + 0x48) * DAT_00692380);
  if (this[0x3f9] == (ExperienceBar)0x0) {
    if (this[0x110] != (ExperienceBar)0x0) {
      FUN_00666bb8(&local_80,"Level Up! ",&local_98);
      local_90[0] = (undefined *)0x0;
      FontText::AddText(this_01,(string *)&local_80,0.0,(Vector2 *)local_90);
      if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_80 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_80 + -0x18));
        }
      }
    }
    FUN_00666bb8(&local_80,"Character Level: ",&local_98);
    local_90[0] = (undefined *)0x0;
    FontText::AddText(this_01,(string *)&local_80,0.0,(Vector2 *)local_90);
    puVar5 = PTR_DAT_007e5de8;
    if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
      piVar8 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
    uVar12 = *(uint *)(this + 0x114);
    uVar1 = -uVar12;
    if (-1 < (int)uVar12) {
      uVar1 = uVar12;
    }
    local_90[0] = puVar5 + 0x18;
    pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_6c);
    puVar11 = puVar5 + 0x18;
    if ((int)uVar12 < 0) {
      pcVar6 = pcVar6 + -1;
      *pcVar6 = '-';
      puVar11 = local_90[0];
    }
    FUN_00669e1c(local_90,0,*(undefined8 *)(puVar11 + -0x18),pcVar6,(long)acStack_6c - (long)pcVar6)
    ;
    local_80 = 0;
    FontText::AddText(this_01,(string *)local_90,0.0,(Vector2 *)&local_80);
    if (local_90[0] + -0x18 != puVar5) {
      piVar8 = (int *)(local_90[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_90[0] + -0x18);
      }
    }
    local_80 = CONCAT44(iVar14,*(float *)(this + 0x84) + 10.0);
    FontText::Translate(this_01,(Vector2 *)&local_80);
    if (this[0x110] != (ExperienceBar)0x0) goto LAB_004ceaf8;
    FUN_00666bb8(&local_80,"Experience: ",&local_98);
    local_90[0] = (undefined *)0x0;
    FontText::AddText(this_02,(string *)&local_80,0.0,(Vector2 *)local_90);
    if ((undefined *)(local_80 + -0x18) != puVar5) {
      piVar8 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
    uVar12 = (uint)*(float *)(*(long *)(this + 0xf0) + 0x128);
    uVar1 = -uVar12;
    if (-1 < (int)uVar12) {
      uVar1 = uVar12;
    }
    local_98 = puVar5 + 0x18;
                    /* catch() { ... } // from try @ 004cebb4 with catch @ 004ceb84 */
    pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_6c);
    puVar11 = puVar5 + 0x18;
    if ((int)uVar12 < 0) {
      pcVar6 = pcVar6 + -1;
      *pcVar6 = '-';
      puVar11 = local_98;
    }
                    /* try { // try from 004ceba0 to 005cebb3 has its CatchHandler @ 004cebd8 */
    FUN_00669e1c(&local_98,0,*(undefined8 *)(puVar11 + -0x18),pcVar6,(long)acStack_6c - (long)pcVar6
                );
                    /* try { // try from 004cebb4 to 005cebdb has its CatchHandler @ 004ceb84 */
    FUN_0066a528(local_90,&local_98);
    FUN_006677d4(local_90,&DAT_006923a7,3);
    local_80 = 0;
                    /* catch() { ... } // from try @ 004ceba0 with catch @ 004cebd8 */
    FontText::AddText(this_02,(string *)local_90,0.0,(Vector2 *)&local_80);
    if (local_90[0] + -0x18 != puVar5) {
      piVar8 = (int *)(local_90[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_90[0] + -0x18);
      }
    }
                    /* catch() { ... } // from try @ 004cec40 with catch @ 004cec00 */
    if (local_98 + -0x18 != puVar5) {
      piVar8 = (int *)(local_98 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_98 + -0x18);
      }
    }
    uVar12 = *(uint *)(this + 0x120);
    uVar1 = -uVar12;
    if (-1 < (int)uVar12) {
      uVar1 = uVar12;
    }
    local_90[0] = puVar5 + 0x18;
                    /* try { // try from 004cec24 to 005cec27 has its CatchHandler @ 004cec34 */
    pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_6c);
    puVar11 = puVar5 + 0x18;
    if ((int)uVar12 < 0) {
                    /* catch() { ... } // from try @ 004cec24 with catch @ 004cec34 */
      pcVar6 = pcVar6 + -1;
      *pcVar6 = '-';
                    /* try { // try from 004cec38 to 005cec3f has its CatchHandler @ 004cec48 */
      puVar11 = local_90[0];
    }
                    /* try { // try from 004cec40 to 005cec4b has its CatchHandler @ 004cec00 */
                    /* catch() { ... } // from try @ 004cec38 with catch @ 004cec48 */
                    /* try { // try from 004cec4c to 005cec93 has its CatchHandler @ 004cec4c
                       catch(type#1 @ 00000000) { ... } // from try @ 004cec4c with catch @ 004cec4c
                       catch(type#1 @ 00000000) { ... } // from try @ 004cecb0 with catch @ 004cec4c
                       catch(type#1 @ 00000000) { ... } // from try @ 004ced6c with catch @ 004cec4c
                        */
    FUN_00669e1c(local_90,0,*(undefined8 *)(puVar11 + -0x18),pcVar6,(long)acStack_6c - (long)pcVar6)
    ;
    local_80 = 0;
    FontText::AddText(this_02,(string *)local_90,0.0,(Vector2 *)&local_80);
    if (local_90[0] + -0x18 != puVar5) {
      piVar8 = (int *)(local_90[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_90[0] + -0x18);
      }
    }
                    /* try { // try from 004cec94 to 005cecaf has its CatchHandler @ 004ced60 */
    fVar13 = (*(float *)(this + 0x84) + *(float *)(this + 0x8c) + -10.0) -
             (*(float *)(this + 0x348) + *(float *)(this + 0x350));
  }
  else {
    local_80 = CONCAT44(local_80._4_4_,0xffffffff);
    FontText::SetColor(this_00,(Color *)&local_80);
    puVar5 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 004ce5c0 with catch @ 004ce5f8 */
    uVar12 = *(uint *)(this + 0x114);
    uVar1 = -uVar12;
    if (-1 < (int)uVar12) {
      uVar1 = uVar12;
    }
    puVar11 = PTR_DAT_007e5de8 + 0x18;
    local_98 = puVar11;
    pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_6c);
                    /* catch() { ... } // from try @ 004ce668 with catch @ 004ce624 */
    if ((int)uVar12 < 0) {
      pcVar6 = pcVar6 + -1;
      *pcVar6 = '-';
      puVar11 = local_98;
    }
    FUN_00669e1c(&local_98,0,*(undefined8 *)(puVar11 + -0x18),pcVar6,(long)acStack_6c - (long)pcVar6
                );
                    /* try { // try from 004ce64c to 005ce64f has its CatchHandler @ 004ce65c */
                    /* catch() { ... } // from try @ 004ce64c with catch @ 004ce65c */
    FUN_0035a030(local_90,"Level ",&local_98);
                    /* try { // try from 004ce660 to 005ce667 has its CatchHandler @ 004ce670 */
    local_80 = 0;
                    /* try { // try from 004ce668 to 005ce673 has its CatchHandler @ 004ce624 */
                    /* catch() { ... } // from try @ 004ce660 with catch @ 004ce670 */
                    /* try { // try from 004ce674 to 005ce6bb has its CatchHandler @ 004ce674
                       catch(type#1 @ 00000000) { ... } // from try @ 004ce674 with catch @ 004ce674
                       catch(type#1 @ 00000000) { ... } // from try @ 004ce6d8 with catch @ 004ce674
                       catch(type#1 @ 00000000) { ... } // from try @ 004ce774 with catch @ 004ce674
                        */
    FontText::AddText(this_00,(string *)local_90,0.0,(Vector2 *)&local_80);
    if (local_90[0] + -0x18 != puVar5) {
                    /* try { // try from 004cecb0 to 005ced63 has its CatchHandler @ 004cec4c */
      piVar8 = (int *)(local_90[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_90[0] + -0x18);
      }
    }
    if (local_98 + -0x18 == puVar5) {
LAB_004ce698:
      iVar9 = *(int *)(this + 0x124);
    }
    else {
      piVar8 = (int *)(local_98 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (0 < iVar9) goto LAB_004ce698;
      operator_delete(local_98 + -0x18);
      iVar9 = *(int *)(this + 0x124);
    }
    if (iVar9 != 0) {
                    /* try { // try from 004ce6bc to 005ce6d7 has its CatchHandler @ 004ce768 */
      GameInterfaceBuilder::TextGradient(DAT_0068ea18,1.0,DAT_0068ea1c,1.0);
      if (local_78 != (long *)0x0) {
        local_78[1] = local_78[1] + 1;
      }
      plVar10 = *(long **)(this + 0x238);
                    /* try { // try from 004ce6d8 to 005ce76b has its CatchHandler @ 004ce674 */
      *(long *)(this + 0x230) = local_80;
      *(long **)(this + 0x238) = local_78;
      if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar7 = plVar10[2];
        plVar10[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      if ((local_78 != (long *)0x0) &&
         (lVar7 = local_78[1], local_78[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        lVar7 = local_78[2];
        local_78[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ce6bc with catch @ 004ce768
                        */
          (**(code **)(*local_78 + 0x18))(local_78);
        }
      }
                    /* try { // try from 004ce76c to 005ce773 has its CatchHandler @ 004ce77c */
      uVar12 = *(uint *)(this + 0x124);
                    /* try { // try from 004ce774 to 005ce77f has its CatchHandler @ 004ce674 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ce76c with catch @ 004ce77c
                        */
      uVar1 = -uVar12;
      if (-1 < (int)uVar12) {
        uVar1 = uVar12;
      }
      local_a0 = puVar5 + 0x18;
      pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                         (uVar1,acStack_6c);
      puVar11 = puVar5 + 0x18;
      if ((int)uVar12 < 0) {
        pcVar6 = pcVar6 + -1;
        *pcVar6 = '-';
                    /* catch() { ... } // from try @ 004ce7bc with catch @ 004ce798 */
        puVar11 = local_a0;
      }
      FUN_00669e1c(&local_a0,0,*(undefined8 *)(puVar11 + -0x18),pcVar6,
                   (long)acStack_6c - (long)pcVar6);
                    /* try { // try from 004ce7b8 to 005ce7bb has its CatchHandler @ 004ce7cc */
                    /* try { // try from 004ce7bc to 005ce7df has its CatchHandler @ 004ce798 */
      FUN_0035a030(&local_98,&DAT_0069239a,&local_a0);
                    /* catch() { ... } // from try @ 004ce7b8 with catch @ 004ce7cc */
      FUN_0066a528(local_90,&local_98);
      FUN_006677d4(local_90,&DAT_0069239f,3);
      local_80 = 0;
      FontText::AddText(this_00,(string *)local_90,0.0,(Vector2 *)&local_80);
      if (local_90[0] + -0x18 != puVar5) {
                    /* try { // try from 004cedb0 to 005cedb3 has its CatchHandler @ 004cedc4 */
                    /* try { // try from 004cedb4 to 005cedd7 has its CatchHandler @ 004ced90 */
        piVar8 = (int *)(local_90[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 004cedb0 with catch @ 004cedc4 */
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete(local_90[0] + -0x18);
        }
      }
      if (local_98 + -0x18 != puVar5) {
        piVar8 = (int *)(local_98 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete(local_98 + -0x18);
        }
      }
      if (local_a0 + -0x18 != puVar5) {
        piVar8 = (int *)(local_a0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete(local_a0 + -0x18);
        }
      }
    }
    local_80 = CONCAT44(local_80._4_4_,0xffffffff);
    FontText::SetColor(this_00,(Color *)&local_80);
    uVar12 = (uint)*(float *)(*(long *)(this + 0xf0) + 0x128);
    uVar1 = -uVar12;
    if (-1 < (int)uVar12) {
      uVar1 = uVar12;
    }
    local_a8 = puVar5 + 0x18;
    pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_6c);
    puVar11 = puVar5 + 0x18;
    if ((int)uVar12 < 0) {
      pcVar6 = pcVar6 + -1;
      *pcVar6 = '-';
      puVar11 = local_a8;
    }
    FUN_00669e1c(&local_a8,0,*(undefined8 *)(puVar11 + -0x18),pcVar6,(long)acStack_6c - (long)pcVar6
                );
    FUN_0035a030(&local_a0,&DAT_006923a3,&local_a8);
    FUN_0066a528(&local_98,&local_a0);
    FUN_006677d4(&local_98,&DAT_006923a7,3);
    uVar12 = *(uint *)(this + 0x120);
    uVar1 = -uVar12;
    if (-1 < (int)uVar12) {
      uVar1 = uVar12;
    }
    local_b0 = puVar5 + 0x18;
    pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_6c);
    puVar11 = puVar5 + 0x18;
    if ((int)uVar12 < 0) {
      pcVar6 = pcVar6 + -1;
      *pcVar6 = '-';
      puVar11 = local_b0;
    }
    FUN_00669e1c(&local_b0,0,*(undefined8 *)(puVar11 + -0x18),pcVar6,(long)acStack_6c - (long)pcVar6
                );
    FUN_0066a528(local_90,&local_98);
    FUN_00667614(local_90,&local_b0);
    local_80 = 0;
    FontText::AddText(this_00,(string *)local_90,0.0,(Vector2 *)&local_80);
    if (local_90[0] + -0x18 != puVar5) {
      piVar8 = (int *)(local_90[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_90[0] + -0x18);
      }
    }
    if (local_b0 + -0x18 != puVar5) {
      piVar8 = (int *)(local_b0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_b0 + -0x18);
      }
    }
    if (local_98 + -0x18 != puVar5) {
      piVar8 = (int *)(local_98 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_98 + -0x18);
      }
    }
    if (local_a0 + -0x18 != puVar5) {
                    /* try { // try from 004ced64 to 005ced6b has its CatchHandler @ 004ced74 */
                    /* try { // try from 004ced6c to 005ced77 has its CatchHandler @ 004cec4c */
      piVar8 = (int *)(local_a0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ced64 with catch @ 004ced74
                        */
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_a0 + -0x18);
      }
    }
    if (local_a8 + -0x18 != puVar5) {
                    /* catch() { ... } // from try @ 004cedb4 with catch @ 004ced90 */
      piVar8 = (int *)(local_a8 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_a8 + -0x18);
      }
    }
    fVar13 = (float)(int)((*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
                         (*(float *)(this + 600) + *(float *)(this + 0x260) * 0.5));
    this_02 = this_00;
  }
  local_80 = CONCAT44(iVar14,fVar13);
  FontText::Translate(this_02,(Vector2 *)&local_80);
LAB_004ceaf8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


