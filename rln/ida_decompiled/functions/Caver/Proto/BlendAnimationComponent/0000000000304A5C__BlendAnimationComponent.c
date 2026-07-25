/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304A5C
 * Mangled: _ZN5Caver5Proto23BlendAnimationComponentC2ERKS1_
 * Demangled: Caver::Proto::BlendAnimationComponent::BlendAnimationComponent(Caver::Proto::BlendAnimationComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FBA60  Caver::Proto::BlendAnimationComponent::MergeFrom(Caver::Proto::BlendAnimationComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000304A64 string=0x0000000000304A68 ""
 *   insn=0x0000000000304A68 string=0x0000000000304A6C ""
 *   insn=0x0000000000304A74 string=0x0000000000304A78 "A"
 *   insn=0x0000000000304A78 string=0x0000000000304A7C "h~"
 *   insn=0x0000000000304A80 string=0x00000000001FBA60 "0'"
 *   insn=0x0000000000304A98 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000304AA0 string=0x0000000000304AA4 "*&"
 *   insn=0x0000000000304AB8 string=0x0000000000304ABC "U"
 *   insn=0x0000000000304AD4 string=0x0000000000304AD8 """
 *   insn=0x0000000000304AD4 string=0x0000000000304B14 "hr@9("
 *   insn=0x0000000000304AD8 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000304AE8 string=0x0000000000304AEC "A"
 *   insn=0x0000000000304AEC string=0x0000000000304AF0 "!"
 *   insn=0x0000000000304AEC string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000304AF0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000304AFC string=0x00000000001FC210 "0'"
 *   insn=0x0000000000304B04 string=0x0000000000304B08 "~"
 *   insn=0x0000000000304B08 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000304B10 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000304B14 string=0x0000000000304B18 "("
 *   insn=0x0000000000304B18 string=0x0000000000304B1C "("
 *   insn=0x0000000000304B2C string=0x0000000000304B30 "i"
 *   insn=0x0000000000304B30 string=0x0000000000304B34 ""
 *   insn=0x0000000000304B60 string=0x0000000000304B64 "i"
 *   insn=0x0000000000304B64 string=0x0000000000304B68 ""
 *   insn=0x0000000000304B70 string=0x0000000000304B74 "h"
 *   insn=0x0000000000304B74 string=0x0000000000304B78 "h"
 *   insn=0x0000000000304B7C string=0x0000000000304B80 "i"
 *   insn=0x0000000000304B80 string=0x0000000000304B84 ""
 *   insn=0x0000000000304B8C string=0x0000000000304B90 "h"
 *   insn=0x0000000000304B98 string=0x0000000000304B9C "i"
 *   insn=0x0000000000304B9C string=0x0000000000304BA0 ""
 *   insn=0x0000000000304BA8 string=0x0000000000304BAC "h"
 *   insn=0x0000000000304BB8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000304BC8 string=0x0000000000304BCC ">"
 *   insn=0x0000000000304BD0 string=0x0000000000304BD4 ""
 *   insn=0x0000000000304BD4 string=0x0000000000304BD8 ""
 *   insn=0x0000000000304BD8 string=0x0000000000304BDC "A"
 *   insn=0x0000000000304BDC string=0x0000000000304BE0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BlendAnimationComponent::BlendAnimationComponent(
        Caver::Proto::BlendAnimationComponent *this,
        const Caver::Proto::BlendAnimationComponent *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C76C8;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::BlendAnimationComponent::MergeFrom();
}

