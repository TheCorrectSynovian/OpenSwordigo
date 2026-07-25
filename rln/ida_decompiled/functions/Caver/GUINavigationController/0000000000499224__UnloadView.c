/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000499224
 * Mangled: _ZN5Caver23GUINavigationController10UnloadViewEv
 * Demangled: Caver::GUINavigationController::UnloadView(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000499228 string=0x000000000049922C ""
 *   insn=0x0000000000499230 string=0x0000000000499234 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUINavigationController::UnloadView(Caver::GUINavigationController *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 10);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
  return result;
}

