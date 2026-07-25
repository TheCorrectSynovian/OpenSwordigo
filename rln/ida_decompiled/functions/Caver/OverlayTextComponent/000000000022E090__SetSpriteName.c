/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E090
 * Mangled: _ZN5Caver20OverlayTextComponent13SetSpriteNameERKSs
 * Demangled: Caver::OverlayTextComponent::SetSpriteName(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 2
 *   insn=0x000000000022E09C string=0x000000000022E0A0 "`B"
 *   insn=0x000000000022E0A8 string=0x000000000022E0AC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::SetSpriteName(__int64 a1)
{
  __int64 result; // x0

  result = sub_56A6A8(a1 + 144);
  *(_BYTE *)(a1 + 168) = 1;
  return result;
}

