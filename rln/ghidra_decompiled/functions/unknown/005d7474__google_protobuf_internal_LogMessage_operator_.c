/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7474
 * Function: google::protobuf::internal::LogMessage::operator<<
 * Signature: undefined __thiscall operator<<(LogMessage * this, char param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::LogMessage::TEMPNAMEPLACEHOLDERVALUE(char) */

LogMessage * __thiscall
google::protobuf::internal::LogMessage::operator<<(LogMessage *this,char param_1)

{
  long lVar1;
  size_t sVar2;
  char acStack_b8 [127];
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  snprintf(acStack_b8,0x80,"%c",(ulong)(uint)(int)param_1);
  local_39 = 0;
  sVar2 = strlen(acStack_b8);
  FUN_006677d4(this + 0x18,acStack_b8,sVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


