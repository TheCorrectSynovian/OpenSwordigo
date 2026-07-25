/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317654
 * Mangled: _ZN5Caver5Proto22MonsterEntityComponentC2ERKS1_
 * Demangled: Caver::Proto::MonsterEntityComponent::MonsterEntityComponent(Caver::Proto::MonsterEntityComponent const&)
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
 *   0x00000000001FC100  Caver::Proto::MonsterEntityComponent::MergeFrom(Caver::Proto::MonsterEntityComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 78
 *   insn=0x000000000031765C string=0x0000000000317660 "h"
 *   insn=0x0000000000317660 string=0x0000000000317664 ""
 *   insn=0x0000000000317670 string=0x0000000000317674 "A"
 *   insn=0x0000000000317678 string=0x000000000031767C "h"
 *   insn=0x0000000000317684 string=0x00000000001FC100 "0'"
 *   insn=0x000000000031769C string=0x00000000001F7600 "0'"
 *   insn=0x00000000003176A4 string=0x00000000003176A8 ")"
 *   insn=0x00000000003176BC string=0x00000000003176C0 "V"
 *   insn=0x00000000003176D4 string=0x00000000003176D8 "`"
 *   insn=0x00000000003176D8 string=0x00000000003176DC "h"
 *   insn=0x00000000003176DC string=0x00000000003176E0 "H\t"
 *   insn=0x00000000003176EC string=0x00000000003176F0 ""
 *   insn=0x00000000003176F8 string=0x0000000000317710 "i"
 *   insn=0x0000000000317700 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000317704 string=0x0000000000317708 ">v"
 *   insn=0x0000000000317708 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000317710 string=0x0000000000317714 "h\n@"
 *   insn=0x0000000000317714 string=0x0000000000317718 ")"
 *   insn=0x0000000000317720 string=0x0000000000317724 ")"
 *   insn=0x0000000000317724 string=0x0000000000317728 "("
 *   insn=0x0000000000317730 string=0x0000000000317734 "h&@"
 *   insn=0x0000000000317730 string=0x00000000001F37A0 "P'"
 *   insn=0x0000000000317740 string=0x0000000000317744 ""
 *   insn=0x000000000031774C string=0x0000000000317764 "i"
 *   insn=0x0000000000317758 string=0x000000000031775C ")v"
 *   insn=0x0000000000317764 string=0x0000000000317768 "h"
 *   insn=0x0000000000317768 string=0x000000000031776C ")"
 *   insn=0x0000000000317774 string=0x0000000000317778 ")"
 *   insn=0x0000000000317778 string=0x000000000031777C "("
 *   insn=0x0000000000317780 string=0x0000000000317784 "p"
 *   insn=0x0000000000317784 string=0x0000000000317788 "h&@"
 *   insn=0x000000000031778C string=0x00000000003177A8 ""
 *   insn=0x0000000000317790 string=0x0000000000317794 "i"
 *   insn=0x0000000000317794 string=0x0000000000317798 ""
 *   insn=0x00000000003177A0 string=0x00000000003177A4 "h&@"
 *   insn=0x00000000003177AC string=0x00000000003177B0 "i"
 *   insn=0x00000000003177B0 string=0x00000000003177B4 ""
 *   insn=0x00000000003177C4 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003177D0 string=0x00000000003177D4 "C"
 *   insn=0x00000000003177D8 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003177DC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003177E8 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003177F0 string=0x00000000003177F4 "C"
 *   insn=0x00000000003177F4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003177F8 string=0x00000000003177FC "}"
 *   insn=0x00000000003177FC string=0x0000000000317800 "h"
 *   insn=0x00000000003177FC string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000317800 string=0x0000000000317804 ""
 *   insn=0x000000000031782C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031783C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000317840 string=0x0000000000317844 " "
 *   insn=0x000000000031784C string=0x0000000000317850 "h"
 *   insn=0x0000000000317854 string=0x0000000000317858 ""
 *   insn=0x0000000000317868 string=0x000000000031786C "h"
 *   insn=0x000000000031786C string=0x0000000000317870 ""
 *   insn=0x0000000000317874 string=0x0000000000317878 "A"
 *   insn=0x0000000000317878 string=0x000000000031787C "h"
 *   insn=0x000000000031787C string=0x0000000000317880 "h"
 *   insn=0x0000000000317880 string=0x0000000000317884 ""
 *   insn=0x0000000000317884 string=0x0000000000317888 ""
 *   insn=0x000000000031788C string=0x0000000000317890 "`"
 *   insn=0x0000000000317890 string=0x0000000000317894 "`\n@"
 *   insn=0x0000000000317898 string=0x000000000031789C ""
 *   insn=0x0000000000317898 string=0x00000000003178A8 "`"
 *   insn=0x000000000031789C string=0x00000000003178A0 ""
 *   insn=0x00000000003178AC string=0x00000000003178B0 ""
 *   insn=0x00000000003178B0 string=0x00000000003178B4 ""
 *   insn=0x00000000003178C4 string=0x00000000003178C8 "N"
 *   insn=0x00000000003178D0 string=0x00000000003178D4 "K"
 *   insn=0x00000000003178EC string=0x00000000003178F0 "h"
 *   insn=0x00000000003178F0 string=0x00000000003178F4 ""
 *   insn=0x00000000003178F8 string=0x00000000003178FC ""
 *   insn=0x0000000000317904 string=0x0000000000317908 "`\n@"
 *   insn=0x000000000031790C string=0x0000000000317910 ""
 *   insn=0x000000000031790C string=0x000000000031791C "`"
 *   insn=0x0000000000317910 string=0x0000000000317914 ""
 *   insn=0x0000000000317920 string=0x0000000000317924 ""
 *   insn=0x0000000000317930 string=0x0000000000317934 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MonsterEntityComponent::MonsterEntityComponent(
        Caver::Proto::MonsterEntityComponent *this,
        const Caver::Proto::MonsterEntityComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C8280;
  *((_WORD *)this + 16) = 0;
  Caver::Proto::MonsterEntityComponent::MergeFrom();
}

