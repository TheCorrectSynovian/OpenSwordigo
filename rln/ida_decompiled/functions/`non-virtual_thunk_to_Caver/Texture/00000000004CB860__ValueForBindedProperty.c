/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CB860
 * Mangled: _ZThn16_N5Caver7Texture22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::Texture::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202F40  Caver::Texture::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::Texture::ValueForBindedProperty(Caver::Texture *this, int a2)
{
  return Caver::Texture::ValueForBindedProperty((Caver::Texture *)((char *)this - 16), a2);
}

