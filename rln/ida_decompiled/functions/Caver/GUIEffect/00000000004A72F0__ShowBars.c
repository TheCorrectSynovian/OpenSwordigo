/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A72F0
 * Mangled: _ZN5Caver9GUIEffect8ShowBarsEf
 * Demangled: Caver::GUIEffect::ShowBars(float)
 *
 * Callers: 1
 *   0x0000000000202540  Caver::GUIEffect::ShowBars(float)
 *
 * Callees: 1
 *   0x00000000001F8550  Caver::GUIEffect::Update(float)
 *
 * Referenced strings: 5
 *   insn=0x00000000004A72F0 string=0x0000000000583734 "o"
 *   insn=0x00000000004A72FC string=0x00000000004A7300 "8"
 *   insn=0x00000000004A730C string=0x00000000004A7310 "e"
 *   insn=0x00000000004A7314 string=0x00000000004A7318 "L"
 *   insn=0x00000000004A7320 string=0x00000000001F8550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIEffect::ShowBars(Caver::GUIEffect *this, float a2)
{
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 14) = 2;
  *((_BYTE *)this + 64) = 0;
  *((float *)this + 17) = a2;
  if ( a2 < 0.001 )
    *((_DWORD *)this + 19) = 1065353216;
  return Caver::GUIEffect::Update(this, 0.0);
}

