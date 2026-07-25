/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B874
 * Mangled: _ZN5Caver16RenderingContext12SetBlendFuncEjj
 * Demangled: Caver::RenderingContext::SetBlendFunc(uint,uint)
 *
 * Callers: 1
 *   0x00000000002012D0  Caver::RenderingContext::SetBlendFunc(uint,uint)
 *
 * Callees: 1
 *   0x00000000001FA5C0  .glBlendFunc
 *
 * Referenced strings: 4
 *   insn=0x000000000048B87C string=0x000000000048B880 "l@"
 *   insn=0x000000000048B884 string=0x000000000048B888 "A"
 *   insn=0x000000000048B898 string=0x000000000048B89C "I"
 *   insn=0x000000000048B89C string=0x00000000001FA5C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetBlendFunc(__int64 this, int a2, int a3)
{
  if ( *(_DWORD *)(this + 104) != a2 || *(_DWORD *)(this + 108) != a3 )
  {
    *(_DWORD *)(this + 104) = a2;
    *(_DWORD *)(this + 108) = a3;
    return glBlendFunc();
  }
  return this;
}

