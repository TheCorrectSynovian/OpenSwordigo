/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A4E08
 * Mangled: _ZN5Caver9GUIWindow7KeyCharEjd
 * Demangled: Caver::GUIWindow::KeyChar(uint,double)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 15
 *   insn=0x00000000004A4E14 string=0x00000000004A4E18 "S"
 *   insn=0x00000000004A4E18 string=0x00000000004A4E1C "h"
 *   insn=0x00000000004A4E1C string=0x00000000004A4E20 "\t"
 *   insn=0x00000000004A4E24 string=0x00000000004A4E28 ""
 *   insn=0x00000000004A4E30 string=0x00000000004A4E34 ""
 *   insn=0x00000000004A4E38 string=0x00000000004A4E3C ""
 *   insn=0x00000000004A4E3C string=0x00000000004A4E40 ""
 *   insn=0x00000000004A4E44 string=0x00000000004A4E48 "h"
 *   insn=0x00000000004A4E50 string=0x00000000004A4E54 "A"
 *   insn=0x00000000004A4E54 string=0x00000000004A4E9C "E"
 *   insn=0x00000000004A4E6C string=0x00000000004A4E70 ""
 *   insn=0x00000000004A4E74 string=0x00000000004A4E78 ""
 *   insn=0x00000000004A4E7C string=0x00000000004A4E80 "!"
 *   insn=0x00000000004A4E80 string=0x00000000004A4E84 ""
 *   insn=0x00000000004A4E9C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall Caver::GUIWindow::KeyChar(Caver::GUIWindow *this, int a2, double a3)
{
  _BYTE *result; // x0
  __int64 (__fastcall *v4)(_BYTE *, _QWORD *); // x8
  _QWORD v5[2]; // [xsp+0h] [xbp-30h] BYREF
  int v6; // [xsp+10h] [xbp-20h]
  __int64 v7; // [xsp+18h] [xbp-18h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((Caver::GUIWindow **)this + 56) != (Caver::GUIWindow *)((char *)this + 448) )
    return (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, double))(**(_QWORD **)(*((_QWORD *)this + 57) + 16LL) + 352LL))(
                      *(_QWORD *)(*((_QWORD *)this + 57) + 16LL),
                      a3);
  result = (_BYTE *)*((_QWORD *)this + 34);
  if ( result )
  {
    if ( !result[228] )
    {
      v4 = *(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)result + 40LL);
      v6 = a2;
      *(double *)v5 = a3;
      v5[1] = 0x300000000LL;
      return (_BYTE *)v4(result, v5);
    }
  }
  return result;
}

