/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032A9BC
 * Mangled: _ZN5Caver5Proto34SwingableWeaponControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(Caver::Proto::SwingableWeaponControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6D20  Caver::Proto::SwingableWeaponControllerComponent::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000200620  Caver::Proto::SwingableWeaponControllerComponent::MergeFrom(Caver::Proto::SwingableWeaponControllerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 92
 *   insn=0x000000000032A9CC string=0x000000000032A9D0 ""
 *   insn=0x000000000032A9D8 string=0x000000000032A9DC ")\tB"
 *   insn=0x000000000032A9E0 string=0x000000000032A9E4 "JqD"
 *   insn=0x000000000032A9E4 string=0x000000000032A9E8 "A"
 *   insn=0x000000000032A9E8 string=0x000000000032A9EC " "
 *   insn=0x000000000032A9EC string=0x000000000032A9F0 "h"
 *   insn=0x000000000032A9F0 string=0x000000000032A9F4 "@"
 *   insn=0x000000000032A9F4 string=0x000000000032A9F8 "`"
 *   insn=0x000000000032A9FC string=0x000000000032AA00 "W"
 *   insn=0x000000000032AA18 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032AA20 string=0x000000000032AA24 "J"
 *   insn=0x000000000032AA38 string=0x000000000032AA3C "V"
 *   insn=0x000000000032AA58 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032AA68 string=0x000000000032AA6C "a."
 *   insn=0x000000000032AA6C string=0x00000000001F63F0 "0'"
 *   insn=0x000000000032AA70 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032AA7C string=0x00000000001FC210 "0'"
 *   insn=0x000000000032AA88 string=0x00000000001FA500 "0'"
 *   insn=0x000000000032AA90 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000032AA94 string=0x000000000032AA98 "H"
 *   insn=0x000000000032AA9C string=0x000000000032AAA0 "H"
 *   insn=0x000000000032AA9C string=0x000000000032AAAC "h"@"
 *   insn=0x000000000032AAA4 string=0x000000000032AAA8 "."
 *   insn=0x000000000032AAB0 string=0x000000000032AAB4 ""
 *   insn=0x000000000032AAB4 string=0x000000000032AAB8 "h""
 *   insn=0x000000000032AAB8 string=0x000000000032AABC "i"
 *   insn=0x000000000032AAC0 string=0x000000000032AAC4 ""
 *   insn=0x000000000032AAC8 string=0x000000000032AACC "h"@"
 *   insn=0x000000000032AACC string=0x000000000032AAD0 "`\n@"
 *   insn=0x000000000032AAD4 string=0x000000000032AAD8 ")\tB"
 *   insn=0x000000000032AAD8 string=0x000000000032AADC ""
 *   insn=0x000000000032AADC string=0x000000000032AAE0 "h""
 *   insn=0x000000000032AAF0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032AAF4 string=0x000000000032AAF8 ""
 *   insn=0x000000000032AAF8 string=0x000000000032AAFC "a"
 *   insn=0x000000000032AAFC string=0x000000000032AB00 ""
 *   insn=0x000000000032AB00 string=0x000000000032AB04 "`\n"
 *   insn=0x000000000032AB10 string=0x000000000032AB14 "h"
 *   insn=0x000000000032AB18 string=0x000000000032AB1C "h"@"
 *   insn=0x000000000032AB1C string=0x000000000032AB20 "`"
 *   insn=0x000000000032AB24 string=0x000000000032AB28 ")qD"
 *   insn=0x000000000032AB28 string=0x000000000032AB2C ""
 *   insn=0x000000000032AB2C string=0x000000000032AB30 "h""
 *   insn=0x000000000032AB44 string=0x000000000032AB48 ""
 *   insn=0x000000000032AB48 string=0x000000000032AB4C "a"
 *   insn=0x000000000032AB4C string=0x000000000032AB50 ""
 *   insn=0x000000000032AB50 string=0x000000000032AB54 "`"
 *   insn=0x000000000032AB84 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032AB94 string=0x000000000032AB98 "K[\t"
 *   insn=0x000000000032ABAC string=0x000000000032ABB0 ""
 *   insn=0x000000000032ABB4 string=0x000000000032ABB8 "A"
 *   insn=0x000000000032ABB8 string=0x000000000032ABBC "h"
 *   insn=0x000000000032ABBC string=0x000000000032ABC0 "X0"
 *   insn=0x000000000032ABC0 string=0x00000000001F6D20 "0'"
 *   insn=0x000000000032ABE0 string=0x000000000032ABE4 "8[\t"
 *   insn=0x000000000032ABF8 string=0x000000000032ABFC "T"
 *   insn=0x000000000032AC0C string=0x000000000032AC10 "`\n@"
 *   insn=0x000000000032AC10 string=0x000000000032AC14 "\tB"
 *   insn=0x000000000032AC18 string=0x000000000032AC1C " "
 *   insn=0x000000000032AC20 string=0x000000000032AC24 "\t"
 *   insn=0x000000000032AC28 string=0x000000000032AC2C "J"
 *   insn=0x000000000032AC2C string=0x000000000032AC30 "(a"
 *   insn=0x000000000032AC3C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032AC40 string=0x000000000032AC44 "s"
 *   insn=0x000000000032AC44 string=0x000000000032AC48 "qD"
 *   insn=0x000000000032AC4C string=0x000000000032AC50 "@"
 *   insn=0x000000000032AC50 string=0x000000000032AC54 "3"
 *   insn=0x000000000032AC54 string=0x000000000032AC58 "h"
 *   insn=0x000000000032AC5C string=0x000000000032AC60 ")"
 *   insn=0x000000000032AC80 string=0x000000000032AC84 "A"
 *   insn=0x000000000032AC84 string=0x000000000032AD2C "i-"
 *   insn=0x000000000032AC98 string=0x000000000032AC9C "J=G"
 *   insn=0x000000000032AC9C string=0x000000000032ACA0 ")!"
 *   insn=0x000000000032ACA4 string=0x000000000032ACA8 "*"
 *   insn=0x000000000032ACA4 string=0x000000000032ACE0 "*"
 *   insn=0x000000000032ACA8 string=0x000000000032ACAC "K"
 *   insn=0x000000000032ACAC string=0x000000000032ACB0 "+"
 *   insn=0x000000000032ACB4 string=0x000000000032ACB8 ""
 *   insn=0x000000000032ACB8 string=0x000000000032ACEC "_"
 *   insn=0x000000000032ACBC string=0x000000000032ACC0 ")=G"
 *   insn=0x000000000032ACC0 string=0x000000000032ACC4 "!"
 *   insn=0x000000000032ACC4 string=0x000000000032ACC8 ")"
 *   insn=0x000000000032ACC8 string=0x000000000032ACCC "\t"
 *   insn=0x000000000032ACC8 string=0x000000000032AD0C "\t"
 *   insn=0x000000000032ACCC string=0x000000000032ACD0 "*"
 *   insn=0x000000000032ACD0 string=0x000000000032ACD4 "\n"
 *   insn=0x000000000032ACDC string=0x000000000032AD18 "?"
 *   insn=0x000000000032ACE0 string=0x000000000032ACE4 "K"
 *   insn=0x000000000032ACE4 string=0x000000000032ACE8 "+"
 *   insn=0x000000000032ACEC string=0x000000000032ACF0 "l"
 *   insn=0x000000000032AD0C string=0x000000000032AD10 "*"
 *   insn=0x000000000032AD10 string=0x000000000032AD14 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(
        Caver::Proto::SwingableWeaponControllerComponent *this,
        const Caver::Proto::SwingableWeaponControllerComponent *a2)
{
  __int128 v2; // q0
  long double result; // q0

  *((_QWORD *)this + 1) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::SwingableWeaponControllerComponent::_default_controlling_bone_name_;
  *(_QWORD *)this = off_6C9180;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::SwingableWeaponControllerComponent::_default_weapon_template_name_;
  *((_OWORD *)this + 1) = v2;
  *((_DWORD *)this + 8) = 0;
  Caver::Proto::SwingableWeaponControllerComponent::MergeFrom(this, a2);
  return result;
}

