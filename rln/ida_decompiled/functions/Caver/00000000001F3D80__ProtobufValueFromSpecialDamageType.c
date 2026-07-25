/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3D80
 * Mangled: ._ZN5Caver34ProtobufValueFromSpecialDamageTypeENS_17SpecialDamageTypeE
 * Demangled: Caver::ProtobufValueFromSpecialDamageType(Caver::SpecialDamageType)
 *
 * Callers: 2
 *   0x0000000000254730  Caver::BreakableObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000263F90  Caver::DamageComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002CD27C  Caver::ProtobufValueFromSpecialDamageType(Caver::SpecialDamageType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3D88 string=0x00000000001F3D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProtobufValueFromSpecialDamageType()
{
  return _ZN5Caver34ProtobufValueFromSpecialDamageTypeENS_17SpecialDamageTypeE();
}

