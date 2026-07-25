/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332B68
 * Mangled: _ZN5Caver5Proto18MagicBoltComponentD0Ev
 * Demangled: Caver::Proto::MagicBoltComponent::~MagicBoltComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000332BF0  Caver::Proto::MagicBoltComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000332B74 string=0x0000000000332B78 "YF"
 *   insn=0x0000000000332B7C string=0x0000000000332B80 "A"
 *   insn=0x0000000000332B80 string=0x0000000000332B84 "h"
 *   insn=0x0000000000332B88 string=0x0000000000332B8C ""
 *   insn=0x0000000000332B8C string=0x0000000000332B90 ""
 *   insn=0x0000000000332B98 string=0x0000000000332B9C "`"
 *   insn=0x0000000000332BA0 string=0x0000000000332BA4 ""
 *   insn=0x0000000000332BA4 string=0x0000000000332BA8 ""
 *   insn=0x0000000000332BB4 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000332BC4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000332BE8 string=0x0000000000332BEC "6;\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicBoltComponent::~MagicBoltComponent(Caver::Proto::MagicBoltComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C9720;
  if ( (Caver::Proto::MagicBoltComponent *)Caver::Proto::MagicBoltComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

