/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CA1B8
 * Mangled: _ZN5Caver18ConsumableItemView7SetItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x00000000001F5900  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *
 * Callees: 22
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F80D0  Caver::GUIButton::~GUIButton()
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FB0E0  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x00000000001FB280  Caver::ConsumableItemView::~ConsumableItemView()
 *   0x00000000001FC750  Caver::GUIButton::SetImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000003CAA00  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 199
 *   insn=0x00000000003CA1C8 string=0x00000000003CA1CC "V"
 *   insn=0x00000000003CA1E4 string=0x00000000003CA1E8 "\n"
 *   insn=0x00000000003CA1E4 string=0x00000000003CA1F4 "u"
 *   insn=0x00000000003CA1E8 string=0x00000000003CA1EC "J"
 *   insn=0x00000000003CA1EC string=0x00000000003CA1F0 "\n"
 *   insn=0x00000000003CA1F4 string=0x00000000003CA1F8 "i""
 *   insn=0x00000000003CA200 string=0x00000000003CA204 ""
 *   insn=0x00000000003CA208 string=0x00000000003CA20C "!"
 *   insn=0x00000000003CA214 string=0x00000000003CA218 "\t@"
 *   insn=0x00000000003CA220 string=0x00000000003CA224 ""
 *   insn=0x00000000003CA230 string=0x00000000003CA234 "("
 *   insn=0x00000000003CA234 string=0x00000000003CA238 "F"
 *   insn=0x00000000003CA238 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003CA24C string=0x00000000003CA250 "@"
 *   insn=0x00000000003CA250 string=0x00000000005922A8 "overlayitem_"
 *   insn=0x00000000003CA25C string=0x00000000003CA260 "t?"
 *   insn=0x00000000003CA27C string=0x00000000003CA280 "4"
 *   insn=0x00000000003CA280 string=0x00000000001FC750 "0'"
 *   insn=0x00000000003CA288 string=0x00000000003CA28C "@"
 *   insn=0x00000000003CA28C string=0x00000000003CA290 ""
 *   insn=0x00000000003CA290 string=0x00000000003CA294 ""
 *   insn=0x00000000003CA298 string=0x00000000003CA29C ""
 *   insn=0x00000000003CA29C string=0x00000000003CA2A0 ""
 *   insn=0x00000000003CA2D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003CA2D8 string=0x00000000003CA2DC "%"
 *   insn=0x00000000003CA2DC string=0x00000000001F4B70 "P'"
 *   insn=0x00000000003CA2EC string=0x00000000003CA2F0 "@"
 *   insn=0x00000000003CA2F0 string=0x00000000001FABF0 "0'"
 *   insn=0x00000000003CA300 string=0x00000000003CA304 "H"
 *   insn=0x00000000003CA304 string=0x00000000003CA308 "I"
 *   insn=0x00000000003CA310 string=0x00000000003CA314 "!MA"
 *   insn=0x00000000003CA330 string=0x00000000003CA334 "k"
 *   insn=0x00000000003CA334 string=0x00000000001FB0E0 "0'"
 *   insn=0x00000000003CA34C string=0x0000000000583944 "\n"
 *   insn=0x00000000003CA354 string=0x00000000003CA358 "N"
 *   insn=0x00000000003CA358 string=0x00000000001F8090 "0'"
 *   insn=0x00000000003CA368 string=0x00000000003CA36C "\n"
 *   insn=0x00000000003CA36C string=0x00000000003CA370 "J"
 *   insn=0x00000000003CA370 string=0x00000000003CA374 "\n"
 *   insn=0x00000000003CA37C string=0x00000000003CA380 "4"
 *   insn=0x00000000003CA384 string=0x00000000003CA388 ""
 *   insn=0x00000000003CA394 string=0x00000000003CA398 "\t@"
 *   insn=0x00000000003CA3A4 string=0x00000000003CA3A8 ""
 *   insn=0x00000000003CA3B4 string=0x00000000003CA3B8 "@"
 *   insn=0x00000000003CA3C4 string=0x00000000003CA3C8 "4"
 *   insn=0x00000000003CA3CC string=0x00000000003CA3D0 ""
 *   insn=0x00000000003CA3DC string=0x00000000003CA3E0 "\t@"
 *   insn=0x00000000003CA3EC string=0x00000000003CA3F0 ""
 *   insn=0x00000000003CA3FC string=0x00000000003CA400 "@"
 *   insn=0x00000000003CA428 string=0x00000000003CA42C "\n"
 *   insn=0x00000000003CA42C string=0x00000000003CA430 "J"
 *   insn=0x00000000003CA430 string=0x00000000003CA434 "\n"
 *   insn=0x00000000003CA43C string=0x00000000003CA440 "4"
 *   insn=0x00000000003CA444 string=0x00000000003CA448 ""
 *   insn=0x00000000003CA454 string=0x00000000003CA458 "\t@"
 *   insn=0x00000000003CA464 string=0x00000000003CA468 ""
 *   insn=0x00000000003CA474 string=0x00000000003CA478 "@"
 *   insn=0x00000000003CA484 string=0x00000000003CA488 "4"
 *   insn=0x00000000003CA488 string=0x00000000003CA4CC "I"
 *   insn=0x00000000003CA48C string=0x00000000003CA490 ""
 *   insn=0x00000000003CA49C string=0x00000000003CA4A0 "\t@"
 *   insn=0x00000000003CA4AC string=0x00000000003CA4B0 ""
 *   insn=0x00000000003CA4BC string=0x00000000003CA4C0 "@"
 *   insn=0x00000000003CA4D0 string=0x00000000003CA4D4 " QA"
 *   insn=0x00000000003CA4DC string=0x00000000003CA4E0 "0"
 *   insn=0x00000000003CA4E0 string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003CA4E8 string=0x00000000003CA4EC "Q"
 *   insn=0x00000000003CA4EC string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003CA4F8 string=0x00000000003CA4FC "h"
 *   insn=0x00000000003CA4FC string=0x00000000003CA500 ""
 *   insn=0x00000000003CA500 string=0x00000000003CA504 "h"
 *   insn=0x00000000003CA504 string=0x00000000003CA508 "a"
 *   insn=0x00000000003CA508 string=0x00000000003CA50C "h"
 *   insn=0x00000000003CA510 string=0x00000000003CA514 "\t@"
 *   insn=0x00000000003CA518 string=0x00000000003CA51C "h\n@"
 *   insn=0x00000000003CA51C string=0x00000000003CA520 ""
 *   insn=0x00000000003CA520 string=0x00000000003CA524 "h\n"
 *   insn=0x00000000003CA524 string=0x00000000003CA528 "a"
 *   insn=0x00000000003CA528 string=0x00000000003CA52C "h"
 *   insn=0x00000000003CA530 string=0x00000000003CA534 "@"
 *   insn=0x00000000003CA544 string=0x00000000003CA548 "@"
 *   insn=0x00000000003CA550 string=0x00000000003CA554 "("
 *   insn=0x00000000003CA560 string=0x00000000003CA564 "{"
 *   insn=0x00000000003CA56C string=0x00000000003CA570 "@"
 *   insn=0x00000000003CA570 string=0x00000000003CA574 ""
 *   insn=0x00000000003CA574 string=0x00000000003CA578 ""
 *   insn=0x00000000003CA57C string=0x00000000003CA580 ""
 *   insn=0x00000000003CA580 string=0x00000000003CA584 ""
 *   insn=0x00000000003CA58C string=0x00000000003CA590 "h"
 *   insn=0x00000000003CA5A0 string=0x00000000003CA640 "$"
 *   insn=0x00000000003CA5B8 string=0x00000000003CA5BC ")=G"
 *   insn=0x00000000003CA5BC string=0x00000000003CA5C0 "!"
 *   insn=0x00000000003CA5C4 string=0x00000000003CA5C8 "\t"
 *   insn=0x00000000003CA5C4 string=0x00000000003CA600 "\t"
 *   insn=0x00000000003CA5C8 string=0x00000000003CA5CC "*"
 *   insn=0x00000000003CA5CC string=0x00000000003CA5D0 "\n"
 *   insn=0x00000000003CA5D4 string=0x00000000003CA5D8 ""
 *   insn=0x00000000003CA5D8 string=0x00000000003CA60C "?"
 *   insn=0x00000000003CA5DC string=0x00000000003CA5E0 ")=G"
 *   insn=0x00000000003CA5E0 string=0x00000000003CA5E4 "!"
 *   insn=0x00000000003CA5E8 string=0x00000000003CA5EC "\t"
 *   insn=0x00000000003CA5E8 string=0x00000000003CA620 "\t"
 *   insn=0x00000000003CA5EC string=0x00000000003CA5F0 "*"
 *   insn=0x00000000003CA5F0 string=0x00000000003CA5F4 "\n"
 *   insn=0x00000000003CA5FC string=0x00000000003CA62C "?"
 *   insn=0x00000000003CA600 string=0x00000000003CA604 "*"
 *   insn=0x00000000003CA604 string=0x00000000003CA608 "\n"
 *   insn=0x00000000003CA614 string=0x00000000003CA618 "c"
 *   insn=0x00000000003CA618 string=0x00000000003CA61C ")"
 *   insn=0x00000000003CA620 string=0x00000000003CA624 "*"
 *   insn=0x00000000003CA624 string=0x00000000003CA628 "\n"
 *   insn=0x00000000003CA634 string=0x00000000003CA638 "["
 *   insn=0x00000000003CA638 string=0x00000000003CA63C "%"
 *   insn=0x00000000003CA640 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003CA650 string=0x00000000003CA654 ""
 *   insn=0x00000000003CA658 string=0x00000000003CA65C "A"
 *   insn=0x00000000003CA660 string=0x00000000003CA664 "\t@"
 *   insn=0x00000000003CA670 string=0x00000000003CA674 ""
 *   insn=0x00000000003CA678 string=0x00000000003CA67C "A"
 *   insn=0x00000000003CA680 string=0x00000000003CA684 "@"
 *   insn=0x00000000003CA68C string=0x00000000003CA690 "m"
 *   insn=0x00000000003CA698 string=0x00000000003CA69C "T"
 *   insn=0x00000000003CA6A0 string=0x00000000003CA6A4 ""
 *   insn=0x00000000003CA6B0 string=0x00000000003CA6B4 "\t@"
 *   insn=0x00000000003CA6C0 string=0x00000000003CA6C4 ""
 *   insn=0x00000000003CA6D0 string=0x00000000003CA6D4 "@"
 *   insn=0x00000000003CA6DC string=0x00000000003CA6E0 "Y"
 *   insn=0x00000000003CA6E8 string=0x00000000003CA6EC ""
 *   insn=0x00000000003CA6EC string=0x00000000003CA6F0 "\t\t@"
 *   insn=0x00000000003CA6F0 string=0x00000000003CA6F4 ")"
 *   insn=0x00000000003CA6F4 string=0x00000000003CA6F8 "\t\t"
 *   insn=0x00000000003CA6FC string=0x00000000003CA700 "\t"
 *   insn=0x00000000003CA700 string=0x00000000003CA704 ")"
 *   insn=0x00000000003CA708 string=0x00000000003CA70C " "
 *   insn=0x00000000003CA70C string=0x00000000003CA710 "_"
 *   insn=0x00000000003CA720 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003CA724 string=0x00000000003CA728 "g"
 *   insn=0x00000000003CA734 string=0x00000000003CA738 "\t\t@"
 *   insn=0x00000000003CA738 string=0x00000000003CA73C ")"
 *   insn=0x00000000003CA73C string=0x00000000003CA740 "\t\t"
 *   insn=0x00000000003CA740 string=0x00000000003CA744 "!"
 *   insn=0x00000000003CA744 string=0x00000000003CA748 "\t"
 *   insn=0x00000000003CA748 string=0x00000000003CA74C ")"
 *   insn=0x00000000003CA750 string=0x00000000003CA754 " "
 *   insn=0x00000000003CA75C string=0x00000000003CA760 ""
 *   insn=0x00000000003CA76C string=0x00000000003CA770 ")"
 *   insn=0x00000000003CA784 string=0x00000000003CA788 ")"
 *   insn=0x00000000003CA798 string=0x00000000003CA79C ")=G"
 *   insn=0x00000000003CA79C string=0x00000000003CA7A0 "!"
 *   insn=0x00000000003CA7A4 string=0x00000000003CA7A8 "\t"
 *   insn=0x00000000003CA7A4 string=0x00000000003CA814 "\t"
 *   insn=0x00000000003CA7A8 string=0x00000000003CA7AC "*"
 *   insn=0x00000000003CA7AC string=0x00000000003CA7B0 "\n"
 *   insn=0x00000000003CA7B4 string=0x00000000003CA7B8 "?"
 *   insn=0x00000000003CA7C8 string=0x00000000003CA7CC ">"
 *   insn=0x00000000003CA7D0 string=0x00000000003CA7D4 ")=G"
 *   insn=0x00000000003CA7D4 string=0x00000000003CA7D8 "!"
 *   insn=0x00000000003CA7DC string=0x00000000003CA7E0 "\t"
 *   insn=0x00000000003CA7DC string=0x00000000003CA7F4 "\t"
 *   insn=0x00000000003CA7E0 string=0x00000000003CA7E4 "*"
 *   insn=0x00000000003CA7E4 string=0x00000000003CA7E8 "\n"
 *   insn=0x00000000003CA7F0 string=0x00000000003CA800 "?"
 *   insn=0x00000000003CA7F4 string=0x00000000003CA7F8 "*"
 *   insn=0x00000000003CA7F8 string=0x00000000003CA7FC "\n"
 *   insn=0x00000000003CA814 string=0x00000000003CA818 "*"
 *   insn=0x00000000003CA818 string=0x00000000003CA81C "\n"
 *   insn=0x00000000003CA81C string=0x00000000003CA820 "?"
 *   insn=0x00000000003CA844 string=0x00000000003CA848 "4"
 *   insn=0x00000000003CA84C string=0x00000000003CA850 ""
 *   insn=0x00000000003CA85C string=0x00000000003CA860 "\t@"
 *   insn=0x00000000003CA86C string=0x00000000003CA870 ""
 *   insn=0x00000000003CA87C string=0x00000000003CA880 "@"
 *   insn=0x00000000003CA88C string=0x00000000003CA890 ""
 *   insn=0x00000000003CA8AC string=0x00000000003CA8B0 "t"
 *   insn=0x00000000003CA8B0 string=0x00000000003CA8B4 "EG"
 *   insn=0x00000000003CA8B4 string=0x00000000003CA8B8 "A"
 *   insn=0x00000000003CA8B8 string=0x00000000003CA8BC "h"
 *   insn=0x00000000003CA8BC string=0x00000000003CA8C0 "4"
 *   insn=0x00000000003CA8C0 string=0x00000000003CA904 "t"
 *   insn=0x00000000003CA8C4 string=0x00000000003CA8C8 ""
 *   insn=0x00000000003CA8D4 string=0x00000000003CA8D8 "\t@"
 *   insn=0x00000000003CA8E4 string=0x00000000003CA8E8 ""
 *   insn=0x00000000003CA8F4 string=0x00000000003CA8F8 "@"
 *   insn=0x00000000003CA904 string=0x00000000003CA908 "4"
 *   insn=0x00000000003CA90C string=0x00000000003CA910 ""
 *   insn=0x00000000003CA91C string=0x00000000003CA920 "\t@"
 *   insn=0x00000000003CA92C string=0x00000000003CA930 ""
 *   insn=0x00000000003CA93C string=0x00000000003CA940 "@"
 *   insn=0x00000000003CA95C string=0x00000000001F80D0 "0'"
 *   insn=0x00000000003CA96C string=0x00000000003CA970 "5"
 *   insn=0x00000000003CA974 string=0x00000000003CA978 ""
 *   insn=0x00000000003CA984 string=0x00000000003CA988 "\t@"
 *   insn=0x00000000003CA994 string=0x00000000003CA998 ""
 *   insn=0x00000000003CA9A4 string=0x00000000003CA9A8 "@"
 *   insn=0x00000000003CA9C0 string=0x00000000003CA9C4 "b"
 *   insn=0x00000000003CA9D4 string=0x00000000003CA9D8 "*"
 *   insn=0x00000000003CA9D8 string=0x00000000001FB280 "0'"
 *   insn=0x00000000003CA9E4 string=0x00000000003CA9E8 "2"
 *   insn=0x00000000003CA9F0 string=0x00000000003CA9F4 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ConsumableItemView::SetItem(Caver::GUIView *a1, __int64 *a2)
{
  Caver::GUIView *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x0
  int v10; // w8
  char *v11; // x0
  void *v12; // x0
  Caver::GUIAnimation *v13; // x20
  Caver::GUIAnimation *v14; // x20
  Caver::GUIPropertyValue *v15; // x0
  Caver::GUIAnimation *v16; // x21
  Caver::GUIPropertyValue *v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x8
  Caver::GUIAnimation *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x9
  _QWORD *v29; // x20
  __int64 v30; // x8
  __int64 v31; // x8
  _QWORD *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 result; // x0
  _QWORD *v36; // x19
  __int64 v37; // x8
  __int64 v38; // x8
  unsigned int *v39; // x8
  int v40; // w9
  unsigned int *v41; // x8
  int v42; // w9
  __int64 v43; // [xsp+38h] [xbp-68h] BYREF
  __int128 v44; // [xsp+40h] [xbp-60h] BYREF
  __int128 v45; // [xsp+50h] [xbp-50h]
  Caver::GUIAnimation *v46; // [xsp+60h] [xbp-40h] BYREF
  _QWORD *v47; // [xsp+68h] [xbp-38h]
  _QWORD v48[2]; // [xsp+70h] [xbp-30h] BYREF

  v3 = a1;
  v48[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)a1 + 61);
  *((_QWORD *)a1 + 60) = v5;
  *((_QWORD *)a1 + 61) = v4;
  if ( !v6
    || (v7 = v6[1] - 1LL, (v6[1] = v7) != 0)
    || (a1 = (Caver::GUIView *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6),
        v8 = v6[2] - 1LL,
        (v6[2] = v8) != 0) )
  {
    if ( *a2 )
      goto LABEL_7;
LABEL_37:
    Caver::GUIButton::SetImage();
    result = 0;
    *((_BYTE *)v3 + 228) = 1;
    return result;
  }
  a1 = (Caver::GUIView *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
  if ( !*a2 )
    goto LABEL_37;
LABEL_7:
  Caver::TextureLibrary::sharedLibrary(a1);
  sub_56A528(v48, *a2 + 8);
  ((void (__fastcall *)(Caver::GUIAnimation **__return_ptr, const char *, _QWORD *))loc_25A030)(
    &v46,
    "overlayitem_",
    v48);
  Caver::TextureLibrary::TextureForName();
  Caver::GUIButton::SetImage();
  v9 = v44;
  if ( (_QWORD)v44 )
  {
    v10 = *(_DWORD *)(v44 + 8) - 1;
    *(_DWORD *)(v44 + 8) = v10;
    if ( !v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (char *)v46 - 24;
  if ( (__int64 *)((char *)v46 - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)((char *)v46 - 8);
    if ( &pthread_create )
    {
      do
        v40 = __ldaxr(v39);
      while ( __stlxr(v40 - 1, v39) );
    }
    else
    {
      v40 = (*v39)--;
    }
    if ( v40 <= 0 )
      operator delete(v11);
  }
  v12 = (void *)(v48[0] - 24LL);
  if ( (__int64 *)(v48[0] - 24LL) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v48[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = (*v41)--;
    }
    if ( v42 <= 0 )
      operator delete(v12);
  }
  v13 = (Caver::GUIAnimation *)operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation(v13);
  v46 = v13;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v14 = v46;
  *((_DWORD *)v46 + 12) = 1;
  v48[0] = 0x3FD9999A3EE147AELL;
  v43 = 0x3FD9999A3F400000LL;
  v15 = (Caver::GUIPropertyValue *)Caver::GUIAnimationCurve::GUIAnimationCurve(
                                     (Caver::GUIAnimationCurve *)&v44,
                                     (const Caver::Vector2 *)v48,
                                     (const Caver::Vector2 *)&v43);
  *(_OWORD *)((char *)v14 + 52) = v44;
  *(_OWORD *)((char *)v14 + 68) = v45;
  v16 = v46;
  v17 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat((__int64 *)&v44, v15, 0.01);
  *((_DWORD *)v16 + 28) = v44;
  v19 = *((_QWORD *)&v44 + 1);
  v18 = v45;
  if ( (_QWORD)v45 )
    ++*(_QWORD *)(v45 + 8);
  v20 = (_QWORD *)*((_QWORD *)v16 + 16);
  *((_QWORD *)v16 + 15) = v19;
  *((_QWORD *)v16 + 16) = v18;
  if ( v20 )
  {
    v21 = v20[1] - 1LL;
    v20[1] = v21;
    if ( !v21 )
    {
      v17 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        v17 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = (_QWORD *)v45;
  if ( (_QWORD)v45 )
  {
    v24 = *(_QWORD *)(v45 + 8) - 1LL;
    *(_QWORD *)(v45 + 8) = v24;
    if ( !v24 )
    {
      v17 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v25 = v23[2] - 1LL;
      v23[2] = v25;
      if ( !v25 )
        v17 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  v26 = v46;
  Caver::GUIPropertyValue::ValueWithFloat((__int64 *)&v44, v17, 1.0);
  *((_DWORD *)v26 + 34) = v44;
  v28 = *((_QWORD *)&v44 + 1);
  v27 = v45;
  if ( (_QWORD)v45 )
    ++*(_QWORD *)(v45 + 8);
  v29 = (_QWORD *)*((_QWORD *)v26 + 19);
  *((_QWORD *)v26 + 18) = v28;
  *((_QWORD *)v26 + 19) = v27;
  if ( v29 )
  {
    v30 = v29[1] - 1LL;
    v29[1] = v30;
    if ( !v30 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
      v31 = v29[2] - 1LL;
      v29[2] = v31;
      if ( !v31 )
        (*(void (__fastcall **)(_QWORD *))(*v29 + 24LL))(v29);
    }
  }
  v32 = (_QWORD *)v45;
  if ( (_QWORD)v45 )
  {
    v33 = *(_QWORD *)(v45 + 8) - 1LL;
    *(_QWORD *)(v45 + 8) = v33;
    if ( !v33 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
      v34 = v32[2] - 1LL;
      v32[2] = v34;
      if ( !v34 )
        (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
    }
  }
  *((_QWORD *)v46 + 11) = 0x3E80000000000000LL;
  Caver::GUIView::RemoveAllAnimations(v3);
  result = Caver::GUIView::AddAnimation();
  *((_BYTE *)v3 + 228) = 0;
  v36 = v47;
  if ( v47 )
  {
    v37 = v47[1] - 1LL;
    v47[1] = v37;
    if ( !v37 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
      v38 = v36[2] - 1LL;
      v36[2] = v38;
      if ( !v38 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
    }
  }
  return result;
}

