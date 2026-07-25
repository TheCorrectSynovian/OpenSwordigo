/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6B90
 * Mangled: ._ZN5Caver27ProtobufValueFromDamageTypeENS_10DamageTypeE
 * Demangled: Caver::ProtobufValueFromDamageType(Caver::DamageType)
 *
 * Callers: 1
 *   0x0000000000263F90  Caver::DamageComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002CD264  Caver::ProtobufValueFromDamageType(Caver::DamageType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6B98 string=0x00000000001F6B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProtobufValueFromDamageType()
{
  return _ZN5Caver27ProtobufValueFromDamageTypeENS_10DamageTypeE();
}

