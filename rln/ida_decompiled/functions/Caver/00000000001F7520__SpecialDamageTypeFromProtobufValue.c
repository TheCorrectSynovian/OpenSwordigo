/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7520
 * Mangled: ._ZN5Caver34SpecialDamageTypeFromProtobufValueENS_5Proto17SpecialDamageTypeE
 * Demangled: Caver::SpecialDamageTypeFromProtobufValue(Caver::Proto::SpecialDamageType)
 *
 * Callers: 2
 *   0x00000000002546AC  Caver::BreakableObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000263ED8  Caver::DamageComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000002CD270  Caver::SpecialDamageTypeFromProtobufValue(Caver::Proto::SpecialDamageType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7528 string=0x00000000001F752C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SpecialDamageTypeFromProtobufValue()
{
  return _ZN5Caver34SpecialDamageTypeFromProtobufValueENS_5Proto17SpecialDamageTypeE();
}

