/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cbae8
 * Function: Caver::WeaponGlowComponent::CreateVertexData
 * Signature: undefined __thiscall CreateVertexData(WeaponGlowComponent * this, int param_1, int param_2, int param_3, int param_4, float * param_5, float * param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::CreateVertexData(int, int, int, int, float*, float*) */

void __thiscall
Caver::WeaponGlowComponent::CreateVertexData
          (WeaponGlowComponent *this,int param_1,int param_2,int param_3,int param_4,float *param_5,
          float *param_6)

{
  float *pfVar1;
  WeaponGlowComponent *pWVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  int iVar9;
  char cVar10;
  float fVar11;
  long lVar12;
  WeaponGlowComponent *pWVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_5c;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  fVar18 = *(float *)(this + 0xec);
  local_70 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x74) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(this + 0xa4) >> 0x20) * fVar18,
                      (float)*(undefined8 *)(this + 0x74) * (float)*(undefined8 *)(this + 0xa4) *
                      fVar18);
  uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x7c) >> 0x20) *
                       (float)((ulong)*(undefined8 *)(this + 0xac) >> 0x20) * fVar18,
                       (float)*(undefined8 *)(this + 0x7c) * (float)*(undefined8 *)(this + 0xac) *
                       fVar18);
  Color::FromFloatColor((Color *)&local_70,(FloatColor *)(ulong)(uint)param_1);
  fVar11 = DAT_00688924;
  fVar18 = DAT_00684318;
  if (0 < param_4) {
    fVar17 = (float)param_1;
    lVar14 = 0;
    uVar15 = 0;
    pWVar13 = this + 0xb8;
    pWVar2 = this + 200;
    lVar16 = (-(ulong)((uint)param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_2 << 4) +
             0x20;
    do {
      fVar19 = *(float *)((long)param_6 + lVar14);
      puVar3 = (undefined4 *)(*(long *)pWVar13 + lVar16);
      puVar3[-8] = *(undefined4 *)((long)param_5 + lVar14);
      puVar3[-7] = 0;
      puVar3[-6] = fVar19 * -0.5 * fVar17;
      fVar19 = *(float *)((long)param_6 + lVar14);
      puVar3[-4] = *(undefined4 *)((long)param_5 + lVar14);
      puVar3[-3] = fVar17 * 0.0;
      puVar3[-2] = fVar19 * fVar11 * fVar17;
      fVar19 = *(float *)((long)param_6 + lVar14);
      *puVar3 = *(undefined4 *)((long)param_5 + lVar14);
      puVar3[1] = fVar17 * 0.0;
      puVar3[2] = fVar19 * fVar18 * fVar17;
      fVar19 = *(float *)((long)param_6 + lVar14);
      uVar4 = *(undefined4 *)((long)param_5 + lVar14);
      puVar3[-5] = 0;
      puVar3[4] = uVar4;
      puVar3[5] = 0;
      puVar3[6] = fVar19 * 0.5 * fVar17;
      *(undefined4 *)(*(long *)pWVar13 + lVar16 + -4) = local_5c;
      *(undefined4 *)(*(long *)pWVar13 + lVar16 + 0xc) = local_5c;
      *(undefined4 *)(*(long *)pWVar13 + lVar16 + 0x1c) = 0;
      if ((long)uVar15 < (long)(param_4 + -1)) {
        iVar9 = param_3 * 3;
        cVar6 = (char)param_2 + (char)lVar14;
        lVar12 = (long)iVar9;
        *(char *)(*(long *)pWVar2 + lVar12) = cVar6;
        cVar5 = cVar6 + '\x01';
        *(char *)(*(long *)pWVar2 + lVar12 + 1) = cVar5;
        param_3 = param_3 + 6;
        *(char *)(*(long *)pWVar2 + lVar12 + 2) = cVar6 + '\x04';
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 3)) = cVar6 + '\x04';
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 4)) = cVar5;
        cVar10 = (char)param_2 + (char)lVar14;
        cVar7 = cVar10 + '\x05';
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 5)) = cVar7;
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 6)) = cVar5;
        cVar5 = cVar6 + '\x02';
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 7)) = cVar5;
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 8)) = cVar7;
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 9)) = cVar7;
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 10)) = cVar5;
        cVar7 = cVar10 + '\x06';
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 0xb)) = cVar7;
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 0xc)) = cVar5;
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 0xd)) = cVar6 + '\x03';
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 0xe)) = cVar7;
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 0xf)) = cVar7;
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 0x10)) = cVar6 + '\x03';
        *(char *)(*(long *)pWVar2 + (long)(iVar9 + 0x11)) = cVar10 + '\a';
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 4;
      lVar16 = lVar16 + 0x40;
    } while ((uint)param_4 != uVar15);
    param_2 = param_2 + (param_4 + -1) * 4 + 4;
  }
  pWVar13 = this + 200;
  iVar9 = param_3 * 3;
  lVar16 = (long)iVar9;
  pfVar1 = (float *)(*(long *)(this + 0xb8) + (long)param_2 * 0x10);
  *pfVar1 = param_5[param_4];
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  cVar5 = (char)param_2;
  *(char *)(*(long *)pWVar13 + lVar16) = cVar5 + -4;
  *(char *)(*(long *)pWVar13 + lVar16 + 1) = cVar5 + -3;
  *(char *)(*(long *)pWVar13 + lVar16 + 2) = cVar5;
  *(char *)(*(long *)pWVar13 + (long)(iVar9 + 3)) = cVar5 + -3;
  *(char *)(*(long *)pWVar13 + (long)(iVar9 + 4)) = cVar5 + -2;
  *(char *)(*(long *)pWVar13 + (long)(iVar9 + 5)) = cVar5;
  *(char *)(*(long *)pWVar13 + (long)(iVar9 + 6)) = cVar5 + -2;
  *(char *)(*(long *)pWVar13 + (long)(iVar9 + 7)) = cVar5 + -1;
  *(char *)(*(long *)pWVar13 + (long)(iVar9 + 8)) = cVar5;
  if (*(long *)(lVar8 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


