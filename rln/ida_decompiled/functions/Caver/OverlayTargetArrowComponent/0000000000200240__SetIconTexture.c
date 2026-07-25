/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200240
 * Mangled: ._ZN5Caver27OverlayTargetArrowComponent14SetIconTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::OverlayTargetArrowComponent::SetIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callees: 1
 *   0x000000000022BAFC  Caver::OverlayTargetArrowComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200248 string=0x000000000020024C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::OverlayTargetArrowComponent::SetIconTexture()
{
  JUMPOUT(0x22BDB0);
}

