/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FC78
 * Mangled: _ZN5Caver24SwingableWeaponComponent6CreateEv
 * Demangled: Caver::SwingableWeaponComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FC38  Caver::HealthComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFBE0  Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *   0x000000000024FCB8  Caver::SwingableWeaponControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024FC84 string=0x000000000024FC88 "V"
 *   insn=0x000000000024FC88 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FCAC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SwingableWeaponComponent *__fastcall Caver::SwingableWeaponComponent::Create(
        Caver::SwingableWeaponComponent *this)
{
  Caver::SwingableWeaponComponent *v1; // x19

  v1 = (Caver::SwingableWeaponComponent *)operator new(0x1C8u);
  Caver::SwingableWeaponComponent::SwingableWeaponComponent(v1);
  return v1;
}

