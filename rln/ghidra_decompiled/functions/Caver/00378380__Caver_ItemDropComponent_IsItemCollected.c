/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00378380
 * Function: Caver::ItemDropComponent::IsItemCollected
 * Signature: undefined __thiscall IsItemCollected(ItemDropComponent * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::IsItemCollected(std::string const&) */

void __thiscall Caver::ItemDropComponent::IsItemCollected(ItemDropComponent *this,string *param_1)

{
  GameState *this_00;
  long lVar1;
  
  this_00 = *(GameState **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10);
  if (this_00 != (GameState *)0x0) {
    lVar1 = GameState::CurrentLevelState(this_00,true);
    StateProperties::HasFlag((StateProperties *)(lVar1 + 0x10),param_1);
    return;
  }
  return;
}


