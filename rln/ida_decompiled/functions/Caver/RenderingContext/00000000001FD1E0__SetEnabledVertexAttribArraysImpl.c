/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD1E0
 * Mangled: ._ZN5Caver16RenderingContext32SetEnabledVertexAttribArraysImplEPji
 * Demangled: Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(uint *,int)
 *
 * Callers: 3
 *   0x000000000048BCEC  Caver::RenderingContext::UseProgram(uint)
 *   0x000000000048BF38  Caver::RenderingContext::SetEnabledVertexAttribArrays(uint const*,int)
 *   0x000000000048C004  Caver::RenderingContext::SetEnabledVertexAttribArrays(uint,...)
 *
 * Callees: 1
 *   0x000000000048C178  Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(uint *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD1E8 string=0x00000000001FD1EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(
        Caver::RenderingContext *this,
        unsigned int *a2,
        int a3)
{
  return _ZN5Caver16RenderingContext32SetEnabledVertexAttribArraysImplEPji(this, a2, a3);
}

