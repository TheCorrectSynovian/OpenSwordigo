/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303F2C
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponentC2ERKS1_
 * Demangled: Caver::Proto::KeyframeAnimationComponent::KeyframeAnimationComponent(Caver::Proto::KeyframeAnimationComponent const&)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA420  Caver::Proto::KeyframeAnimationComponent::MergeFrom(Caver::Proto::KeyframeAnimationComponent const&)
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 85
 *   insn=0x0000000000303F38 string=0x0000000000303F3C "("
 *   insn=0x0000000000303F3C string=0x0000000000303F40 ""
 *   insn=0x0000000000303F44 string=0x0000000000303F48 "\t"
 *   insn=0x0000000000303F48 string=0x0000000000303F4C ")ID"
 *   insn=0x0000000000303F4C string=0x0000000000303F50 "A"
 *   insn=0x0000000000303F54 string=0x0000000000303F58 "h"
 *   insn=0x0000000000303F58 string=0x0000000000303F5C "i\n"
 *   insn=0x0000000000303F60 string=0x0000000000303F64 "/"
 *   insn=0x0000000000303F64 string=0x00000000001FA420 "0'"
 *   insn=0x0000000000303F7C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000303F80 string=0x0000000000303F84 "P"
 *   insn=0x0000000000303F9C string=0x0000000000303FA0 "V"
 *   insn=0x0000000000303FB8 string=0x0000000000303FBC "B"
 *   insn=0x0000000000303FB8 string=0x0000000000303FF8 "h"
 *   insn=0x0000000000303FBC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000303FCC string=0x0000000000303FD0 ""
 *   insn=0x0000000000303FD0 string=0x0000000000303FD4 "!"
 *   insn=0x0000000000303FD0 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000303FD4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000303FE0 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000303FE8 string=0x0000000000303FEC "E"
 *   insn=0x0000000000303FEC string=0x00000000001FA500 "0'"
 *   insn=0x0000000000303FF4 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000303FF8 string=0x0000000000303FFC "H"
 *   insn=0x0000000000303FFC string=0x0000000000304000 "H"
 *   insn=0x0000000000304000 string=0x0000000000304004 ""
 *   insn=0x0000000000304004 string=0x0000000000304008 "h"
 *   insn=0x0000000000304004 string=0x0000000000304064 "\t"
 *   insn=0x0000000000304008 string=0x000000000030400C "("
 *   insn=0x0000000000304014 string=0x0000000000304018 "i"
 *   insn=0x0000000000304018 string=0x000000000030401C ""
 *   insn=0x0000000000304030 string=0x00000000003040F0 "x"
 *   insn=0x0000000000304048 string=0x000000000030404C "i"
 *   insn=0x000000000030404C string=0x0000000000304050 ""
 *   insn=0x0000000000304058 string=0x000000000030405C "h"@"
 *   insn=0x000000000030405C string=0x0000000000304060 "H"
 *   insn=0x000000000030406C string=0x0000000000304070 "u\n@"
 *   insn=0x0000000000304070 string=0x0000000000304074 ")ID"
 *   insn=0x0000000000304074 string=0x0000000000304078 ""
 *   insn=0x0000000000304088 string=0x000000000030408C "U"
 *   insn=0x000000000030408C string=0x0000000000304090 ""
 *   insn=0x000000000030408C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000304090 string=0x0000000000304094 ""
 *   insn=0x0000000000304094 string=0x0000000000304098 "a"
 *   insn=0x0000000000304098 string=0x000000000030409C ""
 *   insn=0x00000000003040A8 string=0x00000000003040AC "h"@"
 *   insn=0x00000000003040B4 string=0x00000000003040B8 "ib@9"
 *   insn=0x00000000003040B8 string=0x00000000003040BC ""
 *   insn=0x00000000003040C4 string=0x00000000003040C8 "h"@"
 *   insn=0x00000000003040C8 string=0x00000000003040CC "("
 *   insn=0x00000000003040D0 string=0x00000000003040D4 "if@9"
 *   insn=0x00000000003040D4 string=0x00000000003040D8 ""
 *   insn=0x00000000003040E0 string=0x00000000003040E4 "h"@"
 *   insn=0x00000000003040E4 string=0x00000000003040E8 "h"
 *   insn=0x00000000003040F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003040F8 string=0x00000000003040FC "="
 *   insn=0x0000000000304118 string=0x000000000030411C "T"
 *   insn=0x0000000000304124 string=0x0000000000304128 "\t"
 *   insn=0x000000000030412C string=0x0000000000304130 ""
 *   insn=0x0000000000304130 string=0x0000000000304134 "`\n@"
 *   insn=0x0000000000304134 string=0x0000000000304138 ""
 *   insn=0x0000000000304138 string=0x000000000030413C ")ID"
 *   insn=0x000000000030413C string=0x0000000000304140 "A"
 *   insn=0x0000000000304144 string=0x0000000000304148 "h"
 *   insn=0x0000000000304148 string=0x000000000030414C " "
 *   insn=0x0000000000304150 string=0x0000000000304154 "\t"
 *   insn=0x0000000000304154 string=0x0000000000304158 "\n"
 *   insn=0x0000000000304158 string=0x000000000030415C "J"
 *   insn=0x000000000030415C string=0x0000000000304160 "(a"
 *   insn=0x0000000000304168 string=0x000000000030416C "Q"
 *   insn=0x0000000000304168 string=0x0000000000304198 "\n"
 *   insn=0x000000000030416C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000304170 string=0x0000000000304174 "#"
 *   insn=0x0000000000304180 string=0x0000000000304184 "!"
 *   insn=0x0000000000304184 string=0x00000000003041E8 ":"
 *   insn=0x0000000000304198 string=0x000000000030419C "J=G"
 *   insn=0x000000000030419C string=0x00000000003041A0 ")!"
 *   insn=0x00000000003041A4 string=0x00000000003041A8 "*"
 *   insn=0x00000000003041A4 string=0x00000000003041BC "*"
 *   insn=0x00000000003041A8 string=0x00000000003041AC "K"
 *   insn=0x00000000003041AC string=0x00000000003041B0 "+"
 *   insn=0x00000000003041B8 string=0x00000000003041C8 "_"
 *   insn=0x00000000003041BC string=0x00000000003041C0 "K"
 *   insn=0x00000000003041C0 string=0x00000000003041C4 "+"
 *   insn=0x00000000003041D8 string=0x00000000003041DC "r"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::KeyframeAnimationComponent::KeyframeAnimationComponent(
        Caver::Proto::KeyframeAnimationComponent *this,
        const Caver::Proto::KeyframeAnimationComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_WORD *)this + 12) = 0;
  *(_QWORD *)this = off_6C7650;
  *((_QWORD *)this + 2) = &Caver::Proto::KeyframeAnimationComponent::_default_name_;
  *(_QWORD *)((char *)this + 28) = 0;
  Caver::Proto::KeyframeAnimationComponent::MergeFrom();
}

