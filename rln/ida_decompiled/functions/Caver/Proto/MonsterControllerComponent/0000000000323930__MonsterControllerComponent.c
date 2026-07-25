/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323930
 * Mangled: _ZN5Caver5Proto26MonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::MonsterControllerComponent::MonsterControllerComponent(Caver::Proto::MonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5300  Caver::Proto::MonsterControllerComponent::MergeFrom(Caver::Proto::MonsterControllerComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000323938 string=0x000000000032393C ""
 *   insn=0x000000000032393C string=0x0000000000323940 ""
 *   insn=0x0000000000323948 string=0x000000000032394C "A"
 *   insn=0x000000000032394C string=0x0000000000323950 "h~"
 *   insn=0x0000000000323950 string=0x0000000000323954 "kF"
 *   insn=0x0000000000323954 string=0x00000000001F5300 "P'"
 *   insn=0x0000000000323968 string=0x000000000032396C "%O"
 *   insn=0x000000000032396C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000323974 string=0x0000000000323978 "u"
 *   insn=0x000000000032398C string=0x0000000000323990 "U"
 *   insn=0x00000000003239A8 string=0x00000000003239AC "B"
 *   insn=0x00000000003239A8 string=0x00000000003239E8 "hr@9("
 *   insn=0x00000000003239AC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003239C0 string=0x00000000003239C4 "!"
 *   insn=0x00000000003239C0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003239C4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003239D0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003239DC string=0x00000000001FA500 "0'"
 *   insn=0x00000000003239E4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003239E8 string=0x00000000003239EC "("
 *   insn=0x00000000003239EC string=0x00000000003239F0 "("
 *   insn=0x0000000000323A00 string=0x0000000000323A04 "i"
 *   insn=0x0000000000323A04 string=0x0000000000323A08 ""
 *   insn=0x0000000000323A34 string=0x0000000000323A38 "i"
 *   insn=0x0000000000323A38 string=0x0000000000323A3C ""
 *   insn=0x0000000000323A44 string=0x0000000000323A48 "h"
 *   insn=0x0000000000323A48 string=0x0000000000323A4C "h"
 *   insn=0x0000000000323A50 string=0x0000000000323A54 "i"
 *   insn=0x0000000000323A54 string=0x0000000000323A58 ""
 *   insn=0x0000000000323A60 string=0x0000000000323A64 "h"
 *   insn=0x0000000000323A6C string=0x0000000000323A70 "i"
 *   insn=0x0000000000323A70 string=0x0000000000323A74 ""
 *   insn=0x0000000000323A7C string=0x0000000000323A80 "h"
 *   insn=0x0000000000323A8C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000323AA0 string=0x0000000000323AA4 "*"
 *   insn=0x0000000000323AA4 string=0x0000000000323AA8 ""
 *   insn=0x0000000000323AA8 string=0x0000000000323AAC ""
 *   insn=0x0000000000323AAC string=0x0000000000323AB0 "A"
 *   insn=0x0000000000323AB0 string=0x0000000000323AB4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MonsterControllerComponent::MonsterControllerComponent(
        Caver::Proto::MonsterControllerComponent *this,
        const Caver::Proto::MonsterControllerComponent *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C8AF0;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::MonsterControllerComponent::MergeFrom();
}

