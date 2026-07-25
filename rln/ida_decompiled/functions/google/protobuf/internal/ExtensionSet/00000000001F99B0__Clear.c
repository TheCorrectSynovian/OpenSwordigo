/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F99B0
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet5ClearEv
 * Demangled: google::protobuf::internal::ExtensionSet::Clear(void)
 *
 * Callers: 1
 *   0x00000000002FB508  Caver::Proto::Component::New(void)
 *
 * Callees: 1
 *   0x00000000004DCB74  google::protobuf::internal::ExtensionSet::RemoveLast(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F99B8 string=0x00000000001F99BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::internal::ExtensionSet::Clear(google::protobuf::internal::ExtensionSet *this)
{
  JUMPOUT(0x4DCE94);
}

