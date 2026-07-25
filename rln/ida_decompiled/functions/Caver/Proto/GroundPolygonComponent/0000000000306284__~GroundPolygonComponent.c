/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000306284
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponentD0Ev
 * Demangled: Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7E10  Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent()
 *   0x00000000003062BC  Caver::Proto::GroundPolygonComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x0000000000306294 string=0x00000000001F7E10 "0'"
 *   insn=0x00000000003062A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent(
        Caver::Proto::GroundPolygonComponent *this)
{
  Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent(this);
  operator delete(this);
}

