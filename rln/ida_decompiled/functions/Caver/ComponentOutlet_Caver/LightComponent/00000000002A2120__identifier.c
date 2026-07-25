/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A2120
 * Mangled: _ZNK5Caver15ComponentOutletINS_14LightComponentEE10identifierEv
 * Demangled: Caver::ComponentOutlet<Caver::LightComponent>::identifier(void)
 *
 * Callers: 1
 *   0x00000000002A1FD0  Caver::FireEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::LightComponent>::identifier(__int64 a1)
{
  return *(unsigned int *)(a1 + 8);
}

