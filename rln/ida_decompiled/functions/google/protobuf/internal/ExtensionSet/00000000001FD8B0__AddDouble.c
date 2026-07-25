/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD8B0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet9AddDoubleEihbdPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::AddDouble(int,uchar,bool,double,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DAEE8  google::protobuf::internal::ExtensionSet::GetRepeatedDouble(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD8B8 string=0x00000000001FD8BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::AddDouble()
{
  JUMPOUT(0x4DB104);
}

