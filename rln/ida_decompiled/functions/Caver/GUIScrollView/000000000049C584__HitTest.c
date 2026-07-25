/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049C584
 * Mangled: _ZN5Caver13GUIScrollView7HitTestERKNS_7Vector2E
 * Demangled: Caver::GUIScrollView::HitTest(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9570  Caver::GUIView::HitTest(Caver::Vector2 const&)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000049C6D8  Caver::GUIScrollView::HandleMouseEvent(Caver::GUIMouseEvent const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x000000000049C598 string=0x000000000049C59C "V"
 *   insn=0x000000000049C5AC string=0x000000000049C5B0 "i"
 *   insn=0x000000000049C5B0 string=0x000000000049C5B4 ")"
 *   insn=0x000000000049C5C0 string=0x00000000001F9570 "0'"
 *   insn=0x000000000049C5CC string=0x000000000049C5D0 ""
 *   insn=0x000000000049C5D4 string=0x000000000049C5D8 "!"
 *   insn=0x000000000049C5E0 string=0x000000000049C5E4 "\t@"
 *   insn=0x000000000049C5EC string=0x000000000049C5F0 ""
 *   insn=0x000000000049C5FC string=0x000000000049C600 "u\n@"
 *   insn=0x000000000049C600 string=0x000000000049C604 "U"
 *   insn=0x000000000049C604 string=0x000000000049C6AC "H"
 *   insn=0x000000000049C608 string=0x000000000049C60C ""
 *   insn=0x000000000049C60C string=0x000000000049C610 "i"
 *   insn=0x000000000049C610 string=0x000000000049C614 ""
 *   insn=0x000000000049C628 string=0x000000000049C62C "\t@"
 *   insn=0x000000000049C634 string=0x000000000049C638 ""
 *   insn=0x000000000049C648 string=0x000000000049C64C "@"
 *   insn=0x000000000049C650 string=0x000000000049C654 ""
 *   insn=0x000000000049C660 string=0x000000000049C664 ""
 *   insn=0x000000000049C66C string=0x000000000049C670 "@"
 *   insn=0x000000000049C674 string=0x000000000049C678 "W"
 *   insn=0x000000000049C68C string=0x000000000049C6A8 "\ng"
 *   insn=0x000000000049C6A8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049C6AC string=0x000000000049C6B0 ""
 *   insn=0x000000000049C6B0 string=0x000000000049C6B4 "A"
 *   insn=0x000000000049C6C0 string=0x00000000001FA980 "0'"
 *   insn=0x000000000049C6C8 string=0x000000000049C6CC "i"
 *   insn=0x000000000049C6D0 string=0x000000000049C6D4 "|"
 *   insn=0x000000000049C6D4 string=0x000000000049C6D8 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::GUIScrollView::HitTest@<X0>(
        Caver::GUIScrollView *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        __int64 *a3@<X8>)
{
  __int64 *result; // x0
  _QWORD *v6; // x21
  __int64 v7; // x23
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x19
  __int64 v16; // x0
  __int64 v17; // [xsp+0h] [xbp-50h] BYREF
  _QWORD *v18; // [xsp+8h] [xbp-48h]
  _QWORD v19[2]; // [xsp+10h] [xbp-40h] BYREF

  v19[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 434) )
    return Caver::GUIView::HitTest(a3, this, a2);
  result = Caver::GUIView::HitTest(&v17, this, a2);
  v7 = v17;
  v6 = v18;
  if ( v18 )
  {
    v8 = v18[1] - 1LL;
    v18[1] = v8;
    if ( !v8 )
    {
      result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v9 = v6[2] - 1LL;
      v6[2] = v9;
      if ( !v9 )
      {
        result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
        if ( v7 )
          goto LABEL_6;
LABEL_13:
        *a3 = 0;
        a3[1] = 0;
        return result;
      }
    }
  }
  if ( !v7 )
    goto LABEL_13;
LABEL_6:
  v10 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v10 && (v11 = v10[1]) != 0 )
  {
    v12 = v11 + 1;
    *a3 = *((_QWORD *)this + 1);
    a3[1] = (__int64)v10;
    v10[1] = v12;
    if ( !v12 )
    {
      result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v13 = v10[2] - 1LL;
      v10[2] = v13;
      if ( !v13 )
        return (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  else
  {
    v19[0] = off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
    v15 = v14;
    std::exception::~exception((std::exception *)v19);
    v16 = sub_5818C4(v15);
    return (__int64 *)Caver::GUIScrollView::HandleMouseEvent(v16);
  }
  return result;
}

