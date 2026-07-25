/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CFA80
 * Mangled: _ZN5Caver5Proto6CircleC2ERKS1_
 * Demangled: Caver::Proto::Circle::Circle(Caver::Proto::Circle const&)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA380  Caver::Proto::Circle::MergeFrom(Caver::Proto::Circle const&)
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x00000000002CFA8C string=0x00000000002CFA90 ""
 *   insn=0x00000000002CFA9C string=0x00000000002CFAA0 "A"
 *   insn=0x00000000002CFAA0 string=0x00000000002CFAA4 "h"
 *   insn=0x00000000002CFAA4 string=0x00000000002CFAA8 "6"
 *   insn=0x00000000002CFAA8 string=0x00000000001FA380 "0'"
 *   insn=0x00000000002CFAC0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CFAC8 string=0x00000000002CFACC " "
 *   insn=0x00000000002CFAE0 string=0x00000000002CFAE4 "U"
 *   insn=0x00000000002CFAFC string=0x00000000002CFB3C "hr@9"
 *   insn=0x00000000002CFB00 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002CFB10 string=0x00000000002CFB14 "7"
 *   insn=0x00000000002CFB14 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002CFB18 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002CFB24 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002CFB2C string=0x00000000002CFB30 "t"
 *   insn=0x00000000002CFB30 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002CFB38 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002CFB4C string=0x00000000002CFB50 ""
 *   insn=0x00000000002CFB54 string=0x00000000002CFB58 " "
 *   insn=0x00000000002CFB60 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CFB64 string=0x00000000002CFB68 ""
 *   insn=0x00000000002CFB6C string=0x00000000002CFB70 "A"
 *   insn=0x00000000002CFB70 string=0x00000000002CFB74 ""
 *   insn=0x00000000002CFB7C string=0x00000000002CFB80 "h\n@"
 *   insn=0x00000000002CFB80 string=0x00000000002CFB84 ")YC"
 *   insn=0x00000000002CFB88 string=0x00000000002CFB8C ")"
 *   insn=0x00000000002CFB8C string=0x00000000002CFB90 "("
 *   insn=0x00000000002CFB98 string=0x00000000002CFB9C "h"
 *   insn=0x00000000002CFBA4 string=0x00000000002CFBA8 "i"
 *   insn=0x00000000002CFBA8 string=0x00000000002CFBAC ""
 *   insn=0x00000000002CFBD8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CFBE8 string=0x00000000002CFBEC "6"
 *   insn=0x00000000002CFC00 string=0x00000000002CFC04 ""
 *   insn=0x00000000002CFC08 string=0x00000000002CFC0C "A"
 *   insn=0x00000000002CFC0C string=0x00000000002CFC10 "h"
 *   insn=0x00000000002CFC14 string=0x00000000002CFC18 "YC"
 *   insn=0x00000000002CFC18 string=0x00000000002CFC1C ""
 *   insn=0x00000000002CFC24 string=0x00000000002CFC28 "`\n@"
 *   insn=0x00000000002CFC2C string=0x00000000002CFC30 ""
 *   insn=0x00000000002CFC30 string=0x00000000002CFC34 ""
 *   insn=0x00000000002CFC44 string=0x00000000002CFC48 "n"
 *   insn=0x00000000002CFC50 string=0x00000000002CFC54 "k"
 *   insn=0x00000000002CFC64 string=0x00000000002CFC68 "YC"
 *   insn=0x00000000002CFC68 string=0x00000000002CFC6C ""
 *   insn=0x00000000002CFC7C string=0x00000000002CFC80 ""
 *   insn=0x00000000002CFC84 string=0x00000000002CFC88 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Circle::Circle(Caver::Proto::Circle *this, const Caver::Proto::Circle *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6C5BE8;
  Caver::Proto::Circle::MergeFrom(this, a2);
}

