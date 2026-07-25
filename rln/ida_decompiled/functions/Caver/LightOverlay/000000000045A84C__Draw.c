/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045A84C
 * Mangled: _ZN5Caver12LightOverlay4DrawEPNS_16RenderingContextE
 * Demangled: Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *
 * Callers: 2
 *   0x00000000001F40D0  Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *   0x000000000045A38C  Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *
 * Callees: 8
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F3880  Caver::VertexArrayObject::UpdateVertexBufferObjectData(void)
 *   0x00000000001F3E20  Caver::VertexArrayObject::SwapBufferObjects(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F9030  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *   0x00000000001FA770  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,void *)
 *   0x00000000001FBDD0  Caver::VertexArrayObject::CreateBufferObjects(bool)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *
 * Referenced strings: 12
 *   insn=0x000000000045A870 string=0x00000000001FC450 "0'"
 *   insn=0x000000000045A878 string=0x00000000001F3820 "P'"
 *   insn=0x000000000045A884 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000045A888 string=0x000000000045A88C "h"
 *   insn=0x000000000045A8A4 string=0x000000000045A8A8 "J"
 *   insn=0x000000000045A8A8 string=0x00000000001FBDD0 "0'"
 *   insn=0x000000000045A8C4 string=0x00000000001FA770 "0'"
 *   insn=0x000000000045A8D0 string=0x000000000045A8D4 "#"
 *   insn=0x000000000045A8E8 string=0x000000000045A8EC "Me"
 *   insn=0x000000000045A8EC string=0x00000000001F3E20 "P'"
 *   insn=0x000000000045A8F4 string=0x00000000001F3880 "P'"
 *   insn=0x000000000045A91C string=0x00000000001F9030 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LightOverlay::Draw(Caver::LightOverlay *this, Caver::RenderingContext *a2)
{
  Caver::VertexArrayObject *v4; // x21

  Caver::RenderingContext::SetBlendingEnabled(a2, 1);
  Caver::RenderingContext::SetDefaultBlendFunc(a2);
  Caver::RenderingContext::UseProgram(a2, 2u);
  if ( *((_BYTE *)this + 144) )
  {
    v4 = (Caver::LightOverlay *)((char *)this + 72);
  }
  else
  {
    *((_BYTE *)this + 144) = 1;
    v4 = (Caver::LightOverlay *)((char *)this + 72);
    Caver::VertexArrayObject::CreateBufferObjects((Caver::LightOverlay *)((char *)this + 72), 1);
    Caver::VertexArrayObject::AddArray();
    Caver::VertexArrayObject::AddArray();
  }
  Caver::VertexArrayObject::SwapBufferObjects(v4);
  Caver::VertexArrayObject::UpdateVertexBufferObjectData(v4);
  return Caver::VertexArrayObject::Draw(v4, a2, 4, 0, 3 * *((_DWORD *)this + 12));
}

