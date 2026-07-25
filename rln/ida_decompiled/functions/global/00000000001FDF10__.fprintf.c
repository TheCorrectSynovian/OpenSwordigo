/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDF10
 * Mangled: .fprintf
 * Demangled: .fprintf
 *
 * Callers: 2
 *   0x00000000004D7284  google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *   0x00000000004FA0F4  sub_4FA0F4
 *
 * Callees: 1
 *   0x00000000006FEA40  fprintf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDF18 string=0x00000000001FDF1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int fprintf(FILE *stream, const char *format, ...)
{
  return fprintf(stream, format);
}

