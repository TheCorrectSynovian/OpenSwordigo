/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA900
 * Mangled: ._ZNK6google8protobuf8internal12ExtensionSet13IsInitializedEv
 * Demangled: google::protobuf::internal::ExtensionSet::IsInitialized(void)
 *
 * Callers: 1
 *   0x00000000002FBB60  Caver::Proto::Component::IsInitialized(void)
 *
 * Callees: 1
 *   0x00000000004DD65C  google::protobuf::internal::ExtensionSet::IsInitialized(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA908 string=0x00000000001FA90C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::IsInitialized(
        google::protobuf::internal::ExtensionSet *this)
{
  return _ZNK6google8protobuf8internal12ExtensionSet13IsInitializedEv(this);
}

