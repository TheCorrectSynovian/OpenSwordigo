/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6EE0
 * Mangled: ._ZN6google8protobuf2io16CodedInputStream10ReadStringEPSsi
 * Demangled: google::protobuf::io::CodedInputStream::ReadString(std::string *,int)
 *
 * Callers: 1
 *   0x00000000004DE67C  google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004E3C08  google::protobuf::io::CodedInputStream::ReadString(std::string *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6EE8 string=0x00000000001F6EEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::io::CodedInputStream::ReadString()
{
  return _ZN6google8protobuf2io16CodedInputStream10ReadStringEPSsi();
}

