/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0F30
 * Mangled: _ZNK5Caver7GUIView17ConvertRectToViewERKNS_9RectangleEPS0_
 * Demangled: Caver::GUIView::ConvertRectToView(Caver::Rectangle const&,Caver::GUIView*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 12
 *   insn=0x00000000004A0F44 string=0x00000000004A0F48 "V"
 *   insn=0x00000000004A0F5C string=0x00000000004A0F60 "i*@)"
 *   insn=0x00000000004A0F74 string=0x00000000004A0F78 ""
 *   insn=0x00000000004A0F74 string=0x00000000004A0FA4 "u"
 *   insn=0x00000000004A0F7C string=0x00000000004A0F80 "\t"
 *   insn=0x00000000004A0F84 string=0x00000000004A0F88 " "
 *   insn=0x00000000004A0FA4 string=0x00000000004A0FA8 ""
 *   insn=0x00000000004A0FA8 string=0x00000000004A0FDC "h"
 *   insn=0x00000000004A0FB4 string=0x00000000004A0FB8 "\t"
 *   insn=0x00000000004A0FBC string=0x00000000004A0FC0 " "
 *   insn=0x00000000004A0FD8 string=0x00000000004A0FAC ""
 *   insn=0x00000000004A1010 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GUIView::ConvertRectToView@<X0>(
        Caver::GUIView *this@<X0>,
        const Caver::Rectangle *a2@<X1>,
        Caver::GUIView *a3@<X2>,
        __int64 a4@<X8>)
{
  int v6; // w9
  int v7; // w10
  __int64 result; // x0
  __int64 *v10; // x23
  __int64 v11; // x23
  __int64 v12; // t1
  __int64 v13; // x8
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v15[2]; // [xsp+10h] [xbp-40h] BYREF

  v15[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)a2 + 1);
  LODWORD(v14) = *(_DWORD *)a2;
  HIDWORD(v14) = v7;
  v10 = (__int64 *)((char *)this + 88);
  result = *((_QWORD *)this + 11);
  if ( result )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, __int64 *))(*(_QWORD *)result + 264LL))(v15, result, &v14);
      v6 = v15[0];
      v7 = HIDWORD(v15[0]);
      v14 = v15[0];
      v11 = *v10;
      v12 = *(_QWORD *)(v11 + 88);
      v10 = (__int64 *)(v11 + 88);
      result = v12;
    }
    while ( v12 );
  }
  if ( a3 )
  {
    while ( 1 )
    {
      result = *((_QWORD *)a3 + 11);
      if ( !result )
        break;
      (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, __int64 *, Caver::GUIView *))(*(_QWORD *)result + 256LL))(
        v15,
        result,
        &v14,
        a3);
      v6 = v15[0];
      v7 = HIDWORD(v15[0]);
      v14 = v15[0];
      a3 = (Caver::GUIView *)*((_QWORD *)a3 + 11);
    }
  }
  v13 = *((_QWORD *)a2 + 1);
  *(_DWORD *)a4 = v6;
  *(_DWORD *)(a4 + 4) = v7;
  *(_QWORD *)(a4 + 8) = v13;
  return result;
}

