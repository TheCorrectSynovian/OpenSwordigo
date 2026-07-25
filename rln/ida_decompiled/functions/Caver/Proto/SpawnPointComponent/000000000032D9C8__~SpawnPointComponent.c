/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D9C8
 * Mangled: _ZN5Caver5Proto19SpawnPointComponentD0Ev
 * Demangled: Caver::Proto::SpawnPointComponent::~SpawnPointComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000032DA50  Caver::Proto::SpawnPointComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000032D9D4 string=0x000000000032D9D8 "mG"
 *   insn=0x000000000032D9DC string=0x000000000032D9E0 "A"
 *   insn=0x000000000032D9E0 string=0x000000000032D9E4 "h"
 *   insn=0x000000000032D9E8 string=0x000000000032D9EC "%@"
 *   insn=0x000000000032D9EC string=0x000000000032D9F0 ""
 *   insn=0x000000000032D9F8 string=0x000000000032D9FC "`\n@"
 *   insn=0x000000000032DA00 string=0x000000000032DA04 ""
 *   insn=0x000000000032DA04 string=0x000000000032DA08 ""
 *   insn=0x000000000032DA14 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032DA20 string=0x000000000032DA24 "#&"
 *   insn=0x000000000032DA24 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032DA40 string=0x000000000032DA44 "&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpawnPointComponent::~SpawnPointComponent(Caver::Proto::SpawnPointComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C93D8;
  if ( (Caver::Proto::SpawnPointComponent *)Caver::Proto::SpawnPointComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

