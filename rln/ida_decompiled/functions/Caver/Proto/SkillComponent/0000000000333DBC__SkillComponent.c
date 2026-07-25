/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333DBC
 * Mangled: _ZN5Caver5Proto14SkillComponentC2ERKS1_
 * Demangled: Caver::Proto::SkillComponent::SkillComponent(Caver::Proto::SkillComponent const&)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F77E0  Caver::Proto::SkillComponent::MergeFrom(Caver::Proto::SkillComponent const&)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 95
 *   insn=0x0000000000333DCC string=0x0000000000333DD0 "eD"
 *   insn=0x0000000000333DD8 string=0x0000000000333DDC ")"
 *   insn=0x0000000000333DDC string=0x0000000000333DE0 "A"
 *   insn=0x0000000000333DE0 string=0x0000000000333DE4 "h"
 *   insn=0x0000000000333DE8 string=0x0000000000333DEC "i~"
 *   insn=0x0000000000333DEC string=0x0000000000333DF0 "|"
 *   insn=0x0000000000333DF0 string=0x00000000001F77E0 "0'"
 *   insn=0x0000000000333E08 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000333E10 string=0x0000000000333E14 "Ni"
 *   insn=0x0000000000333E28 string=0x0000000000333E2C "V"
 *   insn=0x0000000000333E44 string=0x0000000000333E48 "h"
 *   insn=0x0000000000333E58 string=0x0000000000333E5C "A"
 *   insn=0x0000000000333E60 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000333E70 string=0x0000000000333E74 "_\t"
 *   insn=0x0000000000333E74 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000333E78 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000333E84 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000333E90 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000333E98 string=0x0000000000333E9C "h"
 *   insn=0x0000000000333E98 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000333EA0 string=0x0000000000333EA4 "/"
 *   insn=0x0000000000333EA8 string=0x0000000000333EAC "i"
 *   insn=0x0000000000333EAC string=0x0000000000333EB0 ""
 *   insn=0x0000000000333EB8 string=0x0000000000333EBC "h"@"
 *   insn=0x0000000000333ECC string=0x0000000000333ED0 "u\n@"
 *   insn=0x0000000000333ED0 string=0x0000000000333ED4 ")"
 *   insn=0x0000000000333ED4 string=0x0000000000333ED8 ""
 *   insn=0x0000000000333EEC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000333EF0 string=0x0000000000333EF4 ""
 *   insn=0x0000000000333EF4 string=0x0000000000333EF8 "a"
 *   insn=0x0000000000333EF8 string=0x0000000000333EFC ""
 *   insn=0x0000000000333F08 string=0x0000000000333F0C "h"@"
 *   insn=0x0000000000333F18 string=0x0000000000333F1C ""
 *   insn=0x0000000000333F30 string=0x0000000000333F34 "g"
 *   insn=0x0000000000333F34 string=0x00000000001F7CD0 "0'"
 *   insn=0x0000000000333F3C string=0x0000000000333F40 "h"
 *   insn=0x0000000000333F40 string=0x0000000000333F44 ")"
 *   insn=0x0000000000333F4C string=0x0000000000333F50 ")"
 *   insn=0x0000000000333F50 string=0x0000000000333F54 "("
 *   insn=0x0000000000333F84 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000333F90 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000333F94 string=0x0000000000333F98 "K6\t"
 *   insn=0x0000000000333FA8 string=0x0000000000333FAC "F6\t"
 *   insn=0x0000000000333FC0 string=0x0000000000333FC4 "T"
 *   insn=0x0000000000333FD8 string=0x0000000000333FDC "`\n@"
 *   insn=0x0000000000333FDC string=0x0000000000333FE0 "eD"
 *   insn=0x0000000000333FE0 string=0x0000000000333FE4 ")"
 *   insn=0x0000000000333FE4 string=0x0000000000333FE8 "A"
 *   insn=0x0000000000333FEC string=0x0000000000333FF0 "h"
 *   insn=0x0000000000333FF0 string=0x0000000000333FF4 " "
 *   insn=0x0000000000333FF8 string=0x0000000000333FFC "\t"
 *   insn=0x0000000000334000 string=0x0000000000334004 "J"
 *   insn=0x0000000000334004 string=0x0000000000334008 "(a"
 *   insn=0x0000000000334018 string=0x000000000033401C ""
 *   insn=0x000000000033401C string=0x0000000000334020 ""
 *   insn=0x0000000000334028 string=0x000000000033402C "`"
 *   insn=0x0000000000334030 string=0x0000000000334034 ""
 *   insn=0x0000000000334034 string=0x0000000000334038 ""
 *   insn=0x0000000000334040 string=0x0000000000334044 "o"
 *   insn=0x0000000000334050 string=0x0000000000334054 "!"
 *   insn=0x0000000000334068 string=0x000000000033406C "J=G"
 *   insn=0x000000000033406C string=0x0000000000334070 ")!"
 *   insn=0x0000000000334074 string=0x0000000000334078 "*"
 *   insn=0x0000000000334074 string=0x000000000033408C "*"
 *   insn=0x0000000000334078 string=0x000000000033407C "K"
 *   insn=0x000000000033407C string=0x0000000000334080 "+"
 *   insn=0x0000000000334088 string=0x0000000000334098 "_"
 *   insn=0x000000000033408C string=0x0000000000334090 "K"
 *   insn=0x0000000000334090 string=0x0000000000334094 "+"
 *   insn=0x00000000003340C0 string=0x00000000003340C4 "O"
 *   insn=0x00000000003340E0 string=0x00000000003340E4 "T"
 *   insn=0x00000000003340F4 string=0x00000000003340F8 "`\n@"
 *   insn=0x00000000003340F8 string=0x00000000003340FC ""
 *   insn=0x0000000000334100 string=0x0000000000334104 " "
 *   insn=0x0000000000334108 string=0x000000000033410C "\t"
 *   insn=0x0000000000334110 string=0x0000000000334114 "J"
 *   insn=0x0000000000334114 string=0x0000000000334118 "(a"
 *   insn=0x0000000000334120 string=0x0000000000334124 "c"
 *   insn=0x0000000000334128 string=0x000000000033412C ""
 *   insn=0x000000000033412C string=0x0000000000334130 ""
 *   insn=0x0000000000334138 string=0x000000000033413C "`"
 *   insn=0x0000000000334140 string=0x0000000000334144 ""
 *   insn=0x0000000000334144 string=0x0000000000334148 ""
 *   insn=0x0000000000334158 string=0x000000000033415C "!"
 *   insn=0x000000000033415C string=0x00000000003341C0 "D"
 *   insn=0x0000000000334170 string=0x0000000000334174 "J=G"
 *   insn=0x0000000000334174 string=0x0000000000334178 ")!"
 *   insn=0x000000000033417C string=0x0000000000334180 "*"
 *   insn=0x000000000033417C string=0x0000000000334194 "*"
 *   insn=0x0000000000334180 string=0x0000000000334184 "K"
 *   insn=0x0000000000334184 string=0x0000000000334188 "+"
 *   insn=0x0000000000334190 string=0x00000000003341A0 "_"
 *   insn=0x0000000000334194 string=0x0000000000334198 "K"
 *   insn=0x0000000000334198 string=0x000000000033419C "+"
 *   insn=0x00000000003341B0 string=0x00000000003341B4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SkillComponent::SkillComponent(
        Caver::Proto::SkillComponent *this,
        const Caver::Proto::SkillComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *(_QWORD *)this = off_6C9810;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::SkillComponent::_default_cast_object_template_name_;
  *((_QWORD *)this + 3) = 0;
  Caver::Proto::SkillComponent::MergeFrom(this, a2);
}

