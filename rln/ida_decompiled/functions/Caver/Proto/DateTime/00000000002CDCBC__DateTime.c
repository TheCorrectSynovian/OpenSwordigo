/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDCBC
 * Mangled: _ZN5Caver5Proto8DateTimeC2ERKS1_
 * Demangled: Caver::Proto::DateTime::DateTime(Caver::Proto::DateTime const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5480  Caver::Proto::DateTime::MergeFrom(Caver::Proto::DateTime const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x00000000002CDCC8 string=0x00000000002CDCCC "UF"
 *   insn=0x00000000002CDCD8 string=0x00000000002CDCDC "A"
 *   insn=0x00000000002CDCDC string=0x00000000002CDCE0 "h"
 *   insn=0x00000000002CDCE8 string=0x00000000001F5480 "P'"
 *   insn=0x00000000002CDCFC string=0x00000000002CDD00 "@"
 *   insn=0x00000000002CDD00 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CDD20 string=0x00000000002CDD24 "U"
 *   insn=0x00000000002CDD38 string=0x00000000002CDD3C " "
 *   insn=0x00000000002CDD3C string=0x00000000002CDD40 "hb@9"
 *   insn=0x00000000002CDD48 string=0x00000000002CDD4C "i\n@"
 *   insn=0x00000000002CDD4C string=0x00000000002CDD50 ""
 *   insn=0x00000000002CDD68 string=0x00000000002CDDC8 "B"
 *   insn=0x00000000002CDD80 string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002CDD94 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002CDD98 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002CDDA0 string=0x00000000002CDDA4 ""
 *   insn=0x00000000002CDDA4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002CDDB0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002CDDB8 string=0x00000000002CDDBC "hb@9H"
 *   insn=0x00000000002CDDB8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002CDDBC string=0x00000000002CDDC0 "H"
 *   insn=0x00000000002CDDC8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CDDD0 string=0x00000000002CDDD4 ""
 *   insn=0x00000000002CDDDC string=0x00000000002CDDE0 "["
 *   insn=0x00000000002CDDE4 string=0x00000000002CDDE8 "UF"
 *   insn=0x00000000002CDDE8 string=0x00000000002CDDEC "A"
 *   insn=0x00000000002CDDEC string=0x00000000002CDDF0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DateTime::DateTime(Caver::Proto::DateTime *this, const Caver::Proto::DateTime *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C5990;
  *((_DWORD *)this + 6) = 0;
  Caver::Proto::DateTime::MergeFrom();
}

