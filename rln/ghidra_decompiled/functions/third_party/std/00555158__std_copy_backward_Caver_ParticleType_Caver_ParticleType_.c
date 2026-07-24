/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00555158
 * Function: std::copy_backward<Caver::ParticleType*,Caver::ParticleType*>
 * Signature: ParticleType * copy_backward<Caver::ParticleType*,Caver::ParticleType*>(ParticleType * param_1, ParticleType * param_2, ParticleType * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Caver::ParticleType* std::copy_backward<Caver::ParticleType*,
   Caver::ParticleType*>(Caver::ParticleType*, Caver::ParticleType*, Caver::ParticleType*) */

ParticleType *
std::copy_backward<Caver::ParticleType*,Caver::ParticleType*>
          (ParticleType *param_1,ParticleType *param_2,ParticleType *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 00555170 to 0065517b has its CatchHandler @ 00555a80 */
  if (0 < (long)param_2 - (long)param_1) {
                    /* try { // try from 0055519c to 0065519f has its CatchHandler @ 00555a78 */
    lVar5 = (ulong)((long)param_2 - (long)param_1) / 0x58 + 1;
    lVar4 = 0;
    do {
      lVar3 = *(long *)(param_2 + lVar4 + -0x58);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      }
      plVar2 = *(long **)(param_3 + lVar4 + -0x58);
      *(long *)(param_3 + lVar4 + -0x58) = lVar3;
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar6 = *(undefined8 *)(param_2 + lVar4 + -0x50);
      lVar5 = lVar5 + -1;
      lVar3 = lVar4 + -0x58;
      *(undefined8 *)(param_3 + lVar4 + -0x48) = *(undefined8 *)(param_2 + lVar4 + -0x48);
      *(undefined8 *)(param_3 + lVar4 + -0x50) = uVar6;
      *(undefined8 *)(param_3 + lVar4 + -0x40) = *(undefined8 *)(param_2 + lVar4 + -0x40);
      *(undefined8 *)(param_3 + lVar4 + -0x38) = *(undefined8 *)(param_2 + lVar4 + -0x38);
      *(undefined8 *)(param_3 + lVar4 + -0x30) = *(undefined8 *)(param_2 + lVar4 + -0x30);
      *(undefined8 *)(param_3 + lVar4 + -0x28) = *(undefined8 *)(param_2 + lVar4 + -0x28);
                    /* try { // try from 0055521c to 00655243 has its CatchHandler @ 0055556c */
      *(undefined8 *)(param_3 + lVar4 + -0x20) = *(undefined8 *)(param_2 + lVar4 + -0x20);
      *(undefined8 *)(param_3 + lVar4 + -0x18) = *(undefined8 *)(param_2 + lVar4 + -0x18);
      *(undefined8 *)(param_3 + lVar4 + -0x10) = *(undefined8 *)(param_2 + lVar4 + -0x10);
      *(undefined8 *)(param_3 + lVar4 + -8) = *(undefined8 *)(param_2 + lVar4 + -8);
      lVar4 = lVar3;
    } while (1 < lVar5);
    param_3 = param_3 + lVar3;
  }
                    /* try { // try from 00555244 to 00655423 has its CatchHandler @ 00554488 */
  return param_3;
}


