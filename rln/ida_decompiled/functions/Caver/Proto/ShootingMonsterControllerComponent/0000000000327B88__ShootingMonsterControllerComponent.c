/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327B88
 * Mangled: _ZN5Caver5Proto34ShootingMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(Caver::Proto::ShootingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F46F0  Caver::Proto::ShootingMonsterControllerComponent::MergeFrom(Caver::Proto::ShootingMonsterControllerComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x0000000000327B94 string=0x0000000000327B98 ""
 *   insn=0x0000000000327BA0 string=0x0000000000327BA4 "A"
 *   insn=0x0000000000327BA4 string=0x0000000000327BA8 "h"
 *   insn=0x0000000000327BAC string=0x00000000001F46F0 "P'"
 *   insn=0x0000000000327BC4 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000327BC8 string=0x0000000000327BCC ">g\t"
 *   insn=0x0000000000327BE4 string=0x0000000000327BE8 "U"
 *   insn=0x0000000000327C00 string=0x0000000000327C04 """
 *   insn=0x0000000000327C00 string=0x0000000000327C40 "hR@9"
 *   insn=0x0000000000327C04 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000327C18 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000327C1C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000327C24 string=0x0000000000327C28 "zQ"
 *   insn=0x0000000000327C28 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000327C30 string=0x0000000000327C34 "3J"
 *   insn=0x0000000000327C34 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000327C38 string=0x0000000000327C3C "mI"
 *   insn=0x0000000000327C3C string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000327C4C string=0x0000000000327C50 "i"
 *   insn=0x0000000000327C50 string=0x0000000000327C54 ""
 *   insn=0x0000000000327C5C string=0x0000000000327C60 "h"
 *   insn=0x0000000000327C68 string=0x0000000000327C6C "i"
 *   insn=0x0000000000327C6C string=0x0000000000327C70 ""
 *   insn=0x0000000000327C9C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000327CA4 string=0x0000000000327CA8 "RI"
 *   insn=0x0000000000327CB8 string=0x0000000000327CBC ""
 *   insn=0x0000000000327CBC string=0x0000000000327CC0 "A"
 *   insn=0x0000000000327CC0 string=0x0000000000327CC4 ""
 *   insn=0x0000000000327CC4 string=0x0000000000327CC8 "N>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(
        Caver::Proto::ShootingMonsterControllerComponent *this,
        const Caver::Proto::ShootingMonsterControllerComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C8EB0;
  Caver::Proto::ShootingMonsterControllerComponent::MergeFrom();
}

