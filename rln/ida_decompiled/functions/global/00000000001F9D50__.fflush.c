/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D50
 * Mangled: .fflush
 * Demangled: .fflush
 *
 * Callers: 7
 *   0x00000000004D7284  google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *   0x000000000051F4D0  sub_51F4D0
 *   0x000000000051F8FC  sub_51F8FC
 *   0x000000000053DEB0  sub_53DEB0
 *   0x000000000053DEB8  sub_53DEB8
 *   0x000000000053E16C  sub_53E16C
 *   0x000000000053E1A8  sub_53E1A8
 *
 * Callees: 1
 *   0x00000000006FE868  fflush
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9D58 string=0x00000000001F9D5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int fflush(FILE *stream)
{
  return fflush(stream);
}

