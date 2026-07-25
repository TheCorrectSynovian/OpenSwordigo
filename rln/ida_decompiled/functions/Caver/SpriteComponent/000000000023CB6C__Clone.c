/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CB6C
 * Mangled: _ZNK5Caver15SpriteComponent5CloneEv
 * Demangled: Caver::SpriteComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000023C99C  Caver::SpriteComponent::~SpriteComponent()
 *
 * Callees: 6
 *   0x00000000001F4360  Caver::SpriteComponent::SpriteComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000023CBD8  Caver::SpriteComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000023CB80 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023CB88 string=0x000000000023CB8C "h"@"
 *   insn=0x000000000023CB88 string=0x00000000001F4360 "P'"
 *   insn=0x000000000023CB8C string=0x000000000023CB90 "a"
 *   insn=0x000000000023CB9C string=0x000000000023CBA0 "a"
 *   insn=0x000000000023CBA8 string=0x000000000023CBAC "hbB9"
 *   insn=0x000000000023CBCC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000023CBD0 string=0x000000000023CBD4 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpriteComponent::Clone(Caver::SpriteComponent *this)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = operator new(0xA0u);
  Caver::SpriteComponent::SpriteComponent((Caver::SpriteComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  sub_56A6A8(v2 + 112);
  result = v2;
  *(_BYTE *)(v2 + 152) = *((_BYTE *)this + 152);
  return result;
}

