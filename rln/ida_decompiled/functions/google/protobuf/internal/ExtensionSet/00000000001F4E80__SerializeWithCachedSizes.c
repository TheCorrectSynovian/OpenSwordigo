/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E80
 * Mangled: ._ZNK6google8protobuf8internal12ExtensionSet24SerializeWithCachedSizesEiiPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000002FB920  Caver::Proto::Component::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004DEAC8  google::protobuf::internal::ExtensionSet::ParseMessageSet(google::protobuf::io::CodedInputStream *,google::protobuf::MessageLite const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4E88 string=0x00000000001F4E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes()
{
  JUMPOUT(0x4DEBC8);
}

