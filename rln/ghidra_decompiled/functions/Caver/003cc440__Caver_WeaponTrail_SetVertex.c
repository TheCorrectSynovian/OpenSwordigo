/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc440
 * Function: Caver::WeaponTrail::SetVertex
 * Signature: undefined __thiscall SetVertex(WeaponTrail * this, int param_1, Vector3 * param_2, Color * param_3, Vector2 * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrail::SetVertex(int, Caver::Vector3 const&, Caver::Color const&, Caver::Vector2
   const&) */

void __thiscall
Caver::WeaponTrail::SetVertex
          (WeaponTrail *this,int param_1,Vector3 *param_2,Color *param_3,Vector2 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = -(ulong)((uint)param_1 >> 0x1f) & 0xffffffe000000000 | (ulong)(uint)param_1 << 5;
  puVar1 = (undefined8 *)(*(long *)(this + 0x18) + uVar2);
  *puVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 8);
  fVar8 = *(float *)(this + 0xc);
  fVar9 = (float)NEON_ucvtf((uint)(byte)*param_3);
  fVar10 = (float)NEON_ucvtf((uint)(byte)param_3[1]);
  fVar11 = (float)NEON_ucvtf((uint)(byte)param_3[2]);
  uVar3 = (uint)(fVar8 * fVar9);
  fVar9 = (float)NEON_ucvtf((uint)(byte)param_3[3]);
  uVar5 = (uint)(fVar8 * fVar10);
  uVar6 = (uint)(fVar8 * fVar11);
  if (0xfe < (int)uVar3) {
    uVar3 = 0xff;
  }
  iVar7 = (int)(fVar8 * fVar9);
  if (0xfe < (int)uVar5) {
    uVar5 = 0xff;
  }
  if (0xfe < (int)uVar6) {
    uVar6 = 0xff;
  }
  if (0xfe < iVar7) {
    iVar7 = 0xff;
  }
  *(uint *)((long)puVar1 + 0xc) =
       uVar3 & 0xff | (uVar5 & 0xff) << 8 | (uVar6 & 0xff) << 0x10 | iVar7 << 0x18;
  lVar4 = *(long *)(this + 0x18);
  *(undefined8 *)(lVar4 + uVar2 + 0x10) = *(undefined8 *)param_4;
  fVar8 = *(float *)(this + 0xc);
  fVar9 = (float)NEON_ucvtf((uint)(byte)*param_3);
  fVar10 = (float)NEON_ucvtf((uint)(byte)param_3[1]);
  fVar11 = (float)NEON_ucvtf((uint)(byte)param_3[2]);
  uVar3 = (uint)(fVar8 * fVar9);
  fVar9 = (float)NEON_ucvtf((uint)(byte)param_3[3]);
  uVar5 = (uint)(fVar8 * fVar10);
  uVar6 = (uint)(fVar8 * fVar11);
  if (0xfe < (int)uVar3) {
    uVar3 = 0xff;
  }
  iVar7 = (int)(fVar8 * fVar9);
  if (0xfe < (int)uVar5) {
    uVar5 = 0xff;
  }
  if (0xfe < (int)uVar6) {
    uVar6 = 0xff;
  }
  if (0xfe < iVar7) {
    iVar7 = 0xff;
  }
  *(uint *)(lVar4 + uVar2 + 0x18) =
       uVar3 & 0xff | (uVar5 & 0xff) << 8 | (uVar6 & 0xff) << 0x10 | iVar7 << 0x18;
  *(undefined4 *)(*(long *)(this + 0x18) + uVar2 + 0x1c) = 0x3f800000;
  return;
}


