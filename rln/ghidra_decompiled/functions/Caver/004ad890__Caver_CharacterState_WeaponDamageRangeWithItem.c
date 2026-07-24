/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad890
 * Function: Caver::CharacterState::WeaponDamageRangeWithItem
 * Signature: undefined __thiscall WeaponDamageRangeWithItem(CharacterState * this, shared_ptr * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::WeaponDamageRangeWithItem(boost::shared_ptr<Caver::Item> const&,
   boost::shared_ptr<Caver::Item> const&) */

undefined8 __thiscall
Caver::CharacterState::WeaponDamageRangeWithItem
          (CharacterState *this,shared_ptr *param_1,shared_ptr *param_2)

{
  float fVar1;
  float fVar2;
  
                    /* try { // try from 004ad890 to 005ad893 has its CatchHandler @ 004ad8c0 */
                    /* try { // try from 004ad894 to 005ad8d7 has its CatchHandler @ 004ad7d8 */
                    /* catch() { ... } // from try @ 004ad890 with catch @ 004ad8c0 */
  fVar2 = (float)(*(int *)(this + 0xb0) + -1) * 0.5 + 1.0;
                    /* catch() { ... } // from try @ 004ad85c with catch @ 004ad8c4 */
  if (*(long *)param_2 != 0) {
    fVar1 = (float)TrinketDamageMultiplier(this,param_2);
    fVar2 = fVar2 * fVar1;
  }
                    /* try { // try from 004ad8e8 to 005ad913 has its CatchHandler @ 004ad8e8
                       catch() { ... } // from try @ 004ad8e8 with catch @ 004ad8e8
                       catch() { ... } // from try @ 004ada64 with catch @ 004ad8e8 */
  return CONCAT44((int)(fVar2 * (float)*(int *)(*(long *)param_1 + 0x34)),
                  (int)(fVar2 * (float)*(int *)(*(long *)param_1 + 0x30)));
}


