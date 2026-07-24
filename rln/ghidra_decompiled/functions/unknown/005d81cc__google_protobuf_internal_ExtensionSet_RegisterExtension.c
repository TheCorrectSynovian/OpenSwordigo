/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d81cc
 * Function: google::protobuf::internal::ExtensionSet::RegisterExtension
 * Signature: undefined __cdecl RegisterExtension(MessageLite * param_1, int param_2, uchar param_3, bool param_4, bool param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::RegisterExtension(google::protobuf::MessageLite const*,
   int, unsigned char, bool, bool) */

void google::protobuf::internal::ExtensionSet::RegisterExtension
               (MessageLite *param_1,int param_2,uchar param_3,bool param_4,bool param_5)

{
  long lVar1;
  LogMessage *pLVar2;
  uchar local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined8 local_c8;
  LogFinisher aLStack_c0 [8];
  LogMessage aLStack_b8 [32];
  LogFinisher aLStack_98 [8];
  LogMessage aLStack_90 [32];
  LogFinisher aLStack_70 [8];
  LogMessage aLStack_68 [32];
  long local_48;
  
                    /* try { // try from 005d81cc to 006d81f3 has its CatchHandler @ 005d83e4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 == '\n') {
    LogMessage::LogMessage(aLStack_b8,3,&DAT_00698a0c,0x75);
    pLVar2 = (LogMessage *)
             LogMessage::operator<<
                       (aLStack_b8,"CHECK failed: (type) != (WireFormatLite::TYPE_GROUP): ");
    LogFinisher::operator=(aLStack_c0,pLVar2);
    pLVar2 = aLStack_b8;
  }
  else if (param_3 == '\v') {
                    /* try { // try from 005d8268 to 006d828f has its CatchHandler @ 005d844c */
    LogMessage::LogMessage(aLStack_90,3,&DAT_00698a0c,0x74);
    pLVar2 = (LogMessage *)
             LogMessage::operator<<
                       (aLStack_90,"CHECK failed: (type) != (WireFormatLite::TYPE_MESSAGE): ");
    LogFinisher::operator=(aLStack_98,pLVar2);
                    /* try { // try from 005d8290 to 006d8337 has its CatchHandler @ 005d8028 */
    pLVar2 = aLStack_90;
  }
  else {
    if (param_3 != '\x0e') goto LAB_005d82d4;
                    /* try { // try from 005d8220 to 006d8247 has its CatchHandler @ 005d8448 */
    LogMessage::LogMessage(aLStack_68,3,&DAT_00698a0c,0x73);
    pLVar2 = (LogMessage *)
             LogMessage::operator<<
                       (aLStack_68,"CHECK failed: (type) != (WireFormatLite::TYPE_ENUM): ");
    LogFinisher::operator=(aLStack_70,pLVar2);
    pLVar2 = aLStack_68;
  }
  LogMessage::~LogMessage(pLVar2);
LAB_005d82d4:
  local_c8 = 0;
  local_e0 = param_3;
  local_df = param_4;
  local_de = param_5;
  FUN_005d8360(param_1,param_2,&local_e0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


