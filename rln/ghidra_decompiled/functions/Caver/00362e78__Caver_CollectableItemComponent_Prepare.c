/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00362e78
 * Function: Caver::CollectableItemComponent::Prepare
 * Signature: undefined __thiscall Prepare(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::Prepare() */

void __thiscall Caver::CollectableItemComponent::Prepare(CollectableItemComponent *this)

{
  GameState *this_00;
  long lVar1;
  ulong uVar2;
  
  RegisterLibrary(this);
  if ((*(long *)(*(long *)(this + 0x80) + -0x18) != 0) &&
     (this_00 = *(GameState **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10),
     this_00 != (GameState *)0x0)) {
    lVar1 = GameState::CurrentLevelState(this_00,true);
    uVar2 = StateProperties::HasFlag((StateProperties *)(lVar1 + 0x10),(string *)(this + 0x80));
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(*(long *)(this + 0x28) + 0xf4) = 1;
    }
  }
  return;
}


