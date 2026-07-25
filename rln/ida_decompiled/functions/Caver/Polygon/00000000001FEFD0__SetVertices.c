/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEFD0
 * Mangled: ._ZN5Caver7Polygon11SetVerticesEiPKNS_7Vector2E
 * Demangled: Caver::Polygon::SetVertices(int,Caver::Vector2 const*)
 *
 * Callers: 1
 *   0x0000000000489E14  Caver::LoadPolygonFromProtobufMessage(Caver::Polygon *,Caver::Proto::Polygon const&)
 *
 * Callees: 1
 *   0x00000000004B03D4  Caver::Polygon::SetVertices(int,Caver::Vector2 const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEFD8 string=0x00000000001FEFDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Polygon::SetVertices(Caver::Polygon *this, int a2, const Caver::Vector2 *a3)
{
  return _ZN5Caver7Polygon11SetVerticesEiPKNS_7Vector2E(this, a2, a3);
}

