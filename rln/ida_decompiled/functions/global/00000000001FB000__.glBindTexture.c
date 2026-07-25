/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB000
 * Mangled: .glBindTexture
 * Demangled: .glBindTexture
 *
 * Callers: 8
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x000000000048B4BC  Caver::RenderingContext::SetAlpha(float)
 *   0x000000000048BFA4  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *   0x000000000048C450  Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *   0x00000000004CC108  Caver::Texture::SetNearestFiltering(void)
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Callees: 1
 *   0x00000000006FE8E8  glBindTexture
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB008 string=0x00000000001FB00C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glBindTexture()
{
  return glBindTexture();
}

