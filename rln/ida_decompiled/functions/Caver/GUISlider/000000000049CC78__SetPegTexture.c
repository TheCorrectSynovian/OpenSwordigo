/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049CC78
 * Mangled: _ZN5Caver9GUISlider13SetPegTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUISlider::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000001F7BC0  Caver::GUISlider::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000049CC80 string=0x000000000049CC84 "("
 *   insn=0x000000000049CC8C string=0x000000000049CC90 "\t\t@"
 *   insn=0x000000000049CC8C string=0x000000000049CC9C "`"
 *   insn=0x000000000049CC90 string=0x000000000049CC94 ")"
 *   insn=0x000000000049CC94 string=0x000000000049CC98 "\t\t"
 *   insn=0x000000000049CC9C string=0x000000000049CCA0 "h"
 *   insn=0x000000000049CCA4 string=0x000000000049CCA8 "@"
 *   insn=0x000000000049CCA8 string=0x000000000049CCAC ""
 *   insn=0x000000000049CCAC string=0x000000000049CCB0 ""
 *   insn=0x000000000049CCB4 string=0x000000000049CCB8 ""
 *   insn=0x000000000049CCB8 string=0x000000000049CCBC ""
 *   insn=0x000000000049CCC4 string=0x000000000049CCC8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GUISlider::SetPegTexture(__int64 a1, __int64 *a2)
{
  __int64 v2; // x8
  _DWORD *result; // x0
  int v5; // w8

  v2 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  result = *(_DWORD **)(a1 + 336);
  *(_QWORD *)(a1 + 336) = v2;
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

