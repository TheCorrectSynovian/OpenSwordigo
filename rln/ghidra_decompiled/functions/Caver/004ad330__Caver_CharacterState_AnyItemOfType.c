/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad330
 * Function: Caver::CharacterState::AnyItemOfType
 * Signature: undefined __cdecl AnyItemOfType(ItemType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::AnyItemOfType(Caver::ItemType) */

void Caver::CharacterState::AnyItemOfType(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x28);
  while( true ) {
    if (param_2 + 0x18 == lVar1) {
      *param_1 = 0;
      param_1[1] = 0;
                    /* try { // try from 004ad3a0 to 005ad3b3 has its CatchHandler @ 004ad4c8 */
      return;
    }
                    /* try { // try from 004ad35c to 005ad36f has its CatchHandler @ 004ad54c */
    if (**(int **)(lVar1 + 0x28) == param_3) break;
    lVar1 = FUN_0064c6a0();
                    /* try { // try from 004ad370 to 005ad387 has its CatchHandler @ 004ad4d8 */
  }
  *param_1 = *(int **)(lVar1 + 0x28);
  lVar1 = *(long *)(lVar1 + 0x30);
  param_1[1] = lVar1;
  if (lVar1 == 0) {
    return;
  }
  *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  return;
}


