/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000347EA4
 * Mangled: _ZN5Caver22GameOverViewController6UpdateEf
 * Demangled: Caver::GameOverViewController::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000202490  Caver::GUIViewController::Update(float)
 *   0x0000000000203640  Caver::GameOverViewController::ShowAdMaybe(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000347EB4 string=0x0000000000347EB8 ""
 *   insn=0x0000000000347EB8 string=0x0000000000347EBC "`z@"
 *   insn=0x0000000000347EC8 string=0x0000000000347ECC "`z"
 *   insn=0x0000000000347ED0 string=0x0000000000347ED4 "hBA9h"
 *   insn=0x0000000000347ED4 string=0x0000000000347ED8 "h"
 *   insn=0x0000000000347EF4 string=0x0000000000347EF8 "f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameOverViewController::Update(Caver::GameOverViewController *this, float a2)
{
  float v4; // s0

  v4 = *((float *)this + 30) + a2;
  *((float *)this + 30) = v4;
  if ( v4 > 4.5 && !*((_BYTE *)this + 80) )
    Caver::GameOverViewController::ShowAdMaybe(this);
  Caver::GUIViewController::Update(this, a2);
}

