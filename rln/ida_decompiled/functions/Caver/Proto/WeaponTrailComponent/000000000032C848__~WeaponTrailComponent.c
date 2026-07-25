/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C848
 * Mangled: _ZN5Caver5Proto20WeaponTrailComponentD0Ev
 * Demangled: Caver::Proto::WeaponTrailComponent::~WeaponTrailComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000032C8D0  Caver::Proto::WeaponTrailComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000032C854 string=0x000000000032C858 ""
 *   insn=0x000000000032C85C string=0x000000000032C860 "A"
 *   insn=0x000000000032C860 string=0x000000000032C864 "h"
 *   insn=0x000000000032C868 string=0x000000000032C86C ""
 *   insn=0x000000000032C86C string=0x000000000032C870 ""
 *   insn=0x000000000032C878 string=0x000000000032C87C "`\n@"
 *   insn=0x000000000032C880 string=0x000000000032C884 ""
 *   insn=0x000000000032C884 string=0x000000000032C888 ""
 *   insn=0x000000000032C890 string=0x000000000032C894 "[+"
 *   insn=0x000000000032C894 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032C8A4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032C8AC string=0x000000000032C8B0 "T+"
 *   insn=0x000000000032C8C0 string=0x000000000032C8C4 "{*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WeaponTrailComponent::~WeaponTrailComponent(Caver::Proto::WeaponTrailComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C92E8;
  if ( (Caver::Proto::WeaponTrailComponent *)Caver::Proto::WeaponTrailComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

