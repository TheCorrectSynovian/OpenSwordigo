/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B578
 * Mangled: _ZNK5Caver5Proto14SwingComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SwingComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000032B530  Caver::Proto::SwingComponent::~SwingComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

