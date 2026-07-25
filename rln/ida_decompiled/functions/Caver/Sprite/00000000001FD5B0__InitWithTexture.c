/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD5B0
 * Mangled: ._ZN5Caver6Sprite15InitWithTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleE
 * Demangled: Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Callers: 9
 *   0x000000000021D4A8  Caver::BackgroundComponent::BackgroundComponent(void)
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021DD10  Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x000000000023BDC4  Caver::SpriteComponent::SpriteComponent(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000023C1B0  Caver::SpriteComponent::Prepare(void)
 *   0x000000000023C678  Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028777C  Caver::MagicExplosionComponent::Prepare(void)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x00000000004C81BC  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD5B8 string=0x00000000001FD5BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::InitWithTexture(Caver::Sprite *this)
{
  return _ZN5Caver6Sprite15InitWithTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleE(this);
}

