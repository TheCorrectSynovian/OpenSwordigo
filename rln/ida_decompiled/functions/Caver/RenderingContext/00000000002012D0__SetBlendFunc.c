/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002012D0
 * Mangled: ._ZN5Caver16RenderingContext12SetBlendFuncEjj
 * Demangled: Caver::RenderingContext::SetBlendFunc(uint,uint)
 *
 * Callers: 2
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000004C6704  Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *
 * Callees: 1
 *   0x000000000048B874  Caver::RenderingContext::SetBlendFunc(uint,uint)
 *
 * Referenced strings: 2
 *   insn=0x00000000002012D4 string=0x000000000048B874 "h@"
 *   insn=0x00000000002012D8 string=0x00000000002012DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetBlendFunc(
        Caver::RenderingContext *this,
        unsigned int a2,
        unsigned int a3)
{
  return _ZN5Caver16RenderingContext12SetBlendFuncEjj(this, a2, a3);
}

