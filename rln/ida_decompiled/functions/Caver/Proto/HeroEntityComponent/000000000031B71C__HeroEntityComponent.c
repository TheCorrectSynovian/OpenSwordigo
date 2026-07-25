/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B71C
 * Mangled: _ZN5Caver5Proto19HeroEntityComponentC2ERKS1_
 * Demangled: Caver::Proto::HeroEntityComponent::HeroEntityComponent(Caver::Proto::HeroEntityComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F54E0  Caver::Proto::HeroEntityComponent::MergeFrom(Caver::Proto::HeroEntityComponent const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 51
 *   insn=0x000000000031B724 string=0x000000000031B728 "h"
 *   insn=0x000000000031B728 string=0x000000000031B72C ""
 *   insn=0x000000000031B738 string=0x000000000031B73C "A"
 *   insn=0x000000000031B73C string=0x000000000031B740 "h"
 *   insn=0x000000000031B744 string=0x000000000031B748 "fg"
 *   insn=0x000000000031B748 string=0x00000000001F54E0 "P'"
 *   insn=0x000000000031B760 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031B764 string=0x000000000031B768 "W"
 *   insn=0x000000000031B780 string=0x000000000031B784 "V"
 *   insn=0x000000000031B79C string=0x000000000031B7A0 "hb@9h"
 *   insn=0x000000000031B7A0 string=0x000000000031B7A4 "h"
 *   insn=0x000000000031B7A4 string=0x000000000031B7A8 "%"
 *   insn=0x000000000031B7AC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031B7C0 string=0x000000000031B7C4 "a"
 *   insn=0x000000000031B7C0 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031B7C4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031B7D0 string=0x00000000001FC210 "0'"
 *   insn=0x000000000031B7D8 string=0x000000000031B7DC "I{"
 *   insn=0x000000000031B7DC string=0x00000000001FA500 "0'"
 *   insn=0x000000000031B7E4 string=0x000000000031B7E8 "hb@9"
 *   insn=0x000000000031B7E4 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031B7F4 string=0x000000000031B7F8 ""
 *   insn=0x000000000031B800 string=0x000000000031B818 "I"
 *   insn=0x000000000031B804 string=0x000000000031B808 "vg"
 *   insn=0x000000000031B808 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031B810 string=0x00000000001F5000 "P'"
 *   insn=0x000000000031B818 string=0x000000000031B81C "h\n@"
 *   insn=0x000000000031B81C string=0x000000000031B820 ")"
 *   insn=0x000000000031B828 string=0x000000000031B82C ")"
 *   insn=0x000000000031B82C string=0x000000000031B830 "("
 *   insn=0x000000000031B838 string=0x00000000001F37A0 "P'"
 *   insn=0x000000000031B860 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031B86C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031B87C string=0x000000000031B880 "\z"
 *   insn=0x000000000031B898 string=0x000000000031B89C "h"
 *   insn=0x000000000031B89C string=0x000000000031B8A0 ""
 *   insn=0x000000000031B8A4 string=0x000000000031B8A8 "A"
 *   insn=0x000000000031B8A8 string=0x000000000031B8AC "h"
 *   insn=0x000000000031B8AC string=0x000000000031B8B0 "H"
 *   insn=0x000000000031B8B0 string=0x000000000031B8B4 ""
 *   insn=0x000000000031B8B4 string=0x000000000031B8B8 ""
 *   insn=0x000000000031B8C0 string=0x000000000031B8C4 "`\n@"
 *   insn=0x000000000031B8C8 string=0x000000000031B8CC ""
 *   insn=0x000000000031B8CC string=0x000000000031B8D0 ""
 *   insn=0x000000000031B8E0 string=0x000000000031B8E4 "Go"
 *   insn=0x000000000031B8EC string=0x000000000031B8F0 "Do"
 *   insn=0x000000000031B8FC string=0x000000000031B900 "H"
 *   insn=0x000000000031B900 string=0x000000000031B904 ""
 *   insn=0x000000000031B904 string=0x000000000031B908 ""
 *   insn=0x000000000031B918 string=0x000000000031B91C ""
 *   insn=0x000000000031B920 string=0x000000000031B924 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::HeroEntityComponent::HeroEntityComponent(
        Caver::Proto::HeroEntityComponent *this,
        const Caver::Proto::HeroEntityComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C85C8;
  *((_DWORD *)this + 6) = 0;
  Caver::Proto::HeroEntityComponent::MergeFrom();
}

