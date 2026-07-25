/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315410
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponentD0Ev
 * Demangled: Caver::Proto::ElevatorControllerComponent::~ElevatorControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000315458  Caver::Proto::ElevatorControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000315418 string=0x000000000031541C "h"
 *   insn=0x000000000031541C string=0x0000000000315420 ")E"
 *   insn=0x0000000000315424 string=0x0000000000315428 "A"
 *   insn=0x0000000000315428 string=0x000000000031542C "h"
 *   insn=0x000000000031542C string=0x0000000000315430 "t"
 *   insn=0x0000000000315430 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000315440 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ElevatorControllerComponent::~ElevatorControllerComponent(
        Caver::Proto::ElevatorControllerComponent *this)
{
  *(_QWORD *)this = off_6C80A0;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

