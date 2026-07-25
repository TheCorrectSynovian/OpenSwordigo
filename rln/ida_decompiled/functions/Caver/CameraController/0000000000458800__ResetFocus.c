/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000458800
 * Mangled: _ZN5Caver16CameraController10ResetFocusEv
 * Demangled: Caver::CameraController::ResetFocus(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000045880C string=0x0000000000458810 "`6@"
 *   insn=0x0000000000458818 string=0x000000000045881C "@"
 *   insn=0x0000000000458818 string=0x0000000000458838 "`:@"
 *   insn=0x000000000045881C string=0x0000000000458820 ""
 *   insn=0x0000000000458820 string=0x0000000000458824 ""
 *   insn=0x0000000000458828 string=0x000000000045882C ""
 *   insn=0x000000000045882C string=0x0000000000458830 ""
 *   insn=0x0000000000458840 string=0x0000000000458844 "@"
 *   insn=0x0000000000458844 string=0x0000000000458848 ""
 *   insn=0x0000000000458848 string=0x000000000045884C ""
 *   insn=0x0000000000458850 string=0x0000000000458854 ""
 *   insn=0x0000000000458854 string=0x0000000000458858 ""
 *   insn=0x0000000000458860 string=0x0000000000458864 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::CameraController::ResetFocus(Caver::CameraController *this)
{
  _DWORD *v2; // x0
  int v3; // w8
  _DWORD *result; // x0
  int v5; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0;
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  result = (_DWORD *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0;
  if ( result )
  {
    v5 = result[2] - 1;
    result[2] = v5;
    if ( !v5 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  *(_DWORD *)this = 2;
  return result;
}

