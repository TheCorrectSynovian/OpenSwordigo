/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003782f8
 * Function: Caver::ItemDropComponent::RandomSingleItem
 * Signature: undefined __thiscall RandomSingleItem(ItemDropComponent * this, int param_1, ItemDropEntry * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::RandomSingleItem(int, Caver::ItemDropComponent::ItemDropEntry*) */

long __thiscall
Caver::ItemDropComponent::RandomSingleItem
          (ItemDropComponent *this,int param_1,ItemDropEntry *param_2)

{
  int iVar1;
  long lVar2;
  ItemDropEntry *pIVar3;
  float fVar4;
  
  iVar1 = fastrandom();
  if (0 < param_1) {
    lVar2 = 0;
    pIVar3 = param_2 + 0x10;
    fVar4 = 0.0;
    do {
      fVar4 = fVar4 + *(float *)pIVar3;
      if ((float)iVar1 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68 < fVar4 + DAT_00683488) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
      pIVar3 = pIVar3 + 0x20;
    } while (lVar2 < param_1);
  }
  return 0xffffffff;
}


