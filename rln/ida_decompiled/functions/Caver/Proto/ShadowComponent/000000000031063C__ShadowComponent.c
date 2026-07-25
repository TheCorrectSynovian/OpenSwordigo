/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031063C
 * Mangled: _ZN5Caver5Proto15ShadowComponentC2ERKS1_
 * Demangled: Caver::Proto::ShadowComponent::ShadowComponent(Caver::Proto::ShadowComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F3BF0  Caver::Proto::ShadowComponent::MergeFrom(Caver::Proto::ShadowComponent const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x0000000000310648 string=0x000000000031064C "MG"
 *   insn=0x0000000000310658 string=0x000000000031065C "A"
 *   insn=0x000000000031065C string=0x0000000000310660 "h~"
 *   insn=0x0000000000310664 string=0x0000000000310668 "b"
 *   insn=0x0000000000310668 string=0x00000000001F3BF0 "P'"
 *   insn=0x0000000000310680 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000310688 string=0x000000000031068C "0"
 *   insn=0x00000000003106A0 string=0x00000000003106A4 "V"
 *   insn=0x00000000003106BC string=0x00000000003106C0 "h"
 *   insn=0x00000000003106C0 string=0x00000000003106C4 ""
 *   insn=0x00000000003106CC string=0x00000000003106D0 "H"
 *   insn=0x00000000003106D0 string=0x00000000003106D4 "4"
 *   insn=0x00000000003106D8 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003106E8 string=0x00000000003106EC "A"
 *   insn=0x00000000003106EC string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003106F0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003106FC string=0x00000000001FC210 "0'"
 *   insn=0x0000000000310704 string=0x0000000000310708 "~"
 *   insn=0x0000000000310708 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000310710 string=0x0000000000310714 "h"
 *   insn=0x0000000000310710 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000310718 string=0x000000000031071C """
 *   insn=0x0000000000310720 string=0x0000000000310724 "i"
 *   insn=0x0000000000310724 string=0x0000000000310728 ""
 *   insn=0x0000000000310730 string=0x0000000000310734 "h"@"
 *   insn=0x000000000031073C string=0x0000000000310740 "i"
 *   insn=0x0000000000310740 string=0x0000000000310744 ""
 *   insn=0x000000000031074C string=0x0000000000310750 "h"@"
 *   insn=0x000000000031075C string=0x0000000000310760 ""
 *   insn=0x0000000000310770 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000310778 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000310780 string=0x0000000000310784 "h"
 *   insn=0x0000000000310784 string=0x0000000000310788 ")-A"
 *   insn=0x0000000000310790 string=0x0000000000310794 ")"
 *   insn=0x0000000000310794 string=0x0000000000310798 "("
 *   insn=0x00000000003107A0 string=0x00000000001F3800 "P'"
 *   insn=0x00000000003107C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003107D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003107D8 string=0x00000000003107DC ":"
 *   insn=0x00000000003107EC string=0x00000000003107F0 "5"
 *   insn=0x0000000000310804 string=0x0000000000310808 "MG"
 *   insn=0x000000000031080C string=0x0000000000310810 "A"
 *   insn=0x0000000000310810 string=0x0000000000310814 "h"
 *   insn=0x0000000000310818 string=0x000000000031081C "-A"
 *   insn=0x000000000031081C string=0x0000000000310820 ""
 *   insn=0x0000000000310828 string=0x000000000031082C "`"
 *   insn=0x0000000000310830 string=0x0000000000310834 ""
 *   insn=0x0000000000310834 string=0x0000000000310838 ""
 *   insn=0x0000000000310848 string=0x000000000031084C "m"
 *   insn=0x0000000000310854 string=0x0000000000310858 "j"
 *   insn=0x0000000000310868 string=0x000000000031086C "-A"
 *   insn=0x000000000031086C string=0x0000000000310870 ""
 *   insn=0x0000000000310880 string=0x0000000000310884 ""
 *   insn=0x0000000000310888 string=0x000000000031088C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ShadowComponent::ShadowComponent(
        Caver::Proto::ShadowComponent *this,
        const Caver::Proto::ShadowComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C7D58;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 8) = 0;
  Caver::Proto::ShadowComponent::MergeFrom();
}

