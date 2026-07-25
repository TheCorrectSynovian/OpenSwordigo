/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328F38
 * Mangled: _ZN5Caver5Proto31MonsterDeathControllerComponentD0Ev
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::~MonsterDeathControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000328F80  Caver::Proto::MonsterDeathControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000328F44 string=0x0000000000328F48 "QF"
 *   insn=0x0000000000328F4C string=0x0000000000328F50 "A"
 *   insn=0x0000000000328F50 string=0x0000000000328F54 "h"
 *   insn=0x0000000000328F58 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000328F68 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000328F78 string=0x0000000000328F7C "Rb\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MonsterDeathControllerComponent::~MonsterDeathControllerComponent(
        Caver::Proto::MonsterDeathControllerComponent *this)
{
  *(_QWORD *)this = off_6C9018;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

