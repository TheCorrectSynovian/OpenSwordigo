/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004fd6b8
 * Function: Caver::CharacterView::UpdateAvailablePoints
 * Signature: undefined __thiscall UpdateAvailablePoints(CharacterView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterView::UpdateAvailablePoints() */

void __thiscall Caver::CharacterView::UpdateAvailablePoints(CharacterView *this)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  GUIView *this_00;
  CharacterView CVar9;
  int *piVar10;
  GUILabel *this_01;
  size_t *psVar11;
  undefined *puVar12;
  undefined *local_80 [4];
  char acStack_5c [4];
  long local_58;
  
  puVar5 = PTR_DAT_007e5de8;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  this_01 = *(GUILabel **)(this + 0x1c8);
  iVar7 = (((*(int *)(*(long *)(this + 0x158) + 0x104) - *(int *)(*(long *)(this + 0x158) + 0xfc)) +
           *(int *)(*(long *)(this + 0x168) + 0x104)) - *(int *)(*(long *)(this + 0x168) + 0xfc)) +
          (*(int *)(*(long *)(this + 0x178) + 0x104) - *(int *)(*(long *)(this + 0x178) + 0xfc));
  puVar12 = PTR_DAT_007e5de8 + 0x18;
  *(int *)(this + 0x1a0) = iVar7;
  uVar3 = *(int *)(this + 0x19c) - iVar7;
  uVar1 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  local_80[0] = puVar12;
  pcVar8 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                     (uVar1,acStack_5c);
  if ((int)uVar3 < 0) {
    pcVar8 = pcVar8 + -1;
    *pcVar8 = '-';
    puVar12 = local_80[0];
  }
  FUN_00669e1c(local_80,0,*(undefined8 *)(puVar12 + -0x18),pcVar8,(long)acStack_5c - (long)pcVar8);
  puVar12 = local_80[0];
  psVar11 = (size_t *)(local_80[0] + -0x18);
  if ((*psVar11 != *(size_t *)((long)*(void **)(this_01 + 0x100) + -0x18)) ||
     (iVar7 = memcmp(local_80[0],*(void **)(this_01 + 0x100),*psVar11), iVar7 != 0)) {
    FUN_0066a6a8(this_01 + 0x100,local_80);
    GUILabel::UpdateText(this_01);
    psVar11 = (size_t *)(local_80[0] + -0x18);
    puVar12 = local_80[0];
  }
  if (psVar11 != (size_t *)puVar5) {
    piVar10 = (int *)(puVar12 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar10;
      *piVar10 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar10;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar6) {
          *piVar10 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(psVar11);
    }
  }
  iVar7 = *(int *)(*(AttributePointsView **)(this + 0x158) + 0x104) + uVar3;
  if (7 < iVar7) {
    iVar7 = 8;
  }
  AttributePointsView::SetMaxPoints(*(AttributePointsView **)(this + 0x158),iVar7);
  iVar7 = *(int *)(*(AttributePointsView **)(this + 0x168) + 0x104) + uVar3;
  if (7 < iVar7) {
    iVar7 = 8;
  }
  AttributePointsView::SetMaxPoints(*(AttributePointsView **)(this + 0x168),iVar7);
  iVar7 = *(int *)(*(AttributePointsView **)(this + 0x178) + 0x104) + uVar3;
  if (7 < iVar7) {
    iVar7 = 8;
  }
  AttributePointsView::SetMaxPoints(*(AttributePointsView **)(this + 0x178),iVar7);
  CVar9 = this[0x198];
  this_00 = *(GUIView **)(this + 0x118);
  bVar6 = uVar3 != 0;
  if (((GUIView)((byte)CVar9 ^ 1 | bVar6) != this_00[0xe4]) &&
     (this_00[0xe4] = (GUIView)(bVar6 || CVar9 == (CharacterView)0x0),
     !bVar6 && CVar9 != (CharacterView)0x0)) {
    GUIView::AddPopupAnimation(this_00);
    CVar9 = this[0x198];
  }
  if (CVar9 == (CharacterView)0x0) {
    bVar6 = true;
  }
  else {
    bVar6 = *(int *)(this + 0x1a0) == 0;
                    /* try { // try from 004fd864 to 005fd867 has its CatchHandler @ 004fdab0 */
                    /* try { // try from 004fd868 to 005fd98b has its CatchHandler @ 004fd4ac */
  }
  *(bool *)(*(long *)(this + 0x128) + 0xe4) = bVar6;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


