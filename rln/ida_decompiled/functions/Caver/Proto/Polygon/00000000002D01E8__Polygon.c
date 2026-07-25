/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D01E8
 * Mangled: _ZN5Caver5Proto7PolygonC2ERKS1_
 * Demangled: Caver::Proto::Polygon::Polygon(Caver::Proto::Polygon const&)
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
 *   0x00000000001FE8B0  Caver::Proto::Polygon::MergeFrom(Caver::Proto::Polygon const&)
 *   0x00000000002032A0  google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Vector2> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x00000000002D01F8 string=0x00000000002D01FC ""
 *   insn=0x00000000002D0200 string=0x00000000002D0204 "t"
 *   insn=0x00000000002D020C string=0x00000000002D0210 "A"
 *   insn=0x00000000002D0210 string=0x00000000002D0214 "t~"
 *   insn=0x00000000002D0218 string=0x00000000002D021C "i""
 *   insn=0x00000000002D021C string=0x00000000002D0220 "j"
 *   insn=0x00000000002D0220 string=0x00000000002D0224 "h"
 *   insn=0x00000000002D0240 string=0x00000000002D0244 "h\n@"
 *   insn=0x00000000002D0248 string=0x00000000002D024C "?"
 *   insn=0x00000000002D025C string=0x00000000002D0260 ""
 *   insn=0x00000000002D0260 string=0x00000000002D0264 ""
 *   insn=0x00000000002D0268 string=0x00000000002D026C "i"
 *   insn=0x00000000002D026C string=0x00000000002D0270 "h\n@"
 *   insn=0x00000000002D0284 string=0x00000000002D0288 "h"
 *   insn=0x00000000002D028C string=0x00000000002D0290 "4"
 *   insn=0x00000000002D0290 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002D0298 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D02A0 string=0x00000000002D02A4 "*"
 *   insn=0x00000000002D02A4 string=0x00000000002D02A8 ")"
 *   insn=0x00000000002D02BC string=0x00000000002D02C0 "U"
 *   insn=0x00000000002D02DC string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002D02EC string=0x00000000002D02F0 "@"
 *   insn=0x00000000002D02F0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002D02F4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002D0300 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002D0308 string=0x00000000002D030C "}"
 *   insn=0x00000000002D030C string=0x00000000001FA500 "0'"
 *   insn=0x00000000002D0314 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002D0318 string=0x00000000002D031C "aB"
 *   insn=0x00000000002D0320 string=0x00000000002D0324 "hN@"
 *   insn=0x00000000002D0334 string=0x00000000002D0338 "i"A9"
 *   insn=0x00000000002D0338 string=0x00000000002D033C ""
 *   insn=0x00000000002D0344 string=0x00000000002D0348 "hN@"
 *   insn=0x00000000002D0350 string=0x00000000002D0354 "i&A9"
 *   insn=0x00000000002D0354 string=0x00000000002D0358 ""
 *   insn=0x00000000002D0388 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D0398 string=0x00000000002D039C "J"
 *   insn=0x00000000002D03B4 string=0x00000000002D03B8 "i"
 *   insn=0x00000000002D03B8 string=0x00000000002D03BC ""
 *   insn=0x00000000002D03BC string=0x00000000002D03C0 "`\n@"
 *   insn=0x00000000002D03C0 string=0x00000000002D03C4 "?"
 *   insn=0x00000000002D03C4 string=0x00000000002D03C8 "A"
 *   insn=0x00000000002D03C8 string=0x00000000002D03CC "h"
 *   insn=0x00000000002D03D0 string=0x00000000002D0404 "h"
 *   insn=0x00000000002D03D4 string=0x00000000002D03D8 "xt"
 *   insn=0x00000000002D03DC string=0x00000000002D03E0 "\t"
 *   insn=0x00000000002D03E0 string=0x00000000002D03E4 ")"
 *   insn=0x00000000002D03E8 string=0x00000000002D03EC " "
 *   insn=0x00000000002D03EC string=0x00000000002D03F0 "i"
 *   insn=0x00000000002D03F0 string=0x00000000002D03F4 "`\n@"
 *   insn=0x00000000002D0408 string=0x00000000002D040C "`"
 *   insn=0x00000000002D040C string=0x00000000002D0410 "@"
 *   insn=0x00000000002D0420 string=0x00000000002D0424 "w"
 *   insn=0x00000000002D042C string=0x00000000002D0430 "t"
 *   insn=0x00000000002D0434 string=0x00000000002D0438 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Polygon::Polygon(Caver::Proto::Polygon *this, const Caver::Proto::Polygon *a2)
{
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 4;
  *((_WORD *)this + 36) = 256;
  *(_QWORD *)this = off_6C5C60;
  *((_DWORD *)this + 19) = 0;
  Caver::Proto::Polygon::MergeFrom(this, a2);
}

