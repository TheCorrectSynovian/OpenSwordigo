/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004af720
 * Function: Caver::EntityClass::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(EntityClass * this, EntityClass * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityClass::SaveToProtobufMessage(Caver::Proto::EntityClass*) const */

void __thiscall Caver::EntityClass::SaveToProtobufMessage(EntityClass *this,EntityClass *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__default_name__007e5c18;
  plVar2 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar2;
  }
  FUN_0066a6a8(plVar2,this);
  puVar1 = PTR__default_title__007e56f8;
  plVar2 = *(long **)(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 2;
  if (plVar2 == (long *)puVar1) {
    plVar2 = operator_new(8);
    *plVar2 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x18) = plVar2;
  }
  FUN_0066a6a8(plVar2,this + 8);
  *(EntityClass *)(param_1 + 0x20) = this[0x10];
  *(EntityClass *)(param_1 + 0x21) = this[0x11];
  *(EntityClass *)(param_1 + 0x22) = this[0x12];
  *(EntityClass *)(param_1 + 0x23) = this[0x13];
  uVar3 = *(undefined8 *)(this + 0x14);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0xfc;
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  return;
}


