/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9EA0
 * Mangled: _ZN5Caver13GUITextBubble12SetMaxBoundsERKNS_9RectangleE
 * Demangled: Caver::GUITextBubble::SetMaxBounds(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F4310  Caver::GUITextBubble::SetMaxBounds(Caver::Rectangle const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004A9EA4 string=0x00000000004A9EA8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::GUITextBubble::SetMaxBounds(__int64 a1, long double *a2)
{
  long double result; // q0

  result = *a2;
  *(_BYTE *)(a1 + 32) = 1;
  *(long double *)a1 = result;
  return result;
}

