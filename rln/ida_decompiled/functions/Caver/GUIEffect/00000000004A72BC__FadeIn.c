/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A72BC
 * Mangled: _ZN5Caver9GUIEffect6FadeInEf
 * Demangled: Caver::GUIEffect::FadeIn(float)
 *
 * Callers: 1
 *   0x00000000001F45D0  Caver::GUIEffect::FadeIn(float)
 *
 * Callees: 1
 *   0x00000000001F8550  Caver::GUIEffect::Update(float)
 *
 * Referenced strings: 5
 *   insn=0x00000000004A72BC string=0x0000000000583734 "o"
 *   insn=0x00000000004A72C8 string=0x00000000004A72CC "8"
 *   insn=0x00000000004A72D0 string=0x00000000004A72D4 ""
 *   insn=0x00000000004A72D8 string=0x00000000004A72DC "e"
 *   insn=0x00000000004A72EC string=0x00000000001F8550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIEffect::FadeIn(Caver::GUIEffect *this, float a2)
{
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 14) = 1;
  *((_BYTE *)this + 64) = 1;
  *((float *)this + 17) = a2;
  if ( a2 < 0.001 )
  {
    *((_DWORD *)this + 19) = 0;
    *((_DWORD *)this + 14) = 0;
  }
  return Caver::GUIEffect::Update(this, 0.0);
}

