/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336E24
 * Mangled: _ZN5Caver5Proto14SpellComponentC2ERKS1_
 * Demangled: Caver::Proto::SpellComponent::SpellComponent(Caver::Proto::SpellComponent const&)
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
 *   0x00000000001F9960  Caver::Proto::SpellComponent::MergeFrom(Caver::Proto::SpellComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x0000000000336E30 string=0x0000000000336E34 ""
 *   insn=0x0000000000336E40 string=0x0000000000336E44 "A"
 *   insn=0x0000000000336E44 string=0x0000000000336E48 "h"
 *   insn=0x0000000000336E50 string=0x00000000001F9960 "0'"
 *   insn=0x0000000000336E68 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000336E70 string=0x0000000000336E74 "6]"
 *   insn=0x0000000000336E88 string=0x0000000000336E8C "V"
 *   insn=0x0000000000336EA4 string=0x0000000000336EA8 "hb@9h"
 *   insn=0x0000000000336EA8 string=0x0000000000336EAC "h"
 *   insn=0x0000000000336EAC string=0x0000000000336EB0 "%"
 *   insn=0x0000000000336EB4 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000336EC4 string=0x0000000000336EC8 "J"
 *   insn=0x0000000000336EC8 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000336ECC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000336ED8 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000336EE4 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000336EEC string=0x0000000000336EF0 "hb@9"
 *   insn=0x0000000000336EEC string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000336EFC string=0x0000000000336F00 ""
 *   insn=0x0000000000336F10 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000336F14 string=0x0000000000336F18 ":"
 *   insn=0x0000000000336F18 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000336F20 string=0x0000000000336F24 "h\n@"
 *   insn=0x0000000000336F24 string=0x0000000000336F28 ")]C"
 *   insn=0x0000000000336F30 string=0x0000000000336F34 ")"
 *   insn=0x0000000000336F34 string=0x0000000000336F38 "("
 *   insn=0x0000000000336F40 string=0x00000000001F37A0 "P'"
 *   insn=0x0000000000336F68 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000336F74 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000336F78 string=0x0000000000336F7C "R*\t"
 *   insn=0x0000000000336F8C string=0x0000000000336F90 "M*\t"
 *   insn=0x0000000000336FA4 string=0x0000000000336FA8 ""
 *   insn=0x0000000000336FAC string=0x0000000000336FB0 "A"
 *   insn=0x0000000000336FB0 string=0x0000000000336FB4 "h"
 *   insn=0x0000000000336FB8 string=0x0000000000336FBC "]C"
 *   insn=0x0000000000336FBC string=0x0000000000336FC0 ""
 *   insn=0x0000000000336FC8 string=0x0000000000336FCC "`\n@"
 *   insn=0x0000000000336FD0 string=0x0000000000336FD4 ""
 *   insn=0x0000000000336FD4 string=0x0000000000336FD8 ""
 *   insn=0x0000000000336FFC string=0x0000000000337000 "1*\t"
 *   insn=0x0000000000337004 string=0x0000000000337008 "h"
 *   insn=0x0000000000337008 string=0x000000000033700C "]C"
 *   insn=0x000000000033700C string=0x0000000000337010 ""
 *   insn=0x0000000000337020 string=0x0000000000337024 ""
 *   insn=0x0000000000337028 string=0x000000000033702C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpellComponent::SpellComponent(
        Caver::Proto::SpellComponent *this,
        const Caver::Proto::SpellComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C9AE0;
  *((_DWORD *)this + 6) = 0;
  Caver::Proto::SpellComponent::MergeFrom();
}

