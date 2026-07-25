/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCB80
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet8AddInt64EihblPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::AddInt64(int,uchar,bool,long,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 1
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004D96A0  google::protobuf::internal::ExtensionSet::GetRepeatedInt64(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCB88 string=0x00000000001FCB8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::AddInt64()
{
  JUMPOUT(0x4D98B4);
}

