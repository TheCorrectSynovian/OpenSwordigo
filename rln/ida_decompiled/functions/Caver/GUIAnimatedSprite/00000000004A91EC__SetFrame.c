/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A91EC
 * Mangled: _ZN5Caver17GUIAnimatedSprite8SetFrameERKNS_9RectangleE
 * Demangled: Caver::GUIAnimatedSprite::SetFrame(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F5AC0  Caver::GUIAnimatedSprite::SetFrame(Caver::Rectangle const&)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004A91F4 string=0x00000000004A91F8 " "
 *   insn=0x00000000004A91F8 string=0x00000000004A91FC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::GUIAnimatedSprite::SetFrame(__int64 a1, _OWORD *a2)
{
  long double result; // q0

  *(_OWORD *)(a1 + 8) = *a2;
  result = *(long double *)a2;
  *(_BYTE *)(a1 + 48) = 1;
  *(long double *)(a1 + 52) = result;
  return result;
}

