/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003241D8
 * Mangled: _ZN5Caver5Proto33WalkingMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000324220  Caver::Proto::WalkingMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000003241E0 string=0x00000000003241E4 ""
 *   insn=0x00000000003241E4 string=0x00000000003241E8 ""
 *   insn=0x00000000003241EC string=0x00000000003241F0 "A"
 *   insn=0x00000000003241F0 string=0x00000000003241F4 "h"
 *   insn=0x00000000003241F8 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000324204 string=0x0000000000324208 "*L"
 *   insn=0x0000000000324208 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000324210 string=0x0000000000324214 "'L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent(
        Caver::Proto::WalkingMonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C8B68;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

