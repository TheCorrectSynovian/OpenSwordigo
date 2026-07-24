/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004fd9b0
 * Function: Caver::CharacterView::SetLevelUpMode
 * Signature: undefined __thiscall SetLevelUpMode(CharacterView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharacterView::SetLevelUpMode() */

void __thiscall Caver::CharacterView::SetLevelUpMode(CharacterView *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  ExperienceBar *this_00;
  long lVar12;
  string *psVar13;
  long lVar14;
  undefined1 auStack_78 [8];
  long local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  this[0x198] = (CharacterView)0x1;
  *(undefined4 *)(this + 0x19c) = 1;
  *(undefined1 *)(*(long *)(this + 0x1b8) + 0xe4) = 0;
  *(undefined1 *)(*(long *)(this + 0x1c8) + 0xe4) = 0;
  *(undefined1 *)(*(long *)(this + 0x1d8) + 0xe4) = 1;
  lVar9 = *(long *)(this + 0x108);
  this_00 = *(ExperienceBar **)(this + 0x138);
  iVar8 = *(int *)(lVar9 + 0xb8);
  this_00[0x110] = (ExperienceBar)0x1;
  iVar1 = *(int *)(lVar9 + 0xb4);
  iVar11 = iVar8 + 1;
  iVar7 = CharacterState::ExperiencePointsRequiredForLevel((CharacterState *)(lVar9 + 0x10),iVar11);
  iVar8 = CharacterState::ExperiencePointsRequiredForLevel
                    ((CharacterState *)(lVar9 + 0x10),iVar8 + 2);
  ExperienceBar::SetExperience(this_00,iVar11,iVar1,iVar7,iVar8);
  uVar5 = _UNK_00693978;
  lVar9 = _DAT_00693970;
  if (0 < *(int *)(this + 0x188)) {
    lVar12 = 0;
    lVar14 = 0;
    do {
      uStack_68 = uVar5;
      local_70 = lVar9;
      GUIView::SetFrame(*(GUIView **)(*(long *)(this + 400) + lVar12),(Rectangle *)&local_70);
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar14 < *(int *)(this + 0x188));
  }
  AttributePointsView::SetEditingEnabled(*(AttributePointsView **)(this + 0x158),true);
                    /* catch() { ... } // from try @ 004fd98c with catch @ 004fdaac */
                    /* catch() { ... } // from try @ 004fd864 with catch @ 004fdab0 */
  AttributePointsView::SetEditingEnabled(*(AttributePointsView **)(this + 0x168),true);
  AttributePointsView::SetEditingEnabled(*(AttributePointsView **)(this + 0x178),true);
  psVar13 = *(string **)(this + 0x158);
  FUN_00666bb8(&local_70,"Increases your maximum health.",auStack_78);
  AttributePointsView::SetHelpText(psVar13);
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  psVar13 = *(string **)(this + 0x168);
  FUN_00666bb8(&local_70,"Increases your weapon damage.",auStack_78);
  AttributePointsView::SetHelpText(psVar13);
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  psVar13 = *(string **)(this + 0x178);
  FUN_00666bb8(&local_70,"Increases your spell damage and maximum energy.",auStack_78);
  AttributePointsView::SetHelpText(psVar13);
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  UpdateAvailablePoints(this);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


