/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035B564
 * Mangled: _ZN5Caver18GameViewController17RemoveGuideTargetEv
 * Demangled: Caver::GameViewController::RemoveGuideTarget(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x000000000035B574 string=0x000000000035B578 "`"
 *   insn=0x000000000035B57C string=0x000000000035B580 ""
 *   insn=0x000000000035B584 string=0x000000000035B588 "@"
 *   insn=0x000000000035B588 string=0x000000000035B58C ""
 *   insn=0x000000000035B58C string=0x000000000035B590 ""
 *   insn=0x000000000035B594 string=0x000000000035B598 ""
 *   insn=0x000000000035B598 string=0x000000000035B59C ""
 *   insn=0x000000000035B5AC string=0x000000000035B5B0 "h"
 *   insn=0x000000000035B5B0 string=0x000000000035B5B4 ""
 *   insn=0x000000000035B5B4 string=0x000000000035B5B8 "h"
 *   insn=0x000000000035B5B8 string=0x000000000035B5BC "!"
 *   insn=0x000000000035B5BC string=0x000000000035B5C0 "h"
 *   insn=0x000000000035B5C4 string=0x000000000035B5C8 "\t@"
 *   insn=0x000000000035B5CC string=0x000000000035B5D0 "h\n@"
 *   insn=0x000000000035B5D0 string=0x000000000035B5D4 ""
 *   insn=0x000000000035B5D4 string=0x000000000035B5D8 "h\n"
 *   insn=0x000000000035B5DC string=0x000000000035B5EC "h"
 *   insn=0x000000000035B5FC string=0x000000000035B600 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameViewController::RemoveGuideTarget(Caver::GameViewController *this)
{
  __int64 result; // x0
  int v3; // w8
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x8

  result = *((_QWORD *)this + 37);
  if ( result )
  {
    *(_BYTE *)(result + 232) = 1;
    *((_QWORD *)this + 37) = 0;
    v3 = *(_DWORD *)(result + 8) - 1;
    *(_DWORD *)(result + 8) = v3;
    if ( !v3 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  return result;
}

