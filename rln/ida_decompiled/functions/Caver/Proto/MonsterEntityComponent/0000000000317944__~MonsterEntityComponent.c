/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317944
 * Mangled: _ZN5Caver5Proto22MonsterEntityComponentD0Ev
 * Demangled: Caver::Proto::MonsterEntityComponent::~MonsterEntityComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003179E0  Caver::Proto::MonsterEntityComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000031794C string=0x0000000000317950 "h"
 *   insn=0x0000000000317950 string=0x0000000000317954 ""
 *   insn=0x0000000000317958 string=0x000000000031795C "A"
 *   insn=0x000000000031795C string=0x0000000000317960 "h"
 *   insn=0x0000000000317960 string=0x0000000000317964 "h"
 *   insn=0x0000000000317964 string=0x0000000000317968 ""
 *   insn=0x0000000000317968 string=0x000000000031796C ""
 *   insn=0x0000000000317970 string=0x0000000000317974 "`"
 *   insn=0x0000000000317974 string=0x0000000000317978 "`\n@"
 *   insn=0x000000000031797C string=0x0000000000317980 ""
 *   insn=0x000000000031797C string=0x000000000031798C "`"
 *   insn=0x0000000000317980 string=0x0000000000317984 ""
 *   insn=0x0000000000317990 string=0x0000000000317994 ""
 *   insn=0x0000000000317994 string=0x0000000000317998 ""
 *   insn=0x00000000003179A4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003179B0 string=0x00000000003179B4 "?~"
 *   insn=0x00000000003179B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003179D0 string=0x00000000003179D4 "7~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MonsterEntityComponent::~MonsterEntityComponent(
        Caver::Proto::MonsterEntityComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)this = off_6C8280;
  if ( (Caver::Proto::MonsterEntityComponent *)Caver::Proto::MonsterEntityComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

