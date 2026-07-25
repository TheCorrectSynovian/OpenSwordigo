/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A4EA0
 * Mangled: _ZThn248_N5Caver9GUIWindow7KeyCharEjd
 * Demangled: `non-virtual thunk to'Caver::GUIWindow::KeyChar(uint,double)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 14
 *   insn=0x00000000004A4EAC string=0x00000000004A4EB0 "S"
 *   insn=0x00000000004A4EB0 string=0x00000000004A4EB4 "h"
 *   insn=0x00000000004A4EB8 string=0x00000000004A4EBC ""
 *   insn=0x00000000004A4EC0 string=0x00000000004A4EC4 ""
 *   insn=0x00000000004A4EC8 string=0x00000000004A4ECC ""
 *   insn=0x00000000004A4ED0 string=0x00000000004A4ED4 ""
 *   insn=0x00000000004A4ED4 string=0x00000000004A4ED8 ""
 *   insn=0x00000000004A4EDC string=0x00000000004A4EE0 "h"
 *   insn=0x00000000004A4EE8 string=0x00000000004A4EEC "A"
 *   insn=0x00000000004A4F04 string=0x00000000004A4F08 ""
 *   insn=0x00000000004A4F0C string=0x00000000004A4F10 ""
 *   insn=0x00000000004A4F14 string=0x00000000004A4F18 "!"
 *   insn=0x00000000004A4F18 string=0x00000000004A4F1C ""
 *   insn=0x00000000004A4F34 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall `non-virtual thunk to'Caver::GUIWindow::KeyChar(Caver::GUIWindow *this, int a2, double a3)
{
  char *v3; // x0
  char *v4; // t1
  _BYTE *result; // x0
  __int64 (__fastcall *v6)(_BYTE *, _QWORD *); // x8
  _QWORD v7[2]; // [xsp+0h] [xbp-30h] BYREF
  int v8; // [xsp+10h] [xbp-20h]
  __int64 v9; // [xsp+18h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (char *)*((_QWORD *)this + 25);
  v3 = (char *)this + 200;
  if ( v4 != v3 )
    return (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, double))(**(_QWORD **)(*((_QWORD *)v3 + 1) + 16LL) + 352LL))(
                      *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL),
                      a3);
  result = (_BYTE *)*((_QWORD *)v3 - 22);
  if ( result )
  {
    if ( !result[228] )
    {
      v6 = *(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)result + 40LL);
      v8 = a2;
      *(double *)v7 = a3;
      v7[1] = 0x300000000LL;
      return (_BYTE *)v6(result, v7);
    }
  }
  return result;
}

