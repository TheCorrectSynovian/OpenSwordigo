/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7284
 * Mangled: _ZN6google8protobuf8internal17DefaultLogHandlerENS0_8LogLevelEPKciRKSs
 * Demangled: google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *
 * Callers: 6
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D7128  google::protobuf::internal::VersionString(int)
 *   0x00000000004D786C  google::protobuf::internal::LogMessage::Finish(void)
 *   0x00000000004D790C  google::protobuf::SetLogHandler(void (*)(google::protobuf::LogLevel,char const*,int,std::string const&))
 *   0x00000000004D7A4C  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *
 * Callees: 2
 *   0x00000000001F9D50  .fflush
 *   0x00000000001FDF10  .fprintf
 *
 * Referenced strings: 9
 *   insn=0x00000000004D728C string=0x00000000004D7290 "\t"
 *   insn=0x00000000004D7290 string=0x00000000004D7298 "j"
 *   insn=0x00000000004D729C string=0x00000000004D72A0 ""Y`"
 *   insn=0x00000000004D72A0 string=0x00000000004D72A4 "e"
 *   insn=0x00000000004D72A4 string=0x00000000004D72A8 "JiF"
 *   insn=0x00000000004D72B0 string=0x00000000004D72B8 "S"
 *   insn=0x00000000004D72B0 string=0x0000000000598583 "libprotobuf %s %s:%d] %s\n"
 *   insn=0x00000000004D72C8 string=0x00000000001FDF10 "0'"
 *   insn=0x00000000004D72D8 string=0x00000000001F9D50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::DefaultLogHandler(int a1, const char *a2, int a3, const char **a4)
{
  fprintf((FILE *)((char *)&_sF + 304), "libprotobuf %s %s:%d] %s\n", off_6D8230[a1], a2, a3, *a4);
  return fflush((FILE *)((char *)&_sF + 304));
}

