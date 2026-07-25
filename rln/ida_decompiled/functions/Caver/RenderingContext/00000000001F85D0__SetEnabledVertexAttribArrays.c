/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F85D0
 * Mangled: ._ZN5Caver16RenderingContext28SetEnabledVertexAttribArraysEPKji
 * Demangled: Caver::RenderingContext::SetEnabledVertexAttribArrays(uint const*,int)
 *
 * Callers: 1
 *   0x000000000048D8B8  Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048BF38  Caver::RenderingContext::SetEnabledVertexAttribArrays(uint const*,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F85D8 string=0x00000000001F85DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetEnabledVertexAttribArrays(
        Caver::RenderingContext *this,
        const unsigned int *a2,
        int a3)
{
  return _ZN5Caver16RenderingContext28SetEnabledVertexAttribArraysEPKji(this, a2, a3);
}

