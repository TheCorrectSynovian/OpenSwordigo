/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553f3c
 * Function: Caver::ParticleSystem::AddParticle
 * Signature: undefined __thiscall AddParticle(ParticleSystem * this, Particle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleSystem::AddParticle(Caver::Particle const&) */

long __thiscall Caver::ParticleSystem::AddParticle(ParticleSystem *this,Particle *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00553f48 to 00653f6f has its CatchHandler @ 00553f78 */
  if (*(int *)(this + 0x20) <= *(int *)(this + 0x24)) {
    return 0;
  }
  iVar1 = *(int *)param_1;
  if (-1 < iVar1) {
                    /* try { // try from 00553f70 to 00653f7b has its CatchHandler @ 0055303c */
    if (iVar1 < (int)((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 3) * -0x45d1745d) {
                    /* catch() { ... } // from try @ 00553c90 with catch @ 00553f78
                       catch() { ... } // from try @ 00553f48 with catch @ 00553f78 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00553f9c with catch @ 00553f7c
                       catch(type#1 @ 00000000) { ... } // from try @ 00553ffc with catch @ 00553f7c
                        */
      piVar2 = (int *)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x24) * 0x44);
      *piVar2 = iVar1;
      *(undefined8 *)(piVar2 + 1) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(piVar2 + 3) = *(undefined8 *)(param_1 + 0xc);
                    /* try { // try from 00553f94 to 00653f9b has its CatchHandler @ 00553fd8 */
      *(undefined8 *)(piVar2 + 5) = *(undefined8 *)(param_1 + 0x14);
                    /* try { // try from 00553f9c to 00653fe7 has its CatchHandler @ 00553f7c */
      piVar2[0xb] = *(int *)(param_1 + 0x2c);
      uVar3 = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(piVar2 + 9) = *(undefined8 *)(param_1 + 0x24);
      *(undefined8 *)(piVar2 + 7) = uVar3;
      *(undefined8 *)(piVar2 + 0xc) = *(undefined8 *)(param_1 + 0x30);
      piVar2[0x10] = *(int *)(param_1 + 0x40);
      *(undefined8 *)(piVar2 + 0xe) = *(undefined8 *)(param_1 + 0x38);
      iVar1 = *(int *)(this + 0x24);
      *(int *)(this + 0x24) = iVar1 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00553f94 with catch @ 00553fd8
                        */
      return *(long *)(this + 0x28) + (long)iVar1 * 0x44;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00553fe8 with catch @ 00553ff4
                        */
    return 0;
  }
                    /* try { // try from 00553fe8 to 00653ff3 has its CatchHandler @ 00553ff4 */
  return 0;
}


