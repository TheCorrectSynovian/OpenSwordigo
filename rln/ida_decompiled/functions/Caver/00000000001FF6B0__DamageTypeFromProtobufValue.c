/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF6B0
 * Mangled: ._ZN5Caver27DamageTypeFromProtobufValueENS_5Proto10DamageTypeE
 * Demangled: Caver::DamageTypeFromProtobufValue(Caver::Proto::DamageType)
 *
 * Callers: 1
 *   0x0000000000263ED8  Caver::DamageComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000002CD200  Caver::WeaponTrailComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF6B8 string=0x00000000001FF6BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::DamageTypeFromProtobufValue()
{
  JUMPOUT(0x2CD258);
}

