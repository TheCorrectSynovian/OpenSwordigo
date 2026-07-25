/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7490
 * Mangled: ._ZN5Caver5Proto7PolygonD2Ev
 * Demangled: Caver::Proto::Polygon::~Polygon()
 *
 * Callers: 1
 *   0x00000000002D0444  Caver::Proto::Polygon::~Polygon()
 *
 * Callees: 1
 *   0x00000000002D01E8  Caver::Proto::Polygon::Polygon(Caver::Proto::Polygon const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7498 string=0x00000000001F749C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Polygon::~Polygon(Caver::Proto::Polygon *this)
{
  JUMPOUT(0x2D03A4);
}

