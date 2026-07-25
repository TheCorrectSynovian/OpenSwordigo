/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203920
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet8AddFloatEihbfPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::AddFloat(int,uchar,bool,float,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DA8D0  google::protobuf::internal::ExtensionSet::GetRepeatedFloat(int,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203928 string=0x000000000020392C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::AddFloat()
{
  JUMPOUT(0x4DAAEC);
}

