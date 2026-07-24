/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc1e0
 * Function: Caver::WeaponTrail::AddSegment
 * Signature: undefined __thiscall AddSegment(WeaponTrail * this, Vector3 * param_1, Vector3 * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrail::AddSegment(Caver::Vector3 const&, Caver::Vector3 const&, float) */

void __thiscall
Caver::WeaponTrail::AddSegment(WeaponTrail *this,Vector3 *param_1,Vector3 *param_2,float param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_60;
  undefined4 uStack_5c;
  Color local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  Color local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar10 = *(int *)(this + 4);
  if (iVar10 == *(int *)this) {
    uVar2 = iVar10 - 1;
    *(uint *)(this + 4) = uVar2;
    memmove(*(void **)(this + 0x18),(void *)((long)*(void **)(this + 0x18) + 0x40),
            -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 | (ulong)(uVar2 * 2) << 5);
    iVar10 = *(int *)(this + 4);
  }
  fVar11 = *(float *)(this + 0x30);
  fVar12 = (float)NEON_ucvtf((uint)(byte)this[8]);
  fVar13 = (float)NEON_ucvtf((uint)(byte)this[9]);
  uVar2 = (uint)(fVar11 * fVar12);
  fVar12 = (float)NEON_ucvtf((uint)(byte)this[10]);
  fVar14 = (float)NEON_ucvtf((uint)(byte)this[0xb]);
  uVar4 = (uint)(fVar11 * fVar13);
  if (0xfe < (int)uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar6 = (uint)(fVar11 * fVar12);
  uVar8 = (uint)(fVar11 * fVar14);
  if (0xfe < (int)uVar4) {
    uVar4 = 0xffffffff;
  }
  if (0xfe < (int)uVar6) {
    uVar6 = 0xffffffff;
  }
  if (0xfe < (int)uVar8) {
    uVar8 = 0xffffffff;
  }
  uVar2 = (uint)((float)(uVar2 & 0xff) * param_3);
  uVar4 = (uint)((float)(uVar4 & 0xff) * param_3);
  uVar6 = (uint)((float)(uVar6 & 0xff) * param_3);
  if (0xfe < (int)uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar8 = (uint)((float)(uVar8 & 0xff) * param_3);
  local_50 = SUB41(uVar2,0);
  if (0xfe < (int)uVar4) {
    uVar4 = 0xffffffff;
  }
  if (0xfe < (int)uVar6) {
    uVar6 = 0xffffffff;
  }
  local_4f = (undefined1)uVar4;
  local_4e = (undefined1)uVar6;
  if (0xfe < (int)uVar8) {
    uVar8 = 0xffffffff;
  }
  local_4d = (undefined1)uVar8;
  iVar3 = (int)((float)(uVar2 & 0xff) * 0.5);
  iVar5 = (int)((float)(uVar4 & 0xff) * 0.5);
  if (0xfe < iVar3) {
    iVar3 = 0xff;
  }
  iVar7 = (int)((float)(uVar6 & 0xff) * 0.5);
  if (0xfe < iVar5) {
    iVar5 = 0xff;
  }
  iVar9 = (int)((float)(uVar8 & 0xff) * 0.5);
  local_58 = SUB41(iVar3,0);
  if (0xfe < iVar7) {
    iVar7 = 0xff;
  }
  local_57 = (undefined1)iVar5;
  if (0xfe < iVar9) {
    iVar9 = 0xff;
  }
  local_56 = (undefined1)iVar7;
  local_55 = (undefined1)iVar9;
  local_60 = *(undefined4 *)(this + 0x38);
  uStack_5c = 0;
  SetVertex(this,iVar10 << 1,param_1,&local_58,(Vector2 *)&local_60);
  local_60 = *(undefined4 *)(this + 0x38);
  uStack_5c = 0x3f800000;
  SetVertex(this,iVar10 << 1 | 1,param_2,&local_50,(Vector2 *)&local_60);
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


