/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCFD0
 * Mangled: ._ZN5Caver16RenderingContext14CurrentContextEv
 * Demangled: Caver::RenderingContext::CurrentContext(void)
 *
 * Callers: 5
 *   0x00000000003D4C10  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x000000000048D39C  Caver::VertexArrayObject::CreateBufferObjects(bool)
 *   0x000000000048D62C  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000004CB9BC  Caver::Texture::SetDefaultParameters(bool)
 *
 * Callees: 1
 *   0x000000000048AD94  Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCFD8 string=0x00000000001FCFDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::RenderingContext::CurrentContext(Caver::RenderingContext *this)
{
  JUMPOUT(0x48AF98);
}

