/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BEC0
 * Mangled: _ZNK5Caver23MagicSpellCastComponent5CloneEv
 * Demangled: Caver::MagicSpellCastComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000028BD88  Caver::MagicSpellCastComponent::~MagicSpellCastComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002001C0  Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *   0x000000000028BF28  Caver::MagicSpellCastComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000028BED4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028BEDC string=0x000000000028BEE0 "h"@"
 *   insn=0x000000000028BEE0 string=0x000000000028BEE4 "a"
 *   insn=0x000000000028BEF0 string=0x000000000028BEF4 "hz@"
 *   insn=0x000000000028BF00 string=0x000000000028BF04 "h"
 *   insn=0x000000000028BF1C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028BF20 string=0x000000000028BF24 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MagicSpellCastComponent *__fastcall Caver::MagicSpellCastComponent::Clone(Caver::MagicSpellCastComponent *this)
{
  Caver::MagicSpellCastComponent *v2; // x20
  Caver::MagicSpellCastComponent *result; // x0

  v2 = (Caver::MagicSpellCastComponent *)operator new(0xA8u);
  Caver::MagicSpellCastComponent::MagicSpellCastComponent(v2);
  *((_DWORD *)v2 + 8) = *((_DWORD *)this + 8);
  sub_56A6A8((char *)v2 + 56);
  result = v2;
  *((_DWORD *)v2 + 30) = *((_DWORD *)this + 30);
  *((_DWORD *)v2 + 36) = *((_DWORD *)this + 36);
  return result;
}

