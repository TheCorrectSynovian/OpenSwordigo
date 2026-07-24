/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bf8a4
 * Function: Caver::MapZone::MapZone
 * Signature: undefined __thiscall MapZone(MapZone * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapZone::MapZone() */

void __thiscall Caver::MapZone::MapZone(MapZone *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 004bf0f8 with catch @ 004bf8ac */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  puVar1 = puVar1 + 0x18;
  *(undefined **)(this + 8) = puVar1;
  *(undefined **)this = puVar1;
  *(undefined **)(this + 0x30) = puVar1;
  return;
}


