/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004addf0
 * Function: Caver::CharacterState::SkillDamageRange
 * Signature: undefined __thiscall SkillDamageRange(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::SkillDamageRange() */

undefined8 __thiscall Caver::CharacterState::SkillDamageRange(CharacterState *this)

{
  float fVar1;
  float fVar2;
  
                    /* try { // try from 004ade28 to 005adeff has its CatchHandler @ 004ade28
                       catch() { ... } // from try @ 004ade28 with catch @ 004ade28
                       catch() { ... } // from try @ 004ae21c with catch @ 004ade28 */
  fVar2 = (float)(*(int *)(this + 0xb4) + -1) * DAT_00684314 + 1.0;
  if (*(long *)(this + 0x88) != 0) {
    fVar1 = (float)TrinketDamageMultiplier(this,(shared_ptr *)(this + 0x88));
    fVar2 = fVar2 * fVar1;
  }
  return CONCAT44((int)(fVar2 * (float)*(int *)(*(long *)(this + 0x58) + 0x20)),
                  (int)(fVar2 * (float)*(int *)(*(long *)(this + 0x58) + 0x1c)));
}


