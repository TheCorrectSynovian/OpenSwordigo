/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B8A0
 * Mangled: _ZN5Caver16RenderingContext19SetDefaultBlendFuncEv
 * Demangled: Caver::RenderingContext::SetDefaultBlendFunc(void)
 *
 * Callers: 1
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *
 * Callees: 1
 *   0x00000000001FA5C0  .glBlendFunc
 *
 * Referenced strings: 10
 *   insn=0x000000000048B8A0 string=0x000000000048B8A4 "\ti@"
 *   insn=0x000000000048B8A4 string=0x000000000048B8A8 "?"
 *   insn=0x000000000048B8AC string=0x000000000048B8B0 "\tm@"
 *   insn=0x000000000048B8AC string=0x000000000048B8C0 "I"
 *   insn=0x000000000048B8B0 string=0x000000000048B8B4 "?"
 *   insn=0x000000000048B8B4 string=0x000000000048B8B8 "A"
 *   insn=0x000000000048B8C0 string=0x000000000048B8C4 " "
 *   insn=0x000000000048B8C8 string=0x000000000048B8CC "a`"
 *   insn=0x000000000048B8D0 string=0x000000000048B8D4 ";"
 *   insn=0x000000000048B8D4 string=0x00000000001FA5C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetDefaultBlendFunc(__int64 this)
{
  if ( *(_DWORD *)(this + 104) != 1 || *(_DWORD *)(this + 108) != 771 )
  {
    *(_QWORD *)(this + 104) = 0x30300000001LL;
    return glBlendFunc();
  }
  return this;
}

