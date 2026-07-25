/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AD8D8
 * Mangled: _ZNK5Caver15ComponentOutletINS_22GroundPolygonComponentEE10identifierEv
 * Demangled: Caver::ComponentOutlet<Caver::GroundPolygonComponent>::identifier(void)
 *
 * Callers: 1
 *   0x00000000002AD7D8  Caver::PortalEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::GroundPolygonComponent>::identifier(__int64 a1)
{
  return *(unsigned int *)(a1 + 8);
}

