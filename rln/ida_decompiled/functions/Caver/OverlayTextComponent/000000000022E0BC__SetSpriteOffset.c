/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E0BC
 * Mangled: _ZN5Caver20OverlayTextComponent15SetSpriteOffsetERKNS_7Vector2E
 * Demangled: Caver::OverlayTextComponent::SetSpriteOffset(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000022E0BC string=0x000000000022E0C0 "L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::SetSpriteOffset(__int64 result, _QWORD *a2)
{
  *(_QWORD *)(result + 152) = *a2;
  return result;
}

