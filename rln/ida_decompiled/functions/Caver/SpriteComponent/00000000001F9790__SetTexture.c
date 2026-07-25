/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9790
 * Mangled: ._ZN5Caver15SpriteComponent10SetTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::SpriteComponent::SetTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x000000000023BDC4  Caver::SpriteComponent::SpriteComponent(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9798 string=0x00000000001F979C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SpriteComponent::SetTexture()
{
  JUMPOUT(0x23C030);
}

