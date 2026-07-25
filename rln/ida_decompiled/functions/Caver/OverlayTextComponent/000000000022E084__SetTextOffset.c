/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E084
 * Mangled: _ZN5Caver20OverlayTextComponent13SetTextOffsetERKNS_7Vector2E
 * Demangled: Caver::OverlayTextComponent::SetTextOffset(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000022E084 string=0x000000000022E088 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::SetTextOffset(__int64 result, _QWORD *a2)
{
  *(_QWORD *)(result + 120) = *a2;
  return result;
}

