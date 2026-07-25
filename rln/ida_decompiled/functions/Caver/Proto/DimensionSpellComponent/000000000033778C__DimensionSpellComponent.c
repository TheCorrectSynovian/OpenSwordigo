/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033778C
 * Mangled: _ZN5Caver5Proto23DimensionSpellComponentC2ERKS1_
 * Demangled: Caver::Proto::DimensionSpellComponent::DimensionSpellComponent(Caver::Proto::DimensionSpellComponent const&)
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
 *   0x0000000000201EF0  Caver::Proto::DimensionSpellComponent::MergeFrom(Caver::Proto::DimensionSpellComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x0000000000337794 string=0x0000000000337798 "h"
 *   insn=0x0000000000337798 string=0x000000000033779C "uB"
 *   insn=0x00000000003377A0 string=0x00000000003377A4 "A"
 *   insn=0x00000000003377A4 string=0x00000000003377A8 "h~"
 *   insn=0x00000000003377C4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003377C8 string=0x00000000003377CC ">(\t"
 *   insn=0x00000000003377E0 string=0x00000000003377E4 "S"
 *   insn=0x00000000003377E4 string=0x00000000003377E8 "h"
 *   insn=0x00000000003377E8 string=0x00000000003377EC "?"
 *   insn=0x00000000003377F4 string=0x0000000000337834 "h"
 *   insn=0x00000000003377F8 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000033780C string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000337810 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000337818 string=0x000000000033781C "}"
 *   insn=0x000000000033781C string=0x00000000001FC210 "0'"
 *   insn=0x0000000000337824 string=0x0000000000337828 "6"
 *   insn=0x0000000000337828 string=0x00000000001FA500 "0'"
 *   insn=0x000000000033782C string=0x0000000000337830 "p\n"
 *   insn=0x0000000000337830 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000337854 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033785C string=0x0000000000337860 "d\n"
 *   insn=0x000000000033786C string=0x0000000000337870 "h"
 *   insn=0x0000000000337870 string=0x0000000000337874 "uB"
 *   insn=0x0000000000337874 string=0x0000000000337878 "A"
 *   insn=0x0000000000337878 string=0x000000000033787C ""
 *   insn=0x000000000033787C string=0x0000000000337880 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DimensionSpellComponent::DimensionSpellComponent(
        Caver::Proto::DimensionSpellComponent *this,
        const Caver::Proto::DimensionSpellComponent *a2)
{
  *(_QWORD *)this = off_6C9BD0;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::DimensionSpellComponent::MergeFrom();
}

