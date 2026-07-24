/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00375ae4
 * Function: Caver::ItemDropComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ItemDropComponent * this, ItemDropComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::InitWithComponent(Caver::ItemDropComponent const*) */

void __thiscall
Caver::ItemDropComponent::InitWithComponent(ItemDropComponent *this,ItemDropComponent *param_1)

{
  long lVar1;
  int iVar2;
  FastVector<Caver::ItemDropComponent::ItemDropEntry> *this_00;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  FUN_0066a6a8(this + 0x78,param_1 + 0x78);
  FUN_0066a6a8(this + 0x80,param_1 + 0x80);
  this[0x70] = param_1[0x70];
  this[0x71] = param_1[0x71];
  if (0 < *(int *)(param_1 + 0x88)) {
    this_00 = (FastVector<Caver::ItemDropComponent::ItemDropEntry> *)(this + 0x88);
    iVar2 = *(int *)this_00;
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x90);
      if (*(int *)(this + 0x8c) <= iVar2) {
        iVar2 = *(int *)(this + 0x8c) * 2;
        if (iVar2 < 0xb) {
          iVar2 = 10;
        }
        FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(this_00,iVar2);
        iVar2 = *(int *)this_00;
      }
      lVar3 = lVar3 + lVar4;
      lVar1 = *(long *)(this + 0x90) + (long)iVar2 * 0x20;
      FUN_0066a6a8(lVar1,lVar3);
      FUN_0066a6a8(lVar1 + 8,lVar3 + 8);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x20;
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
      iVar2 = *(int *)(this + 0x88) + 1;
      *(int *)(this + 0x88) = iVar2;
    } while (lVar5 < *(int *)(param_1 + 0x88));
  }
  return;
}


