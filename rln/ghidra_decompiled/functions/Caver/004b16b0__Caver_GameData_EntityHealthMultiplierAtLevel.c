/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b16b0
 * Function: Caver::GameData::EntityHealthMultiplierAtLevel
 * Signature: undefined __thiscall EntityHealthMultiplierAtLevel(GameData * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::EntityHealthMultiplierAtLevel(int) */

float __thiscall Caver::GameData::EntityHealthMultiplierAtLevel(GameData *this,int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = ((float)(param_1 + -1) * 0.5 + 1.0) * 7.5;
  if (param_1 < 4) {
    return fVar2 * 0.5;
  }
  fVar1 = fVar2 * 0.75;
  if (param_1 != 4) {
    fVar1 = fVar2;
  }
  return fVar1;
}


