/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032813C
 * Mangled: _ZN5Caver5Proto29BatMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::BatMonsterControllerComponent::BatMonsterControllerComponent(Caver::Proto::BatMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4500  Caver::Proto::BatMonsterControllerComponent::MergeFrom(Caver::Proto::BatMonsterControllerComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x0000000000328148 string=0x000000000032814C "aB"
 *   insn=0x0000000000328154 string=0x0000000000328158 "A"
 *   insn=0x0000000000328158 string=0x000000000032815C "h"
 *   insn=0x0000000000328160 string=0x00000000001F4500 "P'"
 *   insn=0x0000000000328174 string=0x0000000000328178 ""="
 *   insn=0x0000000000328178 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000328180 string=0x0000000000328184 "r"
 *   insn=0x0000000000328198 string=0x000000000032819C "U"
 *   insn=0x00000000003281B4 string=0x00000000003281F4 "hR@9"
 *   insn=0x00000000003281B8 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003281CC string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003281D0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003281D8 string=0x00000000003281DC "P"
 *   insn=0x00000000003281DC string=0x00000000001FC210 "0'"
 *   insn=0x00000000003281E8 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003281F0 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000328200 string=0x0000000000328204 "i"
 *   insn=0x0000000000328204 string=0x0000000000328208 ""
 *   insn=0x0000000000328210 string=0x0000000000328214 "h"
 *   insn=0x000000000032821C string=0x0000000000328220 "i"
 *   insn=0x0000000000328220 string=0x0000000000328224 ""
 *   insn=0x0000000000328238 string=0x0000000000328250 " 8"
 *   insn=0x0000000000328250 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000328264 string=0x0000000000328268 "9"
 *   insn=0x000000000032826C string=0x0000000000328270 "aB"
 *   insn=0x0000000000328270 string=0x0000000000328274 "A"
 *   insn=0x0000000000328274 string=0x0000000000328278 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BatMonsterControllerComponent::BatMonsterControllerComponent(
        Caver::Proto::BatMonsterControllerComponent *this,
        const Caver::Proto::BatMonsterControllerComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C8F28;
  Caver::Proto::BatMonsterControllerComponent::MergeFrom();
}

