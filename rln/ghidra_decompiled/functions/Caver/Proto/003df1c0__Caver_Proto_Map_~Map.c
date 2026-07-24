/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df1c0
 * Function: Caver::Proto::Map::~Map
 * Signature: undefined __thiscall ~Map(Map * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Map::~Map() */

void __thiscall Caver::Proto::Map::~Map(Map *this)

{
  ~Map(this);
  operator_delete(this);
  return;
}


