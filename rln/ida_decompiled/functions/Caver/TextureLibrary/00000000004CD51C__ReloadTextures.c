/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CD51C
 * Mangled: _ZN5Caver14TextureLibrary14ReloadTexturesEb
 * Demangled: Caver::TextureLibrary::ReloadTextures(bool)
 *
 * Callers: 1
 *   0x00000000001F5010  Caver::TextureLibrary::ReloadTextures(bool)
 *
 * Callees: 2
 *   0x00000000001F8430  Caver::Texture::Reload(bool)
 *   0x000000000054C640  sub_54C640
 *
 * Referenced strings: 7
 *   insn=0x00000000004CD534 string=0x00000000004CD538 ""
 *   insn=0x00000000004CD540 string=0x00000000004CD544 "4"
 *   insn=0x00000000004CD544 string=0x00000000004CD548 "`"
 *   insn=0x00000000004CD548 string=0x00000000004CD54C "8@"
 *   insn=0x00000000004CD54C string=0x00000000004CD550 "h"
 *   insn=0x00000000004CD558 string=0x00000000001F8430 "0'"
 *   insn=0x00000000004CD55C string=0x00000000004CD560 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureLibrary::ReloadTextures(__int64 this, char a2)
{
  __int64 v2; // x19
  __int64 v3; // x21
  bool v4; // w20
  Caver::Texture *v5; // x0

  v2 = *(_QWORD *)(this + 32);
  v3 = this + 16;
  *(_BYTE *)(this + 56) = 1;
  if ( v2 != this + 16 )
  {
    v4 = a2 & 1;
    do
    {
      v5 = *(Caver::Texture **)(v2 + 40);
      if ( !*((_QWORD *)v5 + 14) )
        Caver::Texture::Reload(v5, v4);
      this = sub_54C640(v2);
      v2 = this;
    }
    while ( this != v3 );
  }
  return this;
}

