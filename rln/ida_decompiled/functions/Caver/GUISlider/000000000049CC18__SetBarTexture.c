/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049CC18
 * Mangled: _ZN5Caver9GUISlider13SetBarTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUISlider::SetBarTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x0000000000202CD0  Caver::GUISlider::SetBarTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000049CC20 string=0x000000000049CC24 "("
 *   insn=0x000000000049CC2C string=0x000000000049CC30 "\t\t@"
 *   insn=0x000000000049CC2C string=0x000000000049CC3C "`"
 *   insn=0x000000000049CC30 string=0x000000000049CC34 ")"
 *   insn=0x000000000049CC34 string=0x000000000049CC38 "\t\t"
 *   insn=0x000000000049CC3C string=0x000000000049CC40 "h"
 *   insn=0x000000000049CC44 string=0x000000000049CC48 "@"
 *   insn=0x000000000049CC48 string=0x000000000049CC4C ""
 *   insn=0x000000000049CC4C string=0x000000000049CC50 ""
 *   insn=0x000000000049CC54 string=0x000000000049CC58 ""
 *   insn=0x000000000049CC58 string=0x000000000049CC5C ""
 *   insn=0x000000000049CC64 string=0x000000000049CC68 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GUISlider::SetBarTexture(__int64 a1, __int64 *a2)
{
  __int64 v2; // x8
  _DWORD *result; // x0
  int v5; // w8

  v2 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  result = *(_DWORD **)(a1 + 328);
  *(_QWORD *)(a1 + 328) = v2;
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

