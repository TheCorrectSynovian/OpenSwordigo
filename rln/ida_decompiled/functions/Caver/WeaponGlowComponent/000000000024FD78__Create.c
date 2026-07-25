/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FD78
 * Mangled: _ZN5Caver19WeaponGlowComponent6CreateEv
 * Demangled: Caver::WeaponGlowComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FD38  Caver::WeaponTrailComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F76C0  Caver::WeaponGlowComponent::WeaponGlowComponent(void)
 *   0x000000000024FDB8  Caver::LightComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024FD88 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FD8C string=0x000000000024FD90 "L"
 *   insn=0x000000000024FD90 string=0x00000000001F76C0 "0'"
 *   insn=0x000000000024FDA8 string=0x000000000024FDAC "A"
 *   insn=0x000000000024FDAC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::WeaponGlowComponent *__fastcall Caver::WeaponGlowComponent::Create(Caver::WeaponGlowComponent *this)
{
  Caver::WeaponGlowComponent *v1; // x19

  v1 = (Caver::WeaponGlowComponent *)operator new(0xF8u);
  Caver::WeaponGlowComponent::WeaponGlowComponent(v1);
  return v1;
}

