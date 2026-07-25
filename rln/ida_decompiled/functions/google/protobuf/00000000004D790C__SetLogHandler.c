/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D790C
 * Mangled: _ZN6google8protobuf13SetLogHandlerEPFvNS0_8LogLevelEPKciRKSsE
 * Demangled: google::protobuf::SetLogHandler(void (*)(google::protobuf::LogLevel,char const*,int,std::string const&))
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000004D7284  google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *   0x00000000004D72DC  google::protobuf::internal::NullLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *
 * Referenced strings: 5
 *   insn=0x00000000004D790C string=0x00000000004D7910 "j"
 *   insn=0x00000000004D7910 string=0x00000000004D7914 "("
 *   insn=0x00000000004D7914 string=0x00000000004D7918 "JIC"
 *   insn=0x00000000004D7924 string=0x00000000004D7928 "J"
 *   insn=0x00000000004D792C string=0x00000000004D7930 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall google::protobuf::SetLogHandler(void (*a1)()))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *v1)(_QWORD, _QWORD, _QWORD, _QWORD); // x8
  void (*v2)(); // x10
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // x0

  v1 = off_6E8900;
  v2 = google::protobuf::internal::NullLogHandler;
  if ( (char *)off_6E8900 == (char *)google::protobuf::internal::NullLogHandler )
    v1 = 0;
  if ( a1 )
    v2 = a1;
  result = v1;
  off_6E8900 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v2;
  return result;
}

