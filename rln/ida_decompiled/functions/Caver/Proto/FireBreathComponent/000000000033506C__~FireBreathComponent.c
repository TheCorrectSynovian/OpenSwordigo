/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033506C
 * Mangled: _ZN5Caver5Proto19FireBreathComponentD0Ev
 * Demangled: Caver::Proto::FireBreathComponent::~FireBreathComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003350F4  Caver::Proto::FireBreathComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000335078 string=0x000000000033507C ""
 *   insn=0x0000000000335080 string=0x0000000000335084 "A"
 *   insn=0x0000000000335084 string=0x0000000000335088 "h"
 *   insn=0x000000000033508C string=0x0000000000335090 ""
 *   insn=0x0000000000335090 string=0x0000000000335094 ""
 *   insn=0x000000000033509C string=0x00000000003350A0 "`"
 *   insn=0x00000000003350A4 string=0x00000000003350A8 ""
 *   insn=0x00000000003350A8 string=0x00000000003350AC ""
 *   insn=0x00000000003350B4 string=0x00000000003350B8 "R\t"
 *   insn=0x00000000003350B8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003350C4 string=0x00000000003350C8 "z"
 *   insn=0x00000000003350C8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003350D0 string=0x00000000003350D4 "K\t"
 *   insn=0x00000000003350E4 string=0x00000000003350E8 "r"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::FireBreathComponent::~FireBreathComponent(Caver::Proto::FireBreathComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C9900;
  if ( (Caver::Proto::FireBreathComponent *)Caver::Proto::FireBreathComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

