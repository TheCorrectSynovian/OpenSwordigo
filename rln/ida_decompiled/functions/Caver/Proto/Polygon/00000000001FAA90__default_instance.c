/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA90
 * Mangled: ._ZN5Caver5Proto7Polygon16default_instanceEv
 * Demangled: Caver::Proto::Polygon::default_instance(void)
 *
 * Callers: 3
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000002F9A1C  Caver::Proto::GroundPolygonComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9BB8  Caver::Proto::ShapeComponent::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002D0484  Caver::Proto::Polygon::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA98 string=0x00000000001FAA9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Polygon::default_instance(Caver::Proto::Polygon *this)
{
  return _ZN5Caver5Proto7Polygon16default_instanceEv(this);
}

