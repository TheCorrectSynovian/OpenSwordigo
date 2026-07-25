/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335E7C
 * Mangled: _ZN5Caver5Proto18MagicBombComponentD0Ev
 * Demangled: Caver::Proto::MagicBombComponent::~MagicBombComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000335F04  Caver::Proto::MagicBombComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000335E88 string=0x0000000000335E8C ""
 *   insn=0x0000000000335E90 string=0x0000000000335E94 "A"
 *   insn=0x0000000000335E94 string=0x0000000000335E98 "h"
 *   insn=0x0000000000335E9C string=0x0000000000335EA0 ""
 *   insn=0x0000000000335EA0 string=0x0000000000335EA4 ""
 *   insn=0x0000000000335EAC string=0x0000000000335EB0 "`\n@"
 *   insn=0x0000000000335EB4 string=0x0000000000335EB8 ""
 *   insn=0x0000000000335EB8 string=0x0000000000335EBC ""
 *   insn=0x0000000000335EC8 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000335ED8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000335EFC string=0x0000000000335F00 "q.\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicBombComponent::~MagicBombComponent(Caver::Proto::MagicBombComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C99F0;
  if ( (Caver::Proto::MagicBombComponent *)Caver::Proto::MagicBombComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

