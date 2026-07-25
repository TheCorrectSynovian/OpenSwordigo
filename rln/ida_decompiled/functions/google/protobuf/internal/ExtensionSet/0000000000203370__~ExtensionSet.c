/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203370
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSetD2Ev
 * Demangled: google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *
 * Callers: 1
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000004D87B8  google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *
 * Referenced strings: 1
 *   insn=0x0000000000203378 string=0x000000000020337C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::internal::ExtensionSet::~ExtensionSet(google::protobuf::internal::ExtensionSet *this)
{
  _ZN6google8protobuf8internal12ExtensionSetD2Ev(this);
}

