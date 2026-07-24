/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031127c
 * Function: Caver::CaverShell::TouchBegan
 * Signature: undefined __thiscall TouchBegan(CaverShell * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CaverShell::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::CaverShell::TouchBegan(CaverShell *this,FWTouch *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  GUIWindow *this_00;
  float fVar6;
  float fVar7;
  FWTouch aFStack_80 [8];
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((this[0xa8] == (CaverShell)0x0) &&
     (uVar4 = FWShell::TouchBegan((FWShell *)this,param_1), (uVar4 & 1) != 0)) {
    this_00 = *(GUIWindow **)(this + 0x88);
    iVar2 = FWShellPreferences::Get((FWShellPreferences *)(this + 0x20),2);
    iVar3 = FWShellPreferences::Get((FWShellPreferences *)(this + 0x20),3);
    FWTouch::FWTouch(aFStack_80,param_1);
    fVar6 = *(float *)(*(long *)(this + 0x88) + 0x7c);
    fVar7 = *(float *)(*(long *)(this + 0x88) + 0x80);
    local_78 = (*(float *)(param_1 + 8) * fVar6) / (float)iVar2;
    fStack_74 = (*(float *)(param_1 + 0xc) * fVar7) / (float)iVar3;
    local_70 = (fVar6 * *(float *)(param_1 + 0x10)) / (float)iVar2;
    fStack_6c = (fVar7 * *(float *)(param_1 + 0x14)) / (float)iVar3;
    GUIWindow::BeginTouch(this_00,aFStack_80);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


