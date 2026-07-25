/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7B20
 * Mangled: ._ZN5Caver14SwingComponentC2Ev
 * Demangled: Caver::SwingComponent::SwingComponent(void)
 *
 * Callers: 1
 *   0x00000000002CA490  Caver::SwingComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002C9468  Caver::SwingableWeaponControllerComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7B28 string=0x00000000001F7B2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SwingComponent::SwingComponent(Caver::SwingComponent *this)
{
  JUMPOUT(0x2C94C0);
}

