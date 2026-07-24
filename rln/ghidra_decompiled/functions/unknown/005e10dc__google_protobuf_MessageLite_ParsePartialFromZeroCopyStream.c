/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e10dc
 * Function: google::protobuf::MessageLite::ParsePartialFromZeroCopyStream
 * Signature: undefined __thiscall ParsePartialFromZeroCopyStream(MessageLite * this, ZeroCopyInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* google::protobuf::MessageLite::ParsePartialFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream*)
    */

byte __thiscall
google::protobuf::MessageLite::ParsePartialFromZeroCopyStream
          (MessageLite *this,ZeroCopyInputStream *param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  ZeroCopyInputStream *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined4 uStack_68;
  char cStack_64;
  undefined1 uStack_63;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_6a = 0;
  uStack_68 = 0;
  cStack_64 = '\0';
  uStack_63 = 0;
  uStack_58 = _LAB_00698cc8;
  local_60 = _DAT_00698cc0;
  local_50 = 0x4000000000;
  uStack_48 = 0;
  local_40 = 0;
  local_88 = param_1;
  io::CodedInputStream::Refresh((CodedInputStream *)&local_88);
  (**(code **)(*(long *)this + 0x20))(this);
  bVar3 = (**(code **)(*(long *)this + 0x40))(this,&local_88);
  bVar2 = cStack_64 != '\0';
  if (local_88 != (ZeroCopyInputStream *)0x0) {
    io::CodedInputStream::BackUpInputToCurrentPosition((CodedInputStream *)&local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar3 & bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


