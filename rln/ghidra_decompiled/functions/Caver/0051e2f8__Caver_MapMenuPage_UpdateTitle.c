/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051e2f8
 * Function: Caver::MapMenuPage::UpdateTitle
 * Signature: undefined __thiscall UpdateTitle(MapMenuPage * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::UpdateTitle() */

void __thiscall Caver::MapMenuPage::UpdateTitle(MapMenuPage *this)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  StripeView *this_00;
  GUILabel *pGVar12;
  undefined *puVar13;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  shared_ptr asStack_90 [8];
  long *local_88;
  undefined4 local_80;
  undefined4 local_7c [3];
  long local_70 [2];
  char acStack_5c [4];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar9 = *(long *)(this + 0x1c8);
  if (*(char *)(lVar9 + 0x3f8) == '\0') goto LAB_0051e414;
  this_00 = *(StripeView **)(this + 0x1e8);
  lVar9 = *(long *)(*(long *)(lVar9 + 0x118) + *(long *)(lVar9 + 0x400) * 0x10);
  FUN_00666bb8(local_70,&DAT_0068fbeb,&local_98);
  StripeView::SetTitle(this_00,(string *)local_70);
  puVar7 = PTR_DAT_007e5de8;
  if ((undefined *)(local_70[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_70[0] + -8);
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
      operator_delete((undefined *)(local_70[0] + -0x18));
    }
  }
  GUILabel::ClearText(*(GUILabel **)(*(long *)(this + 0x1e8) + 0x120));
  pGVar12 = *(GUILabel **)(*(long *)(this + 0x1e8) + 0x120);
  MapNode::Title();
  local_7c[0] = 0xffffffff;
  GUILabel::AddText(pGVar12,local_70,local_7c);
  if ((undefined *)(local_70[0] + -0x18) == puVar7) {
LAB_0051e3c8:
    cVar3 = *(char *)(lVar9 + 0x1d);
  }
  else {
    piVar10 = (int *)(local_70[0] + -8);
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
    if (0 < iVar11) goto LAB_0051e3c8;
    operator_delete((undefined *)(local_70[0] + -0x18));
    cVar3 = *(char *)(lVar9 + 0x1d);
  }
  if (cVar3 == '\0') {
    if (0 < *(int *)(lVar9 + 0x20)) {
      GameInterfaceBuilder::TextGradient
                (DAT_00687988,(float)*(int *)(lVar9 + 0x24) / (float)*(int *)(lVar9 + 0x20),
                 DAT_00687828,1.0);
      pGVar12 = *(GUILabel **)(*(long *)(this + 0x1e8) + 0x120);
      FUN_00666bb8(local_70,0x69474a,&local_a0);
      GUILabel::AddText(pGVar12,(string *)local_70,asStack_90);
      if ((undefined *)(local_70[0] + -0x18) != puVar7) {
        piVar10 = (int *)(local_70[0] + -8);
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
          operator_delete((undefined *)(local_70[0] + -0x18));
        }
      }
      uVar2 = *(uint *)(lVar9 + 0x24);
      pGVar12 = *(GUILabel **)(*(long *)(this + 0x1e8) + 0x120);
      uVar1 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      local_a8 = puVar7 + 0x18;
      pcVar8 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                         (uVar1,acStack_5c);
      puVar13 = puVar7 + 0x18;
      if ((int)uVar2 < 0) {
        pcVar8 = pcVar8 + -1;
        *pcVar8 = '-';
        puVar13 = local_a8;
      }
      FUN_00669e1c(&local_a8,0,*(undefined8 *)(puVar13 + -0x18),pcVar8,
                   (long)acStack_5c - (long)pcVar8);
      FUN_0066a528(&local_a0,&local_a8);
      FUN_006677d4(&local_a0,&DAT_0069091e,4);
      uVar2 = *(uint *)(lVar9 + 0x20);
      uVar1 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      local_b0 = puVar7 + 0x18;
      pcVar8 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                         (uVar1,acStack_5c);
      puVar13 = puVar7 + 0x18;
      if ((int)uVar2 < 0) {
        pcVar8 = pcVar8 + -1;
        *pcVar8 = '-';
        puVar13 = local_b0;
      }
      FUN_00669e1c(&local_b0,0,*(undefined8 *)(puVar13 + -0x18),pcVar8,
                   (long)acStack_5c - (long)pcVar8);
      FUN_0066a528(&local_98,&local_a0);
      FUN_00667614(&local_98,&local_b0);
      GUILabel::AddText(pGVar12,(string *)&local_98,asStack_90);
      if ((undefined *)(local_98 + -0x18) != puVar7) {
        piVar10 = (int *)(local_98 + -8);
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
          operator_delete((undefined *)(local_98 + -0x18));
        }
      }
      if (local_b0 + -0x18 != puVar7) {
        piVar10 = (int *)(local_b0 + -8);
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
          operator_delete(local_b0 + -0x18);
        }
      }
      if ((undefined *)(local_a0 + -0x18) != puVar7) {
        piVar10 = (int *)(local_a0 + -8);
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
          operator_delete((undefined *)(local_a0 + -0x18));
        }
      }
      if (local_a8 + -0x18 != puVar7) {
        piVar10 = (int *)(local_a8 + -8);
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
          operator_delete(local_a8 + -0x18);
        }
      }
      pGVar12 = *(GUILabel **)(*(long *)(this + 0x1e8) + 0x120);
      FUN_00666bb8(local_70,&DAT_006933db,&local_a0);
      GUILabel::AddText(pGVar12,(string *)local_70,asStack_90);
      plVar6 = local_88;
      if ((undefined *)(local_70[0] + -0x18) != puVar7) {
        piVar10 = (int *)(local_70[0] + -8);
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
          operator_delete((undefined *)(local_70[0] + -0x18));
          plVar6 = local_88;
        }
      }
      if ((plVar6 != (long *)0x0) && (lVar9 = plVar6[1], plVar6[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        lVar9 = plVar6[2];
        plVar6[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
    }
  }
  else {
    pGVar12 = *(GUILabel **)(*(long *)(this + 0x1e8) + 0x120);
    FUN_00666bb8(local_70,&DAT_00694738,&local_98);
                    /* try { // try from 0051e3f0 to 0061eab3 has its CatchHandler @ 0051e3f0
                       catch() { ... } // from try @ 0051e3f0 with catch @ 0051e3f0
                       catch() { ... } // from try @ 0051eab8 with catch @ 0051e3f0
                       catch() { ... } // from try @ 0051eb90 with catch @ 0051e3f0 */
    local_80 = 0xffffffff;
    GUILabel::AddText(pGVar12,local_70,&local_80);
    if ((undefined *)(local_70[0] + -0x18) != puVar7) {
      piVar10 = (int *)(local_70[0] + -8);
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
        operator_delete((undefined *)(local_70[0] + -0x18));
      }
    }
  }
LAB_0051e414:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


