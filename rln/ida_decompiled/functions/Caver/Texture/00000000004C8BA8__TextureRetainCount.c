/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C8BA8
 * Mangled: _ZNK5Caver7Texture18TextureRetainCountEv
 * Demangled: Caver::Texture::TextureRetainCount(void)
 *
 * Callers: 2
 *   0x00000000001FDF40  Caver::Texture::TextureRetainCount(void)
 *   0x00000000004C8BA8  Caver::Texture::TextureRetainCount(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004C8BD8 string=0x00000000004C8BDC "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::TextureRetainCount(Caver::Texture *this)
{
  Caver::Texture **v1; // x20
  Caver::Texture **v2; // x21
  unsigned int v3; // w19
  Caver::Texture *v4; // t1
  int v5; // w0

  v1 = (Caver::Texture **)*((_QWORD *)this + 15);
  v2 = (Caver::Texture **)*((_QWORD *)this + 16);
  v3 = *((_DWORD *)this + 2);
  while ( v2 != v1 )
  {
    v4 = *v1++;
    v5 = Caver::Texture::TextureRetainCount(v4);
    if ( v5 > (int)v3 )
      v3 = v5;
  }
  return v3;
}

