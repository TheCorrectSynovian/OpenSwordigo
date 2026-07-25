/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9DA0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet13MutableStringEihPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::MutableString(int,uchar,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 2
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DBFB8  google::protobuf::internal::ExtensionSet::MutableString(int,uchar,google::protobuf::FieldDescriptor const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9DA8 string=0x00000000001F9DAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::ExtensionSet::MutableString()
{
  return _ZN6google8protobuf8internal12ExtensionSet13MutableStringEihPKNS0_15FieldDescriptorE();
}

