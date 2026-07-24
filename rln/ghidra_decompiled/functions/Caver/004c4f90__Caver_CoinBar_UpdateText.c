/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c4f90
 * Function: Caver::CoinBar::UpdateText
 * Signature: undefined __thiscall UpdateText(CoinBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CoinBar::UpdateText() */

void __thiscall Caver::CoinBar::UpdateText(CoinBar *this)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  undefined *puVar9;
  int *piVar10;
  GUIView *this_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_9c;
  undefined *local_98;
  float local_90;
  int iStack_8c;
  char acStack_7c [4];
  long local_78;
  
  puVar6 = PTR_DAT_007e5de8;
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uVar2 = *(uint *)(this + 0xf0);
  puVar9 = PTR_DAT_007e5de8 + 0x18;
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  local_98 = puVar9;
  pcVar8 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                     (uVar1,acStack_7c);
  if ((int)uVar2 < 0) {
    pcVar8 = pcVar8 + -1;
    *pcVar8 = '-';
    puVar9 = local_98;
  }
  FUN_00669e1c(&local_98,0,*(undefined8 *)(puVar9 + -0x18),pcVar8,(long)acStack_7c - (long)pcVar8);
  if (*(int *)(this + 0xf0) < 10) {
    FUN_0035a030(&local_90,&DAT_006920a3,&local_98);
    FUN_0066a6a8(&local_98,&local_90);
    puVar9 = (undefined *)(CONCAT44(iStack_8c,local_90) + -0x18);
    if (puVar9 == puVar6) goto LAB_004c50ac;
    piVar10 = (int *)(CONCAT44(iStack_8c,local_90) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_004c51e4:
      iVar7 = *piVar10;
      *piVar10 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    FUN_0035a030(&local_90,"x ",&local_98);
    FUN_0066a6a8(&local_98,&local_90);
    puVar9 = (undefined *)(CONCAT44(iStack_8c,local_90) + -0x18);
    if (puVar9 == puVar6) goto LAB_004c50ac;
    piVar10 = (int *)(CONCAT44(iStack_8c,local_90) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_004c51e4;
    do {
      iVar7 = *piVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar7 < 1) {
    operator_delete(puVar9);
  }
LAB_004c50ac:
  this_00 = *(GUIView **)(this + 0x150);
  if ((*(size_t *)(local_98 + -0x18) != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
     (iVar7 = memcmp(local_98,*(void **)(this_00 + 0x100),*(size_t *)(local_98 + -0x18)), iVar7 != 0
     )) {
    FUN_0066a6a8((GUILabel *)(this_00 + 0x100),&local_98);
    GUILabel::UpdateText((GUILabel *)this_00);
    this_00 = *(GUIView **)(this + 0x150);
  }
  fVar13 = *(float *)(this + 0x100);
  fVar14 = *(float *)(this + 0x108);
  fVar11 = *(float *)(this + 0x88);
  fVar12 = *(float *)(this + 0x90);
  GUILabel::TextSize();
  GUILabel::TextSize();
  local_90 = fVar13 + fVar14 + 2.0;
  iStack_8c = (int)(((fVar11 + fVar12 * 0.5) - local_9c * 0.5) + -1.0);
  GUIView::SetFrame(this_00,(Rectangle *)&local_90);
  if (local_98 + -0x18 != puVar6) {
    piVar10 = (int *)(local_98 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar10;
      *piVar10 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_98 + -0x18);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


