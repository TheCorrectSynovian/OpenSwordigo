/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCF38
 * Mangled: _ZN5Caver20WeaponTrailComponent10ResetTrailEv
 * Demangled: Caver::WeaponTrailComponent::ResetTrail(void)
 *
 * Callers: 1
 *   0x00000000001F3F40  Caver::WeaponTrailComponent::ResetTrail(void)
 *
 * Callees: 1
 *   0x0000000000201E90  Caver::WeaponTrail::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002CCF44 string=0x00000000002CCF48 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrailComponent::ResetTrail(Caver::WeaponTrailComponent *this)
{
  __int64 result; // x0

  result = Caver::WeaponTrail::Clear((Caver::WeaponTrailComponent *)((char *)this + 112));
  *((_BYTE *)this + 148) = 0;
  return result;
}

