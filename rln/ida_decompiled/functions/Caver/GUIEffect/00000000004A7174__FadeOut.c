/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A7174
 * Mangled: _ZN5Caver9GUIEffect7FadeOutEf
 * Demangled: Caver::GUIEffect::FadeOut(float)
 *
 * Callers: 1
 *   0x0000000000203CC0  Caver::GUIEffect::FadeOut(float)
 *
 * Callees: 1
 *   0x00000000001F8550  Caver::GUIEffect::Update(float)
 *
 * Referenced strings: 5
 *   insn=0x00000000004A7174 string=0x0000000000583734 "o"
 *   insn=0x00000000004A7180 string=0x00000000004A7184 "8"
 *   insn=0x00000000004A7190 string=0x00000000004A7194 "e"
 *   insn=0x00000000004A7198 string=0x00000000004A719C "L"
 *   insn=0x00000000004A71A4 string=0x00000000001F8550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIEffect::FadeOut(Caver::GUIEffect *this, float a2)
{
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 14) = 1;
  *((_BYTE *)this + 64) = 0;
  *((float *)this + 17) = a2;
  if ( a2 < 0.001 )
    *((_DWORD *)this + 19) = 1065353216;
  return Caver::GUIEffect::Update(this, 0.0);
}

