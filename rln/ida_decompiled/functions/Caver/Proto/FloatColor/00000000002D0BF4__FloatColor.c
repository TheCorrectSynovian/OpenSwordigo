/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0BF4
 * Mangled: _ZN5Caver5Proto10FloatColorC2ERKS1_
 * Demangled: Caver::Proto::FloatColor::FloatColor(Caver::Proto::FloatColor const&)
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
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000002D0C00 string=0x00000000002D0C04 ""
 *   insn=0x00000000002D0C10 string=0x00000000002D0C14 "A"
 *   insn=0x00000000002D0C14 string=0x00000000002D0C18 "h~"
 *   insn=0x00000000002D0C18 string=0x00000000002D0C1C "]"
 *   insn=0x00000000002D0C30 string=0x00000000002D0C34 "s"
 *   insn=0x00000000002D0C34 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D0C38 string=0x00000000002D0C3C """
 *   insn=0x00000000002D0C54 string=0x00000000002D0C58 "U"
 *   insn=0x00000000002D0C70 string=0x00000000002D0CB0 "hr@9("
 *   insn=0x00000000002D0C74 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002D0C88 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002D0C8C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002D0C94 string=0x00000000002D0C98 "^"
 *   insn=0x00000000002D0C98 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002D0CA4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002D0CA8 string=0x00000000002D0CAC "Q"
 *   insn=0x00000000002D0CAC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002D0CB0 string=0x00000000002D0CB4 "("
 *   insn=0x00000000002D0CB4 string=0x00000000002D0CB8 "("
 *   insn=0x00000000002D0CC8 string=0x00000000002D0CCC "i"
 *   insn=0x00000000002D0CCC string=0x00000000002D0CD0 ""
 *   insn=0x00000000002D0CE4 string=0x00000000002D0D54 "_"
 *   insn=0x00000000002D0CFC string=0x00000000002D0D00 "i"
 *   insn=0x00000000002D0D00 string=0x00000000002D0D04 ""
 *   insn=0x00000000002D0D0C string=0x00000000002D0D10 "h"
 *   insn=0x00000000002D0D10 string=0x00000000002D0D14 "h"
 *   insn=0x00000000002D0D18 string=0x00000000002D0D1C "i"
 *   insn=0x00000000002D0D1C string=0x00000000002D0D20 ""
 *   insn=0x00000000002D0D28 string=0x00000000002D0D2C "h"
 *   insn=0x00000000002D0D34 string=0x00000000002D0D38 "i"
 *   insn=0x00000000002D0D38 string=0x00000000002D0D3C ""
 *   insn=0x00000000002D0D44 string=0x00000000002D0D48 "h"
 *   insn=0x00000000002D0D54 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D0D5C string=0x00000000002D0D60 "$"
 *   insn=0x00000000002D0D68 string=0x00000000002D0D6C "x"
 *   insn=0x00000000002D0D70 string=0x00000000002D0D74 ""
 *   insn=0x00000000002D0D74 string=0x00000000002D0D78 "A"
 *   insn=0x00000000002D0D78 string=0x00000000002D0D7C ""
 *   insn=0x00000000002D0D7C string=0x00000000002D0D80 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::FloatColor::FloatColor(
        Caver::Proto::FloatColor *this,
        const Caver::Proto::FloatColor *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 1065353216;
  *(_QWORD *)this = off_6C5CD8;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::FloatColor::MergeFrom(this, a2);
}

