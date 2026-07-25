/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334E14
 * Mangled: _ZN5Caver5Proto19FireBreathComponentC2ERKS1_
 * Demangled: Caver::Proto::FireBreathComponent::FireBreathComponent(Caver::Proto::FireBreathComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FCF10  Caver::Proto::FireBreathComponent::MergeFrom(Caver::Proto::FireBreathComponent const&)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 53
 *   insn=0x0000000000334E20 string=0x0000000000334E24 ""
 *   insn=0x0000000000334E30 string=0x0000000000334E34 "A"
 *   insn=0x0000000000334E34 string=0x0000000000334E38 "h~"
 *   insn=0x0000000000334E3C string=0x0000000000334E40 "4 "
 *   insn=0x0000000000334E40 string=0x00000000001FCF10 "0'"
 *   insn=0x0000000000334E58 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000334E60 string=0x0000000000334E64 ":e"
 *   insn=0x0000000000334E78 string=0x0000000000334E7C "V"
 *   insn=0x0000000000334E94 string=0x0000000000334E98 "h"
 *   insn=0x0000000000334E98 string=0x0000000000334E9C ""
 *   insn=0x0000000000334EA4 string=0x0000000000334EA8 "H"
 *   insn=0x0000000000334EA8 string=0x0000000000334EAC "4"
 *   insn=0x0000000000334EB0 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000334EC0 string=0x0000000000334EC4 "K"
 *   insn=0x0000000000334EC4 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000334EC8 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000334ED4 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000334EE0 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000334EE8 string=0x0000000000334EEC "h"
 *   insn=0x0000000000334EE8 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000334EF0 string=0x0000000000334EF4 """
 *   insn=0x0000000000334EF8 string=0x0000000000334EFC "i"
 *   insn=0x0000000000334EFC string=0x0000000000334F00 ""
 *   insn=0x0000000000334F08 string=0x0000000000334F0C "h"@"
 *   insn=0x0000000000334F14 string=0x0000000000334F18 "i"
 *   insn=0x0000000000334F18 string=0x0000000000334F1C ""
 *   insn=0x0000000000334F24 string=0x0000000000334F28 "h"@"
 *   insn=0x0000000000334F34 string=0x0000000000334F38 ""
 *   insn=0x0000000000334F48 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000334F50 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000334F58 string=0x0000000000334F5C "h"
 *   insn=0x0000000000334F5C string=0x0000000000334F60 ")"
 *   insn=0x0000000000334F68 string=0x0000000000334F6C ")"
 *   insn=0x0000000000334F6C string=0x0000000000334F70 "("
 *   insn=0x0000000000334FA0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000334FAC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000334FB0 string=0x0000000000334FB4 "D2\t"
 *   insn=0x0000000000334FC4 string=0x0000000000334FC8 "?2\t"
 *   insn=0x0000000000334FDC string=0x0000000000334FE0 ""
 *   insn=0x0000000000334FE4 string=0x0000000000334FE8 "A"
 *   insn=0x0000000000334FE8 string=0x0000000000334FEC "h"
 *   insn=0x0000000000334FF0 string=0x0000000000334FF4 ""
 *   insn=0x0000000000334FF4 string=0x0000000000334FF8 ""
 *   insn=0x0000000000335000 string=0x0000000000335004 "`"
 *   insn=0x0000000000335008 string=0x000000000033500C ""
 *   insn=0x000000000033500C string=0x0000000000335010 ""
 *   insn=0x0000000000335020 string=0x0000000000335024 "w\t"
 *   insn=0x000000000033502C string=0x0000000000335030 "t\t"
 *   insn=0x0000000000335034 string=0x0000000000335038 "#2\t"
 *   insn=0x0000000000335040 string=0x0000000000335044 ""
 *   insn=0x0000000000335044 string=0x0000000000335048 ""
 *   insn=0x0000000000335058 string=0x000000000033505C ""
 *   insn=0x0000000000335060 string=0x0000000000335064 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::FireBreathComponent::FireBreathComponent(
        Caver::Proto::FireBreathComponent *this,
        const Caver::Proto::FireBreathComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C9900;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 8) = 0;
  Caver::Proto::FireBreathComponent::MergeFrom();
}

