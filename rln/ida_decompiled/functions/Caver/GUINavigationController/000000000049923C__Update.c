/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049923C
 * Mangled: _ZN5Caver23GUINavigationController6UpdateEf
 * Demangled: Caver::GUINavigationController::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202490  Caver::GUIViewController::Update(float)
 *
 * Referenced strings: 4
 *   insn=0x000000000049924C string=0x0000000000499250 "`*@"
 *   insn=0x0000000000499250 string=0x0000000000499254 ""
 *   insn=0x0000000000499258 string=0x000000000049925C ""
 *   insn=0x0000000000499260 string=0x0000000000499264 "%@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUINavigationController::Update(Caver::GUINavigationController *this, float a2)
{
  __int64 v3; // x0

  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v3 + 72LL))(v3, a2);
  Caver::GUIViewController::Update(this, a2);
}

