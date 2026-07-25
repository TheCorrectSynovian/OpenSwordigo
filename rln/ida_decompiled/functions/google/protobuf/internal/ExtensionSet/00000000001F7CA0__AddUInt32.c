/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7CA0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet9AddUInt32EihbjPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::AddUInt32(int,uchar,bool,uint,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004D9CB0  google::protobuf::internal::ExtensionSet::GetRepeatedUInt32(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7CA8 string=0x00000000001F7CAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::AddUInt32()
{
  JUMPOUT(0x4D9EC4);
}

