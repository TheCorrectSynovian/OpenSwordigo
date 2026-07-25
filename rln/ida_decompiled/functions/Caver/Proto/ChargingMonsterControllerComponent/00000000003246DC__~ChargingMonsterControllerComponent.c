/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003246DC
 * Mangled: _ZN5Caver5Proto34ChargingMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000324724  Caver::Proto::ChargingMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000003246E4 string=0x00000000003246E8 ""
 *   insn=0x00000000003246E8 string=0x00000000003246EC ""
 *   insn=0x00000000003246F0 string=0x00000000003246F4 "A"
 *   insn=0x00000000003246F4 string=0x00000000003246F8 "h"
 *   insn=0x00000000003246FC string=0x00000000001F7600 "0'"
 *   insn=0x000000000032470C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032471C string=0x0000000000324720 "it\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent(
        Caver::Proto::ChargingMonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C8BE0;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

