/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326CD4
 * Mangled: _ZN5Caver5Proto32SkellyMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(Caver::Proto::SkellyMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA0A0  Caver::Proto::SkellyMonsterControllerComponent::MergeFrom(Caver::Proto::SkellyMonsterControllerComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x0000000000326CE0 string=0x0000000000326CE4 "=F"
 *   insn=0x0000000000326CEC string=0x0000000000326CF0 "A"
 *   insn=0x0000000000326CF0 string=0x0000000000326CF4 "h"
 *   insn=0x0000000000326CF8 string=0x00000000001FA0A0 "0'"
 *   insn=0x0000000000326D0C string=0x0000000000326D10 "<B"
 *   insn=0x0000000000326D10 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000326D30 string=0x0000000000326D34 "U"
 *   insn=0x0000000000326D4C string=0x0000000000326D50 """
 *   insn=0x0000000000326D4C string=0x0000000000326D8C "hR@9"
 *   insn=0x0000000000326D50 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000326D5C string=0x0000000000326D60 "c"
 *   insn=0x0000000000326D64 string=0x0000000000326D68 "!"
 *   insn=0x0000000000326D64 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000326D68 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000326D70 string=0x0000000000326D74 "'U"
 *   insn=0x0000000000326D74 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000326D80 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000326D88 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000326D98 string=0x0000000000326D9C "i"
 *   insn=0x0000000000326D9C string=0x0000000000326DA0 ""
 *   insn=0x0000000000326DA8 string=0x0000000000326DAC "h"
 *   insn=0x0000000000326DB4 string=0x0000000000326DB8 "i"
 *   insn=0x0000000000326DB8 string=0x0000000000326DBC ""
 *   insn=0x0000000000326DD0 string=0x0000000000326DE8 ":="
 *   insn=0x0000000000326DE8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000326DFC string=0x0000000000326E00 "S"
 *   insn=0x0000000000326E04 string=0x0000000000326E08 "=F"
 *   insn=0x0000000000326E08 string=0x0000000000326E0C "A"
 *   insn=0x0000000000326E0C string=0x0000000000326E10 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(
        Caver::Proto::SkellyMonsterControllerComponent *this,
        const Caver::Proto::SkellyMonsterControllerComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C8DC0;
  Caver::Proto::SkellyMonsterControllerComponent::MergeFrom();
}

