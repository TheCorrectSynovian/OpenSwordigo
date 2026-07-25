/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C440C
 * Mangled: _ZNK5Caver15ComponentOutletINS_19WeaponGlowComponentEE10identifierEv
 * Demangled: Caver::ComponentOutlet<Caver::WeaponGlowComponent>::identifier(void)
 *
 * Callers: 1
 *   0x00000000002C42CC  Caver::SwingableWeaponComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::WeaponGlowComponent>::identifier(__int64 a1)
{
  return *(unsigned int *)(a1 + 8);
}

