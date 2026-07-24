/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e1808
 * Function: google::protobuf::MessageLite::ParsePartialFromString
 * Signature: undefined __thiscall ParsePartialFromString(MessageLite * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* google::protobuf::MessageLite::ParsePartialFromString(std::string const&) */

byte __thiscall
google::protobuf::MessageLite::ParsePartialFromString(MessageLite *this,string *param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  long local_88;
  long lStack_80;
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
  
                    /* try { // try from 005e180c to 006e1833 has its CatchHandler @ 005e1e60 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lStack_80 = *(long *)param_1;
                    /* try { // try from 005e1838 to 006e1843 has its CatchHandler @ 005e1e5c */
  local_88 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = (int)*(undefined8 *)(lStack_80 + -0x18);
  local_78 = lStack_80 + local_70;
  uStack_54 = _DAT_006987e8;
  local_5c = _DAT_006987e0;
  local_4c = 0x40;
  local_48 = 0;
  uStack_40 = 0;
  local_60 = local_70;
  (**(code **)(*(long *)this + 0x20))();
                    /* try { // try from 005e1884 to 006e18ab has its CatchHandler @ 005e1c58 */
  bVar3 = (**(code **)(*(long *)this + 0x40))(this,&local_88);
  bVar2 = (char)local_64 != '\0';
  if (local_88 != 0) {
    io::CodedInputStream::BackUpInputToCurrentPosition((CodedInputStream *)&local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005e18cc to 006e18f3 has its CatchHandler @ 005e1e5c */
    return bVar3 & bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


