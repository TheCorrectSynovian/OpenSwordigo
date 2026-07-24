/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00378278
 * Function: Caver::ItemDropComponent::RandomFromOdds
 * Signature: undefined __thiscall RandomFromOdds(ItemDropComponent * this, int param_1, float * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::RandomFromOdds(int, float*) */

long __thiscall
Caver::ItemDropComponent::RandomFromOdds(ItemDropComponent *this,int param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  iVar1 = fastrandom();
  if (0 < param_1) {
    lVar2 = 0;
    fVar3 = 0.0;
    do {
      fVar3 = fVar3 + param_2[lVar2];
      if ((float)iVar1 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68 < fVar3 + DAT_00683488) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_1);
  }
  return 0xffffffff;
}


