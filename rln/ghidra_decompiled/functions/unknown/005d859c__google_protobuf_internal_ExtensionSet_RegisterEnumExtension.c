/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d859c
 * Function: google::protobuf::internal::ExtensionSet::RegisterEnumExtension
 * Signature: undefined __cdecl RegisterEnumExtension(MessageLite * param_1, int param_2, uchar param_3, bool param_4, bool param_5, _func_bool_int * param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::RegisterEnumExtension(google::protobuf::MessageLite
   const*, int, unsigned char, bool, bool, bool (*)(int)) */

void google::protobuf::internal::ExtensionSet::RegisterEnumExtension
               (MessageLite *param_1,int param_2,uchar param_3,bool param_4,bool param_5,
               _func_bool_int *param_6)

{
  long lVar1;
  LogMessage *pLVar2;
  uchar local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  code *local_98;
  _func_bool_int *p_Stack_90;
  undefined8 local_88;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005d85c4 to 006d85eb has its CatchHandler @ 005d8670 */
  if (param_3 != '\x0e') {
                    /* try { // try from 005d85ec to 006d86df has its CatchHandler @ 005d8580 */
    LogMessage::LogMessage(aLStack_78,3,&DAT_00698a0c,0x8b);
    pLVar2 = (LogMessage *)
             LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (type) == (WireFormatLite::TYPE_ENUM): ");
    LogFinisher::operator=(aLStack_80,pLVar2);
    LogMessage::~LogMessage(aLStack_78);
  }
  local_98 = FUN_005d86a0;
  local_88 = 0;
  local_a0 = param_3;
  local_9f = param_4;
  local_9e = param_5;
  p_Stack_90 = param_6;
  FUN_005d8360(param_1,param_2,&local_a0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 005d85c4 with catch @ 005d8670 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


