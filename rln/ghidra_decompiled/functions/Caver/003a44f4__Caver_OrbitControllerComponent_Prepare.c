/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a44f4
 * Function: Caver::OrbitControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(OrbitControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrbitControllerComponent::Prepare() */

void __thiscall Caver::OrbitControllerComponent::Prepare(OrbitControllerComponent *this)

{
  double dVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  
  uVar5 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
  *(undefined4 *)(this + 0x98) = uVar5;
  iVar3 = fastrandom();
  puVar2 = PTR_FASTRANDOM_MAX_007e4b68;
  dVar1 = DAT_00684790;
  iVar13 = *(int *)PTR_FASTRANDOM_MAX_007e4b68;
  *(undefined4 *)(this + 0xa0) = 0x3ecccccd;
  *(float *)(this + 0x9c) = (float)((double)((float)iVar3 / (float)iVar13) * dVar1);
  iVar3 = fastrandom();
  iVar7 = *(int *)puVar2;
  iVar13 = fastrandom();
  iVar8 = *(int *)puVar2;
  iVar4 = fastrandom();
  iVar9 = *(int *)puVar2;
  *(float *)(this + 0xa4) = (float)iVar3 / (float)iVar7;
  *(float *)(this + 0xa8) = (float)iVar13 / (float)iVar8;
  *(float *)(this + 0xac) = (float)iVar4 / (float)iVar9;
  uVar5 = fastrandom();
  uVar10 = *(undefined4 *)puVar2;
  uVar6 = fastrandom();
  uVar12 = NEON_scvtf(CONCAT44(uVar6,uVar5),4);
  uVar14 = NEON_scvtf(CONCAT44(*(undefined4 *)puVar2,uVar10),4);
  iVar3 = fastrandom();
  fVar11 = ((float)iVar3 / (float)*(int *)puVar2) * DAT_00687988 + DAT_0068798c;
  *(ulong *)(this + 0xb0) =
       CONCAT44(((float)((ulong)uVar12 >> 0x20) / (float)((ulong)uVar14 >> 0x20)) * 0.15 + 0.05,
                ((float)uVar12 / (float)uVar14) * 0.15 + 0.05);
  *(float *)(this + 0xb8) = fVar11;
  return;
}


