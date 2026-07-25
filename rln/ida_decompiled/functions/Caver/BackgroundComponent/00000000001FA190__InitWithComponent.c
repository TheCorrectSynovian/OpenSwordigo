/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA190
 * Mangled: ._ZN5Caver19BackgroundComponent17InitWithComponentEPKS0_
 * Demangled: Caver::BackgroundComponent::InitWithComponent(Caver::BackgroundComponent const*)
 *
 * Callers: 3
 *   0x000000000021E228  Caver::BackgroundComponent::Clone(void)
 *   0x00000000002B66C8  Caver::RotatingBackgroundComponent::InitWithComponent(Caver::RotatingBackgroundComponent const*)
 *   0x00000000002B6A74  Caver::RotatingBackgroundComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000021D4A8  Caver::BackgroundComponent::BackgroundComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA198 string=0x00000000001FA19C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::BackgroundComponent::InitWithComponent()
{
  JUMPOUT(0x21D65C);
}

