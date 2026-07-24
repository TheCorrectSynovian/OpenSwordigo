/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bacec
 * Function: Caver::Map::Map
 * Signature: undefined __thiscall Map(Map * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Map::Map() */

void __thiscall Caver::Map::Map(Map *this)

{
  Map *pMVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  pMVar1 = this + 0x20;
  *(undefined8 *)pMVar1 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Map **)(this + 0x30) = pMVar1;
  *(Map **)(this + 0x38) = pMVar1;
  *(undefined8 *)(this + 0x40) = 0;
  pMVar1 = this + 0x50;
  *(undefined8 *)pMVar1 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(Map **)(this + 0x60) = pMVar1;
  *(Map **)(this + 0x68) = pMVar1;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}


