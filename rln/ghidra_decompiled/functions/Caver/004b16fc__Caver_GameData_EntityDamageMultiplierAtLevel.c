/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b16fc
 * Function: Caver::GameData::EntityDamageMultiplierAtLevel
 * Signature: undefined __thiscall EntityDamageMultiplierAtLevel(GameData * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::EntityDamageMultiplierAtLevel(int) */

undefined4 __thiscall Caver::GameData::EntityDamageMultiplierAtLevel(GameData *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* try { // try from 004b1704 to 005b170f has its CatchHandler @ 004b1320 */
  uVar1 = 0x40000000;
  if (param_1 < 0xc) {
    uVar1 = 0x3f800000;
  }
                    /* catch() { ... } // from try @ 004b16a4 with catch @ 004b170c */
  uVar2 = 0x40800000;
  if (param_1 < 0x12) {
    uVar2 = uVar1;
  }
  return uVar2;
}


