/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326868
 * Mangled: _ZN5Caver5Proto33LeapingMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003268B0  Caver::Proto::LeapingMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000326874 string=0x0000000000326878 ""
 *   insn=0x000000000032687C string=0x0000000000326880 "A"
 *   insn=0x0000000000326880 string=0x0000000000326884 "h"
 *   insn=0x0000000000326884 string=0x0000000000326888 "^C"
 *   insn=0x0000000000326888 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000326898 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent(
        Caver::Proto::LeapingMonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C8D48;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

