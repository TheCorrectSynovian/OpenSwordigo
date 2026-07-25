/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000404A8C
 * Mangled: _ZN5Caver17GuidePurchaseView9AnimateInEv
 * Demangled: Caver::GuidePurchaseView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000001F6060  Caver::GuidePurchaseView::AnimateIn(void)
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FEA30  Caver::GUIAnimation::ScaleAnimation(float,float,float)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 452
 *   insn=0x0000000000404AA8 string=0x0000000000404AAC "W"
 *   insn=0x0000000000404AC4 string=0x0000000000404AC8 "iO"
 *   insn=0x0000000000404AD0 string=0x0000000000404AD4 ""
 *   insn=0x0000000000404AE4 string=0x00000000001FA5A0 "0'"
 *   insn=0x0000000000404AF0 string=0x00000000001F8A30 "0'"
 *   insn=0x0000000000404AF4 string=0x0000000000404AF8 "4"
 *   insn=0x0000000000404AF8 string=0x0000000000404B3C "uRR"
 *   insn=0x0000000000404AFC string=0x0000000000404B00 ""
 *   insn=0x0000000000404B10 string=0x0000000000404B14 "\t@"
 *   insn=0x0000000000404B1C string=0x0000000000404B20 ""
 *   insn=0x0000000000404B30 string=0x0000000000404B34 "@"
 *   insn=0x0000000000404B44 string=0x0000000000404B48 ""
 *   insn=0x0000000000404B54 string=0x0000000000404B58 "b"
 *   insn=0x0000000000404B64 string=0x0000000000404B68 "@8 "
 *   insn=0x0000000000404B78 string=0x0000000000404B7C "9"
 *   insn=0x0000000000404B7C string=0x00000000001F9C60 "0'"
 *   insn=0x0000000000404BB0 string=0x0000000000404BB4 "5"
 *   insn=0x0000000000404BB4 string=0x0000000000404BF8 "4"
 *   insn=0x0000000000404BB8 string=0x0000000000404BBC ""
 *   insn=0x0000000000404BC8 string=0x0000000000404BCC "\t@"
 *   insn=0x0000000000404BD8 string=0x0000000000404BDC ""
 *   insn=0x0000000000404BE8 string=0x0000000000404BEC "@"
 *   insn=0x0000000000404BF8 string=0x0000000000404C3C "u"
 *   insn=0x0000000000404BFC string=0x0000000000404C00 ""
 *   insn=0x0000000000404C10 string=0x0000000000404C14 "\t@"
 *   insn=0x0000000000404C1C string=0x0000000000404C20 ""
 *   insn=0x0000000000404C30 string=0x0000000000404C34 "@"
 *   insn=0x0000000000404C44 string=0x0000000000404C48 ""
 *   insn=0x0000000000404C54 string=0x0000000000404C58 "a"
 *   insn=0x0000000000404C58 string=0x0000000000404C5C "b"
 *   insn=0x0000000000404C60 string=0x0000000000404C64 "!(""
 *   insn=0x0000000000404C64 string=0x0000000000404C68 " 8 "
 *   insn=0x0000000000404C9C string=0x0000000000404CA0 "@"
 *   insn=0x0000000000404CA8 string=0x0000000000404CAC "a"
 *   insn=0x0000000000404CB0 string=0x0000000000404CB4 "5"
 *   insn=0x0000000000404CB4 string=0x0000000000404CF8 "4"
 *   insn=0x0000000000404CB8 string=0x0000000000404CBC ""
 *   insn=0x0000000000404CC8 string=0x0000000000404CCC "\t@"
 *   insn=0x0000000000404CD8 string=0x0000000000404CDC ""
 *   insn=0x0000000000404CE8 string=0x0000000000404CEC "@"
 *   insn=0x0000000000404CF8 string=0x0000000000404D3C "h"
 *   insn=0x0000000000404CFC string=0x0000000000404D00 ""
 *   insn=0x0000000000404D10 string=0x0000000000404D14 "\t@"
 *   insn=0x0000000000404D1C string=0x0000000000404D20 ""
 *   insn=0x0000000000404D30 string=0x0000000000404D34 "@"
 *   insn=0x0000000000404D3C string=0x0000000000404D40 "?"
 *   insn=0x0000000000404D44 string=0x0000000000404D48 "uRS"
 *   insn=0x0000000000404D50 string=0x0000000000404D54 ""
 *   insn=0x0000000000404D68 string=0x0000000000404D6C "1"
 *   insn=0x0000000000404D7C string=0x0000000000404D80 "\tY"
 *   insn=0x0000000000404D90 string=0x0000000000404D94 "'"
 *   insn=0x0000000000404D98 string=0x0000000000404D9C "5"
 *   insn=0x0000000000404D9C string=0x0000000000404DE0 "4"
 *   insn=0x0000000000404DA0 string=0x0000000000404DA4 ""
 *   insn=0x0000000000404DB0 string=0x0000000000404DB4 "\t@"
 *   insn=0x0000000000404DC0 string=0x0000000000404DC4 ""
 *   insn=0x0000000000404DD0 string=0x0000000000404DD4 "@"
 *   insn=0x0000000000404DE0 string=0x0000000000404E24 "uRT"
 *   insn=0x0000000000404DE4 string=0x0000000000404DE8 ""
 *   insn=0x0000000000404DF8 string=0x0000000000404DFC "\t@"
 *   insn=0x0000000000404E04 string=0x0000000000404E08 ""
 *   insn=0x0000000000404E18 string=0x0000000000404E1C "@"
 *   insn=0x0000000000404E2C string=0x0000000000404E30 ""
 *   insn=0x0000000000404E58 string=0x0000000000404E5C "\tY"
 *   insn=0x0000000000404E74 string=0x0000000000404E78 "5"
 *   insn=0x0000000000404E78 string=0x0000000000404EBC "4"
 *   insn=0x0000000000404E7C string=0x0000000000404E80 ""
 *   insn=0x0000000000404E8C string=0x0000000000404E90 "\t@"
 *   insn=0x0000000000404E9C string=0x0000000000404EA0 ""
 *   insn=0x0000000000404EAC string=0x0000000000404EB0 "@"
 *   insn=0x0000000000404EBC string=0x0000000000404F00 "uRU"
 *   insn=0x0000000000404EC0 string=0x0000000000404EC4 ""
 *   insn=0x0000000000404ED4 string=0x0000000000404ED8 "\t@"
 *   insn=0x0000000000404EE0 string=0x0000000000404EE4 ""
 *   insn=0x0000000000404EF4 string=0x0000000000404EF8 "@"
 *   insn=0x0000000000404F08 string=0x0000000000404F0C ""
 *   insn=0x0000000000404F20 string=0x0000000000404F24 ""
 *   insn=0x0000000000404F30 string=0x0000000000404F34 "\tY"
 *   insn=0x0000000000404F4C string=0x0000000000404F50 "5"
 *   insn=0x0000000000404F50 string=0x0000000000404F94 "4"
 *   insn=0x0000000000404F54 string=0x0000000000404F58 ""
 *   insn=0x0000000000404F64 string=0x0000000000404F68 "\t@"
 *   insn=0x0000000000404F74 string=0x0000000000404F78 ""
 *   insn=0x0000000000404F84 string=0x0000000000404F88 "@"
 *   insn=0x0000000000404F94 string=0x0000000000404FD8 "sRV"
 *   insn=0x0000000000404F98 string=0x0000000000404F9C ""
 *   insn=0x0000000000404FAC string=0x0000000000404FB0 "\t@"
 *   insn=0x0000000000404FB8 string=0x0000000000404FBC ""
 *   insn=0x0000000000404FCC string=0x0000000000404FD0 "@"
 *   insn=0x0000000000404FE0 string=0x0000000000404FE4 ""
 *   insn=0x0000000000405008 string=0x000000000040500C "\tY"
 *   insn=0x0000000000405010 string=0x0000000000405014 "c"
 *   insn=0x0000000000405024 string=0x0000000000405028 "3"
 *   insn=0x0000000000405028 string=0x000000000040502C "h"
 *   insn=0x0000000000405028 string=0x000000000040506C "4"
 *   insn=0x000000000040502C string=0x0000000000405030 ""
 *   insn=0x0000000000405030 string=0x0000000000405034 "h"
 *   insn=0x0000000000405038 string=0x000000000040503C "h"
 *   insn=0x000000000040503C string=0x0000000000405040 "\t@"
 *   insn=0x0000000000405048 string=0x000000000040504C "h\n@"
 *   insn=0x000000000040504C string=0x0000000000405050 ""
 *   insn=0x0000000000405050 string=0x0000000000405054 "h\n"
 *   insn=0x0000000000405058 string=0x000000000040505C "h"
 *   insn=0x000000000040505C string=0x0000000000405060 "@"
 *   insn=0x0000000000405070 string=0x0000000000405074 ""
 *   insn=0x0000000000405084 string=0x0000000000405088 "\t@"
 *   insn=0x0000000000405090 string=0x0000000000405094 ""
 *   insn=0x00000000004050A4 string=0x00000000004050A8 "@"
 *   insn=0x00000000004050B8 string=0x00000000004050BC "a\n"
 *   insn=0x00000000004050BC string=0x0000000000405208 "2"
 *   insn=0x00000000004050E4 string=0x00000000004050E8 ""
 *   insn=0x00000000004050F4 string=0x00000000004050F8 ""
 *   insn=0x0000000000405104 string=0x0000000000405108 "a"
 *   insn=0x0000000000405108 string=0x000000000040510C "b"
 *   insn=0x0000000000405110 string=0x0000000000405114 "!(""
 *   insn=0x0000000000405114 string=0x0000000000405118 " 8 "
 *   insn=0x000000000040513C string=0x0000000000405140 "x"
 *   insn=0x0000000000405158 string=0x000000000040515C "5"
 *   insn=0x0000000000405160 string=0x0000000000405164 "5"
 *   insn=0x0000000000405164 string=0x00000000004051A8 "4"
 *   insn=0x0000000000405168 string=0x000000000040516C ""
 *   insn=0x0000000000405178 string=0x000000000040517C "\t@"
 *   insn=0x0000000000405188 string=0x000000000040518C ""
 *   insn=0x0000000000405198 string=0x000000000040519C "@"
 *   insn=0x00000000004051A8 string=0x00000000004051EC "h"
 *   insn=0x00000000004051AC string=0x00000000004051B0 ""
 *   insn=0x00000000004051C0 string=0x00000000004051C4 "\t@"
 *   insn=0x00000000004051CC string=0x00000000004051D0 ""
 *   insn=0x00000000004051E0 string=0x00000000004051E4 "@"
 *   insn=0x00000000004051EC string=0x00000000004051F0 "9"
 *   insn=0x00000000004051F4 string=0x00000000004051F8 ")"
 *   insn=0x00000000004051F8 string=0x00000000004051FC "?"
 *   insn=0x00000000004051FC string=0x0000000000405200 "C"
 *   insn=0x0000000000405208 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000405218 string=0x000000000040521C "*"
 *   insn=0x0000000000405220 string=0x0000000000405224 "4"
 *   insn=0x0000000000405224 string=0x0000000000405228 "'"
 *   insn=0x000000000040522C string=0x0000000000405230 "t"
 *   insn=0x0000000000405230 string=0x0000000000405234 "$"
 *   insn=0x000000000040523C string=0x0000000000405240 "!"
 *   insn=0x0000000000405248 string=0x000000000040524C "5"
 *   insn=0x0000000000405250 string=0x0000000000405254 ""
 *   insn=0x0000000000405260 string=0x0000000000405264 "\t@"
 *   insn=0x0000000000405270 string=0x0000000000405274 ""
 *   insn=0x0000000000405280 string=0x0000000000405284 "@"
 *   insn=0x0000000000405294 string=0x0000000000405298 ""
 *   insn=0x000000000040529C string=0x00000000004052A0 "!!"
 *   insn=0x00000000004052A4 string=0x00000000004052A8 "\t@"
 *   insn=0x00000000004052B4 string=0x00000000004052B8 ""
 *   insn=0x00000000004052BC string=0x00000000004052C0 "! "
 *   insn=0x00000000004052C4 string=0x00000000004052C8 "@"
 *   insn=0x00000000004052DC string=0x00000000004052E0 "5"
 *   insn=0x00000000004052E4 string=0x00000000004052E8 ""
 *   insn=0x00000000004052F4 string=0x00000000004052F8 "\t@"
 *   insn=0x0000000000405304 string=0x0000000000405308 ""
 *   insn=0x0000000000405314 string=0x0000000000405318 "@"
 *   insn=0x0000000000405328 string=0x000000000040532C ""
 *   insn=0x0000000000405338 string=0x000000000040533C "\t@"
 *   insn=0x0000000000405348 string=0x000000000040534C ""
 *   insn=0x0000000000405358 string=0x000000000040535C "@"
 *   insn=0x0000000000405370 string=0x0000000000405374 "5"
 *   insn=0x0000000000405374 string=0x00000000004053B8 "t"
 *   insn=0x0000000000405378 string=0x000000000040537C ""
 *   insn=0x0000000000405388 string=0x000000000040538C "\t@"
 *   insn=0x0000000000405398 string=0x000000000040539C ""
 *   insn=0x00000000004053A8 string=0x00000000004053AC "@"
 *   insn=0x00000000004053BC string=0x00000000004053C0 ""
 *   insn=0x00000000004053CC string=0x00000000004053D0 "\t@"
 *   insn=0x00000000004053DC string=0x00000000004053E0 ""
 *   insn=0x00000000004053EC string=0x00000000004053F0 "@"
 *   insn=0x0000000000405404 string=0x0000000000405408 "5"
 *   insn=0x000000000040540C string=0x0000000000405410 ""
 *   insn=0x000000000040541C string=0x0000000000405420 "\t@"
 *   insn=0x000000000040542C string=0x0000000000405430 ""
 *   insn=0x000000000040543C string=0x0000000000405440 "@"
 *   insn=0x0000000000405450 string=0x0000000000405454 ""
 *   insn=0x0000000000405458 string=0x000000000040545C "A"
 *   insn=0x0000000000405460 string=0x0000000000405464 "\t@"
 *   insn=0x0000000000405470 string=0x0000000000405474 ""
 *   insn=0x0000000000405478 string=0x000000000040547C "A"
 *   insn=0x0000000000405480 string=0x0000000000405484 "@"
 *   insn=0x0000000000405498 string=0x000000000040549C "u"
 *   insn=0x00000000004054A0 string=0x00000000004054A4 ""
 *   insn=0x00000000004054B0 string=0x00000000004054B4 "\t@"
 *   insn=0x00000000004054C0 string=0x00000000004054C4 ""
 *   insn=0x00000000004054D0 string=0x00000000004054D4 "@"
 *   insn=0x00000000004054EC string=0x00000000004054F0 ""
 *   insn=0x00000000004054F4 string=0x00000000004054F8 "a"
 *   insn=0x00000000004054FC string=0x0000000000405500 "\t@"
 *   insn=0x000000000040550C string=0x0000000000405510 ""
 *   insn=0x0000000000405514 string=0x0000000000405518 "a"
 *   insn=0x000000000040551C string=0x0000000000405520 "@"
 *   insn=0x0000000000405528 string=0x000000000040552C "f"
 *   insn=0x0000000000405534 string=0x0000000000405538 "u"
 *   insn=0x000000000040553C string=0x0000000000405540 ""
 *   insn=0x000000000040554C string=0x0000000000405550 "\t@"
 *   insn=0x000000000040555C string=0x0000000000405560 ""
 *   insn=0x000000000040556C string=0x0000000000405570 "@"
 *   insn=0x0000000000405588 string=0x000000000040558C ""
 *   insn=0x0000000000405598 string=0x000000000040559C "\t@"
 *   insn=0x00000000004055A8 string=0x00000000004055AC ""
 *   insn=0x00000000004055B8 string=0x00000000004055BC "@"
 *   insn=0x00000000004055C4 string=0x00000000004055C8 "?"
 *   insn=0x00000000004055D8 string=0x00000000004055DC ""
 *   insn=0x00000000004055E8 string=0x00000000004055EC "\t@"
 *   insn=0x00000000004055F8 string=0x00000000004055FC ""
 *   insn=0x0000000000405608 string=0x000000000040560C "@"
 *   insn=0x0000000000405614 string=0x0000000000405618 "+"
 *   insn=0x000000000040561C string=0x0000000000405620 "4"
 *   insn=0x0000000000405620 string=0x0000000000405624 "("
 *   insn=0x000000000040562C string=0x0000000000405630 "5"
 *   insn=0x0000000000405634 string=0x0000000000405638 ""
 *   insn=0x0000000000405644 string=0x0000000000405648 "\t@"
 *   insn=0x0000000000405654 string=0x0000000000405658 ""
 *   insn=0x0000000000405664 string=0x0000000000405668 "@"
 *   insn=0x000000000040567C string=0x0000000000405680 "4"
 *   insn=0x0000000000405684 string=0x0000000000405688 ""
 *   insn=0x0000000000405694 string=0x0000000000405698 "\t@"
 *   insn=0x00000000004056A4 string=0x00000000004056A8 ""
 *   insn=0x00000000004056B4 string=0x00000000004056B8 "@"
 *   insn=0x00000000004056C8 string=0x00000000004056CC " #"
 *   insn=0x00000000004056EC string=0x00000000004056F0 "W"
 *   insn=0x0000000000405708 string=0x000000000040570C "iO"
 *   insn=0x0000000000405714 string=0x0000000000405718 "\n"
 *   insn=0x0000000000405738 string=0x000000000040573C "4"
 *   insn=0x000000000040573C string=0x0000000000405780 "uRR"
 *   insn=0x0000000000405740 string=0x0000000000405744 ""
 *   insn=0x0000000000405754 string=0x0000000000405758 "\t@"
 *   insn=0x0000000000405760 string=0x0000000000405764 ""
 *   insn=0x0000000000405774 string=0x0000000000405778 "@"
 *   insn=0x0000000000405788 string=0x000000000040578C ""
 *   insn=0x0000000000405798 string=0x000000000040579C "b"
 *   insn=0x00000000004057A8 string=0x00000000004057AC "@8 "
 *   insn=0x00000000004057BC string=0x00000000004057C0 "("
 *   insn=0x00000000004057E0 string=0x00000000004057E4 "o"
 *   insn=0x00000000004057F4 string=0x00000000004057F8 "5"
 *   insn=0x00000000004057F8 string=0x000000000040583C "4"
 *   insn=0x00000000004057FC string=0x0000000000405800 ""
 *   insn=0x000000000040580C string=0x0000000000405810 "\t@"
 *   insn=0x000000000040581C string=0x0000000000405820 ""
 *   insn=0x000000000040582C string=0x0000000000405830 "@"
 *   insn=0x000000000040583C string=0x0000000000405880 "u"
 *   insn=0x0000000000405840 string=0x0000000000405844 ""
 *   insn=0x0000000000405854 string=0x0000000000405858 "\t@"
 *   insn=0x0000000000405860 string=0x0000000000405864 ""
 *   insn=0x0000000000405874 string=0x0000000000405878 "@"
 *   insn=0x0000000000405888 string=0x000000000040588C ""
 *   insn=0x0000000000405898 string=0x000000000040589C "a"
 *   insn=0x000000000040589C string=0x00000000004058A0 "b"
 *   insn=0x00000000004058A4 string=0x00000000004058A8 "!(""
 *   insn=0x00000000004058A8 string=0x00000000004058AC " 8 "
 *   insn=0x00000000004058E0 string=0x00000000004058E4 "/"
 *   insn=0x00000000004058EC string=0x00000000004058F0 "P"
 *   insn=0x00000000004058F4 string=0x00000000004058F8 "5"
 *   insn=0x00000000004058F8 string=0x000000000040593C "4"
 *   insn=0x00000000004058FC string=0x0000000000405900 ""
 *   insn=0x000000000040590C string=0x0000000000405910 "\t@"
 *   insn=0x000000000040591C string=0x0000000000405920 ""
 *   insn=0x000000000040592C string=0x0000000000405930 "@"
 *   insn=0x000000000040593C string=0x0000000000405980 "h"
 *   insn=0x0000000000405940 string=0x0000000000405944 ""
 *   insn=0x0000000000405954 string=0x0000000000405958 "\t@"
 *   insn=0x0000000000405960 string=0x0000000000405964 ""
 *   insn=0x0000000000405974 string=0x0000000000405978 "@"
 *   insn=0x0000000000405980 string=0x0000000000405984 "?"
 *   insn=0x0000000000405988 string=0x000000000040598C "uRS"
 *   insn=0x0000000000405994 string=0x0000000000405998 ""
 *   insn=0x00000000004059A4 string=0x00000000004059A8 "a"
 *   insn=0x00000000004059A8 string=0x00000000004059AC "b"
 *   insn=0x00000000004059B0 string=0x00000000004059B4 "!(""
 *   insn=0x00000000004059B4 string=0x00000000004059B8 " 8 "
 *   insn=0x00000000004059DC string=0x00000000004059E0 "P"
 *   insn=0x00000000004059F8 string=0x00000000004059FC ""
 *   insn=0x0000000000405A00 string=0x0000000000405A04 "5"
 *   insn=0x0000000000405A04 string=0x0000000000405A48 "4"
 *   insn=0x0000000000405A08 string=0x0000000000405A0C ""
 *   insn=0x0000000000405A18 string=0x0000000000405A1C "\t@"
 *   insn=0x0000000000405A28 string=0x0000000000405A2C ""
 *   insn=0x0000000000405A38 string=0x0000000000405A3C "@"
 *   insn=0x0000000000405A48 string=0x0000000000405A8C "uRT"
 *   insn=0x0000000000405A4C string=0x0000000000405A50 ""
 *   insn=0x0000000000405A60 string=0x0000000000405A64 "\t@"
 *   insn=0x0000000000405A6C string=0x0000000000405A70 ""
 *   insn=0x0000000000405A80 string=0x0000000000405A84 "@"
 *   insn=0x0000000000405A94 string=0x0000000000405A98 ""
 *   insn=0x0000000000405AD0 string=0x0000000000405AD4 "5"
 *   insn=0x0000000000405AD4 string=0x0000000000405B18 "4"
 *   insn=0x0000000000405AD8 string=0x0000000000405ADC ""
 *   insn=0x0000000000405AE8 string=0x0000000000405AEC "\t@"
 *   insn=0x0000000000405AF8 string=0x0000000000405AFC ""
 *   insn=0x0000000000405B08 string=0x0000000000405B0C "@"
 *   insn=0x0000000000405B18 string=0x0000000000405B5C "uRU"
 *   insn=0x0000000000405B1C string=0x0000000000405B20 ""
 *   insn=0x0000000000405B30 string=0x0000000000405B34 "\t@"
 *   insn=0x0000000000405B3C string=0x0000000000405B40 ""
 *   insn=0x0000000000405B50 string=0x0000000000405B54 "@"
 *   insn=0x0000000000405B64 string=0x0000000000405B68 ""
 *   insn=0x0000000000405B74 string=0x0000000000405B78 "b"
 *   insn=0x0000000000405B84 string=0x0000000000405B88 "@8 "
 *   insn=0x0000000000405B98 string=0x0000000000405B9C "1"
 *   insn=0x0000000000405BBC string=0x0000000000405BC0 "x"
 *   insn=0x0000000000405BD0 string=0x0000000000405BD4 "5"
 *   insn=0x0000000000405BD4 string=0x0000000000405C18 "4"
 *   insn=0x0000000000405BD8 string=0x0000000000405BDC ""
 *   insn=0x0000000000405BE8 string=0x0000000000405BEC "\t@"
 *   insn=0x0000000000405BF8 string=0x0000000000405BFC ""
 *   insn=0x0000000000405C08 string=0x0000000000405C0C "@"
 *   insn=0x0000000000405C18 string=0x0000000000405C5C "sRV"
 *   insn=0x0000000000405C1C string=0x0000000000405C20 ""
 *   insn=0x0000000000405C30 string=0x0000000000405C34 "\t@"
 *   insn=0x0000000000405C3C string=0x0000000000405C40 ""
 *   insn=0x0000000000405C50 string=0x0000000000405C54 "@"
 *   insn=0x0000000000405C64 string=0x0000000000405C68 ""
 *   insn=0x0000000000405C8C string=0x0000000000405C90 "D"
 *   insn=0x0000000000405C98 string=0x0000000000405C9C "e"
 *   insn=0x0000000000405CA0 string=0x0000000000405CA4 "3"
 *   insn=0x0000000000405CA4 string=0x0000000000405CA8 "h"
 *   insn=0x0000000000405CA4 string=0x0000000000405CE8 "4"
 *   insn=0x0000000000405CA8 string=0x0000000000405CAC ""
 *   insn=0x0000000000405CAC string=0x0000000000405CB0 "h"
 *   insn=0x0000000000405CB4 string=0x0000000000405CB8 "h"
 *   insn=0x0000000000405CB8 string=0x0000000000405CBC "\t@"
 *   insn=0x0000000000405CC4 string=0x0000000000405CC8 "h\n@"
 *   insn=0x0000000000405CC8 string=0x0000000000405CCC ""
 *   insn=0x0000000000405CCC string=0x0000000000405CD0 "h\n"
 *   insn=0x0000000000405CD4 string=0x0000000000405CD8 "h"
 *   insn=0x0000000000405CD8 string=0x0000000000405CDC "@"
 *   insn=0x0000000000405CEC string=0x0000000000405CF0 ""
 *   insn=0x0000000000405D00 string=0x0000000000405D04 "\t@"
 *   insn=0x0000000000405D0C string=0x0000000000405D10 ""
 *   insn=0x0000000000405D20 string=0x0000000000405D24 "@"
 *   insn=0x0000000000405D34 string=0x0000000000405D38 "a\n"
 *   insn=0x0000000000405D60 string=0x0000000000405D64 ""
 *   insn=0x0000000000405D70 string=0x0000000000405D74 ""
 *   insn=0x0000000000405D80 string=0x0000000000405D84 "a"
 *   insn=0x0000000000405D84 string=0x0000000000405D88 "b"
 *   insn=0x0000000000405D8C string=0x0000000000405D90 "!(""
 *   insn=0x0000000000405D90 string=0x0000000000405D94 " 8 "
 *   insn=0x0000000000405DB8 string=0x0000000000405DBC "Y"
 *   insn=0x0000000000405DDC string=0x0000000000405DE0 "5"
 *   insn=0x0000000000405DE0 string=0x0000000000405E24 "4"
 *   insn=0x0000000000405DE4 string=0x0000000000405DE8 ""
 *   insn=0x0000000000405DF4 string=0x0000000000405DF8 "\t@"
 *   insn=0x0000000000405E04 string=0x0000000000405E08 ""
 *   insn=0x0000000000405E14 string=0x0000000000405E18 "@"
 *   insn=0x0000000000405E24 string=0x0000000000405E68 "h"
 *   insn=0x0000000000405E28 string=0x0000000000405E2C ""
 *   insn=0x0000000000405E3C string=0x0000000000405E40 "\t@"
 *   insn=0x0000000000405E48 string=0x0000000000405E4C ""
 *   insn=0x0000000000405E5C string=0x0000000000405E60 "@"
 *   insn=0x0000000000405E68 string=0x0000000000405E6C "9"
 *   insn=0x0000000000405E70 string=0x0000000000405E74 ")"
 *   insn=0x0000000000405E74 string=0x0000000000405E78 "?"
 *   insn=0x0000000000405E78 string=0x0000000000405E7C "C"
 *   insn=0x0000000000405E8C string=0x0000000000405E90 "4"
 *   insn=0x0000000000405E98 string=0x0000000000405E9C "1"
 *   insn=0x0000000000405EA0 string=0x0000000000405EA4 "4"
 *   insn=0x0000000000405EA4 string=0x0000000000405EA8 "."
 *   insn=0x0000000000405EB0 string=0x0000000000405EB4 "+"
 *   insn=0x0000000000405EB8 string=0x0000000000405EBC "4"
 *   insn=0x0000000000405EBC string=0x0000000000405EC0 "("
 *   insn=0x0000000000405EC4 string=0x0000000000405EC8 "T"
 *   insn=0x0000000000405EC8 string=0x0000000000405ECC "%"
 *   insn=0x0000000000405ED4 string=0x0000000000405ED8 "5"
 *   insn=0x0000000000405ED8 string=0x0000000000405F1C "4""
 *   insn=0x0000000000405EDC string=0x0000000000405EE0 ""
 *   insn=0x0000000000405EEC string=0x0000000000405EF0 "\t@"
 *   insn=0x0000000000405EFC string=0x0000000000405F00 ""
 *   insn=0x0000000000405F0C string=0x0000000000405F10 "@"
 *   insn=0x0000000000405F20 string=0x0000000000405F24 ""
 *   insn=0x0000000000405F30 string=0x0000000000405F34 "\t@"
 *   insn=0x0000000000405F40 string=0x0000000000405F44 ""
 *   insn=0x0000000000405F50 string=0x0000000000405F54 "@"
 *   insn=0x0000000000405F68 string=0x0000000000405F6C "u"
 *   insn=0x0000000000405F6C string=0x0000000000405FB8 "T"
 *   insn=0x0000000000405F70 string=0x0000000000405F74 ""
 *   insn=0x0000000000405F80 string=0x0000000000405F84 "\t@"
 *   insn=0x0000000000405F90 string=0x0000000000405F94 ""
 *   insn=0x0000000000405FA0 string=0x0000000000405FA4 "@"
 *   insn=0x0000000000405FBC string=0x0000000000405FC0 ""
 *   insn=0x0000000000405FCC string=0x0000000000405FD0 "\t@"
 *   insn=0x0000000000405FDC string=0x0000000000405FE0 ""
 *   insn=0x0000000000405FEC string=0x0000000000405FF0 "@"
 *   insn=0x0000000000406004 string=0x0000000000406008 "5"
 *   insn=0x000000000040600C string=0x0000000000406010 ""
 *   insn=0x000000000040601C string=0x0000000000406020 "\t@"
 *   insn=0x000000000040602C string=0x0000000000406030 ""
 *   insn=0x000000000040603C string=0x0000000000406040 "@"
 *   insn=0x0000000000406050 string=0x0000000000406054 ""
 *   insn=0x0000000000406058 string=0x000000000040605C "!"
 *   insn=0x0000000000406060 string=0x0000000000406064 "\t@"
 *   insn=0x0000000000406070 string=0x0000000000406074 ""
 *   insn=0x0000000000406078 string=0x000000000040607C "!"
 *   insn=0x0000000000406080 string=0x0000000000406084 "@"
 *   insn=0x0000000000406098 string=0x000000000040609C "u"
 *   insn=0x00000000004060A0 string=0x00000000004060A4 ""
 *   insn=0x00000000004060B0 string=0x00000000004060B4 "\t@"
 *   insn=0x00000000004060C0 string=0x00000000004060C4 ""
 *   insn=0x00000000004060D0 string=0x00000000004060D4 "@"
 *   insn=0x00000000004060EC string=0x00000000004060F0 ""
 *   insn=0x00000000004060F4 string=0x00000000004060F8 "A"
 *   insn=0x00000000004060FC string=0x0000000000406100 "\t@"
 *   insn=0x000000000040610C string=0x0000000000406110 ""
 *   insn=0x0000000000406114 string=0x0000000000406118 "A"
 *   insn=0x000000000040611C string=0x0000000000406120 "@"
 *   insn=0x0000000000406134 string=0x0000000000406138 "u"
 *   insn=0x000000000040613C string=0x0000000000406140 ""
 *   insn=0x000000000040614C string=0x0000000000406150 "\t@"
 *   insn=0x000000000040615C string=0x0000000000406160 ""
 *   insn=0x000000000040616C string=0x0000000000406170 "@"
 *   insn=0x0000000000406188 string=0x000000000040618C ""
 *   insn=0x0000000000406190 string=0x0000000000406194 "a"
 *   insn=0x0000000000406198 string=0x000000000040619C "\t@"
 *   insn=0x00000000004061A8 string=0x00000000004061AC ""
 *   insn=0x00000000004061B0 string=0x00000000004061B4 "a"
 *   insn=0x00000000004061B8 string=0x00000000004061BC "@"
 *   insn=0x00000000004061C4 string=0x00000000004061C8 "f"
 *   insn=0x00000000004061D0 string=0x00000000004061D4 "u"
 *   insn=0x00000000004061D8 string=0x00000000004061DC ""
 *   insn=0x00000000004061E8 string=0x00000000004061EC "\t@"
 *   insn=0x00000000004061F8 string=0x00000000004061FC ""
 *   insn=0x0000000000406208 string=0x000000000040620C "@"
 *   insn=0x0000000000406224 string=0x0000000000406228 ""
 *   insn=0x0000000000406234 string=0x0000000000406238 "\t@"
 *   insn=0x0000000000406244 string=0x0000000000406248 ""
 *   insn=0x0000000000406254 string=0x0000000000406258 "@"
 *   insn=0x0000000000406260 string=0x0000000000406264 "?"
 *   insn=0x0000000000406274 string=0x0000000000406278 ""
 *   insn=0x0000000000406284 string=0x0000000000406288 "\t@"
 *   insn=0x0000000000406294 string=0x0000000000406298 ""
 *   insn=0x00000000004062A4 string=0x00000000004062A8 "@"
 *   insn=0x00000000004062B0 string=0x00000000004062B4 "+"
 *   insn=0x00000000004062B8 string=0x00000000004062BC "4"
 *   insn=0x00000000004062BC string=0x00000000004062C0 "("
 *   insn=0x00000000004062C8 string=0x00000000004062CC "5"
 *   insn=0x00000000004062D0 string=0x00000000004062D4 ""
 *   insn=0x00000000004062E0 string=0x00000000004062E4 "\t@"
 *   insn=0x00000000004062F0 string=0x00000000004062F4 ""
 *   insn=0x0000000000406300 string=0x0000000000406304 "@"
 *   insn=0x0000000000406318 string=0x000000000040631C "4"
 *   insn=0x0000000000406320 string=0x0000000000406324 ""
 *   insn=0x0000000000406330 string=0x0000000000406334 "\t@"
 *   insn=0x0000000000406340 string=0x0000000000406344 ""
 *   insn=0x0000000000406350 string=0x0000000000406354 "@"
 *   insn=0x0000000000406360 string=0x0000000000406364 "X"
 *   insn=0x0000000000406380 string=0x0000000000406384 "X"
 *   insn=0x0000000000406384 string=0x0000000000406388 ""
 *   insn=0x00000000004063A8 string=0x00000000004063AC ""
 *   insn=0x00000000004063B8 string=0x00000000004063BC ""
 *   insn=0x00000000004063B8 string=0x00000000001F7210 "0'"
 *   insn=0x00000000004063E8 string=0x00000000004063EC ""
 *   insn=0x00000000004063E8 string=0x00000000001F9850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GuidePurchaseView::AnimateIn(Caver::GuidePurchaseView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  float *v6; // x21
  float v7; // s0
  float v8; // s2
  float v9; // s1
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x20
  float *v16; // x21
  float v17; // s0
  float v18; // s1
  float v19; // s2
  Caver::GUIAnimation *v20; // x0
  _QWORD *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x20
  Caver::GUIView *v28; // x21
  __int64 v29; // x8
  Caver::GUIAnimation *v30; // x0
  _QWORD *v31; // x21
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  _QWORD *v36; // x20
  Caver::GUIView *v37; // x21
  __int64 v38; // x8
  Caver::GUIAnimation *v39; // x0
  _QWORD *v40; // x21
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x8
  __int64 v44; // x8
  _QWORD *v45; // x20
  Caver::GUIView *v46; // x21
  __int64 v47; // x8
  Caver::GUIAnimation *v48; // x0
  _QWORD *v49; // x21
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  __int64 v53; // x8
  Caver::GUIView *v54; // x19
  _QWORD *v55; // x20
  char *v56; // t2
  __int64 v57; // x8
  __int64 result; // x0
  _QWORD *v59; // x19
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x8
  __int64 v64; // x24
  unsigned __int64 v65; // x25
  float **v66; // x8
  float *v67; // x20
  float *v68; // x21
  float v69; // s0
  float v70; // s1
  float v71; // s2
  _QWORD *v72; // x21
  __int64 v73; // x8
  __int64 v74; // x8
  __int64 v75; // x8
  __int64 v76; // x8
  float v77; // [xsp+D0h] [xbp-70h] BYREF
  int v78; // [xsp+D4h] [xbp-6Ch]
  __int64 v79[2]; // [xsp+D8h] [xbp-68h] BYREF
  __int64 v80; // [xsp+E8h] [xbp-58h] BYREF
  _QWORD *v81; // [xsp+F0h] [xbp-50h]
  __int64 v82; // [xsp+F8h] [xbp-48h]

  v82 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIAnimation::AlphaAnimation(&v80, this, 0.0, 1.0, 0.3);
  *(_BYTE *)(v80 + 184) = 0;
  Caver::GUIView::RemoveAllAnimations(this);
  Caver::GUIView::AddAnimation();
  v2 = v81;
  if ( v81 )
  {
    v3 = v81[1] - 1LL;
    v81[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v6 = (float *)*((_QWORD *)this + 36);
  v5 = (_QWORD *)*((_QWORD *)this + 37);
  if ( v5 )
    ++v5[1];
  v7 = v6[29];
  v8 = *((float *)this + 33);
  v9 = v6[31];
  v78 = 0;
  v77 = v8 - (float)(v7 + v9);
  Caver::Rectangle::TranslatedRectangle(v79, (Caver::Rectangle *)(v6 + 29), (const Caver::Vector2 *)&v77);
  Caver::GUIAnimation::FrameAnimation();
  *(_BYTE *)(v80 + 184) = 0;
  Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v6);
  Caver::GUIView::AddAnimation();
  v10 = v81;
  if ( v81 )
  {
    v11 = v81[1] - 1LL;
    v81[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  if ( v5 )
  {
    v13 = v5[1] - 1LL;
    v5[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v14 = v5[2] - 1LL;
      v5[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v16 = (float *)*((_QWORD *)this + 31);
  v15 = (_QWORD *)*((_QWORD *)this + 32);
  if ( v15 )
    ++v15[1];
  v17 = v16[29];
  v18 = *((float *)this + 33);
  v19 = *((float *)this + 35);
  v78 = 0;
  v77 = (float)(v18 + v19) - v17;
  Caver::Rectangle::TranslatedRectangle(v79, (Caver::Rectangle *)(v16 + 29), (const Caver::Vector2 *)&v77);
  Caver::GUIAnimation::FrameAnimation();
  *(_BYTE *)(v80 + 184) = 0;
  Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v16);
  v20 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
  v21 = v81;
  if ( v81 )
  {
    v22 = v81[1] - 1LL;
    v81[1] = v22;
    if ( !v22 )
    {
      v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      v23 = v21[2] - 1LL;
      v21[2] = v23;
      if ( !v23 )
        v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
    }
  }
  if ( v15 )
  {
    v24 = v15[1] - 1LL;
    v15[1] = v24;
    if ( !v24 )
    {
      v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v25 = v15[2] - 1LL;
      v15[2] = v25;
      if ( !v25 )
        v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  v26 = *((_QWORD *)this + 33);
  if ( *((_QWORD *)this + 34) != v26 )
  {
    v64 = 0;
    v65 = 0;
    do
    {
      v66 = (float **)(v26 + v64);
      v68 = *v66;
      v67 = v66[1];
      if ( v67 )
        ++*((_QWORD *)v67 + 1);
      v69 = v68[29];
      v70 = *((float *)this + 33);
      v71 = *((float *)this + 35);
      v78 = 0;
      v77 = (float)(v70 + v71) - v69;
      Caver::Rectangle::TranslatedRectangle(v79, (Caver::Rectangle *)(v68 + 29), (const Caver::Vector2 *)&v77);
      Caver::GUIAnimation::FrameAnimation();
      *(_BYTE *)(v80 + 184) = 0;
      Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v68);
      v20 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
      v72 = v81;
      if ( v81 )
      {
        v73 = v81[1] - 1LL;
        v81[1] = v73;
        if ( !v73 )
        {
          v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v72 + 16LL))(v72);
          v74 = v72[2] - 1LL;
          v72[2] = v74;
          if ( !v74 )
            v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v72 + 24LL))(v72);
        }
      }
      if ( v67 )
      {
        v75 = *((_QWORD *)v67 + 1) - 1LL;
        *((_QWORD *)v67 + 1) = v75;
        if ( !v75 )
        {
          v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)v67 + 16LL))(v67);
          v76 = *((_QWORD *)v67 + 2) - 1LL;
          *((_QWORD *)v67 + 2) = v76;
          if ( !v76 )
            v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)v67 + 24LL))(v67);
        }
      }
      v26 = *((_QWORD *)this + 33);
      ++v65;
      v64 += 16;
    }
    while ( v65 < (*((_QWORD *)this + 34) - v26) >> 4 );
  }
  v28 = (Caver::GUIView *)*((_QWORD *)this + 38);
  v27 = (_QWORD *)*((_QWORD *)this + 39);
  if ( v27 )
    ++v27[1];
  Caver::GUIAnimation::ScaleAnimation(v20, 0.0, 1.0, 0.3);
  v29 = v80;
  *(_BYTE *)(v80 + 184) = 0;
  *(_DWORD *)(v29 + 88) = 1045220557;
  Caver::GUIView::RemoveAllAnimations(v28);
  v30 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
  v31 = v81;
  if ( v81 )
  {
    v32 = v81[1] - 1LL;
    v81[1] = v32;
    if ( !v32 )
    {
      v30 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
      v33 = v31[2] - 1LL;
      v31[2] = v33;
      if ( !v33 )
        v30 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
    }
  }
  if ( v27 )
  {
    v34 = v27[1] - 1LL;
    v27[1] = v34;
    if ( !v34 )
    {
      v30 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      v35 = v27[2] - 1LL;
      v27[2] = v35;
      if ( !v35 )
        v30 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    }
  }
  v37 = (Caver::GUIView *)*((_QWORD *)this + 40);
  v36 = (_QWORD *)*((_QWORD *)this + 41);
  if ( v36 )
    ++v36[1];
  Caver::GUIAnimation::ScaleAnimation(v30, 0.0, 1.0, 0.3);
  v38 = v80;
  *(_BYTE *)(v80 + 184) = 0;
  *(_DWORD *)(v38 + 88) = 1045220557;
  Caver::GUIView::RemoveAllAnimations(v37);
  v39 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
  v40 = v81;
  if ( v81 )
  {
    v41 = v81[1] - 1LL;
    v81[1] = v41;
    if ( !v41 )
    {
      v39 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
      v42 = v40[2] - 1LL;
      v40[2] = v42;
      if ( !v42 )
        v39 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v40 + 24LL))(v40);
    }
  }
  if ( v36 )
  {
    v43 = v36[1] - 1LL;
    v36[1] = v43;
    if ( !v43 )
    {
      v39 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
      v44 = v36[2] - 1LL;
      v36[2] = v44;
      if ( !v44 )
        v39 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
    }
  }
  v46 = (Caver::GUIView *)*((_QWORD *)this + 42);
  v45 = (_QWORD *)*((_QWORD *)this + 43);
  if ( v45 )
    ++v45[1];
  Caver::GUIAnimation::AlphaAnimation(&v80, v39, 0.0, 1.0, 0.3);
  v47 = v80;
  *(_BYTE *)(v80 + 184) = 0;
  *(_DWORD *)(v47 + 88) = 1056964608;
  Caver::GUIView::RemoveAllAnimations(v46);
  v48 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
  v49 = v81;
  if ( v81 )
  {
    v50 = v81[1] - 1LL;
    v81[1] = v50;
    if ( !v50 )
    {
      v48 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v49 + 16LL))(v49);
      v51 = v49[2] - 1LL;
      v49[2] = v51;
      if ( !v51 )
        v48 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v49 + 24LL))(v49);
    }
  }
  if ( v45 )
  {
    v52 = v45[1] - 1LL;
    v45[1] = v52;
    if ( !v52 )
    {
      v48 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
      v53 = v45[2] - 1LL;
      v45[2] = v53;
      if ( !v53 )
        v48 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v45 + 24LL))(v45);
    }
  }
  v56 = (char *)this + 352;
  v54 = (Caver::GUIView *)*((_QWORD *)this + 44);
  v55 = (_QWORD *)*((_QWORD *)v56 + 1);
  if ( v55 )
    ++v55[1];
  Caver::GUIAnimation::AlphaAnimation(&v80, v48, 0.0, 1.0, 0.3);
  v57 = v80;
  *(_BYTE *)(v80 + 184) = 0;
  *(_DWORD *)(v57 + 88) = 1056964608;
  Caver::GUIView::RemoveAllAnimations(v54);
  result = Caver::GUIView::AddAnimation();
  v59 = v81;
  if ( v81 )
  {
    v60 = v81[1] - 1LL;
    v81[1] = v60;
    if ( !v60 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
      v61 = v59[2] - 1LL;
      v59[2] = v61;
      if ( !v61 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v59 + 24LL))(v59);
    }
  }
  if ( v55 )
  {
    v62 = v55[1] - 1LL;
    v55[1] = v62;
    if ( !v62 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v55 + 16LL))(v55);
      v63 = v55[2] - 1LL;
      v55[2] = v63;
      if ( !v63 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v55 + 24LL))(v55);
    }
  }
  return result;
}

