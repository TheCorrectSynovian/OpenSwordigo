/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030e400
 * Function: Caver::CaverShell::UpdateViewSize
 * Signature: undefined __thiscall UpdateViewSize(CaverShell * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x0030e484) */
/* WARNING: Removing unreachable block (ram,0x0030e480) */
/* WARNING: Removing unreachable block (ram,0x0030e4c4) */
/* Caver::CaverShell::UpdateViewSize() */

void __thiscall Caver::CaverShell::UpdateViewSize(CaverShell *this)

{
  FWShellPreferences *pFVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pFVar1 = (FWShellPreferences *)(this + 0x20);
  iVar3 = FWShellPreferences::Get(pFVar1,2);
  fVar10 = (float)iVar3;
  iVar3 = FWShellPreferences::Get(pFVar1,3);
  fVar11 = (float)iVar3;
  iVar3 = FWShellPreferences::Get(pFVar1,4);
  fVar12 = (float)iVar3;
  iVar3 = FWShellPreferences::Get(pFVar1,5);
  fVar5 = (float)iVar3;
  fVar9 = fVar5;
  if (0.0 < fVar5) {
    fVar9 = 0.0;
  }
  fVar6 = fVar5;
  if (15.0 < fVar5) {
    fVar6 = 15.0;
  }
  fVar8 = fVar12 + 0.0;
  local_58 = 0;
  lVar4 = *(long *)(this + 0x88);
  fVar5 = fVar5 + 0.0;
  *(float *)(lVar4 + 0x30) = fVar8;
  *(float *)(lVar4 + 0x34) = fVar5;
  fVar6 = fVar6 + 0.0;
  fVar7 = fVar12 + 0.0;
  *(float *)(lVar4 + 0x38) = ((fVar8 + (fVar10 - fVar8)) - fVar12) - fVar8;
  *(float *)(lVar4 + 0x3c) = ((fVar5 + (fVar11 - fVar5)) - fVar9) - fVar5;
  lVar4 = *(long *)(this + 0x88);
  *(float *)(lVar4 + 0x40) = fVar7;
  *(float *)(lVar4 + 0x44) = fVar6;
  *(float *)(lVar4 + 0x48) = ((fVar7 + (fVar10 - fVar7)) - fVar12) - fVar7;
  *(float *)(lVar4 + 0x4c) = ((fVar6 + (fVar11 - fVar6)) - fVar9) - fVar6;
  local_50 = fVar10;
  fStack_4c = fVar11;
  GUIView::SetFrame(*(GUIView **)(this + 0x88),(Rectangle *)&local_58);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


