/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBB60
 * Mangled: _ZNK5Caver5Proto9Component13IsInitializedEv
 * Demangled: Caver::Proto::Component::IsInitialized(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA900  google::protobuf::internal::ExtensionSet::IsInitialized(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FBB60 string=0x00000000002FBB64 "g"
 *   insn=0x00000000002FBB64 string=0x00000000001FA900 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Component::IsInitialized(Caver::Proto::Component *this)
{
  return google::protobuf::internal::ExtensionSet::IsInitialized((Caver::Proto::Component *)((char *)this + 8));
}

