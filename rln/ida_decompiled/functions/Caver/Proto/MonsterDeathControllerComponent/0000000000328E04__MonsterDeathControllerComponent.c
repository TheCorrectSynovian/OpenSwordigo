/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328E04
 * Mangled: _ZN5Caver5Proto31MonsterDeathControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent(Caver::Proto::MonsterDeathControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FA6D0  Caver::Proto::MonsterDeathControllerComponent::MergeFrom(Caver::Proto::MonsterDeathControllerComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x0000000000328E10 string=0x0000000000328E14 "QF"
 *   insn=0x0000000000328E1C string=0x0000000000328E20 "A"
 *   insn=0x0000000000328E20 string=0x0000000000328E24 "h~"
 *   insn=0x0000000000328E24 string=0x0000000000328E28 "*F"
 *   insn=0x0000000000328E28 string=0x00000000001FA6D0 "0'"
 *   insn=0x0000000000328E40 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000328E48 string=0x0000000000328E4C "@"
 *   insn=0x0000000000328E60 string=0x0000000000328E64 "U"
 *   insn=0x0000000000328E7C string=0x0000000000328E80 "hB@9"
 *   insn=0x0000000000328E88 string=0x0000000000328E8C "i"
 *   insn=0x0000000000328E8C string=0x0000000000328E90 ""
 *   insn=0x0000000000328EBC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000328ECC string=0x0000000000328ED0 "H5"
 *   insn=0x0000000000328ED0 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000328ED4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000328EE0 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000328EEC string=0x00000000001FA500 "0'"
 *   insn=0x0000000000328EF4 string=0x0000000000328EF8 "hB@9h"
 *   insn=0x0000000000328EF4 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000328EF8 string=0x0000000000328EFC "h"
 *   insn=0x0000000000328F04 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000328F14 string=0x0000000000328F18 "kb\t"
 *   insn=0x0000000000328F20 string=0x0000000000328F24 "QF"
 *   insn=0x0000000000328F24 string=0x0000000000328F28 "A"
 *   insn=0x0000000000328F28 string=0x0000000000328F2C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent(
        Caver::Proto::MonsterDeathControllerComponent *this,
        const Caver::Proto::MonsterDeathControllerComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C9018;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::MonsterDeathControllerComponent::MergeFrom();
}

