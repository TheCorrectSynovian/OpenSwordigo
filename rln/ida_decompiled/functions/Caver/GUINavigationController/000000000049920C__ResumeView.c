/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049920C
 * Mangled: _ZN5Caver23GUINavigationController10ResumeViewEv
 * Demangled: Caver::GUINavigationController::ResumeView(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000499210 string=0x0000000000499214 ""
 *   insn=0x0000000000499218 string=0x000000000049921C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUINavigationController::ResumeView(Caver::GUINavigationController *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 10);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 40LL))(result);
  return result;
}

