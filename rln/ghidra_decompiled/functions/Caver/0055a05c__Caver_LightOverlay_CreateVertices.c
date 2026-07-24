/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055a05c
 * Function: Caver::LightOverlay::CreateVertices
 * Signature: undefined __thiscall CreateVertices(LightOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightOverlay::CreateVertices() */

void __thiscall Caver::LightOverlay::CreateVertices(LightOverlay *this)

{
  float *pfVar1;
  VertexArrayObject *this_00;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  short sVar8;
  undefined8 uVar9;
  void *__s;
  int iVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  VertexArrayObject aVStack_80 [72];
  long local_38;
  
                    /* try { // try from 0055a060 to 0065a06f has its CatchHandler @ 00559e6c */
                    /* try { // try from 0055a070 to 0065a073 has its CatchHandler @ 0055a444 */
  lVar7 = tpidr_el0;
                    /* try { // try from 0055a074 to 0065a0bb has its CatchHandler @ 00559e6c */
  local_38 = *(long *)(lVar7 + 0x28);
  VertexArrayObject::VertexArrayObject(aVStack_80);
  this_00 = (VertexArrayObject *)(this + 0x48);
  memcpy(this_00,aVStack_80,0x48);
  VertexArrayObject::~VertexArrayObject(aVStack_80);
  this[0x90] = (LightOverlay)0x0;
  VertexArrayObject::CreateVertexBuffer
            (this_00,*(int *)(this + 0x10) * *(int *)(this + 0x14) * 0x10);
                    /* try { // try from 0055a0bc to 0065a0e3 has its CatchHandler @ 0055a2c4 */
  uVar19 = (long)*(int *)(this + 0x14) * (long)*(int *)(this + 0x10);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar19;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x50);
  uVar11 = uVar19 * 4;
  if (SUB168(auVar6 * ZEXT816(4),8) != 0) {
    uVar11 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar11);
  pvVar12 = *(void **)(this + 0x28);
  *(void **)(this + 0x28) = __s;
  if (pvVar12 != (void *)0x0) {
    operator_delete__(pvVar12);
    __s = *(void **)(this + 0x28);
    uVar19 = (long)*(int *)(this + 0x14) * (long)*(int *)(this + 0x10);
  }
                    /* try { // try from 0055a10c to 0065a117 has its CatchHandler @ 0055a3ac */
  memset(__s,0,uVar19 << 2);
  uVar9 = DAT_006958e8;
  iVar16 = *(int *)(this + 0x10);
  if (iVar16 < 1) {
    iVar10 = *(int *)(this + 0x14);
  }
  else {
    iVar10 = *(int *)(this + 0x14);
    iVar14 = 0;
    do {
      if (0 < iVar10) {
        iVar16 = 0;
        do {
                    /* try { // try from 0055a138 to 0065a15f has its CatchHandler @ 0055a2c0 */
          iVar15 = *(int *)(this + 0x18);
          pfVar1 = (float *)(*(long *)(this + 0x38) +
                            (ulong)(iVar16 + iVar14 * iVar10 & 0xffff) * 0x10);
          *pfVar1 = (float)(*(int *)(this + 0x1c) * iVar16);
          pfVar1[1] = (float)(iVar15 * iVar14);
                    /* try { // try from 0055a160 to 0065a3cf has its CatchHandler @ 00559e6c */
          *(undefined8 *)(pfVar1 + 2) = uVar9;
          iVar10 = *(int *)(this + 0x14);
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar10);
        iVar16 = *(int *)(this + 0x10);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar16);
  }
  iVar16 = (iVar10 + -1) * (iVar16 * 2 + -2);
  *(int *)(this + 0x30) = iVar16;
  VertexArrayObject::CreateIndexBuffer(this_00,0x1403,iVar16 * 3);
  iVar16 = *(int *)(this + 0x10);
  lVar13 = *(long *)(this + 0x60);
  *(long *)(this + 0x40) = lVar13;
  if (1 < iVar16) {
    iVar3 = *(int *)(this + 0x14);
    uVar17 = 6;
    iVar15 = 0;
    iVar10 = 0;
    iVar14 = iVar3;
    do {
      if (1 < iVar3) {
        sVar8 = (short)iVar3 * (short)iVar10;
        uVar2 = (iVar3 + -1) * iVar10 * 3;
        uVar5 = (uVar2 & 0x7fff) * 2;
        sVar4 = sVar8 + (short)iVar3;
        *(short *)(lVar13 + (ulong)uVar5 * 2) = sVar8;
        *(short *)(lVar13 + (ulong)((uVar2 & 0x7fff) << 1 | 1) * 2) = sVar8 + 1;
        *(short *)(lVar13 + (ulong)(uVar5 + 2) * 2) = sVar4;
        *(short *)(lVar13 + (ulong)(uVar5 + 3) * 2) = sVar8 + 1;
        *(short *)(lVar13 + (ulong)(uVar5 + 4) * 2) = sVar4 + 1;
        *(short *)(lVar13 + (ulong)(uVar5 + 5) * 2) = sVar4;
        if (iVar3 != 2) {
          iVar18 = 1;
          uVar5 = uVar17;
          do {
            sVar4 = (short)iVar15 + (short)iVar18;
            uVar2 = uVar5 & 0xfffe;
            *(short *)(lVar13 + (ulong)uVar2 * 2) = sVar4;
            sVar4 = sVar4 + 1;
            sVar8 = (short)iVar14 + (short)iVar18;
            *(short *)(lVar13 + (ulong)(uVar2 | 1) * 2) = sVar4;
            iVar18 = iVar18 + 1;
            *(short *)(lVar13 + (ulong)(uVar2 + 2) * 2) = sVar8;
            *(short *)(lVar13 + (ulong)(uVar2 + 3) * 2) = sVar4;
            uVar5 = uVar5 + 6;
            *(short *)(lVar13 + (ulong)(uVar2 + 4) * 2) = sVar8 + 1;
            *(short *)(lVar13 + (ulong)(uVar2 + 5) * 2) = sVar8;
          } while (iVar18 < iVar3 + -1);
        }
      }
      iVar10 = iVar10 + 1;
      iVar14 = iVar14 + iVar3;
      iVar15 = iVar15 + iVar3;
      uVar17 = uVar17 + iVar3 * 6 + -6;
    } while (iVar10 < iVar16 + -1);
  }
                    /* catch() { ... } // from try @ 0055a138 with catch @ 0055a2c0 */
  if (*(long *)(lVar7 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0055a0bc with catch @ 0055a2c4 */
                    /* catch() { ... } // from try @ 0055a038 with catch @ 0055a2d4 */
  return;
}


