/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CB9BC
 * Mangled: _ZN5Caver7Texture20SetDefaultParametersEb
 * Demangled: Caver::Texture::SetDefaultParameters(bool)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FCFD0  Caver::RenderingContext::CurrentContext(void)
 *   0x00000000002030A0  .glTexParameteri
 *
 * Referenced strings: 10
 *   insn=0x00000000004CB9C4 string=0x00000000004CB9E4 " "
 *   insn=0x00000000004CB9C8 string=0x00000000004CB9CC ""
 *   insn=0x00000000004CB9C8 string=0x00000000001FCFD0 "0'"
 *   insn=0x00000000004CB9D0 string=0x00000000004CB9D4 " "
 *   insn=0x00000000004CB9D4 string=0x00000000004CB9D8 "!"
 *   insn=0x00000000004CB9D8 string=0x00000000004CB9DC """
 *   insn=0x00000000004CB9E4 string=0x00000000004CB9E8 "!"
 *   insn=0x00000000004CB9E8 string=0x00000000004CB9EC """
 *   insn=0x00000000004CB9F0 string=0x00000000004CB9F4 " "
 *   insn=0x00000000004CB9F8 string=0x00000000004CB9FC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::SetDefaultParameters(Caver::Texture *this, char a2)
{
  if ( (a2 & 1) != 0 )
    Caver::RenderingContext::CurrentContext(this);
  glTexParameteri();
  return glTexParameteri();
}

