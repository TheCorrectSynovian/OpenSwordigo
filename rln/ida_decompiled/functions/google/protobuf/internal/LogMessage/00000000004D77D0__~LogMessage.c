/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D77D0
 * Mangled: _ZN6google8protobuf8internal10LogMessageD2Ev
 * Demangled: google::protobuf::internal::LogMessage::~LogMessage()
 *
 * Callers: 1
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 19
 *   insn=0x00000000004D77DC string=0x00000000004D77E0 "S"
 *   insn=0x00000000004D77E0 string=0x00000000004D77E4 "h"
 *   insn=0x00000000004D77E4 string=0x00000000004D77E8 "i"
 *   insn=0x00000000004D77EC string=0x00000000004D77F0 ""
 *   insn=0x00000000004D77F0 string=0x00000000004D77F4 ")"
 *   insn=0x00000000004D77FC string=0x00000000004D7800 "!"
 *   insn=0x00000000004D7800 string=0x00000000004D7804 "h"
 *   insn=0x00000000004D7800 string=0x00000000004D7824 "i"
 *   insn=0x00000000004D7824 string=0x00000000004D7828 ")=G"
 *   insn=0x00000000004D7828 string=0x00000000004D782C "!"
 *   insn=0x00000000004D7830 string=0x00000000004D7834 "\t"
 *   insn=0x00000000004D7830 string=0x00000000004D7848 "\t"
 *   insn=0x00000000004D7834 string=0x00000000004D7838 "*"
 *   insn=0x00000000004D7838 string=0x00000000004D783C "\n"
 *   insn=0x00000000004D7844 string=0x00000000004D7854 "?"
 *   insn=0x00000000004D7848 string=0x00000000004D784C "*"
 *   insn=0x00000000004D784C string=0x00000000004D7850 "\n"
 *   insn=0x00000000004D7854 string=0x00000000004D7858 "l"
 *   insn=0x00000000004D7868 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::LogMessage::~LogMessage(google::protobuf::internal::LogMessage *this)
{
  __int64 v1; // x8
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9

  _ReadStatusReg(TPIDR_EL0);
  v1 = *((_QWORD *)this + 3);
  v2 = (void *)(v1 - 24);
  if ( (__int64 *)(v1 - 24) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v1 - 8);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete(v2);
  }
}

