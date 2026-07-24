/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3930
 * Function: google::protobuf::io::CodedInputStream::Refresh
 * Signature: undefined __thiscall Refresh(CodedInputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::Refresh() */

void __thiscall google::protobuf::io::CodedInputStream::Refresh(CodedInputStream *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  LogMessage *pLVar6;
  ulong uVar7;
  long lVar8;
  LogFinisher aLStack_88 [8];
  LogMessage aLStack_80 [36];
  int local_5c;
  long local_58;
  LogFinisher aLStack_50 [8];
  LogMessage aLStack_48 [32];
  long local_28;
  
                    /* try { // try from 005e3934 to 006e399f has its CatchHandler @ 005e3474 */
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  if (((*(int *)(this + 0x2c) < 1) && (*(int *)(this + 0x1c) < 1)) &&
     (*(int *)(this + 0x18) != *(int *)(this + 0x28))) {
    if ((-1 < *(int *)(this + 0x34)) && (*(int *)(this + 0x34) <= *(int *)(this + 0x18))) {
                    /* try { // try from 005e39d4 to 006e39df has its CatchHandler @ 005e3d18 */
                    /* try { // try from 005e39e0 to 006e39f3 has its CatchHandler @ 005e3cbc */
      internal::LogMessage::LogMessage
                (aLStack_48,1,
                 "./../../../../Dependencies/protobuf/src/google/protobuf/io/coded_stream.cc",0x1de)
      ;
                    /* try { // try from 005e39f8 to 006e3a0b has its CatchHandler @ 005e3c84 */
      pLVar6 = (LogMessage *)
               internal::LogMessage::operator<<
                         (aLStack_48,
                          "Reading dangerously large protocol message.  If the message turns out to be larger than "
                         );
      pLVar6 = (LogMessage *)internal::LogMessage::operator<<(pLVar6,*(int *)(this + 0x30));
                    /* try { // try from 005e3a0c to 006e3b67 has its CatchHandler @ 005e3474 */
      pLVar6 = (LogMessage *)
               internal::LogMessage::operator<<
                         (pLVar6,
                          " bytes, parsing will be halted for security reasons.  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in google/protobuf/io/coded_stream.h."
                         );
      internal::LogFinisher::operator=(aLStack_50,pLVar6);
      internal::LogMessage::~LogMessage(aLStack_48);
      *(undefined4 *)(this + 0x34) = 0xffffffff;
    }
    uVar7 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_58,&local_5c);
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    else {
      *(long *)(this + 8) = local_58;
      *(long *)(this + 0x10) = local_58 + local_5c;
      if (local_5c < 0) {
        internal::LogMessage::LogMessage
                  (aLStack_80,3,
                   "./../../../../Dependencies/protobuf/src/google/protobuf/io/coded_stream.cc",
                   0x1ef);
        pLVar6 = (LogMessage *)
                 internal::LogMessage::operator<<(aLStack_80,"CHECK failed: (buffer_size) >= (0): ")
        ;
        internal::LogFinisher::operator=(aLStack_88,pLVar6);
        internal::LogMessage::~LogMessage(aLStack_80);
      }
      iVar1 = *(int *)(this + 0x18);
      iVar2 = iVar1 - (0x7fffffff - local_5c);
      if (iVar2 == 0 || iVar1 < 0x7fffffff - local_5c) {
        lVar8 = *(long *)(this + 0x10);
        local_5c = local_5c + iVar1;
      }
      else {
        *(int *)(this + 0x1c) = iVar2;
        lVar8 = *(long *)(this + 0x10) - (long)iVar2;
        local_5c = 0x7fffffff;
        *(long *)(this + 0x10) = lVar8;
      }
      iVar2 = *(int *)(this + 0x2c);
      *(int *)(this + 0x18) = local_5c;
      iVar1 = *(int *)(this + 0x30);
      if (*(int *)(this + 0x28) <= *(int *)(this + 0x30)) {
        iVar1 = *(int *)(this + 0x28);
      }
      iVar3 = local_5c - iVar1;
      *(long *)(this + 0x10) = lVar8 + iVar2;
      if (iVar3 == 0 || local_5c < iVar1) {
        *(undefined4 *)(this + 0x2c) = 0;
        uVar5 = 1;
      }
      else {
        *(int *)(this + 0x2c) = iVar3;
        *(long *)(this + 0x10) = (lVar8 + iVar2) - (long)iVar3;
        uVar5 = 1;
      }
    }
  }
  else {
    if ((*(int *)(this + 0x30) <= *(int *)(this + 0x18) - *(int *)(this + 0x2c)) &&
       (*(int *)(this + 0x30) != *(int *)(this + 0x28))) {
      PrintTotalBytesLimitError(this);
    }
                    /* try { // try from 005e39a0 to 006e39d3 has its CatchHandler @ 005e3d7c */
    uVar5 = 0;
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


