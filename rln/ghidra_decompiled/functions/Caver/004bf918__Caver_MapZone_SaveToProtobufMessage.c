/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bf918
 * Function: Caver::MapZone::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(MapZone * this, MapZone * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapZone::SaveToProtobufMessage(Caver::Proto::MapZone*) const */

void __thiscall Caver::MapZone::SaveToProtobufMessage(MapZone *this,MapZone *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR__default_name__007e5428;
  plVar2 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar2;
  }
  FUN_0066a6a8(plVar2,this);
  puVar1 = PTR__default_title__007e7d78;
  plVar2 = *(long **)(param_1 + 0x18);
                    /* try { // try from 004bf984 to 005bfa4b has its CatchHandler @ 004bfa98 */
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x18) = plVar2;
  }
  FUN_0066a6a8(plVar2,this + 8);
  if (*(int *)(this + 0x28) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(this + 0x28);
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 8;
  }
  puVar1 = PTR__default_music__007e5568;
  if (*(long *)(*(long *)(this + 0x30) + -0x18) != 0) {
    plVar2 = *(long **)(param_1 + 0x60);
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x10;
    if (plVar2 == (long *)puVar1) {
      plVar2 = operator_new(8);
      *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x60) = plVar2;
    }
    FUN_0066a6a8(plVar2,this + 0x30);
  }
  return;
}


