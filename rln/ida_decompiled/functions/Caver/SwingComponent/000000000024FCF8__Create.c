/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FCF8
 * Mangled: _ZN5Caver14SwingComponent6CreateEv
 * Demangled: Caver::SwingComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FCB8  Caver::SwingableWeaponControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF3A0  Caver::SwingComponent::SwingComponent(void)
 *   0x000000000024FD38  Caver::WeaponTrailComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024FD04 string=0x000000000024FD08 "6"
 *   insn=0x000000000024FD08 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FD28 string=0x000000000024FD2C "a"
 *   insn=0x000000000024FD2C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SwingComponent *__fastcall Caver::SwingComponent::Create(Caver::SwingComponent *this)
{
  Caver::SwingComponent *v1; // x19

  v1 = (Caver::SwingComponent *)operator new(0x98u);
  Caver::SwingComponent::SwingComponent(v1);
  return v1;
}

