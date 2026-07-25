/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040C508
 * Mangled: _ZN5Caver18InventoryItemPanel36ToggleLabelsFadeOutAnimationFinishedEPvPNS_8GUIEventE
 * Demangled: Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x000000000040BD50  Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *
 * Callees: 17
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
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000040CD60  Caver::InventoryItemPanel::ToggleLabelsFadeInAnimationFinished(void *,Caver::GUIEvent *)
 *   0x000000000040D420  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>(boost::shared_ptr<Caver::InventoryTrinketSlot> const*,Caver::InventoryTrinketSlot *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 194
 *   insn=0x000000000040C51C string=0x000000000040C520 "U"
 *   insn=0x000000000040C52C string=0x000000000040C530 "i"
 *   insn=0x000000000040C534 string=0x000000000040C538 "("
 *   insn=0x000000000040C538 string=0x000000000040C53C "h"
 *   insn=0x000000000040C53C string=0x000000000040C540 "?"
 *   insn=0x000000000040C540 string=0x000000000040C544 "@"
 *   insn=0x000000000040C544 string=0x000000000040C548 "i"
 *   insn=0x000000000040C544 string=0x000000000040C56C "i"V"
 *   insn=0x000000000040C54C string=0x000000000040C550 "*"
 *   insn=0x000000000040C54C string=0x000000000040C55C "t"
 *   insn=0x000000000040C550 string=0x000000000040C554 "J"
 *   insn=0x000000000040C554 string=0x000000000040C558 "*"
 *   insn=0x000000000040C55C string=0x000000000040C560 "h&"
 *   insn=0x000000000040C560 string=0x000000000040C564 "T"
 *   insn=0x000000000040C568 string=0x000000000040C5CC "h"
 *   insn=0x000000000040C570 string=0x000000000040C574 "\n"
 *   insn=0x000000000040C570 string=0x000000000040C580 "t"
 *   insn=0x000000000040C574 string=0x000000000040C578 "J"
 *   insn=0x000000000040C578 string=0x000000000040C57C "\n"
 *   insn=0x000000000040C580 string=0x000000000040C584 "i""
 *   insn=0x000000000040C584 string=0x000000000040C588 "4"
 *   insn=0x000000000040C58C string=0x000000000040C590 ""
 *   insn=0x000000000040C5A0 string=0x000000000040C5A4 "\t@"
 *   insn=0x000000000040C5AC string=0x000000000040C5B0 ""
 *   insn=0x000000000040C5C0 string=0x000000000040C5C4 "@"
 *   insn=0x000000000040C5D8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000040C5DC string=0x000000000040C5E0 "d"
 *   insn=0x000000000040C5E0 string=0x00000000001F4B70 "P'"
 *   insn=0x000000000040C5F4 string=0x00000000001FABF0 "0'"
 *   insn=0x000000000040C61C string=0x00000000001F8090 "0'"
 *   insn=0x000000000040C62C string=0x000000000040C630 "\n"
 *   insn=0x000000000040C630 string=0x000000000040C634 "J"
 *   insn=0x000000000040C634 string=0x000000000040C638 "\n"
 *   insn=0x000000000040C640 string=0x000000000040C644 "4"
 *   insn=0x000000000040C648 string=0x000000000040C64C ""
 *   insn=0x000000000040C658 string=0x000000000040C65C "\t@"
 *   insn=0x000000000040C668 string=0x000000000040C66C ""
 *   insn=0x000000000040C678 string=0x000000000040C67C "@"
 *   insn=0x000000000040C688 string=0x000000000040C68C "4"
 *   insn=0x000000000040C690 string=0x000000000040C694 ""
 *   insn=0x000000000040C6A0 string=0x000000000040C6A4 "\t@"
 *   insn=0x000000000040C6B0 string=0x000000000040C6B4 ""
 *   insn=0x000000000040C6C0 string=0x000000000040C6C4 "@"
 *   insn=0x000000000040C6D8 string=0x000000000040C6DC "m"
 *   insn=0x000000000040C6EC string=0x000000000040C6F0 "\n"
 *   insn=0x000000000040C6F0 string=0x000000000040C6F4 "J"
 *   insn=0x000000000040C6F4 string=0x000000000040C6F8 "\n"
 *   insn=0x000000000040C700 string=0x000000000040C704 "4"
 *   insn=0x000000000040C708 string=0x000000000040C70C ""
 *   insn=0x000000000040C718 string=0x000000000040C71C "\t@"
 *   insn=0x000000000040C728 string=0x000000000040C72C ""
 *   insn=0x000000000040C738 string=0x000000000040C73C "@"
 *   insn=0x000000000040C748 string=0x000000000040C74C "4"
 *   insn=0x000000000040C750 string=0x000000000040C754 ""
 *   insn=0x000000000040C760 string=0x000000000040C764 "\t@"
 *   insn=0x000000000040C770 string=0x000000000040C774 ""
 *   insn=0x000000000040C780 string=0x000000000040C784 "@"
 *   insn=0x000000000040C790 string=0x000000000040C794 ""
 *   insn=0x000000000040C79C string=0x000000000040C7A0 "t\n@"
 *   insn=0x000000000040C7B0 string=0x000000000040C7B4 "w"
 *   insn=0x000000000040C7B4 string=0x000000000040C7B8 ")"
 *   insn=0x000000000040C7B8 string=0x000000000040CD60 "h"
 *   insn=0x000000000040C7BC string=0x000000000040C7C0 "\t"
 *   insn=0x000000000040C7C4 string=0x000000000040C7C8 " "
 *   insn=0x000000000040C7DC string=0x000000000040C7E0 "`"
 *   insn=0x000000000040C7DC string=0x00000000001F6B70 "0'"
 *   insn=0x000000000040C7E4 string=0x000000000040C7E8 ""
 *   insn=0x000000000040C7FC string=0x000000000040C800 "qE"
 *   insn=0x000000000040C80C string=0x000000000040C810 ")"
 *   insn=0x000000000040C818 string=0x000000000040C81C "("
 *   insn=0x000000000040C820 string=0x000000000040C824 "h"
 *   insn=0x000000000040C824 string=0x000000000040C828 ""
 *   insn=0x000000000040C828 string=0x000000000040C82C ""
 *   insn=0x000000000040C830 string=0x000000000040C834 " !"
 *   insn=0x000000000040C838 string=0x000000000040C83C "!a"
 *   insn=0x000000000040C874 string=0x000000000040C878 "@"
 *   insn=0x000000000040C878 string=0x000000000040C87C ""
 *   insn=0x000000000040C87C string=0x000000000040C880 ""
 *   insn=0x000000000040C884 string=0x000000000040C888 "@"
 *   insn=0x000000000040C888 string=0x000000000040C88C ""
 *   insn=0x000000000040C88C string=0x000000000040C890 ""
 *   insn=0x000000000040C894 string=0x000000000040C898 ""
 *   insn=0x000000000040C898 string=0x000000000040C89C "@"
 *   insn=0x000000000040C8B8 string=0x000000000040C8BC "h"
 *   insn=0x000000000040C8BC string=0x000000000040C8C0 "("
 *   insn=0x000000000040C8C0 string=0x000000000040C8C4 ""
 *   insn=0x000000000040C8C4 string=0x000000000040C8C8 ""
 *   insn=0x000000000040C8D0 string=0x000000000040C8D4 " a"
 *   insn=0x000000000040C8EC string=0x000000000040C8F0 "@"
 *   insn=0x000000000040C8F0 string=0x000000000040C8F4 ""
 *   insn=0x000000000040C8F4 string=0x000000000040C8F8 ""
 *   insn=0x000000000040C8FC string=0x000000000040C900 ""
 *   insn=0x000000000040C900 string=0x000000000040C904 "@"
 *   insn=0x000000000040C90C string=0x000000000040C910 "h"
 *   insn=0x000000000040C910 string=0x000000000040C914 "("
 *   insn=0x000000000040C914 string=0x000000000040C918 ""
 *   insn=0x000000000040C918 string=0x000000000040C91C ""
 *   insn=0x000000000040C924 string=0x000000000040C928 " !"
 *   insn=0x000000000040C93C string=0x000000000040C940 ""
 *   insn=0x000000000040C94C string=0x000000000040C950 "\t@"
 *   insn=0x000000000040C95C string=0x000000000040C960 ""
 *   insn=0x000000000040C96C string=0x000000000040C970 "@"
 *   insn=0x000000000040C97C string=0x000000000040C980 ""
 *   insn=0x000000000040C988 string=0x000000000040C9BC "s"
 *   insn=0x000000000040C98C string=0x000000000040C990 "\t@"
 *   insn=0x000000000040C99C string=0x000000000040C9A0 ""
 *   insn=0x000000000040C9AC string=0x000000000040C9B0 "@"
 *   insn=0x000000000040C9C4 string=0x00000000001FA5A0 "0'"
 *   insn=0x000000000040C9D0 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000040C9D4 string=0x000000000040C9D8 "3"
 *   insn=0x000000000040C9D8 string=0x000000000040C9DC "h"
 *   insn=0x000000000040C9DC string=0x000000000040C9E0 ""
 *   insn=0x000000000040C9E0 string=0x000000000040C9E4 "h"
 *   insn=0x000000000040C9E8 string=0x000000000040C9EC "h"
 *   insn=0x000000000040C9F0 string=0x000000000040C9F4 "\t@"
 *   insn=0x000000000040C9F8 string=0x000000000040C9FC "h\n@"
 *   insn=0x000000000040C9FC string=0x000000000040CA00 ""
 *   insn=0x000000000040CA00 string=0x000000000040CA04 "h\n"
 *   insn=0x000000000040CA08 string=0x000000000040CA0C "h"
 *   insn=0x000000000040CA10 string=0x000000000040CA14 "@"
 *   insn=0x000000000040CA44 string=0x000000000040CA48 ""
 *   insn=0x000000000040CA48 string=0x000000000040CA4C "A"
 *   insn=0x000000000040CA58 string=0x00000000001FA980 "0'"
 *   insn=0x000000000040CA5C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040CA78 string=0x000000000040CA7C "q"
 *   insn=0x000000000040CA84 string=0x000000000040CA88 "H"
 *   insn=0x000000000040CA88 string=0x000000000040CA8C "\t\t@"
 *   insn=0x000000000040CA8C string=0x000000000040CA90 ")"
 *   insn=0x000000000040CA90 string=0x000000000040CA94 "\t\t"
 *   insn=0x000000000040CA98 string=0x000000000040CA9C "\t"
 *   insn=0x000000000040CA9C string=0x000000000040CAA0 ")@"
 *   insn=0x000000000040CAA4 string=0x000000000040CAA8 " "
 *   insn=0x000000000040CAA8 string=0x000000000040CAAC "Y"
 *   insn=0x000000000040CABC string=0x000000000040CAC0 "`"
 *   insn=0x000000000040CABC string=0x000000000040CC18 "("
 *   insn=0x000000000040CAC8 string=0x000000000040CACC "(\n"
 *   insn=0x000000000040CACC string=0x000000000040CAD0 "\t\t@"
 *   insn=0x000000000040CAD0 string=0x000000000040CAD4 ")"
 *   insn=0x000000000040CAD4 string=0x000000000040CAD8 "\t\t"
 *   insn=0x000000000040CADC string=0x000000000040CAE0 "\t"
 *   insn=0x000000000040CAE0 string=0x000000000040CAE4 ")@"
 *   insn=0x000000000040CAE8 string=0x000000000040CAEC " "
 *   insn=0x000000000040CAEC string=0x000000000040CAF0 "H"
 *   insn=0x000000000040CAFC string=0x000000000040CB00 "4"
 *   insn=0x000000000040CB04 string=0x000000000040CB08 ""
 *   insn=0x000000000040CB14 string=0x000000000040CB18 "\t@"
 *   insn=0x000000000040CB24 string=0x000000000040CB28 ""
 *   insn=0x000000000040CB34 string=0x000000000040CB38 "@"
 *   insn=0x000000000040CB40 string=0x000000000040CB44 "p"
 *   insn=0x000000000040CB54 string=0x000000000040CB58 ""
 *   insn=0x000000000040CB5C string=0x000000000040CB60 "!"
 *   insn=0x000000000040CB64 string=0x000000000040CB68 "\t@"
 *   insn=0x000000000040CB74 string=0x000000000040CB78 ""
 *   insn=0x000000000040CB7C string=0x000000000040CB80 "!"
 *   insn=0x000000000040CB84 string=0x000000000040CB88 "@"
 *   insn=0x000000000040CB90 string=0x000000000040CB94 "\"
 *   insn=0x000000000040CB9C string=0x000000000040CBA0 "8"
 *   insn=0x000000000040CBAC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000040CBB0 string=0x000000000040CBB4 "D"
 *   insn=0x000000000040CBBC string=0x000000000040CBC0 "h"
 *   insn=0x000000000040CBC0 string=0x000000000040CBC4 "("
 *   insn=0x000000000040CBC4 string=0x000000000040CBC8 ""
 *   insn=0x000000000040CBC8 string=0x000000000040CBCC ""
 *   insn=0x000000000040CBD4 string=0x000000000040CBD8 " a"
 *   insn=0x000000000040CBF0 string=0x000000000040CBF4 "@"
 *   insn=0x000000000040CBF4 string=0x000000000040CBF8 ""
 *   insn=0x000000000040CBF8 string=0x000000000040CBFC ""
 *   insn=0x000000000040CC00 string=0x000000000040CC04 ""
 *   insn=0x000000000040CC04 string=0x000000000040CC08 "@"
 *   insn=0x000000000040CC10 string=0x000000000040CC14 "h"
 *   insn=0x000000000040CC18 string=0x000000000040CC1C ""
 *   insn=0x000000000040CC1C string=0x000000000040CC20 ""
 *   insn=0x000000000040CC28 string=0x000000000040CC2C " !"
 *   insn=0x000000000040CC40 string=0x000000000040CC44 ""
 *   insn=0x000000000040CC50 string=0x000000000040CC54 "\t@"
 *   insn=0x000000000040CC60 string=0x000000000040CC64 ""
 *   insn=0x000000000040CC70 string=0x000000000040CC74 "@"
 *   insn=0x000000000040CC80 string=0x000000000040CC84 ""
 *   insn=0x000000000040CC90 string=0x000000000040CC94 "\t@"
 *   insn=0x000000000040CCA0 string=0x000000000040CCA4 ""
 *   insn=0x000000000040CCB0 string=0x000000000040CCB4 "@"
 *   insn=0x000000000040CCC8 string=0x000000000040CCCC "h"
 *   insn=0x000000000040CCCC string=0x000000000040CCD0 "\t\t@"
 *   insn=0x000000000040CCD0 string=0x000000000040CCD4 ")"
 *   insn=0x000000000040CCD4 string=0x000000000040CCD8 "\t\t"
 *   insn=0x000000000040CCDC string=0x000000000040CCE0 "\t"
 *   insn=0x000000000040CCE0 string=0x000000000040CCE4 ")@"
 *   insn=0x000000000040CCE8 string=0x000000000040CCEC " "
 *   insn=0x000000000040CD04 string=0x000000000040CD08 "4"
 *   insn=0x000000000040CD0C string=0x000000000040CD10 ""
 *   insn=0x000000000040CD1C string=0x000000000040CD20 "\t@"
 *   insn=0x000000000040CD2C string=0x000000000040CD30 ""
 *   insn=0x000000000040CD3C string=0x000000000040CD40 "@"
 *   insn=0x000000000040CD58 string=0x000000000040CD5C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished(__int64 a1)
{
  __int64 v2; // x9
  __int64 v3; // x8
  __int64 v4; // x9
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x20
  __int64 v11; // x22
  Caver::GUIPropertyValue *v12; // x0
  Caver::GUIPropertyValue *v13; // x0
  unsigned __int64 v14; // x8
  _QWORD *v15; // x9
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x22
  unsigned __int64 v23; // x8
  _QWORD *v24; // x9
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x22
  _QWORD *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x23
  int64x2_t v35; // q0
  unsigned __int64 v36; // x8
  _QWORD *v37; // x24
  _QWORD *v38; // x0
  __int64 v39; // x8
  void (__fastcall *v40)(int64x2_t *, int64x2_t *, __int64); // x8
  _QWORD *v41; // x0
  __int64 v42; // x8
  void (__fastcall *v43)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v44; // x8
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x8
  __int64 result; // x0
  _QWORD *v49; // x19
  __int64 v50; // x8
  __int64 v51; // x8
  unsigned __int64 v52; // [xsp+0h] [xbp-B0h]
  int64x2_t v53; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v54; // [xsp+18h] [xbp-98h]
  __int64 v55; // [xsp+20h] [xbp-90h] BYREF
  _QWORD *v56; // [xsp+28h] [xbp-88h]
  unsigned __int64 v57; // [xsp+30h] [xbp-80h]
  int64x2_t v58; // [xsp+38h] [xbp-78h] BYREF
  __int64 v59; // [xsp+48h] [xbp-68h]
  __int64 v60; // [xsp+50h] [xbp-60h]
  _QWORD *v61; // [xsp+58h] [xbp-58h]
  int64x2_t v62; // [xsp+60h] [xbp-50h]
  __int64 v63; // [xsp+70h] [xbp-40h]
  __int64 v64; // [xsp+78h] [xbp-38h]

  v64 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(a1 + 320);
  *(_BYTE *)(v2 + 228) = 1;
  v3 = *(_QWORD *)(a1 + 336);
  if ( v2 != v3 )
  {
    v4 = *(_QWORD *)(a1 + 344);
    if ( v4 )
      ++*(_QWORD *)(v4 + 8);
    v5 = *(_QWORD **)(a1 + 328);
    *(_QWORD *)(a1 + 320) = v3;
    *(_QWORD *)(a1 + 328) = v4;
    if ( !v5 )
      goto LABEL_12;
LABEL_9:
    v8 = v5[1] - 1LL;
    v5[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v9 = v5[2] - 1LL;
      v5[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(a1 + 352);
  v6 = *(_QWORD *)(a1 + 360);
  if ( v6 )
    ++*(_QWORD *)(v6 + 8);
  v5 = *(_QWORD **)(a1 + 328);
  *(_QWORD *)(a1 + 320) = v7;
  *(_QWORD *)(a1 + 328) = v6;
  if ( v5 )
    goto LABEL_9;
LABEL_12:
  *(_BYTE *)(*(_QWORD *)(a1 + 320) + 228LL) = 0;
  v10 = operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation((Caver::GUIAnimation *)v10);
  v60 = v10;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v11 = v10;
  *(_DWORD *)(v10 + 48) = 2;
  v13 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat(&v55, v12, 0.0);
  *(_DWORD *)(v10 + 112) = v55;
  v15 = v56;
  v14 = v57;
  if ( v57 )
    ++*(_QWORD *)(v57 + 8);
  v16 = *(_QWORD **)(v10 + 128);
  *(_QWORD *)(v11 + 120) = v15;
  *(_QWORD *)(v11 + 128) = v14;
  if ( v16 )
  {
    v17 = v16[1] - 1LL;
    v16[1] = v17;
    if ( !v17 )
    {
      v13 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
      v18 = v16[2] - 1LL;
      v16[2] = v18;
      if ( !v18 )
        v13 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
    }
  }
  v19 = (_QWORD *)v57;
  if ( v57 )
  {
    v20 = *(_QWORD *)(v57 + 8) - 1LL;
    *(_QWORD *)(v57 + 8) = v20;
    if ( !v20 )
    {
      v13 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v21 = v19[2] - 1LL;
      v19[2] = v21;
      if ( !v21 )
        v13 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
    }
  }
  v22 = v60;
  Caver::GUIPropertyValue::ValueWithFloat(&v55, v13, 1.0);
  *(_DWORD *)(v22 + 136) = v55;
  v24 = v56;
  v23 = v57;
  if ( v57 )
    ++*(_QWORD *)(v57 + 8);
  v25 = *(_QWORD **)(v22 + 152);
  *(_QWORD *)(v22 + 144) = v24;
  *(_QWORD *)(v22 + 152) = v23;
  if ( v25 )
  {
    v26 = v25[1] - 1LL;
    v25[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
  }
  v28 = (_QWORD *)v57;
  if ( v57 )
  {
    v29 = *(_QWORD *)(v57 + 8) - 1LL;
    *(_QWORD *)(v57 + 8) = v29;
    if ( !v29 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
      v30 = v28[2] - 1LL;
      v28[2] = v30;
      if ( !v30 )
        (*(void (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
    }
  }
  v31 = v60;
  *(_DWORD *)(v60 + 92) = 1048576000;
  *(_BYTE *)(v31 + 184) = 0;
  v32 = *(_QWORD **)(a1 + 16);
  if ( !v32 || (v33 = v32[1]) == 0 )
  {
    v62.n128_u64[0] = (unsigned __int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v34 = *(_QWORD *)(a1 + 8);
  v35 = vdupq_n_s64(0);
  v35.n128_u64[0] = (unsigned __int64)Caver::InventoryItemPanel::ToggleLabelsFadeInAnimationFinished;
  v32[1] = v33 + 2;
  v62 = v35;
  v63 = a1;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v36 = 0;
  }
  else
  {
    v54 = v63;
    v53 = v62;
    v36 = (unsigned __int64)&boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::InventoryItemPanel,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::InventoryItemPanel*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::InventoryItemPanel,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::InventoryItemPanel*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v52 = v36;
  v55 = v34;
  v56 = v32;
  ++v32[2];
  v57 = 0;
  if ( v36 )
  {
    v57 = v36;
    if ( (v36 & 1) == 0 )
    {
      (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v36 & 0xFFFFFFFFFFFFFFFELL))(&v53, &v58, 0);
      v34 = v55;
      v37 = v56;
      goto LABEL_42;
    }
    v59 = v54;
    v58 = v53;
  }
  v37 = v32;
LABEL_42:
  v38 = *(_QWORD **)(v31 + 8);
  *(_QWORD *)v31 = v34;
  if ( v37 != v38 )
  {
    if ( v37 )
      ++v37[2];
    if ( v38 )
    {
      v39 = v38[2] - 1LL;
      v38[2] = v39;
      if ( !v39 )
        (*(void (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
    }
    *(_QWORD *)(v31 + 8) = v37;
  }
  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
  if ( v57 )
  {
    if ( (v57 & 1) == 0 )
    {
      v40 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v57 & 0xFFFFFFFFFFFFFFFELL);
      if ( v40 )
        v40(&v58, &v58, 2);
    }
    v57 = 0;
  }
  v41 = v56;
  if ( v56 )
  {
    v42 = v56[2] - 1LL;
    v56[2] = v42;
    if ( !v42 )
      (*(void (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
  }
  if ( v52 )
  {
    if ( (v52 & 1) == 0 )
    {
      v43 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v52 & 0xFFFFFFFFFFFFFFFELL);
      if ( v43 )
        v43(&v53, &v53, 2);
    }
  }
  v44 = v32[1] - 1LL;
  v32[1] = v44;
  if ( !v44 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
    v45 = v32[2] - 1LL;
    v32[2] = v45;
    if ( !v45 )
      (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
  }
  v46 = v32[1] - 1LL;
  v32[1] = v46;
  if ( !v46 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
    v47 = v32[2] - 1LL;
    v32[2] = v47;
    if ( !v47 )
      (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
  }
  Caver::GUIView::RemoveAllAnimations(*(Caver::GUIView **)(a1 + 320));
  result = Caver::GUIView::AddAnimation();
  v49 = v61;
  if ( v61 )
  {
    v50 = v61[1] - 1LL;
    v61[1] = v50;
    if ( !v50 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v49 + 16LL))(v49);
      v51 = v49[2] - 1LL;
      v49[2] = v51;
      if ( !v51 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v49 + 24LL))(v49);
    }
  }
  return result;
}

