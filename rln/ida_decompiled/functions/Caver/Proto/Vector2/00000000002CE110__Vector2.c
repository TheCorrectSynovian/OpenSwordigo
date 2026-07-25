/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE110
 * Mangled: _ZN5Caver5Proto7Vector2C2ERKS1_
 * Demangled: Caver::Proto::Vector2::Vector2(Caver::Proto::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x00000000002CE11C string=0x00000000002CE120 ""
 *   insn=0x00000000002CE128 string=0x00000000002CE12C "A"
 *   insn=0x00000000002CE12C string=0x00000000002CE130 "h"
 *   insn=0x00000000002CE130 string=0x00000000002CE134 "#"
 *   insn=0x00000000002CE148 string=0x00000000002CE14C "-"
 *   insn=0x00000000002CE14C string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CE154 string=0x00000000002CE158 "}"
 *   insn=0x00000000002CE16C string=0x00000000002CE170 "U"
 *   insn=0x00000000002CE188 string=0x00000000002CE1C8 "hR@9"
 *   insn=0x00000000002CE18C string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002CE1A0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002CE1A4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002CE1B0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002CE1BC string=0x00000000001FA500 "0'"
 *   insn=0x00000000002CE1C0 string=0x00000000002CE1C4 ""
 *   insn=0x00000000002CE1C4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002CE1D4 string=0x00000000002CE1D8 "i"
 *   insn=0x00000000002CE1D8 string=0x00000000002CE1DC ""
 *   insn=0x00000000002CE1E4 string=0x00000000002CE1E8 "h"
 *   insn=0x00000000002CE1F0 string=0x00000000002CE1F4 "i"
 *   insn=0x00000000002CE1F4 string=0x00000000002CE1F8 ""
 *   insn=0x00000000002CE20C string=0x00000000002CE224 "+"
 *   insn=0x00000000002CE224 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CE238 string=0x00000000002CE23C "D"
 *   insn=0x00000000002CE240 string=0x00000000002CE244 ""
 *   insn=0x00000000002CE244 string=0x00000000002CE248 "A"
 *   insn=0x00000000002CE248 string=0x00000000002CE24C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Vector2::Vector2(Caver::Proto::Vector2 *this, const Caver::Proto::Vector2 *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C5A08;
  Caver::Proto::Vector2::MergeFrom(this, a2);
}

