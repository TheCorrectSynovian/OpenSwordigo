/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005541d0
 * Function: Caver::ParticleSystem::SetVertex
 * Signature: undefined __thiscall SetVertex(ParticleSystem * this, int param_1, Vector3 * param_2, Vector2 * param_3, Color * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleSystem::SetVertex(int, Caver::Vector3 const&, Caver::Vector2 const&, Caver::Color
   const&) */

void __thiscall
Caver::ParticleSystem::SetVertex
          (ParticleSystem *this,int param_1,Vector3 *param_2,Vector2 *param_3,Color *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* catch() { ... } // from try @ 005540bc with catch @ 005541d4 */
  puVar1 = (undefined8 *)(*(long *)(this + 0x40) + (long)*(int *)(this + 0x30) * (long)param_1);
  *puVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)((long)puVar1 + 0xc) = *(undefined8 *)param_3;
  if (this[0xb8] != (ParticleSystem)0x0) {
                    /* catch() { ... } // from try @ 005540a8 with catch @ 0055420c */
                    /* catch() { ... } // from try @ 00554084 with catch @ 00554210 */
    fVar2 = (float)NEON_ucvtf((uint)(byte)*param_4);
    fVar3 = (float)NEON_ucvtf((uint)(byte)param_4[1]);
    fVar4 = (float)NEON_ucvtf((uint)(byte)param_4[2]);
    fVar5 = (float)NEON_ucvtf((uint)(byte)param_4[3]);
                    /* catch() { ... } // from try @ 0055406c with catch @ 00554248 */
                    /* catch() { ... } // from try @ 00554048 with catch @ 0055424c */
    *(uint *)((long)puVar1 + 0x14) =
         (int)(*(float *)(this + 0xa8) * fVar2) & 0xffU |
         ((int)(*(float *)(this + 0xac) * fVar3) & 0xffU) << 8 |
         ((int)(*(float *)(this + 0xb0) * fVar4) & 0xffU) << 0x10 |
         (int)(*(float *)(this + 0xb4) * fVar5) << 0x18;
    return;
  }
  *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)param_4;
  return;
}


