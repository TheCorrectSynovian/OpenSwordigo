/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335C6C
 * Mangled: _ZN5Caver5Proto18MagicBombComponentC2ERKS1_
 * Demangled: Caver::Proto::MagicBombComponent::MagicBombComponent(Caver::Proto::MagicBombComponent const&)
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
 *   0x00000000001FC5C0  Caver::Proto::MagicBombComponent::MergeFrom(Caver::Proto::MagicBombComponent const&)
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x0000000000335C78 string=0x0000000000335C7C ""
 *   insn=0x0000000000335C88 string=0x0000000000335C8C "A"
 *   insn=0x0000000000335C8C string=0x0000000000335C90 "h"
 *   insn=0x0000000000335C94 string=0x0000000000335C98 "J"
 *   insn=0x0000000000335C98 string=0x00000000001FC5C0 "0'"
 *   insn=0x0000000000335CAC string=0x0000000000335CB0 "T"
 *   insn=0x0000000000335CB0 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000335CD0 string=0x0000000000335CD4 "V"
 *   insn=0x0000000000335CEC string=0x0000000000335CF0 "hb@9h"
 *   insn=0x0000000000335CF0 string=0x0000000000335CF4 "h"
 *   insn=0x0000000000335CF4 string=0x0000000000335CF8 "%"
 *   insn=0x0000000000335CFC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000335D08 string=0x0000000000335D0C "C["
 *   insn=0x0000000000335D10 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000335D14 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000335D1C string=0x0000000000335D20 "<"
 *   insn=0x0000000000335D20 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000335D2C string=0x00000000001FA500 "0'"
 *   insn=0x0000000000335D30 string=0x0000000000335D34 "/"
 *   insn=0x0000000000335D34 string=0x0000000000335D38 "hb@9"
 *   insn=0x0000000000335D34 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000335D44 string=0x0000000000335D48 ""
 *   insn=0x0000000000335D54 string=0x0000000000335D58 """
 *   insn=0x0000000000335D58 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000335D5C string=0x0000000000335D60 "p"
 *   insn=0x0000000000335D60 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000335D68 string=0x0000000000335D6C "h\n@"
 *   insn=0x0000000000335D6C string=0x0000000000335D70 ")"
 *   insn=0x0000000000335D78 string=0x0000000000335D7C ")"
 *   insn=0x0000000000335D7C string=0x0000000000335D80 "("
 *   insn=0x0000000000335D98 string=0x0000000000335DB0 "H"
 *   insn=0x0000000000335DB0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000335DB8 string=0x0000000000335DBC "="
 *   insn=0x0000000000335DBC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000335DCC string=0x0000000000335DD0 ""
 *   insn=0x0000000000335DD8 string=0x0000000000335DDC "\a"
 *   insn=0x0000000000335DEC string=0x0000000000335DF0 ""
 *   insn=0x0000000000335DF4 string=0x0000000000335DF8 "A"
 *   insn=0x0000000000335DF8 string=0x0000000000335DFC "h"
 *   insn=0x0000000000335E00 string=0x0000000000335E04 ""
 *   insn=0x0000000000335E04 string=0x0000000000335E08 ""
 *   insn=0x0000000000335E10 string=0x0000000000335E14 "`\n@"
 *   insn=0x0000000000335E18 string=0x0000000000335E1C ""
 *   insn=0x0000000000335E1C string=0x0000000000335E20 ""
 *   insn=0x0000000000335E48 string=0x0000000000335E4C "@a"
 *   insn=0x0000000000335E50 string=0x0000000000335E54 ""
 *   insn=0x0000000000335E54 string=0x0000000000335E58 ""
 *   insn=0x0000000000335E68 string=0x0000000000335E6C ""
 *   insn=0x0000000000335E70 string=0x0000000000335E74 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicBombComponent::MagicBombComponent(
        Caver::Proto::MagicBombComponent *this,
        const Caver::Proto::MagicBombComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C99F0;
  *((_DWORD *)this + 6) = 0;
  Caver::Proto::MagicBombComponent::MergeFrom();
}

