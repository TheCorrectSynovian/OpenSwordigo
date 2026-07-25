/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C66DC
 * Mangled: _ZNK5Caver8FontText4DrawEPNS_16RenderingContextE
 * Demangled: Caver::FontText::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000001FC610  Caver::FontText::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x00000000001FE140  Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000004C66E0 string=0x00000000004C66E4 "("
 *   insn=0x00000000004C66E4 string=0x00000000004C66E8 ")"
 *   insn=0x00000000004C66E8 string=0x00000000004C66F4 ""
 *   insn=0x00000000004C66F4 string=0x00000000004C66F8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FontText::Draw(Caver::FontText *this, Caver::RenderingContext *a2)
{
  return Caver::FontText::DrawSubstring(
           this,
           a2,
           0,
           0x8E38E38E38E38E39LL * ((__int64)(*((_QWORD *)this + 23) - *((_QWORD *)this + 22)) >> 2));
}

