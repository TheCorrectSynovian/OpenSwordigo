/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202DE0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet7SetEnumEihiPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::SetEnum(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 2
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DB9A8  google::protobuf::internal::ExtensionSet::SetEnum(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202DE8 string=0x0000000000202DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::ExtensionSet::SetEnum()
{
  return _ZN6google8protobuf8internal12ExtensionSet7SetEnumEihiPKNS0_15FieldDescriptorE();
}

