/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c186c
 * Function: Caver::PlayerProfile::UpdateLastPlayedTime
 * Signature: undefined __thiscall UpdateLastPlayedTime(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::UpdateLastPlayedTime() */

void __thiscall Caver::PlayerProfile::UpdateLastPlayedTime(PlayerProfile *this)

{
  undefined8 uVar1;
  
  uVar1 = DateTime::Now();
  *(undefined8 *)(this + 0x28) = uVar1;
  return;
}


