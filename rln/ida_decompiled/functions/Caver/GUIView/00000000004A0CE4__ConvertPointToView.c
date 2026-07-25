/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0CE4
 * Mangled: _ZNK5Caver7GUIView18ConvertPointToViewERKNS_7Vector2EPS0_
 * Demangled: Caver::GUIView::ConvertPointToView(Caver::Vector2 const&,Caver::GUIView*)
 *
 * Callers: 1
 *   0x00000000001FDA40  Caver::GUIView::ConvertPointToView(Caver::Vector2 const&,Caver::GUIView*)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 15
 *   insn=0x00000000004A0CF4 string=0x00000000004A0CF8 "U"
 *   insn=0x00000000004A0D10 string=0x00000000004A0D14 "("
 *   insn=0x00000000004A0D14 string=0x00000000004A0D18 "h"
 *   insn=0x00000000004A0D20 string=0x00000000004A0D24 ""
 *   insn=0x00000000004A0D20 string=0x00000000004A0D54 "t"
 *   insn=0x00000000004A0D2C string=0x00000000004A0D30 "\n"
 *   insn=0x00000000004A0D34 string=0x00000000004A0D38 "@"
 *   insn=0x00000000004A0D3C string=0x00000000004A0D40 "h"
 *   insn=0x00000000004A0D54 string=0x00000000004A0D58 ""
 *   insn=0x00000000004A0D64 string=0x00000000004A0D68 "\t"
 *   insn=0x00000000004A0D6C string=0x00000000004A0D70 " "
 *   insn=0x00000000004A0D74 string=0x00000000004A0D78 "h"
 *   insn=0x00000000004A0D88 string=0x00000000004A0D5C ""
 *   insn=0x00000000004A0D98 string=0x00000000004A0DB0 "HU"
 *   insn=0x00000000004A0DB0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GUIView::ConvertPointToView@<X0>(
        Caver::GUIView *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        Caver::GUIView *a3@<X2>,
        _QWORD *a4@<X8>)
{
  Caver::GUIView *v5; // x9
  __int64 result; // x0
  Caver::GUIView **v8; // x22
  Caver::GUIView *v9; // x22
  __int64 v10; // t1
  _QWORD v11[2]; // [xsp+0h] [xbp-30h] BYREF

  v5 = this;
  v11[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *a4 = *(_QWORD *)a2;
  v8 = (Caver::GUIView **)((char *)this + 88);
  result = *((_QWORD *)this + 11);
  if ( result )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, _QWORD *, Caver::GUIView *))(*(_QWORD *)result + 264LL))(
        v11,
        result,
        a4,
        v5);
      *a4 = v11[0];
      v5 = *v8;
      v9 = *v8;
      v10 = *((_QWORD *)v9 + 11);
      v8 = (Caver::GUIView **)((char *)v9 + 88);
      result = v10;
    }
    while ( v10 );
  }
  if ( a3 )
  {
    while ( 1 )
    {
      result = *((_QWORD *)a3 + 11);
      if ( !result )
        break;
      (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, _QWORD *, Caver::GUIView *))(*(_QWORD *)result + 256LL))(
        v11,
        result,
        a4,
        a3);
      *a4 = v11[0];
      a3 = (Caver::GUIView *)*((_QWORD *)a3 + 11);
    }
  }
  return result;
}

