/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033484C
 * Mangled: _ZN5Caver5Proto23MagicSpellCastComponentC2ERKS1_
 * Demangled: Caver::Proto::MagicSpellCastComponent::MagicSpellCastComponent(Caver::Proto::MagicSpellCastComponent const&)
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
 *   0x0000000000201550  Caver::Proto::MagicSpellCastComponent::MergeFrom(Caver::Proto::MagicSpellCastComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x0000000000334858 string=0x000000000033485C "YC"
 *   insn=0x0000000000334864 string=0x0000000000334868 "A"
 *   insn=0x0000000000334868 string=0x000000000033486C "h"
 *   insn=0x000000000033486C string=0x0000000000334870 "83"
 *   insn=0x0000000000334884 string=0x0000000000334888 "^"
 *   insn=0x0000000000334888 string=0x00000000001F7600 "0'"
 *   insn=0x000000000033488C string=0x0000000000334890 "4\t"
 *   insn=0x00000000003348A8 string=0x00000000003348AC "U"
 *   insn=0x00000000003348C4 string=0x0000000000334904 "hR@9"
 *   insn=0x00000000003348C8 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003348DC string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003348E0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003348E8 string=0x00000000003348EC "I"
 *   insn=0x00000000003348EC string=0x00000000001FC210 "0'"
 *   insn=0x00000000003348F8 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003348FC string=0x0000000000334900 "<"
 *   insn=0x0000000000334900 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000334910 string=0x0000000000334914 "i"
 *   insn=0x0000000000334914 string=0x0000000000334918 ""
 *   insn=0x0000000000334920 string=0x0000000000334924 "h"
 *   insn=0x000000000033492C string=0x0000000000334930 "i"
 *   insn=0x0000000000334930 string=0x0000000000334934 ""
 *   insn=0x0000000000334948 string=0x0000000000334960 "\"
 *   insn=0x0000000000334960 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000334968 string=0x000000000033496C "!"
 *   insn=0x0000000000334974 string=0x0000000000334978 "uf"
 *   insn=0x000000000033497C string=0x0000000000334980 "YC"
 *   insn=0x0000000000334980 string=0x0000000000334984 "A"
 *   insn=0x0000000000334984 string=0x0000000000334988 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicSpellCastComponent::MagicSpellCastComponent(
        Caver::Proto::MagicSpellCastComponent *this,
        const Caver::Proto::MagicSpellCastComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C9888;
  Caver::Proto::MagicSpellCastComponent::MergeFrom();
}

