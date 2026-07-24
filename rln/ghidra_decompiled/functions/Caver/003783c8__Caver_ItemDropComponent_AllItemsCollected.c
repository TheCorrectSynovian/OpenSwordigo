/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003783c8
 * Function: Caver::ItemDropComponent::AllItemsCollected
 * Signature: undefined __thiscall AllItemsCollected(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::AllItemsCollected() */

undefined8 __thiscall Caver::ItemDropComponent::AllItemsCollected(ItemDropComponent *this)

{
  GameState *this_00;
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = *(int *)(this + 0x88);
  if (0 < iVar3) {
    lVar5 = 0;
    lVar6 = 8;
    do {
      lVar4 = *(long *)(this + 0x90);
      if (*(long *)(*(long *)(lVar4 + lVar6) + -0x18) != 0) {
        this_00 = *(GameState **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10);
        if (this_00 == (GameState *)0x0) {
          return 0;
        }
        lVar1 = GameState::CurrentLevelState(this_00,true);
        uVar2 = StateProperties::HasFlag
                          ((StateProperties *)(lVar1 + 0x10),(string *)(lVar4 + lVar6));
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        iVar3 = *(int *)(this + 0x88);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar5 < iVar3);
  }
  return 1;
}


