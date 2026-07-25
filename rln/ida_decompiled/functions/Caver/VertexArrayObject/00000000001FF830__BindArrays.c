/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF830
 * Mangled: ._ZN5Caver17VertexArrayObject10BindArraysEPNS_16RenderingContextE
 * Demangled: Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x000000000048DA6C  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *
 * Callees: 1
 *   0x000000000048D8B8  Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF838 string=0x00000000001FF83C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::BindArrays(Caver::VertexArrayObject *this, Caver::RenderingContext *a2)
{
  return _ZN5Caver17VertexArrayObject10BindArraysEPNS_16RenderingContextE(this, a2);
}

