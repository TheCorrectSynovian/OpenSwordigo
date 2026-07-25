/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE140
 * Mangled: ._ZNK5Caver8FontText13DrawSubstringEPNS_16RenderingContextEmm
 * Demangled: Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *
 * Callers: 2
 *   0x00000000004AA868  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *   0x00000000004C66DC  Caver::FontText::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x00000000004C6704  Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE148 string=0x00000000001FE14C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontText::DrawSubstring(
        Caver::FontText *this,
        Caver::RenderingContext *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return _ZNK5Caver8FontText13DrawSubstringEPNS_16RenderingContextEmm(this, a2, a3, a4);
}

