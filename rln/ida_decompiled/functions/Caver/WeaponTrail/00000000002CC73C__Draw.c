/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC73C
 * Mangled: _ZNK5Caver11WeaponTrail4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::WeaponTrail::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FFAC0  Caver::WeaponTrail::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 4
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 8
 *   insn=0x00000000002CC75C string=0x00000000002CC760 ""
 *   insn=0x00000000002CC764 string=0x00000000002CC768 "H"
 *   insn=0x00000000002CC76C string=0x0000000000583944 "\n"
 *   insn=0x00000000002CC7BC string=0x00000000002CC7C0 "X"
 *   insn=0x00000000002CC7D4 string=0x00000000002CC7D8 "#"
 *   insn=0x00000000002CC7DC string=0x00000000002CC7E0 "P"
 *   insn=0x00000000002CC7FC string=0x00000000002CC800 "H"
 *   insn=0x00000000002CC824 string=0x00000000001F3B30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrail::Draw(__int64 this, Caver::RenderingContext *a2, const Caver::Matrix4 *a3)
{
  __int64 v3; // x20

  v3 = this;
  if ( *(int *)(this + 4) >= 2 && (!*(_BYTE *)(this + 36) || *(float *)(this + 40) >= 0.01) )
  {
    Caver::RenderingContext::BindTexture(a2, *(Caver::Texture **)(this + 16));
    Caver::RenderingContext::SetMatrix(a2, a3);
    Caver::RenderingContext::SetVertexAttribPointer();
    Caver::RenderingContext::SetVertexAttribPointer();
    Caver::RenderingContext::SetVertexAttribPointer();
    return Caver::RenderingContext::DrawArrays(a2, 5, 0, 2 * *(_DWORD *)(v3 + 4));
  }
  return this;
}

