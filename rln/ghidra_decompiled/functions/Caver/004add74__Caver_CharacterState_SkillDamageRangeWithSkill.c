/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004add74
 * Function: Caver::CharacterState::SkillDamageRangeWithSkill
 * Signature: undefined __thiscall SkillDamageRangeWithSkill(CharacterState * this, shared_ptr * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::SkillDamageRangeWithSkill(boost::shared_ptr<Caver::Skill> const&,
   boost::shared_ptr<Caver::Item> const&) */

undefined8 __thiscall
Caver::CharacterState::SkillDamageRangeWithSkill
          (CharacterState *this,shared_ptr *param_1,shared_ptr *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)(*(int *)(this + 0xb4) + -1) * DAT_00684314 + 1.0;
  if (*(long *)param_2 != 0) {
    fVar1 = (float)TrinketDamageMultiplier(this,param_2);
    fVar2 = fVar2 * fVar1;
  }
  return CONCAT44((int)(fVar2 * (float)*(int *)(*(long *)param_1 + 0x20)),
                  (int)(fVar2 * (float)*(int *)(*(long *)param_1 + 0x1c)));
}


