/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00547fd8
 * Function: Caver::MeshClipper::InitWithMeshInstance
 * Signature: undefined __thiscall InitWithMeshInstance(MeshClipper * this, MeshInstance * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshClipper::InitWithMeshInstance(Caver::MeshInstance*, Caver::Matrix4 const&) */

void __thiscall
Caver::MeshClipper::InitWithMeshInstance(MeshClipper *this,MeshInstance *param_1,Matrix4 *param_2)

{
  MeshClipper *pMVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  Matrix4 *pMVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  MeshClipper *pMVar9;
  MeshClipper *pMVar10;
  Matrix4 *pMVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
                    /* catch() { ... } // from try @ 00547f50 with catch @ 00547fec */
  pMVar1 = this + 0x48;
  *(MeshInstance **)this = param_1;
  pMVar9 = pMVar1;
  if (pMVar1 <= this + 0xc) {
    pMVar9 = this + 0xc;
  }
  uVar7 = ((ulong)(pMVar9 + (-9 - (long)this)) >> 2) + 1;
  pMVar9 = this + 8;
  pMVar11 = param_2;
  if (7 < uVar7) {
    pMVar10 = pMVar1;
    if (pMVar1 <= this + 0xc) {
      pMVar10 = this + 0xc;
    }
                    /* catch() { ... } // from try @ 00547f3c with catch @ 0054805c */
                    /* try { // try from 00548060 to 006480c7 has its CatchHandler @ 00548060
                       catch() { ... } // from try @ 00548060 with catch @ 00548060
                       catch() { ... } // from try @ 005480cc with catch @ 00548060
                       catch() { ... } // from try @ 005481c8 with catch @ 00548060
                       catch() { ... } // from try @ 00548274 with catch @ 00548060
                       catch() { ... } // from try @ 005482d8 with catch @ 00548060 */
    if (((MeshClipper *)(param_2 + ((ulong)(pMVar10 + (-9 - (long)this)) & 0xfffffffffffffffc) + 4)
         <= pMVar9) ||
       (this + ((ulong)(pMVar10 + (-9 - (long)this) + 0xc) & 0xfffffffffffffffc) <= param_2)) {
      uVar12 = uVar7 & 0x7ffffffffffffff8;
      pMVar10 = this + 0x18;
      pMVar9 = this + uVar12 * 4 + 8;
      pMVar11 = param_2 + 0x10;
      uVar13 = uVar12;
      do {
        pMVar5 = pMVar11 + -8;
        uVar14 = *(undefined8 *)(pMVar11 + -0x10);
        uVar16 = *(undefined8 *)(pMVar11 + 8);
        uVar15 = *(undefined8 *)pMVar11;
        uVar13 = uVar13 - 8;
        pMVar11 = pMVar11 + 0x20;
        *(undefined8 *)(pMVar10 + -8) = *(undefined8 *)pMVar5;
        *(undefined8 *)(pMVar10 + -0x10) = uVar14;
        *(undefined8 *)(pMVar10 + 8) = uVar16;
        *(undefined8 *)pMVar10 = uVar15;
        pMVar10 = pMVar10 + 0x20;
      } while (uVar13 != 0);
      pMVar11 = param_2 + uVar12 * 4;
      if (uVar7 == uVar12) goto LAB_005480b8;
    }
  }
  do {
    pMVar10 = pMVar9 + 4;
    *(undefined4 *)pMVar9 = *(undefined4 *)pMVar11;
    pMVar9 = pMVar10;
    pMVar11 = pMVar11 + 4;
  } while (pMVar10 < pMVar1);
LAB_005480b8:
  MeshBuilder::InitWithMeshInstance((MeshBuilder *)(this + 0x48),param_1,true);
                    /* try { // try from 005480c8 to 006480cb has its CatchHandler @ 00548278 */
                    /* try { // try from 005480cc to 00648113 has its CatchHandler @ 00548060 */
  MeshBuilder::TransformVertices((MeshBuilder *)(this + 0x48),param_2);
  iVar2 = *(int *)(this + 0x58);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (long)iVar2;
  *(int *)(this + 0xa0) = iVar2;
  uVar7 = (long)iVar2 << 2;
  if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  pvVar6 = operator_new__(uVar7);
  pvVar8 = *(void **)(this + 0xa8);
  *(void **)(this + 0xa8) = pvVar6;
  if (pvVar8 != (void *)0x0) {
    operator_delete__(pvVar8);
  }
  iVar2 = *(int *)(this + 0x98);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (long)iVar2;
                    /* try { // try from 00548114 to 0064813b has its CatchHandler @ 0054828c */
  *(int *)(this + 0xb0) = iVar2;
  uVar7 = (long)iVar2 << 2;
  if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  pvVar6 = operator_new__(uVar7);
  pvVar8 = *(void **)(this + 0xb8);
  *(void **)(this + 0xb8) = pvVar6;
  if (pvVar8 == (void *)0x0) {
    return;
  }
  operator_delete__(pvVar8);
  return;
}


