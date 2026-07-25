/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD3F0
 * Mangled: ._ZN5Caver21PortalEffectComponent6UpdateEf
 * Demangled: Caver::PortalEffectComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002AE87C  `non-virtual thunk to'Caver::PortalEffectComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002AE540  Caver::PortalEffectComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD3F8 string=0x00000000001FD3FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalEffectComponent::Update(Caver::PortalEffectComponent *this, float a2)
{
  return _ZN5Caver21PortalEffectComponent6UpdateEf(this, a2);
}

