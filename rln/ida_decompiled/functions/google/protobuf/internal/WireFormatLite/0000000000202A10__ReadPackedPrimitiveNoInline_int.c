/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202A10
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite27ReadPackedPrimitiveNoInlineIiLNS2_9FieldTypeE5EEEbPNS0_2io16CodedInputStreamEPNS0_13RepeatedFieldIT_EE
 * Demangled: google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Callers: 3
 *   0x0000000000312E84  Caver::Proto::CharControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031E3F0  Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032759C  Caver::Proto::StaticMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x0000000000313AAC  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202A18 string=0x0000000000202A1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
        google::protobuf::io::CodedInputStream *this)
{
  return _ZN6google8protobuf8internal14WireFormatLite27ReadPackedPrimitiveNoInlineIiLNS2_9FieldTypeE5EEEbPNS0_2io16CodedInputStreamEPNS0_13RepeatedFieldIT_EE(this);
}

