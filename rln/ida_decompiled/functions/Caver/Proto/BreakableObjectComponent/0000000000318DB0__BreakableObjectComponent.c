/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318DB0
 * Mangled: _ZN5Caver5Proto24BreakableObjectComponentC2ERKS1_
 * Demangled: Caver::Proto::BreakableObjectComponent::BreakableObjectComponent(Caver::Proto::BreakableObjectComponent const&)
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
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FD0B0  Caver::Proto::BreakableObjectComponent::MergeFrom(Caver::Proto::BreakableObjectComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 63
 *   insn=0x0000000000318DB8 string=0x0000000000318DBC "h"
 *   insn=0x0000000000318DBC string=0x0000000000318DC0 "1E"
 *   insn=0x0000000000318DCC string=0x0000000000318DD0 "A"
 *   insn=0x0000000000318DD4 string=0x0000000000318DD8 "h"
 *   insn=0x0000000000318DE0 string=0x00000000001FD0B0 "0'"
 *   insn=0x0000000000318DF8 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000318E00 string=0x0000000000318E04 "R"
 *   insn=0x0000000000318E18 string=0x0000000000318E1C "V"
 *   insn=0x0000000000318E34 string=0x0000000000318E38 "h"
 *   insn=0x0000000000318E38 string=0x0000000000318E3C ""
 *   insn=0x0000000000318E44 string=0x0000000000318E48 "h"
 *   insn=0x0000000000318E48 string=0x0000000000318E4C "("
 *   insn=0x0000000000318E4C string=0x0000000000318E50 ";"
 *   insn=0x0000000000318E54 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000318E60 string=0x0000000000318E64 "#6"
 *   insn=0x0000000000318E64 string=0x0000000000318E68 "bu"
 *   insn=0x0000000000318E68 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000318E6C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000318E78 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000318E84 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000318E8C string=0x0000000000318E90 "h"
 *   insn=0x0000000000318E8C string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000318E90 string=0x0000000000318E94 "h"
 *   insn=0x0000000000318E94 string=0x0000000000318E98 ")"
 *   insn=0x0000000000318E9C string=0x0000000000318EA0 "i2@9"
 *   insn=0x0000000000318EA0 string=0x0000000000318EA4 ""
 *   insn=0x0000000000318EAC string=0x0000000000318EB0 "h"@"
 *   insn=0x0000000000318EB8 string=0x0000000000318EBC "i"
 *   insn=0x0000000000318EBC string=0x0000000000318EC0 ""
 *   insn=0x0000000000318EC8 string=0x0000000000318ECC "h"@"
 *   insn=0x0000000000318ED4 string=0x0000000000318ED8 "i"
 *   insn=0x0000000000318ED8 string=0x0000000000318EDC ""
 *   insn=0x0000000000318EE4 string=0x0000000000318EE8 "h"@"
 *   insn=0x0000000000318EF4 string=0x0000000000318EF8 ""
 *   insn=0x0000000000318F00 string=0x0000000000318F18 "i"
 *   insn=0x0000000000318F08 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000318F0C string=0x0000000000318F10 "<p"
 *   insn=0x0000000000318F10 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000318F18 string=0x0000000000318F1C "h"
 *   insn=0x0000000000318F1C string=0x0000000000318F20 ")"
 *   insn=0x0000000000318F28 string=0x0000000000318F2C ")"
 *   insn=0x0000000000318F2C string=0x0000000000318F30 "("
 *   insn=0x0000000000318F38 string=0x00000000001F37A0 "P'"
 *   insn=0x0000000000318F60 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000318F6C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000318F70 string=0x0000000000318F74 "T"
 *   insn=0x0000000000318F84 string=0x0000000000318F88 "O"
 *   insn=0x0000000000318F98 string=0x0000000000318F9C "h"
 *   insn=0x0000000000318F9C string=0x0000000000318FA0 "1E"
 *   insn=0x0000000000318FA4 string=0x0000000000318FA8 "A"
 *   insn=0x0000000000318FA8 string=0x0000000000318FAC "h"
 *   insn=0x0000000000318FAC string=0x0000000000318FB0 "h"
 *   insn=0x0000000000318FB0 string=0x0000000000318FB4 ""
 *   insn=0x0000000000318FB4 string=0x0000000000318FB8 ""
 *   insn=0x0000000000318FC0 string=0x0000000000318FC4 "`"
 *   insn=0x0000000000318FC8 string=0x0000000000318FCC ""
 *   insn=0x0000000000318FCC string=0x0000000000318FD0 ""
 *   insn=0x0000000000318FF4 string=0x0000000000318FF8 "3"
 *   insn=0x0000000000318FFC string=0x0000000000319000 "h"
 *   insn=0x0000000000319000 string=0x0000000000319004 ""
 *   insn=0x0000000000319004 string=0x0000000000319008 ""
 *   insn=0x0000000000319018 string=0x000000000031901C ""
 *   insn=0x0000000000319020 string=0x0000000000319024 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BreakableObjectComponent::BreakableObjectComponent(
        Caver::Proto::BreakableObjectComponent *this,
        const Caver::Proto::BreakableObjectComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C8370;
  *((_DWORD *)this + 8) = 0;
  Caver::Proto::BreakableObjectComponent::MergeFrom();
}

