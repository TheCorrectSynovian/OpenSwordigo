/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AE87C
 * Mangled: _ZThn24_N5Caver21PortalEffectComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::PortalEffectComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD3F0  Caver::PortalEffectComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002AE880 string=0x00000000001FD3F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PortalEffectComponent::Update(
        Caver::PortalEffectComponent *this,
        float a2)
{
  return Caver::PortalEffectComponent::Update((Caver::PortalEffectComponent *)((char *)this - 24), a2);
}

