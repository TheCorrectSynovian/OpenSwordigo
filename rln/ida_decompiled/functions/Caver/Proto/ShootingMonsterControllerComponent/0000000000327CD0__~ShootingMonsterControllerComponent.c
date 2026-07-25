/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327CD0
 * Mangled: _ZN5Caver5Proto34ShootingMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000327D18  Caver::Proto::ShootingMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000327CDC string=0x0000000000327CE0 ""
 *   insn=0x0000000000327CE4 string=0x0000000000327CE8 "A"
 *   insn=0x0000000000327CE8 string=0x0000000000327CEC "h"
 *   insn=0x0000000000327CEC string=0x0000000000327CF0 "D>"
 *   insn=0x0000000000327CF0 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000327CFC string=0x0000000000327D00 "l="
 *   insn=0x0000000000327D00 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000327D08 string=0x0000000000327D0C "i="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent(
        Caver::Proto::ShootingMonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C8EB0;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

