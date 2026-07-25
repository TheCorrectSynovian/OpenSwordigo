/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000321CCC
 * Mangled: _ZN5Caver5Proto19SimpleGlowComponentC2ERKS1_
 * Demangled: Caver::Proto::SimpleGlowComponent::SimpleGlowComponent(Caver::Proto::SimpleGlowComponent const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC6C0  Caver::Proto::SimpleGlowComponent::MergeFrom(Caver::Proto::SimpleGlowComponent const&)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 90
 *   insn=0x0000000000321CD4 string=0x0000000000321CD8 "("
 *   insn=0x0000000000321CD8 string=0x0000000000321CDC ""
 *   insn=0x0000000000321CE8 string=0x0000000000321CEC "A"
 *   insn=0x0000000000321CF4 string=0x0000000000321CF8 "h"
 *   insn=0x0000000000321CFC string=0x0000000000321D00 "pj"
 *   insn=0x0000000000321D00 string=0x00000000001FC6C0 "0'"
 *   insn=0x0000000000321D14 string=0x0000000000321D18 ":V"
 *   insn=0x0000000000321D18 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000321D38 string=0x0000000000321D3C "V"
 *   insn=0x0000000000321D50 string=0x0000000000321D54 " "
 *   insn=0x0000000000321D54 string=0x0000000000321D58 "h"
 *   insn=0x0000000000321D54 string=0x0000000000321DF8 "B"
 *   insn=0x0000000000321D58 string=0x0000000000321D5C ""
 *   insn=0x0000000000321D60 string=0x0000000000321DB4 "h"
 *   insn=0x0000000000321D68 string=0x0000000000321D6C ""
 *   insn=0x0000000000321D74 string=0x0000000000321D8C ")"
 *   insn=0x0000000000321D7C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000321D80 string=0x0000000000321D84 "gH"
 *   insn=0x0000000000321D84 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000321D8C string=0x0000000000321D90 "h\n@"
 *   insn=0x0000000000321D90 string=0x0000000000321D94 ")"
 *   insn=0x0000000000321D9C string=0x0000000000321DA0 ")"
 *   insn=0x0000000000321DA0 string=0x0000000000321DA4 "("
 *   insn=0x0000000000321DAC string=0x0000000000321DB0 "h:@"
 *   insn=0x0000000000321DB4 string=0x0000000000321DB8 "("
 *   insn=0x0000000000321DC8 string=0x0000000000321DCC "i2@"
 *   insn=0x0000000000321DCC string=0x0000000000321DD0 ""
 *   insn=0x0000000000321DD8 string=0x0000000000321DDC "h:@"
 *   insn=0x0000000000321DE4 string=0x0000000000321DE8 "i6@"
 *   insn=0x0000000000321DE8 string=0x0000000000321DEC ""
 *   insn=0x0000000000321DF8 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000321E04 string=0x0000000000321E08 "c"
 *   insn=0x0000000000321E08 string=0x0000000000321E0C "yQ"
 *   insn=0x0000000000321E0C string=0x0000000000321E10 "A"
 *   insn=0x0000000000321E0C string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000321E10 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000321E1C string=0x00000000001FC210 "0'"
 *   insn=0x0000000000321E28 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000321E30 string=0x0000000000321E34 "h"
 *   insn=0x0000000000321E30 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000321E34 string=0x0000000000321E38 "H"
 *   insn=0x0000000000321E44 string=0x0000000000321E48 "!"
 *   insn=0x0000000000321E60 string=0x0000000000321E64 "i"
 *   insn=0x0000000000321E64 string=0x0000000000321E68 ""
 *   insn=0x0000000000321E70 string=0x0000000000321E74 "h:@"
 *   insn=0x0000000000321E74 string=0x0000000000321E78 "("
 *   insn=0x0000000000321E7C string=0x0000000000321E80 "i"
 *   insn=0x0000000000321E80 string=0x0000000000321E84 ""
 *   insn=0x0000000000321E8C string=0x0000000000321E90 "h:@"
 *   insn=0x0000000000321E90 string=0x0000000000321E94 "h"
 *   insn=0x0000000000321E98 string=0x0000000000321E9C "i"@"
 *   insn=0x0000000000321E9C string=0x0000000000321EA0 ""
 *   insn=0x0000000000321EA8 string=0x0000000000321EAC "h:@"
 *   insn=0x0000000000321EB8 string=0x0000000000321EBC ""
 *   insn=0x0000000000321EC4 string=0x0000000000321EDC ")"
 *   insn=0x0000000000321ED4 string=0x00000000001F7CD0 "0'"
 *   insn=0x0000000000321EDC string=0x0000000000321EE0 "h"
 *   insn=0x0000000000321EE0 string=0x0000000000321EE4 ")"
 *   insn=0x0000000000321EEC string=0x0000000000321EF0 ")"
 *   insn=0x0000000000321EF0 string=0x0000000000321EF4 "("
 *   insn=0x0000000000321EFC string=0x0000000000321F00 "h:@"
 *   insn=0x0000000000321F00 string=0x0000000000321F04 "("
 *   insn=0x0000000000321F0C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000321F1C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000321F20 string=0x0000000000321F24 "h~\t"
 *   insn=0x0000000000321F34 string=0x0000000000321F38 "c~\t"
 *   insn=0x0000000000321F48 string=0x0000000000321F4C "("
 *   insn=0x0000000000321F4C string=0x0000000000321F50 ""
 *   insn=0x0000000000321F54 string=0x0000000000321F58 "A"
 *   insn=0x0000000000321F58 string=0x0000000000321F5C "h"
 *   insn=0x0000000000321F5C string=0x0000000000321F60 "("
 *   insn=0x0000000000321F60 string=0x0000000000321F64 ""
 *   insn=0x0000000000321F64 string=0x0000000000321F68 ""
 *   insn=0x0000000000321F6C string=0x0000000000321F70 "`"
 *   insn=0x0000000000321F70 string=0x0000000000321F74 "`\n@"
 *   insn=0x0000000000321F78 string=0x0000000000321F7C ""
 *   insn=0x0000000000321F78 string=0x0000000000321F88 "`"
 *   insn=0x0000000000321F7C string=0x0000000000321F80 ""
 *   insn=0x0000000000321F8C string=0x0000000000321F90 ""
 *   insn=0x0000000000321F90 string=0x0000000000321F94 ""
 *   insn=0x0000000000321FB8 string=0x0000000000321FBC "B~\t"
 *   insn=0x0000000000321FCC string=0x0000000000321FD0 "("
 *   insn=0x0000000000321FD0 string=0x0000000000321FD4 ""
 *   insn=0x0000000000321FD8 string=0x0000000000321FDC ""
 *   insn=0x0000000000321FE4 string=0x0000000000321FE8 "`\n@"
 *   insn=0x0000000000321FEC string=0x0000000000321FF0 ""
 *   insn=0x0000000000321FEC string=0x0000000000321FFC "`"
 *   insn=0x0000000000321FF0 string=0x0000000000321FF4 ""
 *   insn=0x0000000000322000 string=0x0000000000322004 ""
 *   insn=0x0000000000322010 string=0x0000000000322014 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SimpleGlowComponent::SimpleGlowComponent(
        Caver::Proto::SimpleGlowComponent *this,
        const Caver::Proto::SimpleGlowComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *(_QWORD *)this = off_6C8910;
  *((_DWORD *)this + 14) = 0;
  Caver::Proto::SimpleGlowComponent::MergeFrom();
}

