/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202450
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet9MergeFromERKS2_
 * Demangled: google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *
 * Callers: 1
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202458 string=0x000000000020245C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::MergeFrom(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::internal::ExtensionSet *a2)
{
  return _ZN6google8protobuf8internal12ExtensionSet9MergeFromERKS2_(this, a2);
}

