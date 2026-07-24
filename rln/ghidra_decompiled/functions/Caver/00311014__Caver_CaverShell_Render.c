/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00311014
 * Function: Caver::CaverShell::Render
 * Signature: undefined __thiscall Render(CaverShell * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CaverShell::Render(Caver::RenderingContext*) */

void __thiscall Caver::CaverShell::Render(CaverShell *this,RenderingContext *param_1)

{
  FWShellPreferences *pFVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  Matrix4 *this_00;
  long *plVar7;
  float fVar8;
  float local_e0 [6];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_a0 = CONCAT44(local_a0._4_4_,0xff000000);
  RenderingContext::SetClearColor(param_1,(Color *)&local_a0);
  RenderingContext::Clear(param_1,true,true,false);
  pFVar1 = (FWShellPreferences *)(this + 0x20);
  uStack_78 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
  local_80 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
  uStack_68 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  uStack_70 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
  uStack_98 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
  local_a0 = *(undefined8 *)PTR_identityMatrix_007e74c8;
  uStack_88 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
  uStack_90 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
  iVar5 = FWShellPreferences::Get(pFVar1,0);
  iVar6 = FWShellPreferences::Get(pFVar1,1);
  uVar4 = _UNK_00683498;
  uVar3 = _DAT_00683490;
  local_e0[5] = 1.0 / (float)iVar6;
  local_a8 = 0x3f80000000000000;
  local_e0[3] = 0.0;
  local_e0[4] = 0.0;
  local_e0[1] = 0.0;
  local_e0[2] = 0.0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_b0 = _UNK_00683498;
  local_b8 = _DAT_00683490;
  local_e0[0] = 1.0 / (float)iVar5;
  this_00 = (Matrix4 *)C_Matrix4Mul((float *)&local_a0,local_e0,(float *)&local_a0);
  Matrix4::RotationZ(this_00,*(float *)(*(long *)(this + 0x88) + 0x200));
  C_Matrix4Mul((float *)&local_a0,local_e0,(float *)&local_a0);
  local_e0[0] = *(float *)(*(long *)(this + 0x88) + 0x7c);
  local_e0[5] = *(float *)(*(long *)(this + 0x88) + 0x80);
  local_e0[3] = 0.0;
  local_e0[4] = 0.0;
  local_e0[1] = 0.0;
  local_e0[2] = 0.0;
  uStack_c0 = 0;
  local_c8 = 0;
  local_a8 = 0x3f80000000000000;
  uStack_b0 = uVar4;
  local_b8 = uVar3;
  C_Matrix4Mul((float *)&local_a0,local_e0,(float *)&local_a0);
  fVar8 = (float)FWShellPreferences::Get(pFVar1,1);
  local_e0[5] = (float)FWShellPreferences::Get(pFVar1,1);
  local_e0[3] = 0.0;
  local_e0[4] = 0.0;
  local_e0[1] = 0.0;
  local_e0[2] = 0.0;
  uStack_c0 = 0;
  local_c8 = 0;
  local_a8 = 0x3f80000000000000;
  uStack_b0 = uVar4;
  local_b8 = uVar3;
  local_e0[0] = fVar8;
  C_Matrix4Mul((float *)&local_a0,local_e0,(float *)&local_a0);
  plVar7 = *(long **)(this + 0x88);
  (**(code **)(*plVar7 + 0x50))(plVar7,param_1,(long)plVar7 + 0x84,&local_a0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


