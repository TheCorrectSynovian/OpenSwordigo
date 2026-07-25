/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311938
 * Mangled: _ZN5Caver5Proto28AnimationControllerComponentD0Ev
 * Demangled: Caver::Proto::AnimationControllerComponent::~AnimationControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000311980  Caver::Proto::AnimationControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000311944 string=0x0000000000311948 "QD"
 *   insn=0x000000000031194C string=0x0000000000311950 "A"
 *   insn=0x0000000000311950 string=0x0000000000311954 "h"
 *   insn=0x0000000000311954 string=0x0000000000311958 "*"
 *   insn=0x0000000000311958 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000311964 string=0x0000000000311968 "R"
 *   insn=0x0000000000311968 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000311970 string=0x0000000000311974 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::AnimationControllerComponent::~AnimationControllerComponent(
        Caver::Proto::AnimationControllerComponent *this)
{
  *(_QWORD *)this = off_6C7E48;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

