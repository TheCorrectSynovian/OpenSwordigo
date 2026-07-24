/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00544b1c
 * Function: Caver::Mesh::SetNumTexCoordSets
 * Signature: undefined __thiscall SetNumTexCoordSets(Mesh * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::SetNumTexCoordSets(int) */

void __thiscall Caver::Mesh::SetNumTexCoordSets(Mesh *this,int param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = (ulong)param_1;
                    /* try { // try from 00544b38 to 00644ba7 has its CatchHandler @ 005437fc */
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar11;
  uVar6 = (uVar11 + (long)param_1 * 2) * 8;
  if (SUB168(auVar1 * ZEXT816(0x18),8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x140) = param_1;
  puVar2 = operator_new__(uVar6);
  if (param_1 != 0) {
    uVar6 = (uVar11 * 0x18 - 0x18) / 0x18 + 1;
    puVar3 = puVar2;
    if (1 < uVar6) {
      uVar8 = uVar6 & 0x1ffffffffffffffe;
      puVar9 = puVar2 + 3;
      puVar3 = puVar2 + uVar8 * 3;
      uVar10 = uVar8;
      do {
        puVar9[-3] = 0;
                    /* catch() { ... } // from try @ 00544544 with catch @ 00544ba4
                       catch() { ... } // from try @ 00544a28 with catch @ 00544ba4 */
        *puVar9 = 0;
                    /* catch() { ... } // from try @ 00544c58 with catch @ 00544ba8 */
        *(undefined4 *)(puVar9 + -2) = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9[-1] = 0;
        puVar9[2] = 0;
        uVar10 = uVar10 - 2;
        puVar9 = puVar9 + 6;
                    /* try { // try from 00544bc0 to 00644bc7 has its CatchHandler @ 00544c64 */
      } while (uVar10 != 0);
      if (uVar6 == uVar8) goto LAB_00544be8;
    }
    do {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar2 + uVar11 * 3);
  }
LAB_00544be8:
  pvVar4 = *(void **)(this + 0x50);
  *(undefined8 **)(this + 0x50) = puVar2;
  if (pvVar4 != (void *)0x0) {
                    /* try { // try from 00544bf4 to 00644bff has its CatchHandler @ 00544c0c */
    operator_delete__(pvVar4);
    param_1 = *(int *)(this + 0x140);
  }
  if (0 < param_1) {
    lVar5 = 0;
                    /* catch() { ... } // from try @ 00544bf4 with catch @ 00544c0c */
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x50) + lVar5);
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
      lVar5 = lVar5 + 0x18;
                    /* try { // try from 00544c30 to 00644c57 has its CatchHandler @ 00544c60 */
    } while (lVar7 < *(int *)(this + 0x140));
  }
  return;
}


