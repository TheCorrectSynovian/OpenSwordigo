/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323AC0
 * Mangled: _ZN5Caver5Proto26MonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::MonsterControllerComponent::~MonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000323B08  Caver::Proto::MonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000323AC8 string=0x0000000000323ACC ""
 *   insn=0x0000000000323ACC string=0x0000000000323AD0 ""
 *   insn=0x0000000000323AD4 string=0x0000000000323AD8 "A"
 *   insn=0x0000000000323AD8 string=0x0000000000323ADC "h"
 *   insn=0x0000000000323AE0 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000323AF0 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000323B00 string=0x0000000000323B04 "pw\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MonsterControllerComponent::~MonsterControllerComponent(
        Caver::Proto::MonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C8AF0;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

