/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000458874
 * Mangled: _ZN5Caver16CameraController13StopFollowingEv
 * Demangled: Caver::CameraController::StopFollowing(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x0000000000458880 string=0x0000000000458884 "`6@"
 *   insn=0x000000000045888C string=0x0000000000458890 "@"
 *   insn=0x000000000045888C string=0x00000000004588AC "`:@"
 *   insn=0x0000000000458890 string=0x0000000000458894 ""
 *   insn=0x0000000000458894 string=0x0000000000458898 ""
 *   insn=0x000000000045889C string=0x00000000004588A0 ""
 *   insn=0x00000000004588A0 string=0x00000000004588A4 ""
 *   insn=0x00000000004588B4 string=0x00000000004588B8 "@"
 *   insn=0x00000000004588B8 string=0x00000000004588BC ""
 *   insn=0x00000000004588BC string=0x00000000004588C0 ""
 *   insn=0x00000000004588C4 string=0x00000000004588D4 ""
 *   insn=0x00000000004588E0 string=0x00000000004588E4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::CameraController::StopFollowing(Caver::CameraController *this)
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
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

