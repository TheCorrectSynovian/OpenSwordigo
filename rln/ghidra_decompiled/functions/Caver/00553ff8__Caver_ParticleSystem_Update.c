/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553ff8
 * Function: Caver::ParticleSystem::Update
 * Signature: undefined __thiscall Update(ParticleSystem * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleSystem::Update(float) */

void __thiscall Caver::ParticleSystem::Update(ParticleSystem *this,float param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar2 = DAT_006837a4;
                    /* try { // try from 00553ff8 to 00653ffb has its CatchHandler @ 00554004 */
  iVar8 = *(int *)(this + 0x24);
                    /* try { // try from 00553ffc to 00654007 has its CatchHandler @ 00553f7c */
  if (0 < iVar8) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00553ff8 with catch @ 00554004
                        */
                    /* catch() { ... } // from try @ 005540d0 with catch @ 00554008 */
    lVar6 = *(long *)(this + 0x28);
    uVar4 = 0;
    uVar3 = 0;
    lVar5 = 0x40;
                    /* try { // try from 00554030 to 00654043 has its CatchHandler @ 005542bc */
    do {
                    /* try { // try from 00554048 to 00654053 has its CatchHandler @ 0055424c */
      if (*(float *)(lVar6 + lVar5) < ((float *)(lVar6 + lVar5))[-1] + fVar2) {
        lVar9 = (long)(int)uVar3;
        if (uVar4 != uVar3) {
          puVar1 = (undefined4 *)(lVar6 + lVar5);
          uVar14 = *(undefined8 *)(puVar1 + -0x10);
          puVar7 = (undefined8 *)(lVar6 + lVar9 * 0x44);
          puVar7[1] = *(undefined8 *)(puVar1 + -0xe);
          *puVar7 = uVar14;
                    /* try { // try from 0055406c to 0065407f has its CatchHandler @ 00554248 */
          *(undefined4 *)(puVar7 + 2) = puVar1[-0xc];
          *(undefined4 *)((long)puVar7 + 0x14) = puVar1[-0xb];
          *(undefined4 *)(puVar7 + 3) = puVar1[-10];
                    /* try { // try from 00554084 to 00654097 has its CatchHandler @ 00554210 */
          *(undefined4 *)((long)puVar7 + 0x2c) = puVar1[-5];
          uVar14 = *(undefined8 *)(puVar1 + -9);
          *(undefined8 *)((long)puVar7 + 0x24) = *(undefined8 *)(puVar1 + -7);
          *(undefined8 *)((long)puVar7 + 0x1c) = uVar14;
          puVar7[6] = *(undefined8 *)(puVar1 + -4);
          *(undefined4 *)(puVar7 + 8) = *puVar1;
                    /* try { // try from 005540a8 to 006540bb has its CatchHandler @ 0055420c */
          puVar7[7] = *(undefined8 *)(puVar1 + -2);
          lVar6 = *(long *)(this + 0x28);
        }
        lVar10 = lVar6 + lVar9 * 0x44;
        uVar14 = *(undefined8 *)(lVar10 + 0x10);
                    /* try { // try from 005540bc to 006540cf has its CatchHandler @ 005541d4 */
        fVar13 = (float)uVar14;
        fVar15 = (float)((ulong)uVar14 >> 0x20);
        fVar12 = *(float *)(lVar10 + 0x40) + param_1;
        *(float *)(lVar10 + 0x40) = fVar12;
                    /* try { // try from 005540d0 to 006542bf has its CatchHandler @ 00554008 */
        fVar16 = *(float *)(lVar10 + 0x18);
        *(ulong *)(lVar10 + 4) =
             CONCAT44(param_1 * fVar15 + (float)((ulong)*(undefined8 *)(lVar10 + 4) >> 0x20),
                      param_1 * fVar13 + (float)*(undefined8 *)(lVar10 + 4));
        *(float *)(lVar10 + 0xc) = fVar16 * param_1 + *(float *)(lVar10 + 0xc);
        if (this[0x91] != (ParticleSystem)0x0) {
          fVar17 = *(float *)(this + 0x9c);
          *(undefined8 *)(lVar10 + 0x10) =
               CONCAT44(fVar15 + param_1 * (float)((ulong)*(undefined8 *)(this + 0x94) >> 0x20),
                        fVar13 + param_1 * (float)*(undefined8 *)(this + 0x94));
          *(float *)(lVar10 + 0x18) = fVar16 + fVar17 * param_1;
        }
        lVar10 = lVar6 + lVar9 * 0x44;
        pfVar11 = (float *)(lVar10 + 0x28);
        fVar13 = *(float *)(lVar10 + 0x2c);
        *(float *)(lVar10 + 0x20) = *(float *)(lVar10 + 0x20) + *(float *)(lVar10 + 0x24) * param_1;
        if (*pfVar11 < fVar13) {
          fVar16 = *pfVar11 + fVar13 * 6.0 * param_1;
          fVar15 = fVar13;
          if (fVar16 <= fVar13) {
            fVar15 = fVar16;
          }
          *pfVar11 = fVar15;
        }
        if ((this[0xa0] != (ParticleSystem)0x0) &&
           (fVar12 = fVar12 / *(float *)(lVar6 + lVar9 * 0x44 + 0x3c), 0.5 < fVar12)) {
          fVar12 = fVar12 + -0.5;
          fVar12 = 1.0 - (fVar12 + fVar12);
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          *(float *)(lVar6 + lVar9 * 0x44 + 0x38) = fVar12;
          *pfVar11 = fVar13 * (*(float *)(this + 0xa4) + fVar12 * (1.0 - *(float *)(this + 0xa4)));
        }
        iVar8 = *(int *)(this + 0x24);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x44;
    } while ((long)uVar4 < (long)iVar8);
    *(uint *)(this + 0x24) = uVar3;
    return;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


