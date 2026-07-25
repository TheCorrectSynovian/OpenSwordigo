/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332128
 * Mangled: _ZNK5Caver5Proto21PortalEffectComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::PortalEffectComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000033208C  Caver::Proto::PortalEffectComponent::~PortalEffectComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalEffectComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

