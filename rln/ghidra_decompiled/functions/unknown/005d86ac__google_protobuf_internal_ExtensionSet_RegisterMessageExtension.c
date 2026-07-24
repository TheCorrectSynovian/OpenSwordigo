/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d86ac
 * Function: google::protobuf::internal::ExtensionSet::RegisterMessageExtension
 * Signature: undefined __cdecl RegisterMessageExtension(MessageLite * param_1, int param_2, uchar param_3, bool param_4, bool param_5, MessageLite * param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::RegisterMessageExtension(google::protobuf::MessageLite
   const*, int, unsigned char, bool, bool, google::protobuf::MessageLite const*) */

void google::protobuf::internal::ExtensionSet::RegisterMessageExtension
               (MessageLite *param_1,int param_2,uchar param_3,bool param_4,bool param_5,
               MessageLite *param_6)

{
  long lVar1;
  LogMessage *pLVar2;
  uchar local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  MessageLite *local_98;
  undefined8 local_88;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005d86e0 to 006d8723 has its CatchHandler @ 005d86e0
                       catch() { ... } // from try @ 005d86e0 with catch @ 005d86e0
                       catch() { ... } // from try @ 005d8778 with catch @ 005d86e0
                       catch() { ... } // from try @ 005d87c0 with catch @ 005d86e0 */
  if ((param_3 & 0xfe) != 10) {
    LogMessage::LogMessage(aLStack_78,3,&DAT_00698a0c,0x98);
    pLVar2 = (LogMessage *)
             LogMessage::operator<<
                       (aLStack_78,
                        "CHECK failed: type == WireFormatLite::TYPE_MESSAGE || type == WireFormatLite::TYPE_GROUP: "
                       );
                    /* try { // try from 005d8724 to 006d872f has its CatchHandler @ 005d87a0 */
    LogFinisher::operator=(aLStack_80,pLVar2);
    LogMessage::~LogMessage(aLStack_78);
  }
                    /* try { // try from 005d8744 to 006d8777 has its CatchHandler @ 005d87a4 */
  local_88 = 0;
  local_a0 = param_3;
  local_9f = param_4;
  local_9e = param_5;
  local_98 = param_6;
  FUN_005d8360(param_1,param_2,&local_a0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005d8778 to 006d87a7 has its CatchHandler @ 005d86e0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


