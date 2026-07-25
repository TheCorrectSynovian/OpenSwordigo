/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA0E0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet4SwapEPS2_
 * Demangled: google::protobuf::internal::ExtensionSet::Swap(google::protobuf::internal::ExtensionSet*)
 *
 * Callers: 1
 *   0x00000000002FBB68  Caver::Proto::Component::Swap(Caver::Proto::Component*)
 *
 * Callees: 1
 *   0x00000000004DD59C  google::protobuf::internal::ExtensionSet::Swap(google::protobuf::internal::ExtensionSet*)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA0E4 string=0x00000000004DD59C "\t@"
 *   insn=0x00000000001FA0E8 string=0x00000000001FA0EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::Swap(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::internal::ExtensionSet *a2)
{
  return _ZN6google8protobuf8internal12ExtensionSet4SwapEPS2_(this, a2);
}

