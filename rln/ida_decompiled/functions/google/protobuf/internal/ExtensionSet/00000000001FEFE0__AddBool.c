/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEFE0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet7AddBoolEihbbPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::AddBool(int,uchar,bool,bool,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DB508  google::protobuf::internal::ExtensionSet::GetRepeatedBool(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEFE8 string=0x00000000001FEFEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::AddBool()
{
  JUMPOUT(0x4DB728);
}

