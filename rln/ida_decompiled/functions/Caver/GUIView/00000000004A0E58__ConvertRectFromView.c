/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0E58
 * Mangled: _ZNK5Caver7GUIView19ConvertRectFromViewERKNS_9RectangleEPS0_
 * Demangled: Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *
 * Callers: 1
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 12
 *   insn=0x00000000004A0E6C string=0x00000000004A0E70 "V"
 *   insn=0x00000000004A0E8C string=0x00000000004A0E90 "B"
 *   insn=0x00000000004A0E9C string=0x00000000004A0EA0 "\t"
 *   insn=0x00000000004A0EA4 string=0x00000000004A0EA8 " "
 *   insn=0x00000000004A0EC0 string=0x00000000004A0EC4 "\n"
 *   insn=0x00000000004A0EC0 string=0x00000000004A0E98 ""
 *   insn=0x00000000004A0ED0 string=0x00000000004A0ED4 "\t"
 *   insn=0x00000000004A0ED8 string=0x00000000004A0EDC " "
 *   insn=0x00000000004A0EF4 string=0x00000000004A0EC8 ""
 *   insn=0x00000000004A0EF8 string=0x00000000004A0EFC "h&"
 *   insn=0x00000000004A0EFC string=0x00000000004A0F00 "j"
 *   insn=0x00000000004A0F2C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GUIView::ConvertRectFromView@<X0>(
        Caver::GUIView *this@<X0>,
        const Caver::Rectangle *a2@<X1>,
        Caver::GUIView *a3@<X2>,
        __int64 a4@<X8>)
{
  int v7; // w8
  int v8; // w9
  __int64 v9; // x0
  Caver::GUIView **v10; // x23
  __int64 result; // x0
  __int64 v12; // x10
  __int64 v13; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v14[2]; // [xsp+10h] [xbp-40h] BYREF

  v14[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_DWORD *)a2;
  v8 = *((_DWORD *)a2 + 1);
  LODWORD(v13) = *(_DWORD *)a2;
  HIDWORD(v13) = v8;
  if ( a3 )
  {
    while ( 1 )
    {
      v10 = (Caver::GUIView **)((char *)a3 + 88);
      v9 = *((_QWORD *)a3 + 11);
      if ( !v9 )
        break;
      (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, __int64 *))(*(_QWORD *)v9 + 264LL))(v14, v9, &v13);
      v7 = v14[0];
      v8 = HIDWORD(v14[0]);
      v13 = v14[0];
      a3 = *v10;
    }
  }
  while ( 1 )
  {
    result = *((_QWORD *)this + 11);
    if ( !result )
      break;
    (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, __int64 *, Caver::GUIView *))(*(_QWORD *)result + 256LL))(
      v14,
      result,
      &v13,
      this);
    v7 = v14[0];
    v8 = HIDWORD(v14[0]);
    v13 = v14[0];
    this = (Caver::GUIView *)*((_QWORD *)this + 11);
  }
  v12 = *((_QWORD *)a2 + 1);
  *(_DWORD *)a4 = v7;
  *(_DWORD *)(a4 + 4) = v8;
  *(_QWORD *)(a4 + 8) = v12;
  return result;
}

