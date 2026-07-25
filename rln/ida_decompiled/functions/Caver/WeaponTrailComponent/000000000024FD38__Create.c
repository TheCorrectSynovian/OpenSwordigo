/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FD38
 * Mangled: _ZN5Caver20WeaponTrailComponent6CreateEv
 * Demangled: Caver::WeaponTrailComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FCF8  Caver::SwingComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCA80  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *   0x000000000024FD78  Caver::WeaponGlowComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000024FD44 string=0x000000000024FD48 "&"
 *   insn=0x000000000024FD48 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FD4C string=0x000000000024FD50 "L"
 *   insn=0x000000000024FD50 string=0x00000000001FCA80 "0'"
 *   insn=0x000000000024FD68 string=0x000000000024FD6C "Q"
 *   insn=0x000000000024FD6C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::WeaponTrailComponent *__fastcall Caver::WeaponTrailComponent::Create(Caver::WeaponTrailComponent *this)
{
  Caver::WeaponTrailComponent *v1; // x19

  v1 = (Caver::WeaponTrailComponent *)operator new(0xD0u);
  Caver::WeaponTrailComponent::WeaponTrailComponent(v1);
  return v1;
}

