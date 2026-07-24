/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ab11c
 * Function: Caver::CharacterState::CharacterState
 * Signature: undefined __thiscall CharacterState(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharacterState::CharacterState() */

void __thiscall Caver::CharacterState::CharacterState(CharacterState *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CharacterState *pCVar4;
  
                    /* try { // try from 004ab11c to 005ab127 has its CatchHandler @ 004aafa0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ab0f4 with catch @ 004ab124
                        */
                    /* try { // try from 004ab128 to 005ab187 has its CatchHandler @ 004ab128
                       catch(type#1 @ 00000000) { ... } // from try @ 004ab128 with catch @ 004ab128
                       catch(type#1 @ 00000000) { ... } // from try @ 004ab194 with catch @ 004ab128
                       catch(type#1 @ 00000000) { ... } // from try @ 004ab234 with catch @ 004ab128
                        */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pCVar4 = this + 0x18;
  *(undefined8 *)pCVar4 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(CharacterState **)(this + 0x28) = pCVar4;
  *(CharacterState **)(this + 0x30) = pCVar4;
  *(undefined8 *)(this + 0x38) = 0;
  memset(this + 0x40,0,0x58);
  uVar3 = _UNK_00691b58;
  uVar2 = _DAT_00691b50;
  uVar1 = _DAT_00691b40;
  *(undefined8 *)(this + 0xb0) = _UNK_00691b48;
  *(undefined8 *)(this + 0xa8) = uVar1;
  *(undefined8 *)(this + 0xa0) = uVar3;
  *(undefined8 *)(this + 0x98) = uVar2;
  return;
}


