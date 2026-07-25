/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000454C34
 * Mangled: _ZN5Caver14ParticleSystem4DrawEPNS_16RenderingContextE
 * Demangled: Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000001F8DA0  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *
 * Callees: 6
 *   0x00000000001F3850  Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(int,int)
 *   0x00000000001F3E20  Caver::VertexArrayObject::SwapBufferObjects(void)
 *   0x00000000001F9030  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *   0x00000000001FA770  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,void *)
 *   0x00000000001FBDD0  Caver::VertexArrayObject::CreateBufferObjects(bool)
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 13
 *   insn=0x0000000000454C4C string=0x0000000000454C50 ""
 *   insn=0x0000000000454C58 string=0x0000000000454C5C "y"
 *   insn=0x0000000000454C68 string=0x0000000000454C6C "!"
 *   insn=0x0000000000454C90 string=0x0000000000454C94 "O"
 *   insn=0x0000000000454C94 string=0x00000000001FBDD0 "0'"
 *   insn=0x0000000000454CB4 string=0x00000000001FA770 "0'"
 *   insn=0x0000000000454CE0 string=0x0000000000454CE4 "#"
 *   insn=0x0000000000454CF0 string=0x0000000000454CF4 "K|"
 *   insn=0x0000000000454CF4 string=0x00000000001F3E20 "P'"
 *   insn=0x0000000000454D04 string=0x0000000000454D08 "}\t"
 *   insn=0x0000000000454D10 string=0x00000000001F3850 "P'"
 *   insn=0x0000000000454D20 string=0x0000000000454D24 ""
 *   insn=0x0000000000454D3C string=0x00000000001F9030 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleSystem::Draw(__int64 this, Caver::RenderingContext *a2)
{
  __int64 v2; // x20
  Caver::VertexArrayObject *v4; // x21

  v2 = this;
  if ( *(_DWORD *)(this + 36) )
  {
    Caver::RenderingContext::BindTexture(a2, *(Caver::Texture **)this);
    v4 = (Caver::VertexArrayObject *)(v2 + 72);
    if ( !*(_BYTE *)(v2 + 144) )
    {
      *(_BYTE *)(v2 + 144) = 1;
      Caver::VertexArrayObject::CreateBufferObjects((Caver::VertexArrayObject *)(v2 + 72), 1);
      Caver::VertexArrayObject::AddArray();
      Caver::VertexArrayObject::AddArray();
      Caver::VertexArrayObject::AddArray();
    }
    Caver::VertexArrayObject::SwapBufferObjects(v4);
    Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(v4, 0, 4 * *(_DWORD *)(v2 + 36) * *(_DWORD *)(v2 + 48));
    return Caver::VertexArrayObject::Draw(v4, a2, 4, 0, 6 * *(_DWORD *)(v2 + 36));
  }
  return this;
}

