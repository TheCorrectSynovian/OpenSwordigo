/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bf8cc
 * Function: Caver::MapZone::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(MapZone * this, MapZone * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapZone::LoadFromProtobufMessage(Caver::Proto::MapZone const&) */

void __thiscall Caver::MapZone::LoadFromProtobufMessage(MapZone *this,MapZone *param_1)

{
  FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
  FUN_0066a6a8(this + 8,*(undefined8 *)(param_1 + 0x18));
  if (((byte)param_1[0x68] >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x58);
  }
                    /* try { // try from 004bf910 to 005bf983 has its CatchHandler @ 004bf910
                       catch(type#1 @ 00000000) { ... } // from try @ 004bf910 with catch @ 004bf910
                       catch(type#1 @ 00000000) { ... } // from try @ 004bfa4c with catch @ 004bf910
                       catch(type#1 @ 00000000) { ... } // from try @ 004bfaa4 with catch @ 004bf910
                        */
  FUN_0066a6a8(this + 0x30,*(undefined8 *)(param_1 + 0x60));
  return;
}


