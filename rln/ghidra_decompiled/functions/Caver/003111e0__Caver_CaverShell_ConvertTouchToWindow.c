/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003111e0
 * Function: Caver::CaverShell::ConvertTouchToWindow
 * Signature: undefined __cdecl ConvertTouchToWindow(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CaverShell::ConvertTouchToWindow(Caver::FWTouch const&) */

void Caver::CaverShell::ConvertTouchToWindow(FWTouch *param_1)

{
  int iVar1;
  int iVar2;
  FWTouch *in_x1;
  FWTouch *in_x8;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = FWShellPreferences::Get((FWShellPreferences *)(param_1 + 0x20),2);
  iVar2 = FWShellPreferences::Get((FWShellPreferences *)(param_1 + 0x20),3);
  FWTouch::FWTouch(in_x8,in_x1);
  fVar3 = *(float *)(in_x1 + 0xc);
  fVar4 = *(float *)(*(long *)(param_1 + 0x88) + 0x7c);
  fVar5 = *(float *)(*(long *)(param_1 + 0x88) + 0x80);
  *(float *)(in_x8 + 8) = (*(float *)(in_x1 + 8) * fVar4) / (float)iVar1;
  *(float *)(in_x8 + 0xc) = (fVar3 * fVar5) / (float)iVar2;
  fVar3 = *(float *)(in_x1 + 0x14);
  *(float *)(in_x8 + 0x10) = (fVar4 * *(float *)(in_x1 + 0x10)) / (float)iVar1;
  *(float *)(in_x8 + 0x14) = (fVar5 * fVar3) / (float)iVar2;
  return;
}


