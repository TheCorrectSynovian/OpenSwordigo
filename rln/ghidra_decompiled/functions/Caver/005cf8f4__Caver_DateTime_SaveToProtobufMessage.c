/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf8f4
 * Function: Caver::DateTime::SaveToProtobufMessage
 * Signature: undefined SaveToProtobufMessage(DateTime * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Caver::DateTime::SaveToProtobufMessage(Caver::Proto::DateTime*) */

void Caver::DateTime::SaveToProtobufMessage(DateTime *param_1)

{
  long in_x1;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(uint *)(in_x1 + 0x18) = *(uint *)(in_x1 + 0x18) | 1;
  *(undefined8 *)(in_x1 + 0x10) = uVar1;
  return;
}


