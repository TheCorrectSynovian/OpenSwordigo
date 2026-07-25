/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331D90
 * Mangled: _ZN5Caver5Proto21PortalEffectComponentC2ERKS1_
 * Demangled: Caver::Proto::PortalEffectComponent::PortalEffectComponent(Caver::Proto::PortalEffectComponent const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FBB40  Caver::Proto::PortalEffectComponent::MergeFrom(Caver::Proto::PortalEffectComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x0000000000331D9C string=0x0000000000331DA0 "]B"
 *   insn=0x0000000000331DAC string=0x0000000000331DB0 "A"
 *   insn=0x0000000000331DB0 string=0x0000000000331DB4 "h~"
 *   insn=0x0000000000331DB8 string=0x0000000000331DBC "a'"
 *   insn=0x0000000000331DBC string=0x00000000001FBB40 "0'"
 *   insn=0x0000000000331DD0 string=0x0000000000331DD4 ""
 *   insn=0x0000000000331DD4 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000331DDC string=0x0000000000331DE0 "[q"
 *   insn=0x0000000000331DF4 string=0x0000000000331DF8 "V"
 *   insn=0x0000000000331E10 string=0x0000000000331E14 "h"
 *   insn=0x0000000000331E20 string=0x0000000000331E24 "h"
 *   insn=0x0000000000331E28 string=0x0000000000331E2C "I"
 *   insn=0x0000000000331E30 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000331E40 string=0x0000000000331E44 "k"
 *   insn=0x0000000000331E44 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000331E48 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000331E54 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000331E60 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000331E68 string=0x0000000000331E6C "h"
 *   insn=0x0000000000331E68 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000331E6C string=0x0000000000331E70 "h"
 *   insn=0x0000000000331E70 string=0x0000000000331E74 "7"
 *   insn=0x0000000000331E78 string=0x0000000000331E7C "i"
 *   insn=0x0000000000331E7C string=0x0000000000331E80 ""
 *   insn=0x0000000000331E88 string=0x0000000000331E8C "h*@"
 *   insn=0x0000000000331E94 string=0x0000000000331E98 "i"
 *   insn=0x0000000000331E98 string=0x0000000000331E9C ""
 *   insn=0x0000000000331EA4 string=0x0000000000331EA8 "h*@"
 *   insn=0x0000000000331EB4 string=0x0000000000331EB8 ""
 *   insn=0x0000000000331EC8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000331ED0 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000331ED8 string=0x0000000000331EDC "h"
 *   insn=0x0000000000331EDC string=0x0000000000331EE0 ")"
 *   insn=0x0000000000331EE8 string=0x0000000000331EEC ")"
 *   insn=0x0000000000331EEC string=0x0000000000331EF0 "("
 *   insn=0x0000000000331EF8 string=0x0000000000331EFC "h*@"
 *   insn=0x0000000000331F08 string=0x0000000000331F0C ""
 *   insn=0x0000000000331F20 string=0x0000000000331F24 "$"
 *   insn=0x0000000000331F24 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000331F2C string=0x0000000000331F30 "h"
 *   insn=0x0000000000331F30 string=0x0000000000331F34 ")"
 *   insn=0x0000000000331F3C string=0x0000000000331F40 ")"
 *   insn=0x0000000000331F40 string=0x0000000000331F44 "("
 *   insn=0x0000000000331F48 string=0x0000000000331F4C "-"
 *   insn=0x0000000000331F4C string=0x00000000001F3800 "P'"
 *   insn=0x0000000000331F74 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000331F84 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000331F88 string=0x0000000000331F8C "N>\t"
 *   insn=0x0000000000331F9C string=0x0000000000331FA0 "I>\t"
 *   insn=0x0000000000331FB4 string=0x0000000000331FB8 "]B"
 *   insn=0x0000000000331FBC string=0x0000000000331FC0 "A"
 *   insn=0x0000000000331FC0 string=0x0000000000331FC4 "h"
 *   insn=0x0000000000331FC8 string=0x0000000000331FCC ""
 *   insn=0x0000000000331FCC string=0x0000000000331FD0 ""
 *   insn=0x0000000000331FD4 string=0x0000000000331FD8 "`"
 *   insn=0x0000000000331FD8 string=0x0000000000331FDC "`"
 *   insn=0x0000000000331FE0 string=0x0000000000331FE4 ""
 *   insn=0x0000000000331FE0 string=0x0000000000331FF0 "`"
 *   insn=0x0000000000331FE4 string=0x0000000000331FE8 ""
 *   insn=0x0000000000331FF4 string=0x0000000000331FF8 ""
 *   insn=0x0000000000331FF8 string=0x0000000000331FFC ""
 *   insn=0x000000000033200C string=0x0000000000332010 "|"
 *   insn=0x0000000000332018 string=0x000000000033201C "y"
 *   insn=0x0000000000332020 string=0x0000000000332024 "(>\t"
 *   insn=0x0000000000332038 string=0x000000000033203C ""
 *   insn=0x0000000000332040 string=0x0000000000332044 ""
 *   insn=0x000000000033204C string=0x0000000000332050 "`"
 *   insn=0x0000000000332054 string=0x0000000000332058 ""
 *   insn=0x0000000000332054 string=0x0000000000332064 "`"
 *   insn=0x0000000000332058 string=0x000000000033205C ""
 *   insn=0x0000000000332068 string=0x000000000033206C ""
 *   insn=0x0000000000332078 string=0x000000000033207C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PortalEffectComponent::PortalEffectComponent(
        Caver::Proto::PortalEffectComponent *this,
        const Caver::Proto::PortalEffectComponent *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C96A8;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::PortalEffectComponent::MergeFrom();
}

