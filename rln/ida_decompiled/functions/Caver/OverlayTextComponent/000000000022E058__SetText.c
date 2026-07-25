/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E058
 * Mangled: _ZN5Caver20OverlayTextComponent7SetTextERKSs
 * Demangled: Caver::OverlayTextComponent::SetText(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 2
 *   insn=0x000000000022E064 string=0x000000000022E068 "`"
 *   insn=0x000000000022E070 string=0x000000000022E074 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::SetText(__int64 a1)
{
  __int64 result; // x0

  result = sub_56A6A8(a1 + 112);
  *(_BYTE *)(a1 + 128) = 1;
  return result;
}

