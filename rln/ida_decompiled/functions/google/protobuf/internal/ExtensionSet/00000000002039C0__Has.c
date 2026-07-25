/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002039C0
 * Mangled: ._ZNK6google8protobuf8internal12ExtensionSet3HasEi
 * Demangled: google::protobuf::internal::ExtensionSet::Has(int)
 *
 * Callers: 1
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000004D8A18  google::protobuf::internal::ExtensionSet::Has(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002039C4 string=0x00000000004D8A18 "\n@"
 *   insn=0x00000000002039C8 string=0x00000000002039CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::Has(
        google::protobuf::internal::ExtensionSet *this,
        int a2)
{
  return _ZNK6google8protobuf8internal12ExtensionSet3HasEi(this, a2);
}

