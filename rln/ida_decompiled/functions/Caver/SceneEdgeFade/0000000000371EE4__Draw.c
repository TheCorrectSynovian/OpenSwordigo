/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000371EE4
 * Mangled: _ZN5Caver13SceneEdgeFade4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::SceneEdgeFade::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x0000000000371DD0  Caver::SceneEdgeFade::SceneEdgeFade(void)
 *
 * Callees: 3
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x0000000000201770  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *
 * Referenced strings: 4
 *   insn=0x0000000000371EFC string=0x0000000000371F00 "(3"
 *   insn=0x0000000000371F28 string=0x0000000000371F2C "#"
 *   insn=0x0000000000371F38 string=0x0000000000371F3C "y2"
 *   insn=0x0000000000371F50 string=0x0000000000371F54 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneEdgeFade::Draw(
        Caver::SceneEdgeFade *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  Caver::RenderingContext::SetMatrix(a2, a3);
  Caver::RenderingContext::SetVertexAttribPointer();
  Caver::RenderingContext::SetVertexAttribPointer();
  return Caver::RenderingContext::DrawElements();
}

