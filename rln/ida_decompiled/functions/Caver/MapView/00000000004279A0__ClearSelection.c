/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004279A0
 * Mangled: _ZN5Caver7MapView14ClearSelectionEv
 * Demangled: Caver::MapView::ClearSelection(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD3D0  Caver::MapView::UpdateSelectionSprite(void)
 *
 * Referenced strings: 18
 *   insn=0x00000000004279AC string=0x00000000004279B0 "h"
 *   insn=0x00000000004279B4 string=0x00000000004279C4 "`"
 *   insn=0x00000000004279C0 string=0x00000000001FD3D0 "0'"
 *   insn=0x00000000004279C8 string=0x00000000004279CC ""
 *   insn=0x00000000004279CC string=0x00000000004279D0 "t""
 *   insn=0x00000000004279D0 string=0x00000000004279D4 "=@"
 *   insn=0x00000000004279D8 string=0x00000000004279DC "s\nB"
 *   insn=0x00000000004279E4 string=0x00000000004279E8 "h"
 *   insn=0x00000000004279E8 string=0x00000000004279EC ""
 *   insn=0x00000000004279EC string=0x00000000004279F0 "h"
 *   insn=0x00000000004279F0 string=0x00000000004279F4 "!"
 *   insn=0x00000000004279F4 string=0x00000000004279F8 "h"
 *   insn=0x00000000004279FC string=0x0000000000427A00 "\t@"
 *   insn=0x0000000000427A04 string=0x0000000000427A08 "h\n@"
 *   insn=0x0000000000427A08 string=0x0000000000427A0C ""
 *   insn=0x0000000000427A0C string=0x0000000000427A10 "h\n"
 *   insn=0x0000000000427A14 string=0x0000000000427A24 "h"
 *   insn=0x0000000000427A34 string=0x0000000000427A38 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapView::ClearSelection(Caver::MapView *this)
{
  __int64 result; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x8

  if ( *((_BYTE *)this + 1016) )
  {
    *((_BYTE *)this + 1016) = 0;
    Caver::MapView::UpdateSelectionSprite(this);
  }
  result = *((_QWORD *)this + 129);
  if ( result )
  {
    v3 = (_QWORD *)((char *)this + 1032);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 120LL))(result);
    v4 = (_QWORD *)*((_QWORD *)this + 130);
    *v3 = 0;
    v3[1] = 0;
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
  }
  return result;
}

