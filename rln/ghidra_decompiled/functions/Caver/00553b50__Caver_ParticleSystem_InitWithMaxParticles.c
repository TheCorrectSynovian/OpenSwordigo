/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553b50
 * Function: Caver::ParticleSystem::InitWithMaxParticles
 * Signature: undefined __thiscall InitWithMaxParticles(ParticleSystem * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ParticleSystem::InitWithMaxParticles(int) */

void __thiscall Caver::ParticleSystem::InitWithMaxParticles(ParticleSystem *this,int param_1)

{
  VertexArrayObject *this_00;
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  short *psVar15;
  short sVar16;
  ulong uVar17;
  
                    /* catch() { ... } // from try @ 00553860 with catch @ 00553b50 */
                    /* catch() { ... } // from try @ 0055391c with catch @ 00553b54 */
                    /* catch() { ... } // from try @ 005534a0 with catch @ 00553b58 */
  uVar17 = (ulong)param_1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  uVar12 = (uVar17 + (long)param_1 * 0x10) * 4;
  if (SUB168(auVar5 * ZEXT816(0x44),8) != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x24) = 0;
  puVar10 = operator_new__(uVar12);
  uVar9 = _UNK_00689608;
  uVar8 = _DAT_00689600;
  uVar7 = _UNK_00683808;
  uVar6 = _DAT_00683800;
  if (param_1 != 0) {
    puVar14 = puVar10;
    do {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0xffffffff00000000;
      puVar14[5] = uVar7;
      puVar14[4] = uVar6;
      puVar14[7] = uVar9;
      puVar14[6] = uVar8;
      *(undefined4 *)(puVar14 + 8) = 0;
      puVar14 = (undefined8 *)((long)puVar14 + 0x44);
                    /* catch() { ... } // from try @ 00553498 with catch @ 00553bc4 */
    } while (puVar14 != (undefined8 *)((long)puVar10 + uVar17 * 0x44));
  }
  pvVar11 = *(void **)(this + 0x28);
  *(undefined8 **)(this + 0x28) = puVar10;
                    /* catch() { ... } // from try @ 00553464 with catch @ 00553bd4 */
  if (pvVar11 != (void *)0x0) {
    operator_delete__(pvVar11);
  }
  this_00 = (VertexArrayObject *)(this + 0x48);
  this[0x90] = (ParticleSystem)0x0;
  *(undefined4 *)(this + 0x30) = 0x18;
  VertexArrayObject::Reset(this_00);
                    /* catch() { ... } // from try @ 0055345c with catch @ 00553c0c */
  VertexArrayObject::CreateVertexBuffer(this_00,*(int *)(this + 0x20) * *(int *)(this + 0x30) * 4);
                    /* catch() { ... } // from try @ 00553404 with catch @ 00553c10 */
  VertexArrayObject::CreateIndexBuffer(this_00,0x1403,*(int *)(this + 0x20) * 6);
  iVar1 = *(int *)(this + 0x20);
  *(long *)(this + 0x38) = *(long *)(this + 0x60);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x50);
  if (0 < iVar1) {
    lVar13 = 0;
    psVar15 = (short *)(*(long *)(this + 0x60) + 6);
    sVar16 = 3;
    do {
      sVar2 = sVar16 + -3;
      sVar3 = sVar16 + -2;
      sVar4 = sVar16 + -1;
      lVar13 = lVar13 + 1;
      psVar15[2] = sVar16;
      sVar16 = sVar16 + 4;
      psVar15[-3] = sVar2;
      psVar15[-2] = sVar3;
                    /* catch() { ... } // from try @ 005534f8 with catch @ 00553c6c
                       catch() { ... } // from try @ 005537fc with catch @ 00553c6c
                       catch() { ... } // from try @ 005538f0 with catch @ 00553c6c
                       catch() { ... } // from try @ 005539a8 with catch @ 00553c6c */
      psVar15[-1] = sVar4;
      *psVar15 = sVar4;
      psVar15[1] = sVar3;
      psVar15 = psVar15 + 6;
    } while (lVar13 < iVar1);
  }
                    /* try { // try from 00553c90 to 00653cb7 has its CatchHandler @ 00553f78 */
  return;
}


