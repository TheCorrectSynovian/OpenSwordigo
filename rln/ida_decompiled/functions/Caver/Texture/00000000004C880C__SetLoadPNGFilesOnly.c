/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C880C
 * Mangled: _ZN5Caver7Texture19SetLoadPNGFilesOnlyEb
 * Demangled: Caver::Texture::SetLoadPNGFilesOnly(bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004C880C string=0x00000000004C8810 "\t"
 *   insn=0x00000000004C8810 string=0x00000000004C8814 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::SetLoadPNGFilesOnly(__int64 this)
{
  byte_6E9FBC = this & 1;
  return this;
}

