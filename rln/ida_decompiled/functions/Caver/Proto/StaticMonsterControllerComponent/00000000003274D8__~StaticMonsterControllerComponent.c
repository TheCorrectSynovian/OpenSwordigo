/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003274D8
 * Mangled: _ZN5Caver5Proto32StaticMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::~StaticMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000032753C  Caver::Proto::StaticMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000003274E8 string=0x00000000003274EC "`\n@"
 *   insn=0x00000000003274EC string=0x00000000003274F0 "%D"
 *   insn=0x00000000003274F0 string=0x00000000003274F4 "i"
 *   insn=0x00000000003274F8 string=0x00000000003274FC "A"
 *   insn=0x00000000003274FC string=0x0000000000327500 "h"
 *   insn=0x0000000000327500 string=0x0000000000327504 "`"
 *   insn=0x0000000000327504 string=0x0000000000327508 "@"
 *   insn=0x000000000032750C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000327510 string=0x0000000000327514 ";@"
 *   insn=0x0000000000327514 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000327520 string=0x0000000000327524 "c?"
 *   insn=0x0000000000327524 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032752C string=0x0000000000327530 "`?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::StaticMonsterControllerComponent::~StaticMonsterControllerComponent(
        Caver::Proto::StaticMonsterControllerComponent *this)
{
  char *v2; // x0

  v2 = (char *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C8E38;
  if ( v2 != (char *)this + 32 && v2 )
    operator delete[](v2);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

