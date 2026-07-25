/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDF90
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSetC2Ev
 * Demangled: google::protobuf::internal::ExtensionSet::ExtensionSet(void)
 *
 * Callers: 5
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000002FB04C  Caver::Proto::Component::Component(void)
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *   0x00000000002FB508  Caver::Proto::Component::New(void)
 *   0x000000000033DAC4  google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *
 * Callees: 1
 *   0x00000000004D86AC  google::protobuf::internal::ExtensionSet::RegisterMessageExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool,google::protobuf::MessageLite const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDF98 string=0x00000000001FDF9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::internal::ExtensionSet::ExtensionSet(google::protobuf::internal::ExtensionSet *this)
{
  JUMPOUT(0x4D87A8);
}

