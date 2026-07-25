/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C881C
 * Mangled: _ZN5Caver7TextureC2Ev
 * Demangled: Caver::Texture::Texture(void)
 *
 * Callers: 1
 *   0x00000000001F7470  Caver::Texture::Texture(void)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000004C8820 string=0x00000000004C8824 "%C"
 *   insn=0x00000000004C8828 string=0x00000000004C882C "\tl"
 *   insn=0x00000000004C882C string=0x00000000004C8830 "\tA"
 *   insn=0x00000000004C8830 string=0x00000000004C8834 "\t"
 *   insn=0x00000000004C8838 string=0x00000000004C883C ")"
 *   insn=0x00000000004C883C string=0x00000000004C8840 ""
 *   insn=0x00000000004C8848 string=0x00000000004C884C ")a"
 *   insn=0x00000000004C886C string=0x00000000004C8870 "|"
 *   insn=0x00000000004C8870 string=0x00000000004C8874 "\t"
 *   insn=0x00000000004C8874 string=0x00000000004C8878 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::Texture(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 108) = 1065353216;
  *(_QWORD *)this = off_6D7CD0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(_QWORD *)(this + 100) = 0;
  *(_QWORD *)(this + 92) = 0;
  *(_QWORD *)(this + 84) = 0;
  *(_QWORD *)(this + 76) = 0;
  *(_QWORD *)(this + 68) = 0;
  *(_QWORD *)(this + 144) = 0;
  *(_QWORD *)(this + 152) = 0;
  *(_QWORD *)(this + 128) = 0;
  *(_QWORD *)(this + 136) = 0;
  *(_QWORD *)(this + 112) = 0;
  *(_QWORD *)(this + 120) = 0;
  *(_QWORD *)(this + 16) = &off_6D7D20;
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = &byte_6FD2F8;
  *(_QWORD *)(this + 48) = &byte_6FD2F8;
  *(_BYTE *)(this + 160) = 0;
  return this;
}

