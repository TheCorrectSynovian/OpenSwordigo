/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042C2F0
 * Mangled: _ZN5Caver16NotificationView6UpdateEf
 * Demangled: Caver::NotificationView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F3E00  Caver::GUITextBubble::Update(float)
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9630  Caver::GUIAnimation::Update(float)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000202160  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 98
 *   insn=0x000000000042C304 string=0x000000000042C308 "U"
 *   insn=0x000000000042C310 string=0x000000000042C314 ""
 *   insn=0x000000000042C318 string=0x000000000042C31C "h"
 *   insn=0x000000000042C31C string=0x000000000042C320 "i"
 *   insn=0x000000000042C320 string=0x000000000042C324 ""
 *   insn=0x000000000042C324 string=0x000000000042C328 ""
 *   insn=0x000000000042C328 string=0x000000000042C32C "?"
 *   insn=0x000000000042C330 string=0x000000000042C334 "`"
 *   insn=0x000000000042C330 string=0x000000000042C584 "`"
 *   insn=0x000000000042C334 string=0x000000000042C338 "h"F9"
 *   insn=0x000000000042C33C string=0x000000000042C340 "`"
 *   insn=0x000000000042C340 string=0x000000000042C344 ""
 *   insn=0x000000000042C344 string=0x000000000042C348 "a"
 *   insn=0x000000000042C358 string=0x000000000042C35C "h""
 *   insn=0x000000000042C360 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000042C368 string=0x00000000001F4B70 "P'"
 *   insn=0x000000000042C37C string=0x00000000001FABF0 "0'"
 *   insn=0x000000000042C388 string=0x000000000042C38C "qY"
 *   insn=0x000000000042C3A0 string=0x000000000042C3A4 ";/"
 *   insn=0x000000000042C3A4 string=0x00000000001F8090 "0'"
 *   insn=0x000000000042C3B4 string=0x000000000042C3B8 "\n"
 *   insn=0x000000000042C3B8 string=0x000000000042C3BC "J"
 *   insn=0x000000000042C3BC string=0x000000000042C3C0 "\n"
 *   insn=0x000000000042C3C8 string=0x000000000042C3CC "4"
 *   insn=0x000000000042C3D0 string=0x000000000042C3D4 ""
 *   insn=0x000000000042C3E0 string=0x000000000042C3E4 "\t@"
 *   insn=0x000000000042C3F0 string=0x000000000042C3F4 ""
 *   insn=0x000000000042C400 string=0x000000000042C404 "@"
 *   insn=0x000000000042C410 string=0x000000000042C414 "4"
 *   insn=0x000000000042C418 string=0x000000000042C41C ""
 *   insn=0x000000000042C428 string=0x000000000042C42C "\t@"
 *   insn=0x000000000042C438 string=0x000000000042C43C ""
 *   insn=0x000000000042C448 string=0x000000000042C44C "@"
 *   insn=0x000000000042C460 string=0x000000000042C464 "/"
 *   insn=0x000000000042C474 string=0x000000000042C478 "\n"
 *   insn=0x000000000042C478 string=0x000000000042C47C "J"
 *   insn=0x000000000042C47C string=0x000000000042C480 "\n"
 *   insn=0x000000000042C488 string=0x000000000042C48C "4"
 *   insn=0x000000000042C490 string=0x000000000042C494 ""
 *   insn=0x000000000042C4A0 string=0x000000000042C4A4 "\t@"
 *   insn=0x000000000042C4B0 string=0x000000000042C4B4 ""
 *   insn=0x000000000042C4C0 string=0x000000000042C4C4 "@"
 *   insn=0x000000000042C4D0 string=0x000000000042C4D4 "4"
 *   insn=0x000000000042C4D8 string=0x000000000042C4DC ""
 *   insn=0x000000000042C4E8 string=0x000000000042C4EC "\t@"
 *   insn=0x000000000042C4F8 string=0x000000000042C4FC ""
 *   insn=0x000000000042C508 string=0x000000000042C50C "@"
 *   insn=0x000000000042C524 string=0x000000000042C528 "\t]"
 *   insn=0x000000000042C528 string=0x000000000042C52C "\n"
 *   insn=0x000000000042C534 string=0x000000000042C538 ">1"
 *   insn=0x000000000042C538 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000042C53C string=0x000000000042C540 "4"
 *   insn=0x000000000042C544 string=0x000000000042C548 ""
 *   insn=0x000000000042C558 string=0x000000000042C55C "\t@"
 *   insn=0x000000000042C564 string=0x000000000042C568 ""
 *   insn=0x000000000042C578 string=0x000000000042C57C "@"
 *   insn=0x000000000042C584 string=0x000000000042C588 "`"
 *   insn=0x000000000042C588 string=0x000000000042C5F4 "`"
 *   insn=0x000000000042C58C string=0x000000000042C590 "vb"
 *   insn=0x000000000042C590 string=0x000000000042C594 "'4"
 *   insn=0x000000000042C594 string=0x00000000001F9630 "0'"
 *   insn=0x000000000042C598 string=0x000000000042C59C "QA9"
 *   insn=0x000000000042C59C string=0x000000000042C5A0 ""
 *   insn=0x000000000042C5A0 string=0x000000000042C5A4 "t"
 *   insn=0x000000000042C5B0 string=0x000000000042C5B4 ""
 *   insn=0x000000000042C5B8 string=0x000000000042C5BC "!"
 *   insn=0x000000000042C5C4 string=0x000000000042C5C8 "\t@"
 *   insn=0x000000000042C5D0 string=0x000000000042C5D4 ""
 *   insn=0x000000000042C5D8 string=0x000000000042C5DC "!"
 *   insn=0x000000000042C5E4 string=0x000000000042C5E8 "@"
 *   insn=0x000000000042C5FC string=0x00000000001F3E00 "P'"
 *   insn=0x000000000042C604 string=0x000000000042C608 ".H"
 *   insn=0x000000000042C618 string=0x000000000042C634 "''"
 *   insn=0x000000000042C634 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000042C63C string=0x000000000042C640 "4"
 *   insn=0x000000000042C644 string=0x000000000042C648 ""
 *   insn=0x000000000042C654 string=0x000000000042C658 "\t@"
 *   insn=0x000000000042C664 string=0x000000000042C668 ""
 *   insn=0x000000000042C674 string=0x000000000042C678 "@"
 *   insn=0x000000000042C680 string=0x000000000042C684 " "
 *   insn=0x000000000042C694 string=0x000000000042C698 ""
 *   insn=0x000000000042C69C string=0x000000000042C6A0 "!"
 *   insn=0x000000000042C6A4 string=0x000000000042C6A8 "\t@"
 *   insn=0x000000000042C6B4 string=0x000000000042C6B8 ""
 *   insn=0x000000000042C6BC string=0x000000000042C6C0 "!"
 *   insn=0x000000000042C6C4 string=0x000000000042C6C8 "@"
 *   insn=0x000000000042C6E4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000042C6E8 string=0x000000000042C6EC "vT"
 *   insn=0x000000000042C704 string=0x000000000042C708 "4"
 *   insn=0x000000000042C70C string=0x000000000042C710 ""
 *   insn=0x000000000042C71C string=0x000000000042C720 "\t@"
 *   insn=0x000000000042C72C string=0x000000000042C730 ""
 *   insn=0x000000000042C73C string=0x000000000042C740 "@"
 *   insn=0x000000000042C74C string=0x000000000042C750 "]T"
 *   insn=0x000000000042C764 string=0x000000000042C768 "h"
 *   insn=0x000000000042C770 string=0x000000000042C774 ""
 *   insn=0x000000000042C780 string=0x00000000001F7210 "0'"
 *   insn=0x000000000042C790 string=0x000000000042C794 "sV"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::NotificationView::Update(Caver::NotificationView *this, float a2)
{
  int v4; // w8
  float v5; // s0
  __int64 v6; // x20
  __int64 v7; // x22
  Caver::GUIPropertyValue *v8; // x0
  Caver::GUIPropertyValue *v9; // x0
  _QWORD *v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x22
  _QWORD *v19; // x8
  __int64 v20; // x9
  _QWORD *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  Caver::GUIAnimation *v31; // x0
  _QWORD *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v36; // [xsp+20h] [xbp-60h] BYREF
  __int64 v37; // [xsp+28h] [xbp-58h]
  _QWORD *v38; // [xsp+30h] [xbp-50h]
  __int64 v39; // [xsp+38h] [xbp-48h]
  _QWORD *v40; // [xsp+40h] [xbp-40h]
  __int64 v41; // [xsp+48h] [xbp-38h]

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_QWORD *)this + 46) >= (unsigned __int64)(*(_QWORD *)(*((_QWORD *)this + 35) - 24LL) - 1LL) )
  {
    v4 = *((unsigned __int8 *)this + 392);
    v5 = *((float *)this + 99) + a2;
    *((float *)this + 99) = v5;
    if ( !v4 && v5 > *((float *)this + 100) )
    {
      *((_BYTE *)this + 392) = 1;
      v6 = operator new(0xC0u);
      Caver::GUIAnimation::GUIAnimation((Caver::GUIAnimation *)v6);
      v39 = v6;
      boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
      boost::detail::sp_enable_shared_from_this();
      v7 = v6;
      *(_DWORD *)(v6 + 48) = 2;
      v9 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat(&v36, v8, 1.0);
      *(_DWORD *)(v6 + 112) = v36;
      v11 = v37;
      v10 = v38;
      if ( v38 )
        ++v38[1];
      v12 = *(_QWORD **)(v6 + 128);
      *(_QWORD *)(v7 + 120) = v11;
      *(_QWORD *)(v7 + 128) = v10;
      if ( v12 )
      {
        v13 = v12[1] - 1LL;
        v12[1] = v13;
        if ( !v13 )
        {
          v9 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
          v14 = v12[2] - 1LL;
          v12[2] = v14;
          if ( !v14 )
            v9 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
        }
      }
      v15 = v38;
      if ( v38 )
      {
        v16 = v38[1] - 1LL;
        v38[1] = v16;
        if ( !v16 )
        {
          v9 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
          v17 = v15[2] - 1LL;
          v15[2] = v17;
          if ( !v17 )
            v9 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
        }
      }
      v18 = v39;
      Caver::GUIPropertyValue::ValueWithFloat(&v36, v9, 0.0);
      *(_DWORD *)(v18 + 136) = v36;
      v20 = v37;
      v19 = v38;
      if ( v38 )
        ++v38[1];
      v21 = *(_QWORD **)(v18 + 152);
      *(_QWORD *)(v18 + 144) = v20;
      *(_QWORD *)(v18 + 152) = v19;
      if ( v21 )
      {
        v22 = v21[1] - 1LL;
        v21[1] = v22;
        if ( !v22 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
          v23 = v21[2] - 1LL;
          v21[2] = v23;
          if ( !v23 )
            (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
        }
      }
      v24 = v38;
      if ( v38 )
      {
        v25 = v38[1] - 1LL;
        v38[1] = v25;
        if ( !v25 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
          v26 = v24[2] - 1LL;
          v24[2] = v26;
          if ( !v26 )
            (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
        }
      }
      v27 = v39;
      *(_DWORD *)(v39 + 92) = 1061997773;
      *(_BYTE *)(v27 + 185) = 1;
      Caver::GUIView::AddAnimation();
      v28 = v40;
      if ( v40 )
      {
        v29 = v40[1] - 1LL;
        v40[1] = v29;
        if ( !v29 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
          v30 = v28[2] - 1LL;
          v28[2] = v30;
          if ( !v30 )
            (*(void (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
        }
      }
    }
  }
  v31 = (Caver::GUIAnimation *)*((_QWORD *)this + 51);
  if ( v31 )
  {
    Caver::GUIAnimation::Update(v31, a2);
    if ( *(_BYTE *)(*((_QWORD *)this + 51) + 84LL) )
    {
      v32 = (_QWORD *)*((_QWORD *)this + 52);
      *((_QWORD *)this + 51) = 0;
      *((_QWORD *)this + 52) = 0;
      if ( v32 )
      {
        v33 = v32[1] - 1LL;
        v32[1] = v33;
        if ( !v33 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
          v34 = v32[2] - 1LL;
          v32[2] = v34;
          if ( !v34 )
            (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
        }
      }
    }
  }
  else
  {
    Caver::GUITextBubble::Update((Caver::NotificationView *)((char *)this + 240), a2);
  }
  return Caver::GUIView::Update(this, a2);
}

