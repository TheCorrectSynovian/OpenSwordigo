/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9E00
 * Mangled: ._ZN5Caver5Proto22GroundPolygonComponent16default_instanceEv
 * Demangled: Caver::Proto::GroundPolygonComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002BEF94  Caver::GroundPolygonComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9A48  Caver::Proto::GroundPolygonComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9E08 string=0x00000000001F9E0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GroundPolygonComponent::default_instance(Caver::Proto::GroundPolygonComponent *this)
{
  return _ZN5Caver5Proto22GroundPolygonComponent16default_instanceEv(this);
}

