/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FCB8
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent6CreateEv
 * Demangled: Caver::SwingableWeaponControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FC78  Caver::SwingableWeaponComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB1B0  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *   0x000000000024FCF8  Caver::SwingComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000024FCC4 string=0x000000000024FCC8 "F"
 *   insn=0x000000000024FCC8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FCCC string=0x000000000024FCD0 "8"
 *   insn=0x000000000024FCD0 string=0x00000000001FB1B0 "0'"
 *   insn=0x000000000024FCE8 string=0x000000000024FCEC "q"
 *   insn=0x000000000024FCEC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SwingableWeaponControllerComponent *__fastcall Caver::SwingableWeaponControllerComponent::Create(
        Caver::SwingableWeaponControllerComponent *this)
{
  Caver::SwingableWeaponControllerComponent *v1; // x19

  v1 = (Caver::SwingableWeaponControllerComponent *)operator new(0xB0u);
  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(v1);
  return v1;
}

