/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD6B0
 * Mangled: ._ZN5Caver30LoadPolygonFromProtobufMessageEPNS_7PolygonERKNS_5Proto7PolygonE
 * Demangled: Caver::LoadPolygonFromProtobufMessage(Caver::Polygon *,Caver::Proto::Polygon const&)
 *
 * Callers: 2
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x0000000000489E14  Caver::LoadPolygonFromProtobufMessage(Caver::Polygon *,Caver::Proto::Polygon const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD6B8 string=0x00000000001FD6BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LoadPolygonFromProtobufMessage(
        Caver *this,
        Caver::Polygon *a2,
        const Caver::Proto::Polygon *a3)
{
  return _ZN5Caver30LoadPolygonFromProtobufMessageEPNS_7PolygonERKNS_5Proto7PolygonE(this, a2, a3);
}

