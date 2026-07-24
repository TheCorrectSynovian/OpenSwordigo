/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363024
 * Function: Caver::CollectableItemComponent::IsCollected
 * Signature: undefined __thiscall IsCollected(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::IsCollected() const */

undefined8 __thiscall Caver::CollectableItemComponent::IsCollected(CollectableItemComponent *this)

{
  GameState *this_00;
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(*(long *)(this + 0x80) + -0x18) != 0) &&
     (this_00 = *(GameState **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10),
     this_00 != (GameState *)0x0)) {
    lVar1 = GameState::CurrentLevelState(this_00,true);
    uVar2 = StateProperties::HasFlag((StateProperties *)(lVar1 + 0x10),(string *)(this + 0x80));
    return uVar2;
  }
  return 0;
}


