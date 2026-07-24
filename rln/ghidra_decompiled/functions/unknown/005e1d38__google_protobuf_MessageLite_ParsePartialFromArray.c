/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e1d38
 * Function: google::protobuf::MessageLite::ParsePartialFromArray
 * Signature: undefined __thiscall ParsePartialFromArray(MessageLite * this, void * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* google::protobuf::MessageLite::ParsePartialFromArray(void const*, int) */

byte __thiscall
google::protobuf::MessageLite::ParsePartialFromArray(MessageLite *this,void *param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  long local_88;
  void *pvStack_80;
  long local_78;
  int local_70;
  undefined8 local_6c;
  undefined2 local_64;
  int local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 005e1d40 to 006e1d4b has its CatchHandler @ 005e1e28 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (long)param_1 + (long)param_2;
  local_88 = 0;
                    /* try { // try from 005e1d70 to 006e1e23 has its CatchHandler @ 005e1eb4 */
  local_64 = 0;
  local_6c = 0;
  uStack_54 = _DAT_006987e8;
  local_5c = _DAT_006987e0;
  local_4c = 0x40;
  local_48 = 0;
  uStack_40 = 0;
  pvStack_80 = param_1;
  local_70 = param_2;
  local_60 = param_2;
  (**(code **)(*(long *)this + 0x20))();
  bVar3 = (**(code **)(*(long *)this + 0x40))(this,&local_88);
  bVar2 = (char)local_64 != '\0';
  if (local_88 != 0) {
    io::CodedInputStream::BackUpInputToCurrentPosition((CodedInputStream *)&local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar3 & bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


