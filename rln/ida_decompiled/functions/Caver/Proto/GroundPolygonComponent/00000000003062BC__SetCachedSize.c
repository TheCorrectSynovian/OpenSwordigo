/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003062BC
 * Mangled: _ZNK5Caver5Proto22GroundPolygonComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::GroundPolygonComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000306284  Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundPolygonComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

