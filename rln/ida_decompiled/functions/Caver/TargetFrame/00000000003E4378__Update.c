/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E4378
 * Mangled: _ZN5Caver11TargetFrame6UpdateEf
 * Demangled: Caver::TargetFrame::Update(float)
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E4B44  Caver::TargetFrame::HideAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E4F04  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::TargetFrame,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::TargetFrame*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 181
 *   insn=0x00000000003E4394 string=0x00000000003E4398 "V"
 *   insn=0x00000000003E43A0 string=0x00000000003E43A4 ""
 *   insn=0x00000000003E43AC string=0x00000000003E43B0 "`"
 *   insn=0x00000000003E43B8 string=0x00000000003E43BC "`"
 *   insn=0x00000000003E43BC string=0x00000000003E43C0 "m"
 *   insn=0x00000000003E43C0 string=0x00000000003E43CC "h2D9"
 *   insn=0x00000000003E43C8 string=0x00000000003E43D4 "h"
 *   insn=0x00000000003E43D4 string=0x00000000003E43D8 ""
 *   insn=0x00000000003E43DC string=0x00000000003E43E0 "h"
 *   insn=0x00000000003E43E0 string=0x00000000003E43E4 "H#"
 *   insn=0x00000000003E43E8 string=0x00000000003E43EC "}D"
 *   insn=0x00000000003E43EC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003E43F4 string=0x00000000001F4B70 "P'"
 *   insn=0x00000000003E4400 string=0x00000000003E4404 "t"
 *   insn=0x00000000003E440C string=0x00000000001FABF0 "0'"
 *   insn=0x00000000003E4418 string=0x00000000003E441C "My"
 *   insn=0x00000000003E441C string=0x00000000003E4420 "h"
 *   insn=0x00000000003E4428 string=0x00000000003E442C "i"
 *   insn=0x00000000003E4430 string=0x00000000003E4434 "u"
 *   insn=0x00000000003E4434 string=0x00000000003E4438 "h"
 *   insn=0x00000000003E443C string=0x00000000003E4440 "5"
 *   insn=0x00000000003E4444 string=0x00000000003E4448 ""
 *   insn=0x00000000003E4458 string=0x00000000003E445C "\t@"
 *   insn=0x00000000003E4464 string=0x00000000003E4468 ""
 *   insn=0x00000000003E4478 string=0x00000000003E447C "@"
 *   insn=0x00000000003E4498 string=0x00000000001F8090 "0'"
 *   insn=0x00000000003E44A8 string=0x00000000003E44AC "\n"
 *   insn=0x00000000003E44AC string=0x00000000003E44B0 "J"
 *   insn=0x00000000003E44B0 string=0x00000000003E44B4 "\n"
 *   insn=0x00000000003E44BC string=0x00000000003E44C0 "5"
 *   insn=0x00000000003E44C4 string=0x00000000003E44C8 ""
 *   insn=0x00000000003E44D4 string=0x00000000003E44D8 "\t@"
 *   insn=0x00000000003E44E4 string=0x00000000003E44E8 ""
 *   insn=0x00000000003E44F4 string=0x00000000003E44F8 "@"
 *   insn=0x00000000003E4504 string=0x00000000003E4508 "5"
 *   insn=0x00000000003E450C string=0x00000000003E4510 ""
 *   insn=0x00000000003E4520 string=0x00000000003E4524 "\t@"
 *   insn=0x00000000003E452C string=0x00000000003E4530 ""
 *   insn=0x00000000003E4540 string=0x00000000003E4544 "@"
 *   insn=0x00000000003E4568 string=0x00000000003E456C "\n"
 *   insn=0x00000000003E456C string=0x00000000003E4570 "J"
 *   insn=0x00000000003E4570 string=0x00000000003E4574 "\n"
 *   insn=0x00000000003E457C string=0x00000000003E4580 "5"
 *   insn=0x00000000003E4584 string=0x00000000003E4588 ""
 *   insn=0x00000000003E4594 string=0x00000000003E4598 "\t@"
 *   insn=0x00000000003E45A4 string=0x00000000003E45A8 ""
 *   insn=0x00000000003E45B4 string=0x00000000003E45B8 "@"
 *   insn=0x00000000003E45C4 string=0x00000000003E45C8 "5"
 *   insn=0x00000000003E45C8 string=0x00000000003E460C "w"
 *   insn=0x00000000003E45CC string=0x00000000003E45D0 ""
 *   insn=0x00000000003E45E0 string=0x00000000003E45E4 "\t@"
 *   insn=0x00000000003E45EC string=0x00000000003E45F0 ""
 *   insn=0x00000000003E4600 string=0x00000000003E4604 "@"
 *   insn=0x00000000003E4618 string=0x00000000003E461C "u\n@"
 *   insn=0x00000000003E461C string=0x00000000003E4620 "u"
 *   insn=0x00000000003E4620 string=0x00000000003E488C ""
 *   insn=0x00000000003E4624 string=0x00000000003E4628 "("
 *   insn=0x00000000003E4628 string=0x00000000003E462C "\t"
 *   insn=0x00000000003E462C string=0x00000000003E4630 "x"
 *   insn=0x00000000003E4630 string=0x00000000003E4634 ")"
 *   insn=0x00000000003E4638 string=0x00000000003E463C "\t"
 *   insn=0x00000000003E4640 string=0x00000000003E4644 " "
 *   insn=0x00000000003E4654 string=0x00000000003E4658 "FI"
 *   insn=0x00000000003E4658 string=0x00000000003E465C "`"
 *   insn=0x00000000003E4658 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003E4660 string=0x00000000003E4664 ""
 *   insn=0x00000000003E4674 string=0x00000000003E4678 ""
 *   insn=0x00000000003E4678 string=0x00000000003E467C ""
 *   insn=0x00000000003E4688 string=0x00000000003E468C ")"
 *   insn=0x00000000003E4694 string=0x00000000003E4698 "("
 *   insn=0x00000000003E469C string=0x00000000003E46A0 "h"
 *   insn=0x00000000003E46A0 string=0x00000000003E46A4 ""
 *   insn=0x00000000003E46A4 string=0x00000000003E46A8 ""
 *   insn=0x00000000003E46AC string=0x00000000003E46B0 " !"
 *   insn=0x00000000003E46B4 string=0x00000000003E46B8 "!a"
 *   insn=0x00000000003E46E4 string=0x00000000003E46E8 "?"
 *   insn=0x00000000003E46F0 string=0x00000000003E46F4 "(@"
 *   insn=0x00000000003E46F4 string=0x00000000003E46F8 ""
 *   insn=0x00000000003E46F8 string=0x00000000003E46FC "("
 *   insn=0x00000000003E4700 string=0x00000000003E4704 "@"
 *   insn=0x00000000003E4704 string=0x00000000003E4708 ""
 *   insn=0x00000000003E4708 string=0x00000000003E470C ""
 *   insn=0x00000000003E4710 string=0x00000000003E4714 ""
 *   insn=0x00000000003E4714 string=0x00000000003E4718 "@"
 *   insn=0x00000000003E4734 string=0x00000000003E4738 "h"
 *   insn=0x00000000003E4738 string=0x00000000003E473C "("
 *   insn=0x00000000003E473C string=0x00000000003E4740 ""
 *   insn=0x00000000003E4740 string=0x00000000003E4744 ""
 *   insn=0x00000000003E474C string=0x00000000003E4750 " a"
 *   insn=0x00000000003E4768 string=0x00000000003E476C "@"
 *   insn=0x00000000003E476C string=0x00000000003E4770 ""
 *   insn=0x00000000003E4770 string=0x00000000003E4774 ""
 *   insn=0x00000000003E4778 string=0x00000000003E477C ""
 *   insn=0x00000000003E477C string=0x00000000003E4780 "@"
 *   insn=0x00000000003E4788 string=0x00000000003E478C "h"
 *   insn=0x00000000003E478C string=0x00000000003E4790 "("
 *   insn=0x00000000003E4790 string=0x00000000003E4794 ""
 *   insn=0x00000000003E4794 string=0x00000000003E4798 ""
 *   insn=0x00000000003E47A0 string=0x00000000003E47A4 " !"
 *   insn=0x00000000003E47B8 string=0x00000000003E47BC ""
 *   insn=0x00000000003E47C8 string=0x00000000003E47CC "\t@"
 *   insn=0x00000000003E47D8 string=0x00000000003E47DC ""
 *   insn=0x00000000003E47E8 string=0x00000000003E47EC "@"
 *   insn=0x00000000003E47F8 string=0x00000000003E47FC ""
 *   insn=0x00000000003E480C string=0x00000000003E4810 "\t@"
 *   insn=0x00000000003E4818 string=0x00000000003E481C ""
 *   insn=0x00000000003E482C string=0x00000000003E4830 "@"
 *   insn=0x00000000003E4838 string=0x00000000003E483C "YW"
 *   insn=0x00000000003E483C string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003E4844 string=0x00000000003E4848 "zP"
 *   insn=0x00000000003E4848 string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003E4860 string=0x00000000003E4864 "!"
 *   insn=0x00000000003E4888 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E488C string=0x00000000003E4890 ""
 *   insn=0x00000000003E4890 string=0x00000000003E4894 "A"
 *   insn=0x00000000003E489C string=0x00000000003E48A0 "8X"
 *   insn=0x00000000003E48A0 string=0x00000000001FA980 "0'"
 *   insn=0x00000000003E48B8 string=0x00000000003E48BC "p"
 *   insn=0x00000000003E48C4 string=0x00000000003E48C8 "("
 *   insn=0x00000000003E48C8 string=0x00000000003E48CC "\t\t@"
 *   insn=0x00000000003E48CC string=0x00000000003E48D0 ")"
 *   insn=0x00000000003E48D0 string=0x00000000003E48D4 "\t\t"
 *   insn=0x00000000003E48D8 string=0x00000000003E48DC "\t"
 *   insn=0x00000000003E48DC string=0x00000000003E48E0 ")@"
 *   insn=0x00000000003E48E4 string=0x00000000003E48E8 " "
 *   insn=0x00000000003E48E8 string=0x00000000003E48EC "X"
 *   insn=0x00000000003E48FC string=0x00000000003E4900 "_"
 *   insn=0x00000000003E48FC string=0x00000000003E4A54 "("
 *   insn=0x00000000003E4908 string=0x00000000003E490C "\n"
 *   insn=0x00000000003E490C string=0x00000000003E4910 "\t\t@"
 *   insn=0x00000000003E4910 string=0x00000000003E4914 ")"
 *   insn=0x00000000003E4914 string=0x00000000003E4918 "\t\t"
 *   insn=0x00000000003E491C string=0x00000000003E4920 "\t"
 *   insn=0x00000000003E4920 string=0x00000000003E4924 ")@"
 *   insn=0x00000000003E4928 string=0x00000000003E492C " "
 *   insn=0x00000000003E492C string=0x00000000003E4930 "G"
 *   insn=0x00000000003E4944 string=0x00000000003E4948 ""
 *   insn=0x00000000003E494C string=0x00000000003E4950 "a"
 *   insn=0x00000000003E4954 string=0x00000000003E4958 "\t@"
 *   insn=0x00000000003E4964 string=0x00000000003E4968 ""
 *   insn=0x00000000003E496C string=0x00000000003E4970 "a"
 *   insn=0x00000000003E4974 string=0x00000000003E4978 "@"
 *   insn=0x00000000003E4980 string=0x00000000003E4984 "^"
 *   insn=0x00000000003E498C string=0x00000000003E4990 "t"
 *   insn=0x00000000003E4994 string=0x00000000003E4998 ""
 *   insn=0x00000000003E49A4 string=0x00000000003E49A8 "\t@"
 *   insn=0x00000000003E49B4 string=0x00000000003E49B8 ""
 *   insn=0x00000000003E49C4 string=0x00000000003E49C8 "@"
 *   insn=0x00000000003E49D0 string=0x00000000003E49D4 "J"
 *   insn=0x00000000003E49D8 string=0x00000000003E49DC "8"
 *   insn=0x00000000003E49E4 string=0x00000000003E49E8 "2J"
 *   insn=0x00000000003E49E8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E49F8 string=0x00000000003E49FC "h"
 *   insn=0x00000000003E49FC string=0x00000000003E4A00 "("
 *   insn=0x00000000003E4A00 string=0x00000000003E4A04 ""
 *   insn=0x00000000003E4A04 string=0x00000000003E4A08 ""
 *   insn=0x00000000003E4A10 string=0x00000000003E4A14 " a"
 *   insn=0x00000000003E4A2C string=0x00000000003E4A30 "@"
 *   insn=0x00000000003E4A30 string=0x00000000003E4A34 ""
 *   insn=0x00000000003E4A34 string=0x00000000003E4A38 ""
 *   insn=0x00000000003E4A3C string=0x00000000003E4A40 ""
 *   insn=0x00000000003E4A40 string=0x00000000003E4A44 "@"
 *   insn=0x00000000003E4A4C string=0x00000000003E4A50 "h"
 *   insn=0x00000000003E4A54 string=0x00000000003E4A58 ""
 *   insn=0x00000000003E4A58 string=0x00000000003E4A5C ""
 *   insn=0x00000000003E4A64 string=0x00000000003E4A68 " !"
 *   insn=0x00000000003E4A7C string=0x00000000003E4A80 ""
 *   insn=0x00000000003E4A8C string=0x00000000003E4A90 "\t@"
 *   insn=0x00000000003E4A9C string=0x00000000003E4AA0 ""
 *   insn=0x00000000003E4AAC string=0x00000000003E4AB0 "@"
 *   insn=0x00000000003E4ABC string=0x00000000003E4AC0 ""
 *   insn=0x00000000003E4ACC string=0x00000000003E4AD0 "\t@"
 *   insn=0x00000000003E4ADC string=0x00000000003E4AE0 ""
 *   insn=0x00000000003E4AEC string=0x00000000003E4AF0 "@"
 *   insn=0x00000000003E4AFC string=0x00000000003E4B00 "qs"
 *   insn=0x00000000003E4B0C string=0x00000000003E4B10 "\t\t@"
 *   insn=0x00000000003E4B10 string=0x00000000003E4B14 ")"
 *   insn=0x00000000003E4B14 string=0x00000000003E4B18 "\t\t"
 *   insn=0x00000000003E4B1C string=0x00000000003E4B20 "\t"
 *   insn=0x00000000003E4B20 string=0x00000000003E4B24 ")@"
 *   insn=0x00000000003E4B28 string=0x00000000003E4B2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::Update(Caver::TargetFrame *this, float a2)
{
  float v4; // s0
  Caver::GUIAnimation *v5; // x21
  char *v6; // x20
  Caver::GUIPropertyValue *v7; // x0
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x23
  Caver::GUIPropertyValue *v12; // x0
  unsigned __int64 v13; // x8
  _QWORD *v14; // x9
  _QWORD *v15; // x21
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x21
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x23
  unsigned __int64 v22; // x8
  _QWORD *v23; // x9
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x23
  _QWORD *v31; // x21
  __int64 v32; // x8
  __int64 v33; // x24
  int64x2_t v34; // q0
  unsigned __int64 v35; // x8
  _QWORD *v36; // x25
  _QWORD *v37; // x0
  __int64 v38; // x8
  void (__fastcall *v39)(int64x2_t *, int64x2_t *, __int64); // x8
  _QWORD *v40; // x0
  __int64 v41; // x8
  void (__fastcall *v42)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v43; // x8
  __int64 v44; // x8
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v48; // x0
  __int64 v49; // x19
  __int64 v50; // x19
  __int64 v51; // x8
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x0
  _QWORD *v56; // x8
  __int64 v57; // x19
  __int64 v58; // x9
  __int64 v59; // x0
  unsigned __int64 v60; // [xsp+0h] [xbp-B0h]
  int64x2_t v61; // [xsp+8h] [xbp-A8h] BYREF
  Caver::TargetFrame *v62; // [xsp+18h] [xbp-98h]
  __int64 v63; // [xsp+20h] [xbp-90h] BYREF
  _QWORD *v64; // [xsp+28h] [xbp-88h]
  unsigned __int64 v65; // [xsp+30h] [xbp-80h]
  int64x2_t v66; // [xsp+38h] [xbp-78h] BYREF
  Caver::TargetFrame *v67; // [xsp+48h] [xbp-68h]
  int64x2_t v68; // [xsp+50h] [xbp-60h] BYREF
  Caver::TargetFrame *v69; // [xsp+60h] [xbp-50h]
  __int64 v70; // [xsp+68h] [xbp-48h]

  v70 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((float *)this + 59) + a2;
  *((float *)this + 59) = v4;
  if ( v4 <= 3.0 )
  {
    if ( *((_BYTE *)this + 268) )
      return Caver::GUIView::Update(this, a2);
  }
  else
  {
    *((_BYTE *)this + 268) = 0;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 34) + 304LL) || *((_QWORD *)this + 96) )
    return Caver::GUIView::Update(this, a2);
  v5 = (Caver::GUIAnimation *)operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation(v5);
  v6 = (char *)this + 768;
  v63 = (__int64)v5;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v63 = *((_QWORD *)this + 96);
  *((_QWORD *)this + 96) = v5;
  v8 = (_QWORD *)*((_QWORD *)this + 97);
  *((_QWORD *)this + 97) = v64;
  v64 = v8;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      v7 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        v7 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = *(_QWORD *)v6;
  *(_DWORD *)(*(_QWORD *)v6 + 48LL) = 2;
  v12 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat(&v63, v7, 1.0);
  *(_DWORD *)(v11 + 112) = v63;
  v14 = v64;
  v13 = v65;
  if ( v65 )
    ++*(_QWORD *)(v65 + 8);
  v15 = *(_QWORD **)(v11 + 128);
  *(_QWORD *)(v11 + 120) = v14;
  *(_QWORD *)(v11 + 128) = v13;
  if ( v15 )
  {
    v16 = v15[1] - 1LL;
    v15[1] = v16;
    if ( !v16 )
    {
      v12 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v17 = v15[2] - 1LL;
      v15[2] = v17;
      if ( !v17 )
        v12 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  v18 = (_QWORD *)v65;
  if ( v65 )
  {
    v19 = *(_QWORD *)(v65 + 8) - 1LL;
    *(_QWORD *)(v65 + 8) = v19;
    if ( !v19 )
    {
      v12 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v20 = v18[2] - 1LL;
      v18[2] = v20;
      if ( !v20 )
        v12 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
    }
  }
  v21 = *(_QWORD *)v6;
  Caver::GUIPropertyValue::ValueWithFloat(&v63, v12, 0.0);
  *(_DWORD *)(v21 + 136) = v63;
  v23 = v64;
  v22 = v65;
  if ( v65 )
    ++*(_QWORD *)(v65 + 8);
  v24 = *(_QWORD **)(v21 + 152);
  *(_QWORD *)(v21 + 144) = v23;
  *(_QWORD *)(v21 + 152) = v22;
  if ( v24 )
  {
    v25 = v24[1] - 1LL;
    v24[1] = v25;
    if ( !v25 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
      v26 = v24[2] - 1LL;
      v24[2] = v26;
      if ( !v26 )
        (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
    }
  }
  v27 = (_QWORD *)v65;
  if ( v65 )
  {
    v28 = *(_QWORD *)(v65 + 8) - 1LL;
    *(_QWORD *)(v65 + 8) = v28;
    if ( !v28 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      v29 = v27[2] - 1LL;
      v27[2] = v29;
      if ( !v29 )
        (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    }
  }
  v30 = *((_QWORD *)this + 96);
  *(_DWORD *)(v30 + 92) = 1053609165;
  v31 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v31 )
  {
    v32 = v31[1];
    if ( v32 )
    {
      v33 = *((_QWORD *)this + 1);
      v34 = vdupq_n_s64(0);
      v34.n128_u64[0] = (unsigned __int64)Caver::TargetFrame::HideAnimationFinished;
      v31[1] = v32 + 2;
      v68 = v34;
      v69 = this;
      if ( (boost::detail::function::has_empty_target() & 1) != 0 )
      {
        v35 = 0;
      }
      else
      {
        v62 = v69;
        v61 = v68;
        v35 = (unsigned __int64)boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::TargetFrame,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::TargetFrame*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::TargetFrame,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::TargetFrame*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
      }
      v60 = v35;
      v63 = v33;
      v64 = v31;
      ++v31[2];
      v65 = 0;
      if ( v35 )
      {
        v65 = v35;
        if ( (v35 & 1) == 0 )
        {
          (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v35 & 0xFFFFFFFFFFFFFFFELL))(&v61, &v66, 0);
          v33 = v63;
          v36 = v64;
LABEL_40:
          v37 = *(_QWORD **)(v30 + 8);
          *(_QWORD *)v30 = v33;
          if ( v36 != v37 )
          {
            if ( v36 )
              ++v36[2];
            if ( v37 )
            {
              v38 = v37[2] - 1LL;
              v37[2] = v38;
              if ( !v38 )
                (*(void (__fastcall **)(_QWORD *))(*v37 + 24LL))(v37);
            }
            *(_QWORD *)(v30 + 8) = v36;
          }
          boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
          if ( v65 )
          {
            if ( (v65 & 1) == 0 )
            {
              v39 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v65 & 0xFFFFFFFFFFFFFFFELL);
              if ( v39 )
                v39(&v66, &v66, 2);
            }
            v65 = 0;
          }
          v40 = v64;
          if ( v64 )
          {
            v41 = v64[2] - 1LL;
            v64[2] = v41;
            if ( !v41 )
              (*(void (__fastcall **)(_QWORD *))(*v40 + 24LL))(v40);
          }
          if ( v60 )
          {
            if ( (v60 & 1) == 0 )
            {
              v42 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v60 & 0xFFFFFFFFFFFFFFFELL);
              if ( v42 )
                v42(&v61, &v61, 2);
            }
          }
          v43 = v31[1] - 1LL;
          v31[1] = v43;
          if ( !v43 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
            v44 = v31[2] - 1LL;
            v31[2] = v44;
            if ( !v44 )
              (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
          }
          v45 = v31[1] - 1LL;
          v31[1] = v45;
          if ( !v45 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
            v46 = v31[2] - 1LL;
            v31[2] = v46;
            if ( !v46 )
              (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
          }
          Caver::GUIView::RemoveAllAnimations(this);
          Caver::GUIView::AddAnimation();
          return Caver::GUIView::Update(this, a2);
        }
        v67 = v62;
        v66 = v61;
      }
      v36 = v31;
      goto LABEL_40;
    }
  }
  v68.n128_u64[0] = (unsigned __int64)off_6CC4E8;
  boost::throw_exception<boost::bad_weak_ptr>();
  v49 = v48;
  std::exception::~exception((std::exception *)&v68);
  v50 = sub_5818C4(v49);
  v51 = v31[1] - 1LL;
  v31[1] = v51;
  if ( !v51 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
    v52 = v31[2] - 1LL;
    v31[2] = v52;
    if ( !v52 )
      (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
  }
  v53 = v31[1] - 1LL;
  v31[1] = v53;
  if ( !v53 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
    v54 = v31[2] - 1LL;
    v31[2] = v54;
    if ( !v54 )
      (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
  }
  v55 = sub_5818C4(v50);
  v56 = v64;
  v57 = v55;
  if ( v64 )
  {
    v58 = v64[2] - 1LL;
    v64[2] = v58;
    if ( !v58 )
      (*(void (__fastcall **)(_QWORD *))(*v56 + 24LL))(v56);
  }
  v59 = ((__int64 (__fastcall *)(__int64))loc_20E34C)(v57);
  return Caver::TargetFrame::HideAnimationFinished(v59);
}

