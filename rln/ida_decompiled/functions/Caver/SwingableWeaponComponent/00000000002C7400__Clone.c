/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C7400
 * Mangled: _ZNK5Caver24SwingableWeaponComponent5CloneEv
 * Demangled: Caver::SwingableWeaponComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8A20  Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *   0x00000000001FAA80  Caver::SwingableWeaponComponent::InitWithComponent(Caver::SwingableWeaponComponent const*)
 *   0x00000000002C7450  Caver::SwingableWeaponComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002C7410 string=0x00000000002C7414 "s"
 *   insn=0x00000000002C7414 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C741C string=0x00000000001F8A20 "0'"
 *   insn=0x00000000002C7428 string=0x00000000001FAA80 "0'"
 *   insn=0x00000000002C7444 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SwingableWeaponComponent *__fastcall Caver::SwingableWeaponComponent::Clone(
        Caver::SwingableWeaponComponent *this)
{
  Caver::SwingableWeaponComponent *v1; // x19

  v1 = (Caver::SwingableWeaponComponent *)operator new(0x1C8u);
  Caver::SwingableWeaponComponent::SwingableWeaponComponent(v1);
  Caver::SwingableWeaponComponent::InitWithComponent();
  return v1;
}

