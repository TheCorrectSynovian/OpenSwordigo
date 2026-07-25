/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E6BE0
 * Mangled: _ZN5Caver12PurchaseView9AnimateInEv
 * Demangled: Caver::PurchaseView::AnimateIn(void)
 *
 * Callers: 1
 *   0x0000000000200A80  Caver::PurchaseView::AnimateIn(void)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000001FEA30  Caver::GUIAnimation::ScaleAnimation(float,float,float)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 345
 *   insn=0x00000000003E6BFC string=0x00000000003E6C00 "W"
 *   insn=0x00000000003E6C18 string=0x00000000003E6C1C "iO"
 *   insn=0x00000000003E6C34 string=0x00000000003E6C38 "ZN"
 *   insn=0x00000000003E6C38 string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003E6C40 string=0x00000000003E6C44 "{G"
 *   insn=0x00000000003E6C44 string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003E6C48 string=0x00000000003E6C4C "4"
 *   insn=0x00000000003E6C4C string=0x00000000003E6C90 "u"
 *   insn=0x00000000003E6C50 string=0x00000000003E6C54 ""
 *   insn=0x00000000003E6C64 string=0x00000000003E6C68 "\t@"
 *   insn=0x00000000003E6C70 string=0x00000000003E6C74 ""
 *   insn=0x00000000003E6C84 string=0x00000000003E6C88 "@"
 *   insn=0x00000000003E6C98 string=0x00000000003E6C9C ""
 *   insn=0x00000000003E6CA8 string=0x00000000003E6CAC "b"
 *   insn=0x00000000003E6CB8 string=0x00000000003E6CBC "@8 "
 *   insn=0x00000000003E6CD0 string=0x00000000001F9C60 "0'"
 *   insn=0x00000000003E6CF0 string=0x00000000003E6CF4 "+N"
 *   insn=0x00000000003E6CFC string=0x00000000003E6D00 "LG"
 *   insn=0x00000000003E6D04 string=0x00000000003E6D08 "5"
 *   insn=0x00000000003E6D08 string=0x00000000003E6D4C "4"
 *   insn=0x00000000003E6D0C string=0x00000000003E6D10 ""
 *   insn=0x00000000003E6D1C string=0x00000000003E6D20 "\t@"
 *   insn=0x00000000003E6D2C string=0x00000000003E6D30 ""
 *   insn=0x00000000003E6D3C string=0x00000000003E6D40 "@"
 *   insn=0x00000000003E6D4C string=0x00000000003E6D90 "uRO"
 *   insn=0x00000000003E6D50 string=0x00000000003E6D54 ""
 *   insn=0x00000000003E6D64 string=0x00000000003E6D68 "\t@"
 *   insn=0x00000000003E6D70 string=0x00000000003E6D74 ""
 *   insn=0x00000000003E6D84 string=0x00000000003E6D88 "@"
 *   insn=0x00000000003E6D98 string=0x00000000003E6D9C ""
 *   insn=0x00000000003E6DA8 string=0x00000000003E6DAC "a"
 *   insn=0x00000000003E6DAC string=0x00000000003E6DB0 "b"
 *   insn=0x00000000003E6DB4 string=0x00000000003E6DB8 "!(""
 *   insn=0x00000000003E6DB8 string=0x00000000003E6DBC " 8 "
 *   insn=0x00000000003E6DE0 string=0x00000000003E6DE4 "Oq"
 *   insn=0x00000000003E6E04 string=0x00000000003E6E08 "5"
 *   insn=0x00000000003E6E08 string=0x00000000003E6E4C "4"
 *   insn=0x00000000003E6E0C string=0x00000000003E6E10 ""
 *   insn=0x00000000003E6E1C string=0x00000000003E6E20 "\t@"
 *   insn=0x00000000003E6E2C string=0x00000000003E6E30 ""
 *   insn=0x00000000003E6E3C string=0x00000000003E6E40 "@"
 *   insn=0x00000000003E6E4C string=0x00000000003E6E90 "h&P"
 *   insn=0x00000000003E6E50 string=0x00000000003E6E54 ""
 *   insn=0x00000000003E6E64 string=0x00000000003E6E68 "\t@"
 *   insn=0x00000000003E6E70 string=0x00000000003E6E74 ""
 *   insn=0x00000000003E6E84 string=0x00000000003E6E88 "@"
 *   insn=0x00000000003E6E90 string=0x00000000003E6E94 "?"
 *   insn=0x00000000003E6E94 string=0x00000000003E6E98 "a"
 *   insn=0x00000000003E6E98 string=0x00000000003E6E9C "u"
 *   insn=0x00000000003E6EA4 string=0x00000000003E6EA8 ""
 *   insn=0x00000000003E6ED0 string=0x00000000003E6ED4 "\tY"
 *   insn=0x00000000003E6EEC string=0x00000000003E6EF0 "5"
 *   insn=0x00000000003E6EF0 string=0x00000000003E6F34 "4"
 *   insn=0x00000000003E6EF4 string=0x00000000003E6EF8 ""
 *   insn=0x00000000003E6F04 string=0x00000000003E6F08 "\t@"
 *   insn=0x00000000003E6F14 string=0x00000000003E6F18 ""
 *   insn=0x00000000003E6F24 string=0x00000000003E6F28 "@"
 *   insn=0x00000000003E6F34 string=0x00000000003E6F78 "s"
 *   insn=0x00000000003E6F38 string=0x00000000003E6F3C ""
 *   insn=0x00000000003E6F4C string=0x00000000003E6F50 "\t@"
 *   insn=0x00000000003E6F58 string=0x00000000003E6F5C ""
 *   insn=0x00000000003E6F6C string=0x00000000003E6F70 "@"
 *   insn=0x00000000003E6F80 string=0x00000000003E6F84 ""
 *   insn=0x00000000003E6FAC string=0x00000000003E6FB0 "\tY"
 *   insn=0x00000000003E6FB4 string=0x00000000003E6FB8 "zM"
 *   insn=0x00000000003E6FC8 string=0x00000000003E6FCC "3"
 *   insn=0x00000000003E6FCC string=0x00000000003E6FD0 "h"
 *   insn=0x00000000003E6FCC string=0x00000000003E7010 "4"
 *   insn=0x00000000003E6FD0 string=0x00000000003E6FD4 ""
 *   insn=0x00000000003E6FD4 string=0x00000000003E6FD8 "h"
 *   insn=0x00000000003E6FDC string=0x00000000003E6FE0 "h"
 *   insn=0x00000000003E6FE0 string=0x00000000003E6FE4 "\t@"
 *   insn=0x00000000003E6FEC string=0x00000000003E6FF0 "h\n@"
 *   insn=0x00000000003E6FF0 string=0x00000000003E6FF4 ""
 *   insn=0x00000000003E6FF4 string=0x00000000003E6FF8 "h\n"
 *   insn=0x00000000003E6FFC string=0x00000000003E7000 "h"
 *   insn=0x00000000003E7000 string=0x00000000003E7004 "@"
 *   insn=0x00000000003E7014 string=0x00000000003E7018 ""
 *   insn=0x00000000003E7028 string=0x00000000003E702C "\t@"
 *   insn=0x00000000003E7034 string=0x00000000003E7038 ""
 *   insn=0x00000000003E7048 string=0x00000000003E704C "@"
 *   insn=0x00000000003E705C string=0x00000000003E7060 "a\n"
 *   insn=0x00000000003E7060 string=0x00000000003E71AC "I<"
 *   insn=0x00000000003E7088 string=0x00000000003E708C ""
 *   insn=0x00000000003E7098 string=0x00000000003E709C ""
 *   insn=0x00000000003E70A8 string=0x00000000003E70AC "a"
 *   insn=0x00000000003E70AC string=0x00000000003E70B0 "b"
 *   insn=0x00000000003E70B4 string=0x00000000003E70B8 "!(""
 *   insn=0x00000000003E70B8 string=0x00000000003E70BC " 8 "
 *   insn=0x00000000003E70F0 string=0x00000000003E70F4 "+M"
 *   insn=0x00000000003E70FC string=0x00000000003E7100 "LF"
 *   insn=0x00000000003E7104 string=0x00000000003E7108 "5"
 *   insn=0x00000000003E7108 string=0x00000000003E714C "4"
 *   insn=0x00000000003E710C string=0x00000000003E7110 ""
 *   insn=0x00000000003E711C string=0x00000000003E7120 "\t@"
 *   insn=0x00000000003E712C string=0x00000000003E7130 ""
 *   insn=0x00000000003E713C string=0x00000000003E7140 "@"
 *   insn=0x00000000003E714C string=0x00000000003E7190 "h&P"
 *   insn=0x00000000003E7150 string=0x00000000003E7154 ""
 *   insn=0x00000000003E7164 string=0x00000000003E7168 "\t@"
 *   insn=0x00000000003E7170 string=0x00000000003E7174 ""
 *   insn=0x00000000003E7184 string=0x00000000003E7188 "@"
 *   insn=0x00000000003E7190 string=0x00000000003E7194 "9"
 *   insn=0x00000000003E7198 string=0x00000000003E719C ")"
 *   insn=0x00000000003E719C string=0x00000000003E71A0 "?"
 *   insn=0x00000000003E71A0 string=0x00000000003E71A4 "C"
 *   insn=0x00000000003E71A4 string=0x00000000003E71A8 "="
 *   insn=0x00000000003E71AC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E71B8 string=0x00000000003E71BC "4"
 *   insn=0x00000000003E71C4 string=0x00000000003E71C8 "t"
 *   insn=0x00000000003E71D4 string=0x00000000003E71D8 "5"
 *   insn=0x00000000003E71D8 string=0x00000000003E721C "t"
 *   insn=0x00000000003E71DC string=0x00000000003E71E0 ""
 *   insn=0x00000000003E71EC string=0x00000000003E71F0 "\t@"
 *   insn=0x00000000003E71FC string=0x00000000003E7200 ""
 *   insn=0x00000000003E720C string=0x00000000003E7210 "@"
 *   insn=0x00000000003E7220 string=0x00000000003E7224 ""
 *   insn=0x00000000003E7230 string=0x00000000003E7234 "\t@"
 *   insn=0x00000000003E7240 string=0x00000000003E7244 ""
 *   insn=0x00000000003E7250 string=0x00000000003E7254 "@"
 *   insn=0x00000000003E7268 string=0x00000000003E726C "5"
 *   insn=0x00000000003E7270 string=0x00000000003E7274 ""
 *   insn=0x00000000003E7280 string=0x00000000003E7284 "\t@"
 *   insn=0x00000000003E7290 string=0x00000000003E7294 ""
 *   insn=0x00000000003E72A0 string=0x00000000003E72A4 "@"
 *   insn=0x00000000003E72B4 string=0x00000000003E72B8 ""
 *   insn=0x00000000003E72BC string=0x00000000003E72C0 "A"
 *   insn=0x00000000003E72C4 string=0x00000000003E72C8 "\t@"
 *   insn=0x00000000003E72D4 string=0x00000000003E72D8 ""
 *   insn=0x00000000003E72DC string=0x00000000003E72E0 "A"
 *   insn=0x00000000003E72E4 string=0x00000000003E72E8 "@"
 *   insn=0x00000000003E72FC string=0x00000000003E7300 "u"
 *   insn=0x00000000003E7304 string=0x00000000003E7308 ""
 *   insn=0x00000000003E7314 string=0x00000000003E7318 "\t@"
 *   insn=0x00000000003E7324 string=0x00000000003E7328 ""
 *   insn=0x00000000003E7334 string=0x00000000003E7338 "@"
 *   insn=0x00000000003E7350 string=0x00000000003E7354 ""
 *   insn=0x00000000003E7358 string=0x00000000003E735C "a"
 *   insn=0x00000000003E7360 string=0x00000000003E7364 "\t@"
 *   insn=0x00000000003E7370 string=0x00000000003E7374 ""
 *   insn=0x00000000003E7378 string=0x00000000003E737C "a"
 *   insn=0x00000000003E7380 string=0x00000000003E7384 "@"
 *   insn=0x00000000003E738C string=0x00000000003E7390 "f"
 *   insn=0x00000000003E7398 string=0x00000000003E739C "u"
 *   insn=0x00000000003E73A0 string=0x00000000003E73A4 ""
 *   insn=0x00000000003E73B0 string=0x00000000003E73B4 "\t@"
 *   insn=0x00000000003E73C0 string=0x00000000003E73C4 ""
 *   insn=0x00000000003E73D0 string=0x00000000003E73D4 "@"
 *   insn=0x00000000003E73EC string=0x00000000003E73F0 ""
 *   insn=0x00000000003E73FC string=0x00000000003E7400 "\t@"
 *   insn=0x00000000003E740C string=0x00000000003E7410 ""
 *   insn=0x00000000003E741C string=0x00000000003E7420 "@"
 *   insn=0x00000000003E7428 string=0x00000000003E742C "?"
 *   insn=0x00000000003E743C string=0x00000000003E7440 ""
 *   insn=0x00000000003E744C string=0x00000000003E7450 "\t@"
 *   insn=0x00000000003E745C string=0x00000000003E7460 ""
 *   insn=0x00000000003E746C string=0x00000000003E7470 "@"
 *   insn=0x00000000003E7478 string=0x00000000003E747C "+"
 *   insn=0x00000000003E7480 string=0x00000000003E7484 "4"
 *   insn=0x00000000003E7484 string=0x00000000003E7488 "("
 *   insn=0x00000000003E7490 string=0x00000000003E7494 "5"
 *   insn=0x00000000003E7498 string=0x00000000003E749C ""
 *   insn=0x00000000003E74A8 string=0x00000000003E74AC "\t@"
 *   insn=0x00000000003E74B8 string=0x00000000003E74BC ""
 *   insn=0x00000000003E74C8 string=0x00000000003E74CC "@"
 *   insn=0x00000000003E74E0 string=0x00000000003E74E4 "4"
 *   insn=0x00000000003E74E8 string=0x00000000003E74EC ""
 *   insn=0x00000000003E74F8 string=0x00000000003E74FC "\t@"
 *   insn=0x00000000003E7508 string=0x00000000003E750C ""
 *   insn=0x00000000003E7518 string=0x00000000003E751C "@"
 *   insn=0x00000000003E7550 string=0x00000000003E7554 "W"
 *   insn=0x00000000003E756C string=0x00000000003E7570 "iO"
 *   insn=0x00000000003E7578 string=0x00000000003E757C "qe"
 *   insn=0x00000000003E7594 string=0x00000000003E7598 "&E"
 *   insn=0x00000000003E759C string=0x00000000003E75A0 "4"
 *   insn=0x00000000003E75A0 string=0x00000000003E75E4 "u"
 *   insn=0x00000000003E75A4 string=0x00000000003E75A8 ""
 *   insn=0x00000000003E75B8 string=0x00000000003E75BC "\t@"
 *   insn=0x00000000003E75C4 string=0x00000000003E75C8 ""
 *   insn=0x00000000003E75D8 string=0x00000000003E75DC "@"
 *   insn=0x00000000003E75EC string=0x00000000003E75F0 ""
 *   insn=0x00000000003E75FC string=0x00000000003E7600 "b"
 *   insn=0x00000000003E760C string=0x00000000003E7610 "@8 "
 *   insn=0x00000000003E7634 string=0x00000000003E7638 ":o"
 *   insn=0x00000000003E7658 string=0x00000000003E765C "5"
 *   insn=0x00000000003E765C string=0x00000000003E76A0 "4"
 *   insn=0x00000000003E7660 string=0x00000000003E7664 ""
 *   insn=0x00000000003E7670 string=0x00000000003E7674 "\t@"
 *   insn=0x00000000003E7680 string=0x00000000003E7684 ""
 *   insn=0x00000000003E7690 string=0x00000000003E7694 "@"
 *   insn=0x00000000003E76A0 string=0x00000000003E76E4 "uRO"
 *   insn=0x00000000003E76A4 string=0x00000000003E76A8 ""
 *   insn=0x00000000003E76B8 string=0x00000000003E76BC "\t@"
 *   insn=0x00000000003E76C4 string=0x00000000003E76C8 ""
 *   insn=0x00000000003E76D8 string=0x00000000003E76DC "@"
 *   insn=0x00000000003E76EC string=0x00000000003E76F0 ""
 *   insn=0x00000000003E76FC string=0x00000000003E7700 "a"
 *   insn=0x00000000003E7700 string=0x00000000003E7704 "b"
 *   insn=0x00000000003E7708 string=0x00000000003E770C "!(""
 *   insn=0x00000000003E770C string=0x00000000003E7710 " 8 "
 *   insn=0x00000000003E7720 string=0x00000000003E7724 "OI"
 *   insn=0x00000000003E7758 string=0x00000000003E775C "5"
 *   insn=0x00000000003E775C string=0x00000000003E77A0 "4"
 *   insn=0x00000000003E7760 string=0x00000000003E7764 ""
 *   insn=0x00000000003E7770 string=0x00000000003E7774 "\t@"
 *   insn=0x00000000003E7780 string=0x00000000003E7784 ""
 *   insn=0x00000000003E7790 string=0x00000000003E7794 "@"
 *   insn=0x00000000003E77A0 string=0x00000000003E77E4 "h&P"
 *   insn=0x00000000003E77A4 string=0x00000000003E77A8 ""
 *   insn=0x00000000003E77B8 string=0x00000000003E77BC "\t@"
 *   insn=0x00000000003E77C4 string=0x00000000003E77C8 ""
 *   insn=0x00000000003E77D8 string=0x00000000003E77DC "@"
 *   insn=0x00000000003E77E4 string=0x00000000003E77E8 "?"
 *   insn=0x00000000003E77E8 string=0x00000000003E77EC "!"
 *   insn=0x00000000003E77EC string=0x00000000003E77F0 "u"
 *   insn=0x00000000003E77F8 string=0x00000000003E77FC ""
 *   insn=0x00000000003E7808 string=0x00000000003E780C "a"
 *   insn=0x00000000003E780C string=0x00000000003E7810 "b"
 *   insn=0x00000000003E7814 string=0x00000000003E7818 "!(""
 *   insn=0x00000000003E7818 string=0x00000000003E781C " 8 "
 *   insn=0x00000000003E7850 string=0x00000000003E7854 "SK"
 *   insn=0x00000000003E785C string=0x00000000003E7860 "tD"
 *   insn=0x00000000003E7864 string=0x00000000003E7868 "5"
 *   insn=0x00000000003E7868 string=0x00000000003E78AC "4"
 *   insn=0x00000000003E786C string=0x00000000003E7870 ""
 *   insn=0x00000000003E787C string=0x00000000003E7880 "\t@"
 *   insn=0x00000000003E788C string=0x00000000003E7890 ""
 *   insn=0x00000000003E789C string=0x00000000003E78A0 "@"
 *   insn=0x00000000003E78AC string=0x00000000003E78F0 "s"
 *   insn=0x00000000003E78B0 string=0x00000000003E78B4 ""
 *   insn=0x00000000003E78C4 string=0x00000000003E78C8 "\t@"
 *   insn=0x00000000003E78D0 string=0x00000000003E78D4 ""
 *   insn=0x00000000003E78E4 string=0x00000000003E78E8 "@"
 *   insn=0x00000000003E78F8 string=0x00000000003E78FC ""
 *   insn=0x00000000003E7910 string=0x00000000003E7914 "G\"
 *   insn=0x00000000003E792C string=0x00000000003E7930 "@D"
 *   insn=0x00000000003E7934 string=0x00000000003E7938 "3"
 *   insn=0x00000000003E7938 string=0x00000000003E793C "h"
 *   insn=0x00000000003E7938 string=0x00000000003E797C "4"
 *   insn=0x00000000003E793C string=0x00000000003E7940 ""
 *   insn=0x00000000003E7940 string=0x00000000003E7944 "h"
 *   insn=0x00000000003E7948 string=0x00000000003E794C "h"
 *   insn=0x00000000003E794C string=0x00000000003E7950 "\t@"
 *   insn=0x00000000003E7958 string=0x00000000003E795C "h\n@"
 *   insn=0x00000000003E795C string=0x00000000003E7960 ""
 *   insn=0x00000000003E7960 string=0x00000000003E7964 "h\n"
 *   insn=0x00000000003E7968 string=0x00000000003E796C "h"
 *   insn=0x00000000003E796C string=0x00000000003E7970 "@"
 *   insn=0x00000000003E7980 string=0x00000000003E7984 ""
 *   insn=0x00000000003E7994 string=0x00000000003E7998 "\t@"
 *   insn=0x00000000003E79A0 string=0x00000000003E79A4 ""
 *   insn=0x00000000003E79B4 string=0x00000000003E79B8 "@"
 *   insn=0x00000000003E79C8 string=0x00000000003E79CC "a\n"
 *   insn=0x00000000003E79F4 string=0x00000000003E79F8 ""
 *   insn=0x00000000003E7A04 string=0x00000000003E7A08 ""
 *   insn=0x00000000003E7A14 string=0x00000000003E7A18 "a"
 *   insn=0x00000000003E7A18 string=0x00000000003E7A1C "b"
 *   insn=0x00000000003E7A20 string=0x00000000003E7A24 "!(""
 *   insn=0x00000000003E7A24 string=0x00000000003E7A28 " 8 "
 *   insn=0x00000000003E7A4C string=0x00000000003E7A50 "4n"
 *   insn=0x00000000003E7A70 string=0x00000000003E7A74 "5"
 *   insn=0x00000000003E7A74 string=0x00000000003E7AB8 "4"
 *   insn=0x00000000003E7A78 string=0x00000000003E7A7C ""
 *   insn=0x00000000003E7A88 string=0x00000000003E7A8C "\t@"
 *   insn=0x00000000003E7A98 string=0x00000000003E7A9C ""
 *   insn=0x00000000003E7AA8 string=0x00000000003E7AAC "@"
 *   insn=0x00000000003E7AB8 string=0x00000000003E7AFC "h&P"
 *   insn=0x00000000003E7ABC string=0x00000000003E7AC0 ""
 *   insn=0x00000000003E7AD0 string=0x00000000003E7AD4 "\t@"
 *   insn=0x00000000003E7ADC string=0x00000000003E7AE0 ""
 *   insn=0x00000000003E7AF0 string=0x00000000003E7AF4 "@"
 *   insn=0x00000000003E7AFC string=0x00000000003E7B00 "9"
 *   insn=0x00000000003E7B04 string=0x00000000003E7B08 ")"
 *   insn=0x00000000003E7B08 string=0x00000000003E7B0C "?"
 *   insn=0x00000000003E7B0C string=0x00000000003E7B10 "C"
 *   insn=0x00000000003E7B10 string=0x00000000003E7B14 "7"
 *   insn=0x00000000003E7B28 string=0x00000000003E7B2C "T"
 *   insn=0x00000000003E7B50 string=0x00000000003E7B54 "5"
 *   insn=0x00000000003E7B58 string=0x00000000003E7B5C ""
 *   insn=0x00000000003E7B68 string=0x00000000003E7B6C "\t@"
 *   insn=0x00000000003E7B78 string=0x00000000003E7B7C ""
 *   insn=0x00000000003E7B88 string=0x00000000003E7B8C "@"
 *   insn=0x00000000003E7B9C string=0x00000000003E7BA0 ""
 *   insn=0x00000000003E7BA4 string=0x00000000003E7BA8 "!"
 *   insn=0x00000000003E7BAC string=0x00000000003E7BB0 "\t@"
 *   insn=0x00000000003E7BBC string=0x00000000003E7BC0 ""
 *   insn=0x00000000003E7BC4 string=0x00000000003E7BC8 "!"
 *   insn=0x00000000003E7BCC string=0x00000000003E7BD0 "@"
 *   insn=0x00000000003E7BE4 string=0x00000000003E7BE8 "u"
 *   insn=0x00000000003E7BEC string=0x00000000003E7BF0 ""
 *   insn=0x00000000003E7BFC string=0x00000000003E7C00 "\t@"
 *   insn=0x00000000003E7C0C string=0x00000000003E7C10 ""
 *   insn=0x00000000003E7C1C string=0x00000000003E7C20 "@"
 *   insn=0x00000000003E7C38 string=0x00000000003E7C3C ""
 *   insn=0x00000000003E7C40 string=0x00000000003E7C44 "A"
 *   insn=0x00000000003E7C48 string=0x00000000003E7C4C "\t@"
 *   insn=0x00000000003E7C58 string=0x00000000003E7C5C ""
 *   insn=0x00000000003E7C60 string=0x00000000003E7C64 "A"
 *   insn=0x00000000003E7C68 string=0x00000000003E7C6C "@"
 *   insn=0x00000000003E7C80 string=0x00000000003E7C84 "u"
 *   insn=0x00000000003E7C88 string=0x00000000003E7C8C ""
 *   insn=0x00000000003E7C98 string=0x00000000003E7C9C "\t@"
 *   insn=0x00000000003E7CA8 string=0x00000000003E7CAC ""
 *   insn=0x00000000003E7CB8 string=0x00000000003E7CBC "@"
 *   insn=0x00000000003E7CD4 string=0x00000000003E7CD8 ""
 *   insn=0x00000000003E7CDC string=0x00000000003E7CE0 "a"
 *   insn=0x00000000003E7CE4 string=0x00000000003E7CE8 "\t@"
 *   insn=0x00000000003E7CF4 string=0x00000000003E7CF8 ""
 *   insn=0x00000000003E7CFC string=0x00000000003E7D00 "a"
 *   insn=0x00000000003E7D04 string=0x00000000003E7D08 "@"
 *   insn=0x00000000003E7D10 string=0x00000000003E7D14 "f"
 *   insn=0x00000000003E7D1C string=0x00000000003E7D20 "u"
 *   insn=0x00000000003E7D24 string=0x00000000003E7D28 ""
 *   insn=0x00000000003E7D34 string=0x00000000003E7D38 "\t@"
 *   insn=0x00000000003E7D44 string=0x00000000003E7D48 ""
 *   insn=0x00000000003E7D54 string=0x00000000003E7D58 "@"
 *   insn=0x00000000003E7D70 string=0x00000000003E7D74 ""
 *   insn=0x00000000003E7D80 string=0x00000000003E7D84 "\t@"
 *   insn=0x00000000003E7D90 string=0x00000000003E7D94 ""
 *   insn=0x00000000003E7DA0 string=0x00000000003E7DA4 "@"
 *   insn=0x00000000003E7DAC string=0x00000000003E7DB0 "?"
 *   insn=0x00000000003E7DC0 string=0x00000000003E7DC4 ""
 *   insn=0x00000000003E7DD0 string=0x00000000003E7DD4 "\t@"
 *   insn=0x00000000003E7DE0 string=0x00000000003E7DE4 ""
 *   insn=0x00000000003E7DF0 string=0x00000000003E7DF4 "@"
 *   insn=0x00000000003E7DFC string=0x00000000003E7E00 "+"
 *   insn=0x00000000003E7E04 string=0x00000000003E7E08 "4"
 *   insn=0x00000000003E7E08 string=0x00000000003E7E0C "("
 *   insn=0x00000000003E7E14 string=0x00000000003E7E18 "5"
 *   insn=0x00000000003E7E1C string=0x00000000003E7E20 ""
 *   insn=0x00000000003E7E2C string=0x00000000003E7E30 "\t@"
 *   insn=0x00000000003E7E3C string=0x00000000003E7E40 ""
 *   insn=0x00000000003E7E4C string=0x00000000003E7E50 "@"
 *   insn=0x00000000003E7E64 string=0x00000000003E7E68 "4"
 *   insn=0x00000000003E7E6C string=0x00000000003E7E70 ""
 *   insn=0x00000000003E7E7C string=0x00000000003E7E80 "\t@"
 *   insn=0x00000000003E7E8C string=0x00000000003E7E90 ""
 *   insn=0x00000000003E7E9C string=0x00000000003E7EA0 "@"
 *   insn=0x00000000003E7EB0 string=0x00000000003E7EB4 "&"
 *   insn=0x00000000003E7EB4 string=0x00000000003E7EB8 "("
 *   insn=0x00000000003E7EBC string=0x00000000003E7EC0 "A"
 *   insn=0x00000000003E7EC0 string=0x00000000003E7EC4 "("
 *   insn=0x00000000003E7EC0 string=0x00000000003E7EE8 "NM"
 *   insn=0x00000000003E7EC8 string=0x00000000003E7ECC "`"
 *   insn=0x00000000003E7EE8 string=0x00000000001FB420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PurchaseView::AnimateIn(Caver::PurchaseView *this)
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
  Caver::GUIView *v36; // x19
  _QWORD *v37; // x20
  char *v38; // t2
  __int64 v39; // x8
  __int64 result; // x0
  _QWORD *v41; // x19
  __int64 v42; // x8
  __int64 v43; // x8
  __int64 v44; // x8
  __int64 v45; // x8
  __int64 v46; // x24
  unsigned __int64 v47; // x25
  float **v48; // x8
  float *v49; // x20
  float *v50; // x21
  float v51; // s0
  float v52; // s1
  float v53; // s2
  _QWORD *v54; // x21
  __int64 v55; // x8
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 v58; // x8
  float v59; // [xsp+80h] [xbp-70h] BYREF
  int v60; // [xsp+84h] [xbp-6Ch]
  __int64 v61[2]; // [xsp+88h] [xbp-68h] BYREF
  __int64 v62; // [xsp+98h] [xbp-58h] BYREF
  _QWORD *v63; // [xsp+A0h] [xbp-50h]
  __int64 v64; // [xsp+A8h] [xbp-48h]

  v64 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIAnimation::AlphaAnimation(&v62, this, 0.0, 1.0, 0.3);
  *(_BYTE *)(v62 + 184) = 0;
  Caver::GUIView::RemoveAllAnimations(this);
  Caver::GUIView::AddAnimation();
  v2 = v63;
  if ( v63 )
  {
    v3 = v63[1] - 1LL;
    v63[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v6 = (float *)*((_QWORD *)this + 35);
  v5 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v5 )
    ++v5[1];
  v7 = v6[29];
  v8 = *((float *)this + 33);
  v9 = v6[31];
  v60 = 0;
  v59 = v8 - (float)(v7 + v9);
  Caver::Rectangle::TranslatedRectangle(v61, (Caver::Rectangle *)(v6 + 29), (const Caver::Vector2 *)&v59);
  Caver::GUIAnimation::FrameAnimation();
  *(_BYTE *)(v62 + 184) = 0;
  Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v6);
  Caver::GUIView::AddAnimation();
  v10 = v63;
  if ( v63 )
  {
    v11 = v63[1] - 1LL;
    v63[1] = v11;
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
  v16 = (float *)*((_QWORD *)this + 30);
  v15 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v15 )
    ++v15[1];
  v17 = v16[29];
  v18 = *((float *)this + 33);
  v19 = *((float *)this + 35);
  v60 = 0;
  v59 = (float)(v18 + v19) - v17;
  Caver::Rectangle::TranslatedRectangle(v61, (Caver::Rectangle *)(v16 + 29), (const Caver::Vector2 *)&v59);
  Caver::GUIAnimation::FrameAnimation();
  *(_BYTE *)(v62 + 184) = 0;
  Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v16);
  v20 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
  v21 = v63;
  if ( v63 )
  {
    v22 = v63[1] - 1LL;
    v63[1] = v22;
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
  v26 = *((_QWORD *)this + 32);
  if ( *((_QWORD *)this + 33) != v26 )
  {
    v46 = 0;
    v47 = 0;
    do
    {
      v48 = (float **)(v26 + v46);
      v50 = *v48;
      v49 = v48[1];
      if ( v49 )
        ++*((_QWORD *)v49 + 1);
      v51 = v50[29];
      v52 = *((float *)this + 33);
      v53 = *((float *)this + 35);
      v60 = 0;
      v59 = (float)(v52 + v53) - v51;
      Caver::Rectangle::TranslatedRectangle(v61, (Caver::Rectangle *)(v50 + 29), (const Caver::Vector2 *)&v59);
      Caver::GUIAnimation::FrameAnimation();
      *(_BYTE *)(v62 + 184) = 0;
      Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v50);
      v20 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
      v54 = v63;
      if ( v63 )
      {
        v55 = v63[1] - 1LL;
        v63[1] = v55;
        if ( !v55 )
        {
          v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v54 + 16LL))(v54);
          v56 = v54[2] - 1LL;
          v54[2] = v56;
          if ( !v56 )
            v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(_QWORD *))(*v54 + 24LL))(v54);
        }
      }
      if ( v49 )
      {
        v57 = *((_QWORD *)v49 + 1) - 1LL;
        *((_QWORD *)v49 + 1) = v57;
        if ( !v57 )
        {
          v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)v49 + 16LL))(v49);
          v58 = *((_QWORD *)v49 + 2) - 1LL;
          *((_QWORD *)v49 + 2) = v58;
          if ( !v58 )
            v20 = (Caver::GUIAnimation *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)v49 + 24LL))(v49);
        }
      }
      v26 = *((_QWORD *)this + 32);
      ++v47;
      v46 += 16;
    }
    while ( v47 < (*((_QWORD *)this + 33) - v26) >> 4 );
  }
  v28 = (Caver::GUIView *)*((_QWORD *)this + 37);
  v27 = (_QWORD *)*((_QWORD *)this + 38);
  if ( v27 )
    ++v27[1];
  Caver::GUIAnimation::ScaleAnimation(v20, 0.0, 1.0, 0.3);
  v29 = v62;
  *(_BYTE *)(v62 + 184) = 0;
  *(_DWORD *)(v29 + 88) = 1045220557;
  Caver::GUIView::RemoveAllAnimations(v28);
  v30 = (Caver::GUIAnimation *)Caver::GUIView::AddAnimation();
  v31 = v63;
  if ( v63 )
  {
    v32 = v63[1] - 1LL;
    v63[1] = v32;
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
  v38 = (char *)this + 312;
  v36 = (Caver::GUIView *)*((_QWORD *)this + 39);
  v37 = (_QWORD *)*((_QWORD *)v38 + 1);
  if ( v37 )
    ++v37[1];
  Caver::GUIAnimation::ScaleAnimation(v30, 0.0, 1.0, 0.3);
  v39 = v62;
  *(_BYTE *)(v62 + 184) = 0;
  *(_DWORD *)(v39 + 88) = 1045220557;
  Caver::GUIView::RemoveAllAnimations(v36);
  result = Caver::GUIView::AddAnimation();
  v41 = v63;
  if ( v63 )
  {
    v42 = v63[1] - 1LL;
    v63[1] = v42;
    if ( !v42 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
      v43 = v41[2] - 1LL;
      v41[2] = v43;
      if ( !v43 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
    }
  }
  if ( v37 )
  {
    v44 = v37[1] - 1LL;
    v37[1] = v44;
    if ( !v44 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v37 + 16LL))(v37);
      v45 = v37[2] - 1LL;
      v37[2] = v45;
      if ( !v45 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v37 + 24LL))(v37);
    }
  }
  return result;
}

