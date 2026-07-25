/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9C74
 * Mangled: _ZN5Caver27GUIScrollLocationControllerC2Ev
 * Demangled: Caver::GUIScrollLocationController::GUIScrollLocationController(void)
 *
 * Callers: 1
 *   0x00000000001FAD60  Caver::GUIScrollLocationController::GUIScrollLocationController(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004A9C8C string=0x00000000004A9C90 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::GUIScrollLocationController::GUIScrollLocationController(
        Caver::GUIScrollLocationController *this)
{
  long double result; // q0

  result = *(long double *)&xmmword_597240;
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 8) = 0;
  *(_QWORD *)((char *)this + 28) = 0x41A0000043160000LL;
  *(_OWORD *)((char *)this + 12) = xmmword_597240;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  return result;
}

