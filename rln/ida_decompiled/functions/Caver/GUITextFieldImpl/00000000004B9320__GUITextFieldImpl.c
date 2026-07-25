/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B9320
 * Mangled: _ZN5Caver16GUITextFieldImplC2Ev
 * Demangled: Caver::GUITextFieldImpl::GUITextFieldImpl(void)
 *
 * Callers: 2
 *   0x00000000002031C0  Caver::GUITextFieldImpl::GUITextFieldImpl(void)
 *   0x00000000004B92E0  Caver::NewGUITextFieldImpl(void)
 *
 * Callees: 13
 *   0x00000000001F4DB0  Caver::GUIControl::~GUIControl()
 *   0x00000000001F53C0  Caver::GUILabel::GUILabel(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x0000000000200250  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(Caver::GUILabel *)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004B9748  Caver::GUITextFieldImpl::~GUITextFieldImpl()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 109
 *   insn=0x00000000004B9334 string=0x00000000004B9338 "X"
 *   insn=0x00000000004B9338 string=0x00000000004B933C ""
 *   insn=0x00000000004B934C string=0x00000000004B9350 "j"
 *   insn=0x00000000004B9350 string=0x00000000004B9354 "JAD"
 *   insn=0x00000000004B935C string=0x00000000004B9360 "h""
 *   insn=0x00000000004B9360 string=0x00000000004B9364 " "
 *   insn=0x00000000004B9368 string=0x00000000004B936C "i"
 *   insn=0x00000000004B936C string=0x00000000004B9370 "IA"
 *   insn=0x00000000004B9370 string=0x00000000004B9374 "i"
 *   insn=0x00000000004B9374 string=0x00000000004B9378 "I!"
 *   insn=0x00000000004B9378 string=0x00000000004B937C "i"
 *   insn=0x00000000004B937C string=0x00000000004B9380 "ib"
 *   insn=0x00000000004B9380 string=0x00000000004B9384 "k""
 *   insn=0x00000000004B9388 string=0x00000000004B938C "`N"
 *   insn=0x00000000004B9390 string=0x00000000004B9394 " "
 *   insn=0x00000000004B9394 string=0x00000000004B9398 "i"
 *   insn=0x00000000004B9398 string=0x00000000004B939C "`"
 *   insn=0x00000000004B939C string=0x00000000004B93A0 "?"
 *   insn=0x00000000004B93A0 string=0x00000000004B93A4 "w"
 *   insn=0x00000000004B93A8 string=0x00000000004B93AC "h"
 *   insn=0x00000000004B93AC string=0x00000000004B93B0 "v""
 *   insn=0x00000000004B93B0 string=0x00000000004B93B4 "j"
 *   insn=0x00000000004B93C0 string=0x00000000004B93C4 " N_"
 *   insn=0x00000000004B93C4 string=0x00000000004B93C8 "_"
 *   insn=0x00000000004B93D4 string=0x00000000004B93D8 "hj"
 *   insn=0x00000000004B93E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B93EC string=0x00000000001F53C0 "P'"
 *   insn=0x00000000004B93F8 string=0x00000000004B93FC "h"
 *   insn=0x00000000004B9408 string=0x00000000004B940C "i"
 *   insn=0x00000000004B9410 string=0x00000000004B9414 "4"
 *   insn=0x00000000004B9414 string=0x00000000004B9458 "h"
 *   insn=0x00000000004B9418 string=0x00000000004B941C ""
 *   insn=0x00000000004B9428 string=0x00000000004B942C "\t@"
 *   insn=0x00000000004B9438 string=0x00000000004B943C ""
 *   insn=0x00000000004B9448 string=0x00000000004B944C "@"
 *   insn=0x00000000004B9458 string=0x00000000004B945C "i"
 *   insn=0x00000000004B945C string=0x00000000004B9460 "1@"
 *   insn=0x00000000004B9464 string=0x00000000004B9468 "i"
 *   insn=0x00000000004B9470 string=0x00000000004B9474 "*"
 *   insn=0x00000000004B9474 string=0x00000000004B9478 "J"
 *   insn=0x00000000004B9478 string=0x00000000004B947C "*"
 *   insn=0x00000000004B948C string=0x00000000004B9490 "4"
 *   insn=0x00000000004B9494 string=0x00000000004B9498 ""
 *   insn=0x00000000004B94A4 string=0x00000000004B94A8 "\t@"
 *   insn=0x00000000004B94B4 string=0x00000000004B94B8 ""
 *   insn=0x00000000004B94C4 string=0x00000000004B94C8 "@"
 *   insn=0x00000000004B94E4 string=0x00000000004B94E8 """
 *   insn=0x00000000004B94E8 string=0x00000000004B94EC ""
 *   insn=0x00000000004B94E8 string=0x00000000001FB170 "0'"
 *   insn=0x00000000004B94F8 string=0x00000000004B9514 "o"
 *   insn=0x00000000004B9514 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B9528 string=0x00000000004B9584 "h"
 *   insn=0x00000000004B952C string=0x00000000004B9530 ""
 *   insn=0x00000000004B9534 string=0x00000000004B9538 "a"
 *   insn=0x00000000004B953C string=0x00000000004B9540 "\t@"
 *   insn=0x00000000004B954C string=0x00000000004B9550 ""
 *   insn=0x00000000004B9554 string=0x00000000004B9558 "a"
 *   insn=0x00000000004B955C string=0x00000000004B9560 "@"
 *   insn=0x00000000004B9574 string=0x00000000004B9578 "N"
 *   insn=0x00000000004B9578 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004B9590 string=0x00000000004B96CC "I"
 *   insn=0x00000000004B95A0 string=0x00000000004B95A4 "I"
 *   insn=0x00000000004B95A0 string=0x00000000004B95D4 "u"
 *   insn=0x00000000004B95A4 string=0x00000000004B95A8 ")=G"
 *   insn=0x00000000004B95A8 string=0x00000000004B95AC "!"
 *   insn=0x00000000004B95AC string=0x00000000004B95B0 "\t"
 *   insn=0x00000000004B95B0 string=0x00000000004B95B4 "\t"
 *   insn=0x00000000004B95B0 string=0x00000000004B9710 "\t"
 *   insn=0x00000000004B95B4 string=0x00000000004B95B8 "*"
 *   insn=0x00000000004B95B8 string=0x00000000004B95BC "\n"
 *   insn=0x00000000004B95C0 string=0x00000000004B95C4 "?"
 *   insn=0x00000000004B95C4 string=0x00000000004B95C8 "l"
 *   insn=0x00000000004B95CC string=0x00000000004B95D0 "u"
 *   insn=0x00000000004B95D4 string=0x00000000004B95D8 "5"
 *   insn=0x00000000004B95D8 string=0x00000000004B961C "u"
 *   insn=0x00000000004B95DC string=0x00000000004B95E0 ""
 *   insn=0x00000000004B95EC string=0x00000000004B95F0 "\t@"
 *   insn=0x00000000004B95FC string=0x00000000004B9600 ""
 *   insn=0x00000000004B960C string=0x00000000004B9610 "@"
 *   insn=0x00000000004B961C string=0x00000000004B9620 "5"
 *   insn=0x00000000004B9620 string=0x00000000004B9664 "h"
 *   insn=0x00000000004B9624 string=0x00000000004B9628 ""
 *   insn=0x00000000004B9634 string=0x00000000004B9638 "\t@"
 *   insn=0x00000000004B9644 string=0x00000000004B9648 ""
 *   insn=0x00000000004B9654 string=0x00000000004B9658 "@"
 *   insn=0x00000000004B9664 string=0x00000000004B9668 "u"
 *   insn=0x00000000004B9668 string=0x00000000004B966C ""
 *   insn=0x00000000004B966C string=0x00000000004B9670 "A"
 *   insn=0x00000000004B9670 string=0x00000000004B9674 "h"
 *   insn=0x00000000004B9674 string=0x00000000004B9678 "5"
 *   insn=0x00000000004B967C string=0x00000000004B9680 ""
 *   insn=0x00000000004B968C string=0x00000000004B9690 "\t@"
 *   insn=0x00000000004B969C string=0x00000000004B96A0 ""
 *   insn=0x00000000004B96AC string=0x00000000004B96B0 "@"
 *   insn=0x00000000004B96C0 string=0x00000000001F4DB0 "P'"
 *   insn=0x00000000004B96CC string=0x00000000004B96D0 ")=G"
 *   insn=0x00000000004B96D0 string=0x00000000004B96D4 "!"
 *   insn=0x00000000004B96D8 string=0x00000000004B96DC "\t"
 *   insn=0x00000000004B96D8 string=0x00000000004B96F0 "\t"
 *   insn=0x00000000004B96DC string=0x00000000004B96E0 "*"
 *   insn=0x00000000004B96E0 string=0x00000000004B96E4 "\n"
 *   insn=0x00000000004B96EC string=0x00000000004B96FC "?"
 *   insn=0x00000000004B96F0 string=0x00000000004B96F4 "*"
 *   insn=0x00000000004B96F4 string=0x00000000004B96F8 "\n"
 *   insn=0x00000000004B9704 string=0x00000000004B9708 "'"
 *   insn=0x00000000004B9710 string=0x00000000004B9714 "*"
 *   insn=0x00000000004B9714 string=0x00000000004B9718 "\n"
 *   insn=0x00000000004B9718 string=0x00000000004B971C "?"
 *   insn=0x00000000004B971C string=0x00000000004B9720 "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::GUITextFieldImpl(Caver::GUITextFieldImpl *this)
{
  Caver::GUILabel *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  void (__fastcall *v8)(Caver::GUITextFieldImpl *, __int128 *); // x8
  __int64 v9; // x9
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  __int128 v14; // [xsp+0h] [xbp-50h] BYREF
  __int64 v15; // [xsp+18h] [xbp-38h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 35) = 0;
  *(_OWORD *)((char *)this + 248) = 0u;
  *(_OWORD *)((char *)this + 264) = 0u;
  *((_QWORD *)this + 33) = (char *)this + 248;
  *((_QWORD *)this + 34) = (char *)this + 248;
  *(_QWORD *)this = off_6D7480;
  *((_QWORD *)this + 40) = &off_6D7678;
  *((_DWORD *)this + 72) = 0;
  *((_OWORD *)this + 19) = 0u;
  *((_QWORD *)this + 37) = 0;
  *(_OWORD *)((char *)this + 344) = 0u;
  *(_OWORD *)((char *)this + 328) = 0u;
  *(_QWORD *)((char *)this + 378) = 0;
  *(_QWORD *)((char *)this + 364) = 0;
  *(_QWORD *)((char *)this + 372) = 0;
  *(int64x2_t *)((char *)this + 392) = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  *((_WORD *)this + 204) = 0;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 90) = -16777216;
  v2 = (Caver::GUILabel *)operator new(0x150u);
  Caver::GUILabel::GUILabel(v2);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
  v3 = (_QWORD *)*((_QWORD *)this + 42);
  v4 = v14;
  *(_QWORD *)&v14 = *((_QWORD *)this + 41);
  v5 = *((_QWORD *)&v14 + 1);
  *((_QWORD *)this + 41) = v4;
  *((_QWORD *)this + 42) = v5;
  *((_QWORD *)&v14 + 1) = v3;
  if ( v3 )
  {
    v6 = v3[1] - 1LL;
    v3[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v7 = v3[2] - 1LL;
      v3[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v8 = *(void (__fastcall **)(Caver::GUITextFieldImpl *, __int128 *))(*(_QWORD *)this + 96LL);
  *(_QWORD *)&v14 = *((_QWORD *)this + 41);
  v9 = *((_QWORD *)this + 42);
  *((_QWORD *)&v14 + 1) = v9;
  if ( v9 )
    ++*(_QWORD *)(v9 + 8);
  v8(this, &v14);
  v10 = (_QWORD *)*((_QWORD *)&v14 + 1);
  if ( *((_QWORD *)&v14 + 1) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL) = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v14 = xmmword_597960;
  return Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v14);
}

