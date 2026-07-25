/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003117C0
 * Mangled: _ZN5Caver5Proto28AnimationControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::AnimationControllerComponent::AnimationControllerComponent(Caver::Proto::AnimationControllerComponent const&)
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
 *   0x00000000001FFA10  Caver::Proto::AnimationControllerComponent::MergeFrom(Caver::Proto::AnimationControllerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 35
 *   insn=0x00000000003117CC string=0x00000000003117D0 "QD"
 *   insn=0x00000000003117DC string=0x00000000003117E0 "A"
 *   insn=0x00000000003117E0 string=0x00000000003117E4 "h~"
 *   insn=0x0000000000311800 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000311804 string=0x0000000000311808 "/"
 *   insn=0x0000000000311820 string=0x0000000000311824 "U"
 *   insn=0x000000000031183C string=0x000000000031187C "hb@9("
 *   insn=0x0000000000311840 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031184C string=0x0000000000311850 "cn"
 *   insn=0x0000000000311854 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000311858 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000311860 string=0x0000000000311864 "k"
 *   insn=0x0000000000311864 string=0x00000000001FC210 "0'"
 *   insn=0x000000000031186C string=0x0000000000311870 "$"
 *   insn=0x0000000000311870 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000311874 string=0x0000000000311878 "^"
 *   insn=0x0000000000311878 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031187C string=0x0000000000311880 "("
 *   insn=0x0000000000311880 string=0x0000000000311884 "("
 *   insn=0x0000000000311890 string=0x0000000000311894 "iR@9"
 *   insn=0x0000000000311894 string=0x0000000000311898 ""
 *   insn=0x00000000003118B0 string=0x0000000000311904 "s"
 *   insn=0x00000000003118C8 string=0x00000000003118CC "i"
 *   insn=0x00000000003118CC string=0x00000000003118D0 ""
 *   insn=0x00000000003118D8 string=0x00000000003118DC "h"
 *   insn=0x00000000003118DC string=0x00000000003118E0 "h"
 *   insn=0x00000000003118E4 string=0x00000000003118E8 "i"
 *   insn=0x00000000003118E8 string=0x00000000003118EC ""
 *   insn=0x00000000003118F4 string=0x00000000003118F8 "h"
 *   insn=0x0000000000311904 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031190C string=0x0000000000311910 "8"
 *   insn=0x0000000000311920 string=0x0000000000311924 "QD"
 *   insn=0x0000000000311924 string=0x0000000000311928 "A"
 *   insn=0x0000000000311928 string=0x000000000031192C ""
 *   insn=0x000000000031192C string=0x0000000000311930 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::AnimationControllerComponent::AnimationControllerComponent(
        Caver::Proto::AnimationControllerComponent *this,
        const Caver::Proto::AnimationControllerComponent *a2)
{
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)((char *)this + 13) = 0;
  *(_QWORD *)this = off_6C7E48;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::AnimationControllerComponent::MergeFrom();
}

