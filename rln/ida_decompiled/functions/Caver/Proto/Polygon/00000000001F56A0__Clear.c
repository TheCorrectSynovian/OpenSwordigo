/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F56A0
 * Mangled: ._ZN5Caver5Proto7Polygon5ClearEv
 * Demangled: Caver::Proto::Polygon::Clear(void)
 *
 * Callers: 2
 *   0x000000000030631C  Caver::Proto::GroundPolygonComponent::Clear(void)
 *   0x000000000030AF34  Caver::Proto::ShapeComponent::Clear(void)
 *
 * Callees: 1
 *   0x00000000002D04FC  Caver::Proto::Polygon::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F56A8 string=0x00000000001F56AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Polygon::Clear(Caver::Proto::Polygon *this)
{
  return _ZN5Caver5Proto7Polygon5ClearEv(this);
}

