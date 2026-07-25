/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202F40
 * Mangled: ._ZN5Caver7Texture22ValueForBindedPropertyEi
 * Demangled: Caver::Texture::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000004CB860  `non-virtual thunk to'Caver::Texture::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000004CB7B8  Caver::Texture::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202F44 string=0x00000000004CB7B8 "? "
 *   insn=0x0000000000202F48 string=0x0000000000202F4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::ValueForBindedProperty(Caver::Texture *this, int a2)
{
  return _ZN5Caver7Texture22ValueForBindedPropertyEi(this, a2);
}

