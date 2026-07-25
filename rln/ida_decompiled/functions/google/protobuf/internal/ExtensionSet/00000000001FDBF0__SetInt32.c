/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDBF0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet8SetInt32EihiPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::SetInt32(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 2
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004D8DB4  google::protobuf::internal::ExtensionSet::SetInt32(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDBF8 string=0x00000000001FDBFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::ExtensionSet::SetInt32()
{
  return _ZN6google8protobuf8internal12ExtensionSet8SetInt32EihiPKNS0_15FieldDescriptorE();
}

