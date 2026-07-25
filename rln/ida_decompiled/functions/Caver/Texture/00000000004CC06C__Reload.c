/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC06C
 * Mangled: _ZN5Caver7Texture6ReloadEb
 * Demangled: Caver::Texture::Reload(bool)
 *
 * Callers: 1
 *   0x00000000001F8430  Caver::Texture::Reload(bool)
 *
 * Callees: 2
 *   0x00000000001F3860  Caver::Texture::Load(void)
 *   0x0000000000200370  Caver::Texture::Unload(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004CC078 string=0x00000000004CC07C "h:@"
 *   insn=0x00000000004CC0B0 string=0x00000000001F3860 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Texture::Reload(Caver::Texture *this, char a2)
{
  if ( *((_DWORD *)this + 14) )
  {
    if ( (a2 & 1) != 0 )
      Caver::Texture::Unload(this);
    else
      *((_DWORD *)this + 14) = 0;
    Caver::Texture::Load(this);
  }
}

