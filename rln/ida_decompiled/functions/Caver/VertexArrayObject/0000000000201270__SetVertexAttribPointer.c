/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201270
 * Mangled: ._ZN5Caver17VertexArrayObject22SetVertexAttribPointerEPNS_16RenderingContextEjiNS_8DataTypeEiPKv
 * Demangled: Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *
 * Callers: 5
 *   0x000000000048C2BC  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x000000000048C450  Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x000000000048C6A0  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *   0x000000000048C848  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const*,float)
 *   0x000000000048C9F8  Caver::RenderingContext::DrawRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x000000000048D83C  Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201274 string=0x000000000048D83C ""
 *   insn=0x0000000000201278 string=0x000000000020127C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::VertexArrayObject::SetVertexAttribPointer()
{
  return _ZN5Caver17VertexArrayObject22SetVertexAttribPointerEPNS_16RenderingContextEjiNS_8DataTypeEiPKv();
}

