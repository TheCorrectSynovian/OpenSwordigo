/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003de634
 * Function: Caver::Proto::MapZone::~MapZone
 * Signature: undefined __thiscall ~MapZone(MapZone * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::~MapZone() */

void __thiscall Caver::Proto::MapZone::~MapZone(MapZone *this)

{
  ~MapZone(this);
  operator_delete(this);
  return;
}


