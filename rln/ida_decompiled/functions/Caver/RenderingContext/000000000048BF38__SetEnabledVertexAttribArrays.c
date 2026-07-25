/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048BF38
 * Mangled: _ZN5Caver16RenderingContext28SetEnabledVertexAttribArraysEPKji
 * Demangled: Caver::RenderingContext::SetEnabledVertexAttribArrays(uint const*,int)
 *
 * Callers: 1
 *   0x00000000001F85D0  Caver::RenderingContext::SetEnabledVertexAttribArrays(uint const*,int)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD1E0  Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(uint *,int)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 4
 *   insn=0x000000000048BF48 string=0x000000000048BF4C "U"
 *   insn=0x000000000048BF58 string=0x000000000048BF5C "b~~"
 *   insn=0x000000000048BF78 string=0x00000000001FD1E0 "0'"
 *   insn=0x000000000048BFA0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetEnabledVertexAttribArrays(
        Caver::RenderingContext *this,
        const unsigned int *a2,
        int a3)
{
  unsigned int v6[10]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v7; // [xsp+28h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  memcpy(v6, a2, 4LL * a3);
  return Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(this, v6, a3);
}

