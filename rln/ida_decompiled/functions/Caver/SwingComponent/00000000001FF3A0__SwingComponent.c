/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF3A0
 * Mangled: ._ZN5Caver14SwingComponentC2Ev_0
 * Demangled: Caver::SwingComponent::SwingComponent(void)
 *
 * Callers: 1
 *   0x000000000024FCF8  Caver::SwingComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002C9468  Caver::SwingableWeaponControllerComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF3A8 string=0x00000000001FF3AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SwingComponent::SwingComponent(Caver::SwingComponent *this)
{
  JUMPOUT(0x2C94C0);
}

