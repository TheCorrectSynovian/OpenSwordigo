/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A7324
 * Mangled: _ZN5Caver9GUIEffect8HideBarsEf
 * Demangled: Caver::GUIEffect::HideBars(float)
 *
 * Callers: 1
 *   0x00000000001FDEA0  Caver::GUIEffect::HideBars(float)
 *
 * Callees: 1
 *   0x00000000001F8550  Caver::GUIEffect::Update(float)
 *
 * Referenced strings: 7
 *   insn=0x00000000004A7324 string=0x00000000004A7328 "!5G"
 *   insn=0x00000000004A7324 string=0x0000000000583734 "o"
 *   insn=0x00000000004A732C string=0x00000000004A7330 "8"
 *   insn=0x00000000004A733C string=0x00000000004A7340 ""
 *   insn=0x00000000004A7344 string=0x00000000004A7348 "e"
 *   insn=0x00000000004A7354 string=0x00000000004A7358 "~D"
 *   insn=0x00000000004A7358 string=0x00000000001F8550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIEffect::HideBars(Caver::GUIEffect *this, float a2)
{
  *((_DWORD *)this + 14) = 2;
  *(_BYTE *)this = 0;
  *((_BYTE *)this + 64) = 1;
  *((float *)this + 17) = a2;
  if ( a2 < 0.001 )
  {
    *((_DWORD *)this + 19) = 0;
    *((_DWORD *)this + 14) = 0;
  }
  return Caver::GUIEffect::Update(this, 0.0);
}

