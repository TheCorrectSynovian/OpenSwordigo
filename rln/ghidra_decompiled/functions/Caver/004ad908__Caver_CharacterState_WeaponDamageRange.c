/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad908
 * Function: Caver::CharacterState::WeaponDamageRange
 * Signature: undefined __thiscall WeaponDamageRange(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::WeaponDamageRange() */

undefined8 __thiscall Caver::CharacterState::WeaponDamageRange(CharacterState *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  long local_58;
  long *plStack_50;
  long local_48;
  
                    /* try { // try from 004ad914 to 005ad927 has its CatchHandler @ 004add28 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004ad938 to 005ad943 has its CatchHandler @ 004adcbc */
  HighestLevelItemOfType(&local_58,this,1);
  fVar4 = (float)(*(int *)(this + 0xb0) + -1) * 0.5 + 1.0;
  if (*(long *)(this + 0x68) != 0) {
    fVar3 = (float)TrinketDamageMultiplier(this,(shared_ptr *)(this + 0x68));
                    /* try { // try from 004ad96c to 005ad9a7 has its CatchHandler @ 004adc58 */
    fVar4 = fVar4 * fVar3;
  }
  iVar6 = *(int *)(local_58 + 0x30);
  iVar5 = *(int *)(local_58 + 0x34);
  if ((plStack_50 != (long *)0x0) &&
     (lVar2 = plStack_50[1], plStack_50[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plStack_50 + 0x10))(plStack_50);
    lVar2 = plStack_50[2];
    plStack_50[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plStack_50 + 0x18))(plStack_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 004ad9d0 to 005ad9e3 has its CatchHandler @ 004adc54 */
                    /* try { // try from 004ad9f4 to 005ad9ff has its CatchHandler @ 004adc1c */
    return CONCAT44((int)(fVar4 * (float)iVar5),(int)(fVar4 * (float)iVar6));
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


