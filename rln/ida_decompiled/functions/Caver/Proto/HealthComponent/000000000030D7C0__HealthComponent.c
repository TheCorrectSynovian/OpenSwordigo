/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030D7C0
 * Mangled: _ZN5Caver5Proto15HealthComponentC2ERKS1_
 * Demangled: Caver::Proto::HealthComponent::HealthComponent(Caver::Proto::HealthComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F8920  Caver::Proto::HealthComponent::MergeFrom(Caver::Proto::HealthComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x000000000030D7CC string=0x000000000030D7D0 ""
 *   insn=0x000000000030D7DC string=0x000000000030D7E0 "A"
 *   insn=0x000000000030D7E0 string=0x000000000030D7E4 "h~"
 *   insn=0x000000000030D7E8 string=0x000000000030D7EC "M"
 *   insn=0x000000000030D7EC string=0x00000000001F8920 "0'"
 *   insn=0x000000000030D804 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030D808 string=0x000000000030D80C "."
 *   insn=0x000000000030D824 string=0x000000000030D828 "V"
 *   insn=0x000000000030D840 string=0x000000000030D844 "h"
 *   insn=0x000000000030D844 string=0x000000000030D848 ""
 *   insn=0x000000000030D850 string=0x000000000030D854 "H"
 *   insn=0x000000000030D854 string=0x000000000030D858 "4"
 *   insn=0x000000000030D85C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000030D868 string=0x000000000030D86C "C"
 *   insn=0x000000000030D870 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030D874 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000030D87C string=0x000000000030D880 "d"
 *   insn=0x000000000030D880 string=0x00000000001FC210 "0'"
 *   insn=0x000000000030D88C string=0x00000000001FA500 "0'"
 *   insn=0x000000000030D890 string=0x000000000030D894 "W"
 *   insn=0x000000000030D894 string=0x000000000030D898 "h"
 *   insn=0x000000000030D894 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000030D89C string=0x000000000030D8A0 """
 *   insn=0x000000000030D8A4 string=0x000000000030D8A8 "i"
 *   insn=0x000000000030D8A8 string=0x000000000030D8AC ""
 *   insn=0x000000000030D8B4 string=0x000000000030D8B8 "h"@"
 *   insn=0x000000000030D8C0 string=0x000000000030D8C4 "i"
 *   insn=0x000000000030D8C4 string=0x000000000030D8C8 ""
 *   insn=0x000000000030D8D0 string=0x000000000030D8D4 "h"@"
 *   insn=0x000000000030D8E0 string=0x000000000030D8E4 ""
 *   insn=0x000000000030D8F0 string=0x000000000030D8F4 ";"
 *   insn=0x000000000030D8F4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030D8FC string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000030D904 string=0x000000000030D908 "h"
 *   insn=0x000000000030D908 string=0x000000000030D90C ")"
 *   insn=0x000000000030D914 string=0x000000000030D918 ")"
 *   insn=0x000000000030D918 string=0x000000000030D91C "("
 *   insn=0x000000000030D920 string=0x000000000030D924 "'"
 *   insn=0x000000000030D934 string=0x000000000030D94C "a"
 *   insn=0x000000000030D94C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030D954 string=0x000000000030D958 "V"
 *   insn=0x000000000030D958 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030D968 string=0x000000000030D96C "!"
 *   insn=0x000000000030D974 string=0x000000000030D978 "u"
 *   insn=0x000000000030D988 string=0x000000000030D98C ""
 *   insn=0x000000000030D990 string=0x000000000030D994 "A"
 *   insn=0x000000000030D994 string=0x000000000030D998 "h"
 *   insn=0x000000000030D99C string=0x000000000030D9A0 ""
 *   insn=0x000000000030D9A0 string=0x000000000030D9A4 ""
 *   insn=0x000000000030D9AC string=0x000000000030D9B0 "`"
 *   insn=0x000000000030D9B4 string=0x000000000030D9B8 ""
 *   insn=0x000000000030D9B8 string=0x000000000030D9BC ""
 *   insn=0x000000000030D9D8 string=0x000000000030D9DC "\t"
 *   insn=0x000000000030D9E4 string=0x000000000030D9E8 "Y"
 *   insn=0x000000000030D9EC string=0x000000000030D9F0 ""
 *   insn=0x000000000030D9F0 string=0x000000000030D9F4 ""
 *   insn=0x000000000030DA04 string=0x000000000030DA08 ""
 *   insn=0x000000000030DA0C string=0x000000000030DA10 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::HealthComponent::HealthComponent(
        Caver::Proto::HealthComponent *this,
        const Caver::Proto::HealthComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C7B78;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 8) = 0;
  Caver::Proto::HealthComponent::MergeFrom();
}

