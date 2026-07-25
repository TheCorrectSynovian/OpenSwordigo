/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038BB3C
 * Mangled: _ZN5Caver13ChooseAgeViewD2Ev
 * Demangled: Caver::ChooseAgeView::~ChooseAgeView()
 *
 * Callers: 1
 *   0x00000000001F49D0  Caver::ChooseAgeView::~ChooseAgeView()
 *
 * Callees: 6
 *   0x00000000001F49D0  Caver::ChooseAgeView::~ChooseAgeView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000038BF24  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ChooseAgeView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ChooseAgeView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 84
 *   insn=0x000000000038BB50 string=0x000000000038BB54 "t"
 *   insn=0x000000000038BB54 string=0x000000000038BB58 "-E"
 *   insn=0x000000000038BB58 string=0x000000000038BB5C "A"
 *   insn=0x000000000038BB5C string=0x000000000038BB60 "h"
 *   insn=0x000000000038BB60 string=0x000000000038BB64 "4"
 *   insn=0x000000000038BB64 string=0x000000000038BBA8 "t"
 *   insn=0x000000000038BB68 string=0x000000000038BB6C ""
 *   insn=0x000000000038BB78 string=0x000000000038BB7C "\t@"
 *   insn=0x000000000038BB88 string=0x000000000038BB8C ""
 *   insn=0x000000000038BB98 string=0x000000000038BB9C "@"
 *   insn=0x000000000038BBA8 string=0x000000000038BBAC "4"
 *   insn=0x000000000038BBAC string=0x000000000038BBF0 "t"
 *   insn=0x000000000038BBB0 string=0x000000000038BBB4 ""
 *   insn=0x000000000038BBC0 string=0x000000000038BBC4 "\t@"
 *   insn=0x000000000038BBD0 string=0x000000000038BBD4 ""
 *   insn=0x000000000038BBE0 string=0x000000000038BBE4 "@"
 *   insn=0x000000000038BBF0 string=0x000000000038BBF4 "4"
 *   insn=0x000000000038BBF4 string=0x000000000038BC38 "t"
 *   insn=0x000000000038BBF8 string=0x000000000038BBFC ""
 *   insn=0x000000000038BC08 string=0x000000000038BC0C "\t@"
 *   insn=0x000000000038BC18 string=0x000000000038BC1C ""
 *   insn=0x000000000038BC28 string=0x000000000038BC2C "@"
 *   insn=0x000000000038BC38 string=0x000000000038BC3C "4"
 *   insn=0x000000000038BC3C string=0x000000000038BC80 "t"
 *   insn=0x000000000038BC40 string=0x000000000038BC44 ""
 *   insn=0x000000000038BC50 string=0x000000000038BC54 "\t@"
 *   insn=0x000000000038BC60 string=0x000000000038BC64 ""
 *   insn=0x000000000038BC70 string=0x000000000038BC74 "@"
 *   insn=0x000000000038BC80 string=0x000000000038BC84 "4"
 *   insn=0x000000000038BC84 string=0x000000000038BCC8 "t"
 *   insn=0x000000000038BC88 string=0x000000000038BC8C ""
 *   insn=0x000000000038BC98 string=0x000000000038BC9C "\t@"
 *   insn=0x000000000038BCA8 string=0x000000000038BCAC ""
 *   insn=0x000000000038BCB8 string=0x000000000038BCBC "@"
 *   insn=0x000000000038BCC8 string=0x000000000038BCCC "4"
 *   insn=0x000000000038BCD0 string=0x000000000038BCD4 ""
 *   insn=0x000000000038BCE0 string=0x000000000038BCE4 "\t@"
 *   insn=0x000000000038BCF0 string=0x000000000038BCF4 ""
 *   insn=0x000000000038BD00 string=0x000000000038BD04 "@"
 *   insn=0x000000000038BD1C string=0x000000000038BD20 "D"
 *   insn=0x000000000038BD24 string=0x000000000038BD28 "l"
 *   insn=0x000000000038BD2C string=0x000000000038BD30 "u"
 *   insn=0x000000000038BD30 string=0x000000000038BD34 "5"
 *   insn=0x000000000038BD34 string=0x000000000038BD38 "h"
 *   insn=0x000000000038BD3C string=0x000000000038BD40 "u"
 *   insn=0x000000000038BD40 string=0x000000000038BD44 "u"
 *   insn=0x000000000038BD44 string=0x000000000038BD48 "R"
 *   insn=0x000000000038BD48 string=0x000000000038BE90 "u"
 *   insn=0x000000000038BD4C string=0x000000000038BD50 "u"
 *   insn=0x000000000038BD54 string=0x000000000038BD58 "<"
 *   insn=0x000000000038BD58 string=0x000000000038BE48 "u"
 *   insn=0x000000000038BD5C string=0x000000000038BD60 "u"
 *   insn=0x000000000038BD64 string=0x000000000038BD68 "&"
 *   insn=0x000000000038BD68 string=0x000000000038BE00 "u"
 *   insn=0x000000000038BD70 string=0x000000000038BD74 "5"
 *   insn=0x000000000038BD74 string=0x000000000038BDB8 "u"
 *   insn=0x000000000038BD78 string=0x000000000038BD7C ""
 *   insn=0x000000000038BD88 string=0x000000000038BD8C "\t@"
 *   insn=0x000000000038BD98 string=0x000000000038BD9C ""
 *   insn=0x000000000038BDA8 string=0x000000000038BDAC "@"
 *   insn=0x000000000038BDB8 string=0x000000000038BDBC "5"
 *   insn=0x000000000038BDC0 string=0x000000000038BDC4 ""
 *   insn=0x000000000038BDD0 string=0x000000000038BDD4 "\t@"
 *   insn=0x000000000038BDE0 string=0x000000000038BDE4 ""
 *   insn=0x000000000038BDF0 string=0x000000000038BDF4 "@"
 *   insn=0x000000000038BE00 string=0x000000000038BE04 "5"
 *   insn=0x000000000038BE08 string=0x000000000038BE0C ""
 *   insn=0x000000000038BE18 string=0x000000000038BE1C "\t@"
 *   insn=0x000000000038BE28 string=0x000000000038BE2C ""
 *   insn=0x000000000038BE38 string=0x000000000038BE3C "@"
 *   insn=0x000000000038BE48 string=0x000000000038BE4C "5"
 *   insn=0x000000000038BE50 string=0x000000000038BE54 ""
 *   insn=0x000000000038BE60 string=0x000000000038BE64 "\t@"
 *   insn=0x000000000038BE70 string=0x000000000038BE74 ""
 *   insn=0x000000000038BE80 string=0x000000000038BE84 "@"
 *   insn=0x000000000038BE90 string=0x000000000038BE94 "5"
 *   insn=0x000000000038BE98 string=0x000000000038BE9C ""
 *   insn=0x000000000038BEA8 string=0x000000000038BEAC "\t@"
 *   insn=0x000000000038BEB8 string=0x000000000038BEBC ""
 *   insn=0x000000000038BEC8 string=0x000000000038BECC "@"
 *   insn=0x000000000038BEE0 string=0x000000000038BEE4 "x"
 *   insn=0x000000000038BEFC string=0x00000000001F49D0 "P'"
 *   insn=0x000000000038BF0C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000038BF1C string=0x000000000038BF20 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ChooseAgeView::~ChooseAgeView(Caver::ChooseAgeView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 42);
  *(_QWORD *)this = off_6CD900;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 40);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 38);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = (_QWORD *)*((_QWORD *)this + 34);
  if ( v14 )
  {
    v15 = v14[1] - 1LL;
    v14[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  v17 = (_QWORD *)*((_QWORD *)this + 32);
  if ( v17 )
  {
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  Caver::GUIView::~GUIView(this);
}

