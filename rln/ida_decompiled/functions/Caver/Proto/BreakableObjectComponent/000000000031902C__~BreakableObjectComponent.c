/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031902C
 * Mangled: _ZN5Caver5Proto24BreakableObjectComponentD0Ev
 * Demangled: Caver::Proto::BreakableObjectComponent::~BreakableObjectComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003190B4  Caver::Proto::BreakableObjectComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000319034 string=0x0000000000319038 "h"
 *   insn=0x0000000000319038 string=0x000000000031903C "1E"
 *   insn=0x0000000000319040 string=0x0000000000319044 "A"
 *   insn=0x0000000000319044 string=0x0000000000319048 "h"
 *   insn=0x0000000000319048 string=0x000000000031904C "h"
 *   insn=0x000000000031904C string=0x0000000000319050 ""
 *   insn=0x0000000000319050 string=0x0000000000319054 ""
 *   insn=0x000000000031905C string=0x0000000000319060 "`"
 *   insn=0x0000000000319064 string=0x0000000000319068 ""
 *   insn=0x0000000000319068 string=0x000000000031906C ""
 *   insn=0x0000000000319074 string=0x0000000000319078 "by"
 *   insn=0x0000000000319078 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000319088 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000319090 string=0x0000000000319094 "[y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BreakableObjectComponent::~BreakableObjectComponent(
        Caver::Proto::BreakableObjectComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C8370;
  if ( (Caver::Proto::BreakableObjectComponent *)Caver::Proto::BreakableObjectComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

