/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0444
 * Mangled: _ZN5Caver5Proto7PolygonD0Ev
 * Demangled: Caver::Proto::Polygon::~Polygon()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7490  Caver::Proto::Polygon::~Polygon()
 *   0x00000000002D047C  Caver::Proto::Polygon::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x00000000002D0454 string=0x00000000001F7490 "0'"
 *   insn=0x00000000002D0464 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Polygon::~Polygon(Caver::Proto::Polygon *this)
{
  Caver::Proto::Polygon::~Polygon(this);
  operator delete(this);
}

