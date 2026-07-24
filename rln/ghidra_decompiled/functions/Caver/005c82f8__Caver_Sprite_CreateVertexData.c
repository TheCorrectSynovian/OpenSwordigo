/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c82f8
 * Function: Caver::Sprite::CreateVertexData
 * Signature: undefined __thiscall CreateVertexData(Sprite * this, int param_1, Vector2 * param_2, int param_3, ushort * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::CreateVertexData(int, Caver::Vector2 const*, int, unsigned short*) */

void __thiscall
Caver::Sprite::CreateVertexData
          (Sprite *this,int param_1,Vector2 *param_2,int param_3,ushort *param_4)

{
  float fVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  undefined4 *puVar7;
  Vector2 *pVVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  *(undefined4 *)(this + 0x30) = 0x14;
  uVar4 = (ulong)(param_1 * 0x14);
  if (param_1 < 0) {
    uVar4 = 0xffffffffffffffff;
  }
                    /* try { // try from 005c833c to 006c8363 has its CatchHandler @ 005c84d4 */
  *(int *)(this + 0x28) = param_1;
  *(int *)(this + 0x2c) = param_1;
  pvVar3 = operator_new__(uVar4);
  pvVar5 = *(void **)(this + 0x38);
  *(void **)(this + 0x38) = pvVar3;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
    pvVar3 = *(void **)(this + 0x38);
    param_1 = *(int *)(this + 0x2c);
  }
  *(long *)(this + 0x48) = (long)pvVar3 + 0xc;
  if (0 < param_1) {
    lVar6 = *(long *)this;
                    /* try { // try from 005c8374 to 006c8387 has its CatchHandler @ 005c85b0 */
    fVar10 = *(float *)(this + 8);
    fVar11 = *(float *)(this + 0xc);
    fVar12 = *(float *)(this + 0x10);
    fVar13 = *(float *)(this + 0x14);
    iVar2 = *(int *)(this + 0x30);
    fVar14 = *(float *)(lVar6 + 0x5c);
    fVar15 = *(float *)(lVar6 + 0x60);
    fVar16 = *(float *)(lVar6 + 100);
    fVar17 = *(float *)(lVar6 + 0x68);
                    /* try { // try from 005c8388 to 006c84a7 has its CatchHandler @ 005c8154 */
    lVar6 = 0;
    puVar7 = (undefined4 *)((long)pvVar3 + 8);
    pVVar8 = param_2 + 4;
    do {
      fVar1 = *(float *)(pVVar8 + -4);
      fVar19 = fVar14 + (fVar16 * (fVar1 - fVar10)) / fVar12;
      fVar18 = fVar15 + (fVar17 * (*(float *)pVVar8 - fVar11)) / fVar13;
      puVar7[-1] = *(float *)pVVar8;
      *puVar7 = 0;
      puVar7[-2] = fVar1;
      fVar1 = 0.0;
      if ((fVar19 < 0.0) || (fVar1 = 1.0, 1.0 < fVar19)) {
        fVar19 = fVar1;
      }
      fVar1 = 0.0;
      if ((fVar18 < 0.0) || (fVar1 = 1.0, 1.0 < fVar18)) {
        fVar18 = fVar1;
      }
      lVar6 = lVar6 + 1;
      puVar7[1] = fVar19;
      puVar7[2] = fVar18;
      puVar7 = (undefined4 *)((long)puVar7 + (long)iVar2);
      pVVar8 = pVVar8 + 8;
    } while (lVar6 < param_1);
  }
  *(int *)(this + 0x18) = param_3;
  *(int *)(this + 0x1c) = param_3;
  uVar9 = (ulong)(param_3 * 3);
  uVar4 = uVar9 * 2;
  if (CARRY8(uVar9,uVar9)) {
    uVar4 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new__(uVar4);
  pvVar5 = *(void **)(this + 0x20);
  *(void **)(this + 0x20) = pvVar3;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
    pvVar3 = *(void **)(this + 0x20);
    uVar9 = (long)*(int *)(this + 0x1c) * 3;
  }
  memcpy(pvVar3,param_4,uVar9 << 1);
  return;
}


