/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203210
 * Mangled: ._ZNK5Caver5Proto7Polygon8ByteSizeEv
 * Demangled: Caver::Proto::Polygon::ByteSize(void)
 *
 * Callers: 2
 *   0x0000000000306B2C  Caver::Proto::GroundPolygonComponent::ByteSize(void)
 *   0x000000000030B404  Caver::Proto::ShapeComponent::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D0940  Caver::Proto::Polygon::ByteSize(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203214 string=0x00000000002D0940 "L@"
 *   insn=0x0000000000203218 string=0x000000000020321C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Polygon::ByteSize(Caver::Proto::Polygon *this)
{
  return _ZNK5Caver5Proto7Polygon8ByteSizeEv(this);
}

