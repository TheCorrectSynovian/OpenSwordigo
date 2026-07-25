/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE520
 * Mangled: .snprintf
 * Demangled: .snprintf
 *
 * Callers: 8
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D7128  google::protobuf::internal::VersionString(int)
 *   0x00000000004D7474  google::protobuf::internal::LogMessage::operator<<(char)
 *   0x00000000004D74FC  google::protobuf::internal::LogMessage::operator<<(int)
 *   0x00000000004D7588  google::protobuf::internal::LogMessage::operator<<(uint)
 *   0x00000000004D7614  google::protobuf::internal::LogMessage::operator<<(long)
 *   0x00000000004D76A0  google::protobuf::internal::LogMessage::operator<<(ulong)
 *   0x00000000004D772C  google::protobuf::internal::LogMessage::operator<<(double)
 *
 * Callees: 1
 *   0x00000000006FEA70  snprintf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE528 string=0x00000000001FE52C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int snprintf(char *s, size_t maxlen, const char *format, ...)
{
  return snprintf(s, maxlen, format);
}

