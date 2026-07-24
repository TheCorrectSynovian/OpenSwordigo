/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad294
 * Function: Caver::CharacterState::GetItemsOfType
 * Signature: undefined __thiscall GetItemsOfType(CharacterState * this, ItemType param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::GetItemsOfType(Caver::ItemType,
   std::vector<boost::shared_ptr<Caver::Item>, std::allocator<boost::shared_ptr<Caver::Item> > >*)
    */

void __thiscall
Caver::CharacterState::GetItemsOfType
          (CharacterState *this,int param_2,
          vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>
          *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  CharacterState *pCVar3;
  
                    /* catch() { ... } // from try @ 004ad270 with catch @ 004ad2a8 */
                    /* try { // try from 004ad2b8 to 005ad35b has its CatchHandler @ 004ad2b8
                       catch() { ... } // from try @ 004ad2b8 with catch @ 004ad2b8
                       catch() { ... } // from try @ 004ad3cc with catch @ 004ad2b8
                       catch() { ... } // from try @ 004ad5c8 with catch @ 004ad2b8 */
  for (pCVar3 = *(CharacterState **)(this + 0x28); this + 0x18 != pCVar3;
      pCVar3 = (CharacterState *)FUN_0064c6a0(pCVar3)) {
    if (**(int **)(pCVar3 + 0x28) == param_2) {
      puVar1 = *(undefined8 **)(param_3 + 8);
      if (puVar1 == *(undefined8 **)(param_3 + 0x10)) {
        std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>::
        _M_insert_aux(param_3);
      }
      else {
        *puVar1 = *(int **)(pCVar3 + 0x28);
        lVar2 = *(long *)(pCVar3 + 0x30);
        puVar1[1] = lVar2;
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
        }
        *(undefined8 **)(param_3 + 8) = puVar1 + 2;
      }
    }
  }
  return;
}


