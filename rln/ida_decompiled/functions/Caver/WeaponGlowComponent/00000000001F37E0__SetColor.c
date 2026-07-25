/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F37E0
 * Mangled: ._ZN5Caver19WeaponGlowComponent8SetColorERKNS_10FloatColorE
 * Demangled: Caver::WeaponGlowComponent::SetColor(Caver::FloatColor const&)
 *
 * Callers: 2
 *   0x00000000002C5124  Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor)
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *
 * Callees: 1
 *   0x00000000002CB43C  Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F37E4 string=0x00000000002CB7B0 " "
 *   insn=0x00000000001F37E8 string=0x00000000001F37EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::WeaponGlowComponent::SetColor()
{
  JUMPOUT(0x2CB7B0);
}

