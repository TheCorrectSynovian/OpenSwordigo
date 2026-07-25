/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFCE0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet9SetUInt64EihmPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::SetUInt64(int,uchar,ulong,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 2
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DA150  google::protobuf::internal::ExtensionSet::SetUInt64(int,uchar,ulong,google::protobuf::FieldDescriptor const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFCE8 string=0x00000000001FFCEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::ExtensionSet::SetUInt64()
{
  return _ZN6google8protobuf8internal12ExtensionSet9SetUInt64EihmPKNS0_15FieldDescriptorE();
}

