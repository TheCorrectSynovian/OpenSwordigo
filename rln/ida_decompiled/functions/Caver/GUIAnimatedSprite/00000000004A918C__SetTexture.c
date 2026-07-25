/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A918C
 * Mangled: _ZN5Caver17GUIAnimatedSprite10SetTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUIAnimatedSprite::SetTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x0000000000200F80  Caver::GUIAnimatedSprite::SetTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000004A9194 string=0x00000000004A9198 "("
 *   insn=0x00000000004A91A0 string=0x00000000004A91A4 "\t\t@"
 *   insn=0x00000000004A91A0 string=0x00000000004A91B0 "`"
 *   insn=0x00000000004A91A4 string=0x00000000004A91A8 ")"
 *   insn=0x00000000004A91A8 string=0x00000000004A91AC "\t\t"
 *   insn=0x00000000004A91B0 string=0x00000000004A91B4 "h"
 *   insn=0x00000000004A91B8 string=0x00000000004A91BC "@"
 *   insn=0x00000000004A91BC string=0x00000000004A91C0 ""
 *   insn=0x00000000004A91C0 string=0x00000000004A91C4 ""
 *   insn=0x00000000004A91C8 string=0x00000000004A91CC ""
 *   insn=0x00000000004A91CC string=0x00000000004A91D0 ""
 *   insn=0x00000000004A91D8 string=0x00000000004A91DC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GUIAnimatedSprite::SetTexture(__int64 a1, __int64 *a2)
{
  __int64 v2; // x8
  _DWORD *result; // x0
  int v5; // w8

  v2 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v2 + 8);
  result = *(_DWORD **)a1;
  *(_QWORD *)a1 = v2;
  if ( result )
  {
    v5 = result[2] - 1;
    result[2] = v5;
    if ( !v5 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  *(_BYTE *)(a1 + 48) = 1;
  return result;
}

