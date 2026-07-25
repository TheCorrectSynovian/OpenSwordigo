/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F008
 * Mangled: _ZN5Caver5Proto18TouchableComponentD0Ev
 * Demangled: Caver::Proto::TouchableComponent::~TouchableComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000032F090  Caver::Proto::TouchableComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000032F014 string=0x000000000032F018 ""
 *   insn=0x000000000032F01C string=0x000000000032F020 "A"
 *   insn=0x000000000032F020 string=0x000000000032F024 "h"
 *   insn=0x000000000032F028 string=0x000000000032F02C ""
 *   insn=0x000000000032F02C string=0x000000000032F030 ""
 *   insn=0x000000000032F038 string=0x000000000032F03C "`\n@"
 *   insn=0x000000000032F040 string=0x000000000032F044 ""
 *   insn=0x000000000032F044 string=0x000000000032F048 ""
 *   insn=0x000000000032F050 string=0x000000000032F054 "k!"
 *   insn=0x000000000032F054 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032F064 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032F06C string=0x000000000032F070 "d!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::TouchableComponent::~TouchableComponent(Caver::Proto::TouchableComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C94C8;
  if ( (Caver::Proto::TouchableComponent *)Caver::Proto::TouchableComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

