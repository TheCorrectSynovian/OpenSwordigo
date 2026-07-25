/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AAE3C
 * Mangled: _ZN5Caver15GUITexturedRect5ResetEv
 * Demangled: Caver::GUITexturedRect::Reset(void)
 *
 * Callers: 1
 *   0x0000000000202F00  Caver::GUITexturedRect::Reset(void)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004AAE48 string=0x00000000004AAE4C "`"
 *   insn=0x00000000004AAE54 string=0x00000000004AAE58 "@"
 *   insn=0x00000000004AAE58 string=0x00000000004AAE5C ""
 *   insn=0x00000000004AAE5C string=0x00000000004AAE60 ""
 *   insn=0x00000000004AAE64 string=0x00000000004AAE68 ""
 *   insn=0x00000000004AAE68 string=0x00000000004AAE6C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GUITexturedRect::Reset(Caver::GUITexturedRect *this)
{
  _DWORD *result; // x0
  int v3; // w8

  result = *(_DWORD **)this;
  *(_QWORD *)this = 0;
  if ( result )
  {
    v3 = result[2] - 1;
    result[2] = v3;
    if ( !v3 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  *(_QWORD *)((char *)this + 20) = 0;
  *(_QWORD *)((char *)this + 12) = 0;
  return result;
}

