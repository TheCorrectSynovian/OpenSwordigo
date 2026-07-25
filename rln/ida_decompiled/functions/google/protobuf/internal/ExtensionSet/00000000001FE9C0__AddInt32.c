/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE9C0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet8AddInt32EihbiPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::AddInt32(int,uchar,bool,int,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004D9090  google::protobuf::internal::ExtensionSet::GetRepeatedInt32(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE9C8 string=0x00000000001FE9CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::AddInt32()
{
  JUMPOUT(0x4D92A4);
}

