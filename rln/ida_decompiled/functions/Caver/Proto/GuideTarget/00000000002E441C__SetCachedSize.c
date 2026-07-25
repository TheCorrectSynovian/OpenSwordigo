/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E441C
 * Mangled: _ZNK5Caver5Proto11GuideTarget13SetCachedSizeEi
 * Demangled: Caver::Proto::GuideTarget::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002E43E4  Caver::Proto::GuideTarget::~GuideTarget()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

