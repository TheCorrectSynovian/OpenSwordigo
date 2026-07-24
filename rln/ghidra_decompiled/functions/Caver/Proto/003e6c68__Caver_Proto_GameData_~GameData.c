/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e6c68
 * Function: Caver::Proto::GameData::~GameData
 * Signature: undefined __thiscall ~GameData(GameData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::~GameData() */

void __thiscall Caver::Proto::GameData::~GameData(GameData *this)

{
  ~GameData(this);
  operator_delete(this);
  return;
}


