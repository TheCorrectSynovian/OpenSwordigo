/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057daa8
 * Function: Caver::FWShell::DrawTouches
 * Signature: undefined __thiscall DrawTouches(FWShell * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::FWShell::DrawTouches(Caver::RenderingContext*) */

void __thiscall Caver::FWShell::DrawTouches(FWShell *this,RenderingContext *param_1)

{
  FWShellPreferences *pFVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  Matrix4 *this_00;
  Matrix4 *this_01;
  FWShell *pFVar17;
  float extraout_s0;
  float fVar18;
  float local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float afStack_a8 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pFVar1 = (FWShellPreferences *)(this + 0x20);
  iVar14 = FWShellPreferences::Get(pFVar1,0);
                    /* try { // try from 0057daf0 to 0067daf7 has its CatchHandler @ 0057dbcc */
                    /* try { // try from 0057daf8 to 0067db7b has its CatchHandler @ 0057dbe4 */
  iVar15 = FWShellPreferences::Get(pFVar1,1);
  iVar16 = FWShellPreferences::Get(pFVar1,2);
  this_00 = (Matrix4 *)FWShellPreferences::Get(pFVar1,3);
  Matrix4::Ortho(this_00,0.0,(float)iVar15,(float)iVar14,0.0,-1.0,1.0);
  uVar7 = _UNK_006837f8;
  uVar6 = _DAT_006837f0;
  uVar5 = _UNK_006837e8;
  uVar4 = _UNK_00683498;
  uVar3 = _DAT_00683490;
  uStack_c0 = CONCAT44((float)iVar15 * 0.5,(float)iVar14 * 0.5);
  uStack_e8 = (undefined4)_UNK_00683498;
  uVar10 = uStack_e8;
  uStack_e4 = (undefined4)((ulong)_UNK_00683498 >> 0x20);
  uVar11 = uStack_e4;
  local_f0 = (float)_DAT_00683490;
  fVar8 = local_f0;
  uStack_ec = (undefined4)((ulong)_DAT_00683490 >> 0x20);
  uVar9 = uStack_ec;
                    /* try { // try from 0057db7c to 0067dc07 has its CatchHandler @ 0057d8f4 */
  local_b8 = 0x3f80000000000000;
  uStack_d8 = _UNK_006837e8;
  local_e0 = (undefined4)_DAT_006837e0;
  uVar12 = local_e0;
  uStack_dc = (undefined4)((ulong)_DAT_006837e0 >> 0x20);
  uVar13 = uStack_dc;
  local_c8 = _UNK_006837f8;
  uStack_d0 = _DAT_006837f0;
  C_Matrix4Mul(afStack_a8,&local_f0,afStack_a8);
  this_01 = (Matrix4 *)FWShellPreferences::Get(pFVar1,0);
  Matrix4::RotationZ(this_01,extraout_s0);
  C_Matrix4Mul(afStack_a8,&local_f0,afStack_a8);
  fVar18 = (float)FWShellPreferences::Get(pFVar1,1);
                    /* catch() { ... } // from try @ 0057daf0 with catch @ 0057dbcc */
  uStack_dc = FWShellPreferences::Get(pFVar1,1);
  uStack_e4 = 0;
  local_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
                    /* catch() { ... } // from try @ 0057da2c with catch @ 0057dbe4
                       catch() { ... } // from try @ 0057daf8 with catch @ 0057dbe4 */
  local_b8 = 0x3f80000000000000;
  uStack_c0 = uVar4;
  local_c8 = uVar3;
  local_f0 = fVar18;
  C_Matrix4Mul(afStack_a8,&local_f0,afStack_a8);
                    /* try { // try from 0057dc08 to 0067dc2f has its CatchHandler @ 0057dc38 */
  uStack_c0 = CONCAT44((float)(int)this_00 * -0.5,(float)iVar16 * -0.5);
  local_b8 = 0x3f80000000000000;
  uStack_d8 = uVar5;
                    /* try { // try from 0057dc30 to 0067dc3b has its CatchHandler @ 0057d8f4 */
  local_c8 = uVar7;
  uStack_d0 = uVar6;
  local_f0 = fVar8;
  uStack_ec = uVar9;
  uStack_e8 = uVar10;
  uStack_e4 = uVar11;
  local_e0 = uVar12;
  uStack_dc = uVar13;
                    /* catch() { ... } // from try @ 0057dc08 with catch @ 0057dc38 */
  C_Matrix4Mul(afStack_a8,&local_f0,afStack_a8);
  glMatrixMode(0x1701);
  glPushMatrix();
  glLoadMatrixf(afStack_a8);
  glMatrixMode(0x1700);
  glLoadIdentity();
  local_f0 = -1.7014636e+38;
  RenderingContext::SetColor(param_1,(Color *)&local_f0);
  glEnableClientState(0x8074);
  uVar6 = _DAT_006965a8;
  uVar5 = _DAT_006965a0;
  uVar4 = _UNK_00695808;
  uVar3 = _DAT_00695800;
  pFVar17 = *(FWShell **)(this + 0x60);
  local_f0 = SUB84(pFVar17,0);
  uStack_ec = (undefined4)((ulong)pFVar17 >> 0x20);
                    /* try { // try from 0057dc80 to 0067dcc3 has its CatchHandler @ 0057dc80
                       catch() { ... } // from try @ 0057dc80 with catch @ 0057dc80
                       catch() { ... } // from try @ 0057dcd0 with catch @ 0057dc80
                       catch() { ... } // from try @ 0057ddcc with catch @ 0057dc80 */
  while (this + 0x50 != pFVar17) {
    glPushMatrix();
    glTranslatef(*(undefined4 *)(pFVar17 + 0x28),*(undefined4 *)(pFVar17 + 0x2c),0);
    glScalef(0x40000000,0x40000000,0x3f800000);
                    /* try { // try from 0057dd08 to 0067dd13 has its CatchHandler @ 0057df40 */
                    /* try { // try from 0057dcc4 to 0067dccf has its CatchHandler @ 0057e080 */
    if (((DAT_007e9d60 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_007e9d60), iVar14 != 0)) {
                    /* try { // try from 0057dcd0 to 0067dd07 has its CatchHandler @ 0057dc80 */
      uRam00000000007e9d48 = uVar4;
      _DAT_007e9d40 = uVar3;
      uRam00000000007e9d58 = uVar6;
      _DAT_007e9d50 = uVar5;
      __cxa_guard_release(&DAT_007e9d60);
    }
    glVertexPointer(2,0x1406,8,&DAT_007e9d40);
    glDrawArrays(5,0,4);
    glPopMatrix();
    pFVar17 = (FWShell *)FUN_0064c6a0(CONCAT44(uStack_ec,local_f0));
    local_f0 = SUB84(pFVar17,0);
    uStack_ec = (undefined4)((ulong)pFVar17 >> 0x20);
                    /* try { // try from 0057dd4c to 0067dd5f has its CatchHandler @ 0057df3c */
  }
  glDisableClientState(0x8074);
  glColor4f(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  glMatrixMode(0x1701);
  glPopMatrix();
                    /* try { // try from 0057dd7c to 0067ddaf has its CatchHandler @ 0057dfcc */
  glMatrixMode(0x1700);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0057ddb0 to 0067ddcb has its CatchHandler @ 0057df78 */
  __stack_chk_fail();
}


