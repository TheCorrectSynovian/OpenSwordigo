/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3744
 * Mangled: _ZN6google8protobuf2io16CodedInputStream25PrintTotalBytesLimitErrorEv
 * Demangled: google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(void)
 *
 * Callers: 1
 *   0x00000000001F97A0  google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(void)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000201FD0  google::protobuf::internal::LogMessage::operator<<(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x00000000004E3750 string=0x00000000004E3754 "T"
 *   insn=0x00000000004E375C string=0x00000000005990AA "./../../../../Dependencies/protobuf/src/google/protobuf/io/coded_stream.cc"
 *   insn=0x00000000004E3760 string=0x00000000004E3764 "B"
 *   insn=0x00000000004E376C string=0x00000000004E3770 "c"
 *   insn=0x00000000004E3778 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004E377C string=0x00000000005990F5 "A protocol message was rejected because it was too big (more than "
 *   insn=0x00000000004E3788 string=0x00000000004E378C "a2@"
 *   insn=0x00000000004E3788 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004E3794 string=0x0000000000599138 " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in google/protobuf/io/coded_stream.h."
 *   insn=0x00000000004E37A4 string=0x00000000004E37A8 "V["
 *   insn=0x00000000004E37A8 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004E37B0 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004E37D4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E37E4 string=0x00000000004E37E8 "7x"
 *   insn=0x00000000004E37F4 string=0x00000000004E37F8 "\n"
 *   insn=0x00000000004E37F8 string=0x00000000004E37FC "\t"
 *   insn=0x00000000004E37FC string=0x00000000004E3800 ")"
 *   insn=0x00000000004E3800 string=0x00000000004E3804 "?"
 *   insn=0x00000000004E3804 string=0x00000000004E3808 "J"
 *   insn=0x00000000004E3808 string=0x00000000004E380C ",@"
 *   insn=0x00000000004E3808 string=0x00000000004E3830 "I"
 *   insn=0x00000000004E3810 string=0x00000000004E3814 "k"
 *   insn=0x00000000004E3818 string=0x00000000004E381C "I"
 *   insn=0x00000000004E381C string=0x00000000004E3820 "\t"
 *   insn=0x00000000004E3834 string=0x00000000004E3838 "\t"
 *   insn=0x00000000004E3840 string=0x00000000004E3844 "0@"
 *   insn=0x00000000004E3848 string=0x00000000004E384C "\n"
 *   insn=0x00000000004E384C string=0x00000000004E3850 "("
 *   insn=0x00000000004E3854 string=0x00000000004E3858 "i"
 *   insn=0x00000000004E3858 string=0x00000000004E385C "!"
 *   insn=0x00000000004E385C string=0x00000000004E3860 "?"
 *   insn=0x00000000004E3864 string=0x00000000004E3868 "?"
 *   insn=0x00000000004E3864 string=0x00000000004E389C "\t"
 *   insn=0x00000000004E3874 string=0x00000000004E3878 ""
 *   insn=0x00000000004E3878 string=0x00000000004E387C "\t"
 *   insn=0x00000000004E387C string=0x00000000004E3880 "\t"
 *   insn=0x00000000004E3884 string=0x00000000004E3888 ")"
 *   insn=0x00000000004E3888 string=0x00000000004E388C " "
 *   insn=0x00000000004E389C string=0x00000000004E38A0 "J"
 *   insn=0x00000000004E38A0 string=0x00000000004E38A4 "\n"
 *   insn=0x00000000004E38A8 string=0x00000000004E38AC "*"
 *   insn=0x00000000004E38B0 string=0x00000000004E38B4 "B"
 *   insn=0x00000000004E38B4 string=0x00000000004E38B8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(
        google::protobuf::io::CodedInputStream *this)
{
  int v1; // w0
  _BYTE v2[32]; // [xsp+18h] [xbp-38h] BYREF
  __int64 v3; // [xsp+38h] [xbp-18h]

  v3 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  google::protobuf::internal::LogMessage::LogMessage();
  google::protobuf::internal::LogMessage::operator<<(
    (int)v2,
    "A protocol message was rejected because it was too big (more than ");
  v1 = google::protobuf::internal::LogMessage::operator<<();
  google::protobuf::internal::LogMessage::operator<<(
    v1,
    " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in google"
    "/protobuf/io/coded_stream.h.");
  google::protobuf::internal::LogFinisher::operator=();
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v2);
}

