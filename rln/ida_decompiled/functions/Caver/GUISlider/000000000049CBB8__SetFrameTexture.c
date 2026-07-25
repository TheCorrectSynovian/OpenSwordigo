/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049CBB8
 * Mangled: _ZN5Caver9GUISlider15SetFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUISlider::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x0000000000200E20  Caver::GUISlider::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000049CBC0 string=0x000000000049CBC4 "("
 *   insn=0x000000000049CBCC string=0x000000000049CBD0 "\t\t@"
 *   insn=0x000000000049CBCC string=0x000000000049CBDC "`"
 *   insn=0x000000000049CBD0 string=0x000000000049CBD4 ")"
 *   insn=0x000000000049CBD4 string=0x000000000049CBD8 "\t\t"
 *   insn=0x000000000049CBDC string=0x000000000049CBE0 "h"
 *   insn=0x000000000049CBE4 string=0x000000000049CBE8 "@"
 *   insn=0x000000000049CBE8 string=0x000000000049CBEC ""
 *   insn=0x000000000049CBEC string=0x000000000049CBF0 ""
 *   insn=0x000000000049CBF4 string=0x000000000049CBF8 ""
 *   insn=0x000000000049CBF8 string=0x000000000049CBFC ""
 *   insn=0x000000000049CC04 string=0x000000000049CC08 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GUISlider::SetFrameTexture(__int64 a1, __int64 *a2)
{
  __int64 v2; // x8
  _DWORD *result; // x0
  int v5; // w8

  v2 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  result = *(_DWORD **)(a1 + 320);
  *(_QWORD *)(a1 + 320) = v2;
  if ( result )
  {
    v5 = result[2] - 1;
    result[2] = v5;
    if ( !v5 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  *(_BYTE *)(a1 + 352) = 1;
  return result;
}

