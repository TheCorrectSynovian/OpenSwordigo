/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD60
 * Mangled: ._ZN5Caver17VertexArrayObject27SetVertexAttribArrayEnabledEPNS_16RenderingContextEjb
 * Demangled: Caver::VertexArrayObject::SetVertexAttribArrayEnabled(Caver::RenderingContext *,uint,bool)
 *
 * Callers: 2
 *   0x000000000048C004  Caver::RenderingContext::SetEnabledVertexAttribArrays(uint,...)
 *   0x000000000048C178  Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(uint *,int)
 *
 * Callees: 1
 *   0x000000000048D820  Caver::VertexArrayObject::SetVertexAttribArrayEnabled(Caver::RenderingContext *,uint,bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDD64 string=0x000000000048D820 ""
 *   insn=0x00000000001FDD68 string=0x00000000001FDD6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::SetVertexAttribArrayEnabled(
        Caver::VertexArrayObject *this,
        Caver::RenderingContext *a2,
        unsigned int a3,
        bool a4)
{
  return _ZN5Caver17VertexArrayObject27SetVertexAttribArrayEnabledEPNS_16RenderingContextEjb(this, a2, a3, a4);
}

