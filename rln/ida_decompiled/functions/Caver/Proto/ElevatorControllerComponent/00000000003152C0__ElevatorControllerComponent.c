/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003152C0
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent(Caver::Proto::ElevatorControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002002A0  Caver::Proto::ElevatorControllerComponent::MergeFrom(Caver::Proto::ElevatorControllerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000003152D0 string=0x00000000003152D4 "h"
 *   insn=0x00000000003152D4 string=0x00000000003152D8 ")E"
 *   insn=0x00000000003152DC string=0x00000000003152E0 "`"
 *   insn=0x00000000003152E0 string=0x00000000003152E4 "A"
 *   insn=0x00000000003152E4 string=0x00000000003152E8 "h"
 *   insn=0x0000000000315304 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000315308 string=0x000000000031530C "n"
 *   insn=0x0000000000315324 string=0x0000000000315328 "U"
 *   insn=0x0000000000315340 string=0x0000000000315380 "hR@9"
 *   insn=0x0000000000315344 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000315354 string=0x0000000000315358 "&"
 *   insn=0x0000000000315358 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031535C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000315368 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000315370 string=0x0000000000315374 "c"
 *   insn=0x0000000000315374 string=0x00000000001FA500 "0'"
 *   insn=0x000000000031537C string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031538C string=0x0000000000315390 "i"
 *   insn=0x0000000000315390 string=0x0000000000315394 ""
 *   insn=0x000000000031539C string=0x00000000003153A0 "h"
 *   insn=0x00000000003153A8 string=0x00000000003153AC "i"
 *   insn=0x00000000003153AC string=0x00000000003153B0 ""
 *   insn=0x00000000003153DC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003153EC string=0x00000000003153F0 "5"
 *   insn=0x00000000003153F4 string=0x00000000003153F8 "h"
 *   insn=0x00000000003153F8 string=0x00000000003153FC ")E"
 *   insn=0x00000000003153FC string=0x0000000000315400 "A"
 *   insn=0x0000000000315400 string=0x0000000000315404 ""
 *   insn=0x0000000000315404 string=0x0000000000315408 "~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent(
        Caver::Proto::ElevatorControllerComponent *this,
        const Caver::Proto::ElevatorControllerComponent *a2)
{
  *(_OWORD *)((char *)this + 8) = xmmword_58B480;
  *(_QWORD *)this = off_6C80A0;
  Caver::Proto::ElevatorControllerComponent::MergeFrom();
}

