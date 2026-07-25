/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316C78
 * Mangled: _ZN5Caver5Proto16ProgramComponentC2ERKS1_
 * Demangled: Caver::Proto::ProgramComponent::ProgramComponent(Caver::Proto::ProgramComponent const&)
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
 *   0x00000000001F91A0  Caver::Proto::ProgramComponent::MergeFrom(Caver::Proto::ProgramComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 64
 *   insn=0x0000000000316C84 string=0x0000000000316C88 ""
 *   insn=0x0000000000316C94 string=0x0000000000316C98 "A"
 *   insn=0x0000000000316CA0 string=0x0000000000316CA4 "i"
 *   insn=0x0000000000316CA4 string=0x0000000000316CA8 "h"
 *   insn=0x0000000000316CAC string=0x0000000000316CB0 "<"
 *   insn=0x0000000000316CB0 string=0x00000000001F91A0 "0'"
 *   insn=0x0000000000316CC4 string=0x0000000000316CC8 "N"
 *   insn=0x0000000000316CC8 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000316CE8 string=0x0000000000316CEC "V"
 *   insn=0x0000000000316D04 string=0x0000000000316D08 "h"
 *   insn=0x0000000000316D08 string=0x0000000000316D0C ""
 *   insn=0x0000000000316D14 string=0x0000000000316D18 "h"
 *   insn=0x0000000000316D18 string=0x0000000000316D1C "("
 *   insn=0x0000000000316D1C string=0x0000000000316D20 ";"
 *   insn=0x0000000000316D24 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000316D30 string=0x0000000000316D34 "c"
 *   insn=0x0000000000316D38 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000316D3C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000316D44 string=0x0000000000316D48 "2"
 *   insn=0x0000000000316D48 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000316D54 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000316D58 string=0x0000000000316D5C "%"
 *   insn=0x0000000000316D5C string=0x0000000000316D60 "h"
 *   insn=0x0000000000316D5C string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000316D60 string=0x0000000000316D64 "h"
 *   insn=0x0000000000316D64 string=0x0000000000316D68 ")"
 *   insn=0x0000000000316D6C string=0x0000000000316D70 "i2@9"
 *   insn=0x0000000000316D70 string=0x0000000000316D74 ""
 *   insn=0x0000000000316D7C string=0x0000000000316D80 "h"@"
 *   insn=0x0000000000316D88 string=0x0000000000316D8C "i6@9"
 *   insn=0x0000000000316D8C string=0x0000000000316D90 ""
 *   insn=0x0000000000316D98 string=0x0000000000316D9C "h"@"
 *   insn=0x0000000000316DA4 string=0x0000000000316DA8 "i"
 *   insn=0x0000000000316DA8 string=0x0000000000316DAC ""
 *   insn=0x0000000000316DB4 string=0x0000000000316DB8 "h"@"
 *   insn=0x0000000000316DC4 string=0x0000000000316DC8 ""
 *   insn=0x0000000000316DD0 string=0x0000000000316DE8 "i"
 *   insn=0x0000000000316DD8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000316DE0 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000316DE8 string=0x0000000000316DEC "h"
 *   insn=0x0000000000316DEC string=0x0000000000316DF0 ")uC"
 *   insn=0x0000000000316DF8 string=0x0000000000316DFC ")"
 *   insn=0x0000000000316DFC string=0x0000000000316E00 "("
 *   insn=0x0000000000316E04 string=0x0000000000316E08 "fr"
 *   insn=0x0000000000316E08 string=0x00000000001F37A0 "P'"
 *   insn=0x0000000000316E18 string=0x0000000000316E30 "(}"
 *   insn=0x0000000000316E30 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000316E3C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000316E58 string=0x0000000000316E5C "<"
 *   insn=0x0000000000316E6C string=0x0000000000316E70 ""
 *   insn=0x0000000000316E74 string=0x0000000000316E78 "A"
 *   insn=0x0000000000316E78 string=0x0000000000316E7C "h"
 *   insn=0x0000000000316E7C string=0x0000000000316E80 "h"
 *   insn=0x0000000000316E80 string=0x0000000000316E84 "uC"
 *   insn=0x0000000000316E84 string=0x0000000000316E88 ""
 *   insn=0x0000000000316E90 string=0x0000000000316E94 "`"
 *   insn=0x0000000000316E98 string=0x0000000000316E9C ""
 *   insn=0x0000000000316E9C string=0x0000000000316EA0 ""
 *   insn=0x0000000000316EC8 string=0x0000000000316ECC " "
 *   insn=0x0000000000316ECC string=0x0000000000316ED0 "h"
 *   insn=0x0000000000316ED0 string=0x0000000000316ED4 "uC"
 *   insn=0x0000000000316ED4 string=0x0000000000316ED8 ""
 *   insn=0x0000000000316EE8 string=0x0000000000316EEC ""
 *   insn=0x0000000000316EF0 string=0x0000000000316EF4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ProgramComponent::ProgramComponent(
        Caver::Proto::ProgramComponent *this,
        const Caver::Proto::ProgramComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = off_6C8208;
  *((_DWORD *)this + 8) = 0;
  Caver::Proto::ProgramComponent::MergeFrom();
}

