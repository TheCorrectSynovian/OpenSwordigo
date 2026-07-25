/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4B60
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet9AddUInt64EihbmPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::AddUInt64(int,uchar,bool,ulong,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DA2C0  google::protobuf::internal::ExtensionSet::GetRepeatedUInt64(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4B68 string=0x00000000001F4B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::AddUInt64()
{
  JUMPOUT(0x4DA4D4);
}

