/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B92C
 * Mangled: _ZN5Caver5Proto19HeroEntityComponentD0Ev
 * Demangled: Caver::Proto::HeroEntityComponent::~HeroEntityComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000031B9B4  Caver::Proto::HeroEntityComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000031B934 string=0x000000000031B938 "h"
 *   insn=0x000000000031B938 string=0x000000000031B93C ""
 *   insn=0x000000000031B940 string=0x000000000031B944 "A"
 *   insn=0x000000000031B944 string=0x000000000031B948 "h"
 *   insn=0x000000000031B948 string=0x000000000031B94C "H"
 *   insn=0x000000000031B94C string=0x000000000031B950 ""
 *   insn=0x000000000031B950 string=0x000000000031B954 ""
 *   insn=0x000000000031B95C string=0x000000000031B960 "`\n@"
 *   insn=0x000000000031B964 string=0x000000000031B968 ""
 *   insn=0x000000000031B968 string=0x000000000031B96C ""
 *   insn=0x000000000031B974 string=0x000000000031B978 ""o"
 *   insn=0x000000000031B978 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031B984 string=0x000000000031B988 "Jn"
 *   insn=0x000000000031B988 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031B990 string=0x000000000031B994 "o"
 *   insn=0x000000000031B9A4 string=0x000000000031B9A8 "Bn"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::HeroEntityComponent::~HeroEntityComponent(Caver::Proto::HeroEntityComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C85C8;
  if ( (Caver::Proto::HeroEntityComponent *)Caver::Proto::HeroEntityComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

