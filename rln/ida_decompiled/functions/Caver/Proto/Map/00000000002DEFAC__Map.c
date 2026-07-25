/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DEFAC
 * Mangled: _ZN5Caver5Proto3MapC2ERKS1_
 * Demangled: Caver::Proto::Map::Map(Caver::Proto::Map const&)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC4C0  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *   0x0000000000200920  Caver::Proto::Map::MergeFrom(Caver::Proto::Map const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 53
 *   insn=0x00000000002DEFB8 string=0x00000000002DEFBC "H "
 *   insn=0x00000000002DEFBC string=0x00000000002DEFC0 ""
 *   insn=0x00000000002DEFC4 string=0x00000000002DEFC8 "t"
 *   insn=0x00000000002DEFCC string=0x00000000002DEFD0 "A"
 *   insn=0x00000000002DEFD0 string=0x00000000002DEFD4 "t~"
 *   insn=0x00000000002DEFD8 string=0x00000000002DEFDC "i""
 *   insn=0x00000000002DEFDC string=0x00000000002DEFE0 "h"
 *   insn=0x00000000002DEFE4 string=0x00000000002DEFE8 "N"
 *   insn=0x00000000002DEFFC string=0x00000000002DF000 "h\n@"
 *   insn=0x00000000002DF004 string=0x00000000002DF008 "?"
 *   insn=0x00000000002DF018 string=0x00000000002DF01C ""
 *   insn=0x00000000002DF01C string=0x00000000002DF020 ""
 *   insn=0x00000000002DF024 string=0x00000000002DF028 "i"
 *   insn=0x00000000002DF028 string=0x00000000002DF02C "h\n@"
 *   insn=0x00000000002DF040 string=0x00000000002DF044 "h"
 *   insn=0x00000000002DF04C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002DF050 string=0x00000000002DF054 "ka"
 *   insn=0x00000000002DF054 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002DF078 string=0x00000000002DF07C "U"
 *   insn=0x00000000002DF094 string=0x00000000002DF098 "B"
 *   insn=0x00000000002DF098 string=0x000000000058AB7C "./../../../../Source/Caver/Content/Proto/GameData.pb.cc"
 *   insn=0x00000000002DF0A4 string=0x00000000002DF0A8 "C"
 *   insn=0x00000000002DF0AC string=0x00000000002DF0B0 "A"
 *   insn=0x00000000002DF0AC string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002DF0B0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002DF0B8 string=0x00000000002DF0BC "Ut"
 *   insn=0x00000000002DF0BC string=0x00000000001FC210 "0'"
 *   insn=0x00000000002DF0C8 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002DF0CC string=0x00000000002DF0D0 "Hl"
 *   insn=0x00000000002DF0D0 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002DF0D4 string=0x00000000002DF0D8 "aB"
 *   insn=0x00000000002DF0DC string=0x00000000001FC4C0 "0'"
 *   insn=0x00000000002DF0EC string=0x00000000002DF104 "s\"
 *   insn=0x00000000002DF104 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002DF10C string=0x00000000002DF110 "8l"
 *   insn=0x00000000002DF12C string=0x00000000002DF130 "( "
 *   insn=0x00000000002DF130 string=0x00000000002DF134 "i"
 *   insn=0x00000000002DF134 string=0x00000000002DF138 ""
 *   insn=0x00000000002DF138 string=0x00000000002DF13C "`\n@"
 *   insn=0x00000000002DF13C string=0x00000000002DF140 "?"
 *   insn=0x00000000002DF140 string=0x00000000002DF144 "A"
 *   insn=0x00000000002DF144 string=0x00000000002DF148 "h"
 *   insn=0x00000000002DF14C string=0x00000000002DF180 "h"
 *   insn=0x00000000002DF150 string=0x00000000002DF154 "xt"
 *   insn=0x00000000002DF158 string=0x00000000002DF15C "\t"
 *   insn=0x00000000002DF15C string=0x00000000002DF160 ")"
 *   insn=0x00000000002DF164 string=0x00000000002DF168 " "
 *   insn=0x00000000002DF168 string=0x00000000002DF16C "i"
 *   insn=0x00000000002DF16C string=0x00000000002DF170 "`\n@"
 *   insn=0x00000000002DF184 string=0x00000000002DF188 "`"
 *   insn=0x00000000002DF188 string=0x00000000002DF18C "@"
 *   insn=0x00000000002DF18C string=0x00000000002DF190 "tW"
 *   insn=0x00000000002DF1B4 string=0x00000000002DF1B8 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Map::Map(Caver::Proto::Map *this, const Caver::Proto::Map *a2)
{
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 4;
  *(_QWORD *)this = off_6C6778;
  *((_DWORD *)this + 18) = 0;
  Caver::Proto::Map::MergeFrom(this, a2);
}

