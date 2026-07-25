/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045DE04
 * Mangled: _ZN5Caver13ObjectLibrary15ContainsTextureEPNS_7TextureEb
 * Demangled: Caver::ObjectLibrary::ContainsTexture(Caver::Texture *,bool)
 *
 * Callers: 1
 *   0x000000000045DE04  Caver::ObjectLibrary::ContainsTexture(Caver::Texture *,bool)
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 12
 *   insn=0x000000000045DE1C string=0x000000000045DE20 "h"
 *   insn=0x000000000045DE28 string=0x000000000045DE2C ""
 *   insn=0x000000000045DE2C string=0x000000000045DE4C "xfE"
 *   insn=0x000000000045DE4C string=0x000000000045DE50 "?"
 *   insn=0x000000000045DE5C string=0x000000000045DE60 ""
 *   insn=0x000000000045DE64 string=0x000000000045DE68 ""
 *   insn=0x000000000045DE7C string=0x00000000001F5190 "P'"
 *   insn=0x000000000045DE84 string=0x000000000045DE88 "?"
 *   insn=0x000000000045DE90 string=0x000000000045DE94 "u"
 *   insn=0x000000000045DE98 string=0x000000000045DE9C "h"
 *   insn=0x000000000045DEA0 string=0x000000000045DEA4 " "
 *   insn=0x000000000045DECC string=0x000000000045DED0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ObjectLibrary::ContainsTexture(Caver::ObjectLibrary *this, Caver::Texture *a2, char a3)
{
  __int64 v7; // x24
  __int64 v8; // x25
  _QWORD *v9; // x22
  size_t v10; // x23
  _QWORD *v11; // x0
  Caver::ObjectLibrary **v12; // x21
  Caver::ObjectLibrary **v13; // x22
  char v14; // w23
  char v15; // w0

  if ( *((_BYTE *)this + 128) )
    return 0;
  v7 = *((_QWORD *)this + 10);
  v8 = *((_QWORD *)this + 11);
  if ( v8 != v7 )
  {
    v9 = (_QWORD *)*((_QWORD *)a2 + 6);
    v10 = *(v9 - 3);
    do
    {
      v11 = *(_QWORD **)(*(_QWORD *)v7 + 48LL);
      if ( *(v11 - 3) == v10 && !memcmp(v11, v9, v10) )
        return 1;
      v7 += 8;
    }
    while ( v8 != v7 );
  }
  if ( (a3 & 1) == 0 )
    return 0;
  v12 = (Caver::ObjectLibrary **)*((_QWORD *)this + 7);
  v13 = (Caver::ObjectLibrary **)*((_QWORD *)this + 8);
  *((_BYTE *)this + 128) = 1;
  if ( v12 == v13 )
  {
    *((_BYTE *)this + 128) = 0;
    return 0;
  }
  v14 = 0;
  do
  {
    v15 = Caver::ObjectLibrary::ContainsTexture(*v12, a2, 1);
    if ( (v15 & 1) == 0 )
      v12 += 2;
    v14 |= v15;
  }
  while ( v12 != v13 && (v15 & 1) == 0 );
  *((_BYTE *)this + 128) = 0;
  return (v14 & 1) != 0;
}

