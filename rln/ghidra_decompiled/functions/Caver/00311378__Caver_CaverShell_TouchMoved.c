/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00311378
 * Function: Caver::CaverShell::TouchMoved
 * Signature: undefined __thiscall TouchMoved(CaverShell * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CaverShell::TouchMoved(Caver::FWTouch const&) */

void __thiscall Caver::CaverShell::TouchMoved(CaverShell *this,FWTouch *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  GUIWindow *this_00;
  float fVar6;
  float fVar7;
  FWTouch aFStack_80 [8];
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = FWShell::TouchMoved((FWShell *)this,param_1);
  bVar1 = (uVar5 & 1) != 0;
  if (bVar1) {
    this_00 = *(GUIWindow **)(this + 0x88);
    iVar3 = FWShellPreferences::Get((FWShellPreferences *)(this + 0x20),2);
    iVar4 = FWShellPreferences::Get((FWShellPreferences *)(this + 0x20),3);
    FWTouch::FWTouch(aFStack_80,param_1);
    fVar6 = *(float *)(*(long *)(this + 0x88) + 0x7c);
    fVar7 = *(float *)(*(long *)(this + 0x88) + 0x80);
    local_78 = (*(float *)(param_1 + 8) * fVar6) / (float)iVar3;
    fStack_74 = (*(float *)(param_1 + 0xc) * fVar7) / (float)iVar4;
    local_70 = (fVar6 * *(float *)(param_1 + 0x10)) / (float)iVar3;
    fStack_6c = (fVar7 * *(float *)(param_1 + 0x14)) / (float)iVar4;
    GUIWindow::MoveTouch(this_00,aFStack_80);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


