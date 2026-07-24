/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ea04c
 * Function: Caver::Proto::PlayerProfile::~PlayerProfile
 * Signature: undefined __thiscall ~PlayerProfile(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::~PlayerProfile() */

void __thiscall Caver::Proto::PlayerProfile::~PlayerProfile(PlayerProfile *this)

{
  ~PlayerProfile(this);
  operator_delete(this);
  return;
}


