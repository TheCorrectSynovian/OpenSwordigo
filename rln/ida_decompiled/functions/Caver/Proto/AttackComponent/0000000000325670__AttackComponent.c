/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000325670
 * Mangled: _ZN5Caver5Proto15AttackComponentC2ERKS1_
 * Demangled: Caver::Proto::AttackComponent::AttackComponent(Caver::Proto::AttackComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FB320  Caver::Proto::AttackComponent::MergeFrom(Caver::Proto::AttackComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 100
 *   insn=0x0000000000325678 string=0x000000000032567C ""
 *   insn=0x000000000032567C string=0x0000000000325680 "QC"
 *   insn=0x000000000032568C string=0x0000000000325690 "A"
 *   insn=0x000000000032569C string=0x00000000003256A0 "h"
 *   insn=0x00000000003256A8 string=0x00000000001FB320 "0'"
 *   insn=0x00000000003256C0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003256C8 string=0x00000000003256CC " "
 *   insn=0x00000000003256E0 string=0x00000000003256E4 "V"
 *   insn=0x00000000003256FC string=0x0000000000325700 """
 *   insn=0x00000000003256FC string=0x000000000032573C "hJ@"
 *   insn=0x0000000000325700 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000325710 string=0x0000000000325714 "7C"
 *   insn=0x0000000000325714 string=0x0000000000325718 "!"
 *   insn=0x0000000000325714 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000325718 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000325724 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032572C string=0x0000000000325730 "tS"
 *   insn=0x0000000000325730 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000325738 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000325744 string=0x0000000000325748 "H"
 *   insn=0x0000000000325748 string=0x000000000032574C ""
 *   insn=0x0000000000325754 string=0x0000000000325758 "H 7"
 *   insn=0x0000000000325768 string=0x000000000032576C "i2@"
 *   insn=0x000000000032576C string=0x0000000000325770 ""
 *   insn=0x0000000000325778 string=0x000000000032577C "hJ@"
 *   insn=0x0000000000325780 string=0x0000000000325784 "@"
 *   insn=0x0000000000325784 string=0x0000000000325788 "H\n@7H7"
 *   insn=0x0000000000325788 string=0x000000000032578C "H7"
 *   insn=0x000000000032579C string=0x00000000003257A0 "iF@"
 *   insn=0x00000000003257A0 string=0x00000000003257A4 ""
 *   insn=0x00000000003257B4 string=0x00000000003257B8 "a"
 *   insn=0x00000000003257B8 string=0x0000000000325944 "cB"
 *   insn=0x00000000003257D0 string=0x00000000003257D4 "i"
 *   insn=0x00000000003257D4 string=0x00000000003257D8 ""
 *   insn=0x00000000003257E0 string=0x00000000003257E4 "hJ@"
 *   insn=0x00000000003257E4 string=0x00000000003257E8 "H"
 *   insn=0x00000000003257EC string=0x00000000003257F0 "i"
 *   insn=0x00000000003257F0 string=0x00000000003257F4 ""
 *   insn=0x00000000003257FC string=0x0000000000325800 "hJ@"
 *   insn=0x0000000000325808 string=0x000000000032580C "i"
 *   insn=0x000000000032580C string=0x0000000000325810 ""
 *   insn=0x0000000000325818 string=0x000000000032581C "hJ@"
 *   insn=0x0000000000325824 string=0x0000000000325828 "i"
 *   insn=0x0000000000325828 string=0x000000000032582C ""
 *   insn=0x0000000000325834 string=0x0000000000325838 "hJ@"
 *   insn=0x0000000000325838 string=0x000000000032583C ""
 *   insn=0x0000000000325844 string=0x0000000000325848 ""
 *   insn=0x0000000000325850 string=0x0000000000325868 "\t"
 *   insn=0x0000000000325854 string=0x0000000000325858 "b?"
 *   insn=0x0000000000325858 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000325860 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000325868 string=0x000000000032586C "h"
 *   insn=0x000000000032586C string=0x0000000000325870 ")iE"
 *   insn=0x0000000000325878 string=0x000000000032587C ")"
 *   insn=0x000000000032587C string=0x0000000000325880 "("
 *   insn=0x0000000000325888 string=0x000000000032588C "hJ@"
 *   insn=0x0000000000325888 string=0x00000000001F37A0 "P'"
 *   insn=0x0000000000325894 string=0x0000000000325898 "i*@"
 *   insn=0x0000000000325898 string=0x000000000032589C ""
 *   insn=0x00000000003258A4 string=0x00000000003258A8 "hJ@"
 *   insn=0x00000000003258B0 string=0x00000000003258B4 "i.@"
 *   insn=0x00000000003258B4 string=0x00000000003258B8 ""
 *   insn=0x00000000003258C0 string=0x00000000003258C4 "hJ@"
 *   insn=0x00000000003258C4 string=0x00000000003258C8 ""
 *   insn=0x00000000003258D0 string=0x00000000003258D4 "i6@"
 *   insn=0x00000000003258D4 string=0x00000000003258D8 ""
 *   insn=0x00000000003258E0 string=0x00000000003258E4 "hJ@"
 *   insn=0x00000000003258E4 string=0x00000000003258E8 "H"
 *   insn=0x00000000003258EC string=0x00000000003258F0 "i:@"
 *   insn=0x00000000003258F0 string=0x00000000003258F4 ""
 *   insn=0x00000000003258FC string=0x0000000000325900 "hJ@"
 *   insn=0x0000000000325908 string=0x000000000032590C "i>@"
 *   insn=0x000000000032590C string=0x0000000000325910 ""
 *   insn=0x0000000000325918 string=0x000000000032591C "hJ@"
 *   insn=0x0000000000325924 string=0x0000000000325928 "iB@"
 *   insn=0x0000000000325928 string=0x000000000032592C ""
 *   insn=0x0000000000325934 string=0x0000000000325938 "hJ@"
 *   insn=0x0000000000325938 string=0x000000000032593C ""
 *   insn=0x0000000000325944 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032594C string=0x0000000000325950 "XF"
 *   insn=0x0000000000325950 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000325960 string=0x0000000000325964 "#R"
 *   insn=0x000000000032596C string=0x0000000000325970 "w"
 *   insn=0x000000000032597C string=0x0000000000325980 ""
 *   insn=0x0000000000325980 string=0x0000000000325984 "QC"
 *   insn=0x0000000000325988 string=0x000000000032598C "A"
 *   insn=0x000000000032598C string=0x0000000000325990 "h"
 *   insn=0x0000000000325990 string=0x0000000000325994 ""
 *   insn=0x0000000000325994 string=0x0000000000325998 "iE"
 *   insn=0x0000000000325998 string=0x000000000032599C ""
 *   insn=0x00000000003259A4 string=0x00000000003259A8 "`"
 *   insn=0x00000000003259AC string=0x00000000003259B0 ""
 *   insn=0x00000000003259B0 string=0x00000000003259B4 ""
 *   insn=0x00000000003259D0 string=0x00000000003259D4 "G"
 *   insn=0x00000000003259DC string=0x00000000003259E0 "["
 *   insn=0x00000000003259E0 string=0x00000000003259E4 ""
 *   insn=0x00000000003259E4 string=0x00000000003259E8 "iE"
 *   insn=0x00000000003259E8 string=0x00000000003259EC ""
 *   insn=0x00000000003259FC string=0x0000000000325A00 ""
 *   insn=0x0000000000325A04 string=0x0000000000325A08 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::AttackComponent::AttackComponent(
        Caver::Proto::AttackComponent *this,
        const Caver::Proto::AttackComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C8CD0;
  *((_DWORD *)this + 18) = 0;
  Caver::Proto::AttackComponent::MergeFrom();
}

