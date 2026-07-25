/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E2B10
 * Mangled: _ZN5Caver11TargetFrameC2Ev
 * Demangled: Caver::TargetFrame::TargetFrame(void)
 *
 * Callers: 1
 *   0x0000000000203C60  Caver::TargetFrame::TargetFrame(void)
 *
 * Callees: 21
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FEA80  Caver::GUISlider::GUISlider(void)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *   0x0000000000200E20  Caver::GUISlider::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000201880  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>(Caver::GUISlider *)
 *   0x0000000000202CD0  Caver::GUISlider::SetBarTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 258
 *   insn=0x00000000003E2B28 string=0x00000000003E2B2C "X"
 *   insn=0x00000000003E2B2C string=0x00000000003E2B30 ""
 *   insn=0x00000000003E2B3C string=0x00000000003E2B40 "("
 *   insn=0x00000000003E2B40 string=0x00000000003E2B44 "QE"
 *   insn=0x00000000003E2B4C string=0x00000000003E2B50 "\t"
 *   insn=0x00000000003E2B50 string=0x00000000003E2B54 "A"
 *   insn=0x00000000003E2B54 string=0x00000000003E2B58 "\n"
 *   insn=0x00000000003E2B60 string=0x00000000003E2B64 "i"
 *   insn=0x00000000003E2B64 string=0x00000000003E2B68 "i"
 *   insn=0x00000000003E2B68 string=0x00000000003E2B6C "h"
 *   insn=0x00000000003E2B78 string=0x00000000003E2B7C "j\n"
 *   insn=0x00000000003E2B80 string=0x00000000003E2B84 "k2"
 *   insn=0x00000000003E2B84 string=0x00000000003E2B88 "h~"
 *   insn=0x00000000003E2B88 string=0x00000000003E2B8C "hb"
 *   insn=0x00000000003E2B8C string=0x00000000003E2B90 "`"
 *   insn=0x00000000003E2B90 string=0x00000000003E2B94 " "
 *   insn=0x00000000003E2B94 string=0x00000000003E2B98 "i""
 *   insn=0x00000000003E2B9C string=0x00000000003E2BA0 "k"
 *   insn=0x00000000003E2BA0 string=0x00000000003E2BA4 "j2"
 *   insn=0x00000000003E2BA8 string=0x00000000003E2BAC ""
 *   insn=0x00000000003E2BAC string=0x00000000003E2BB0 " "
 *   insn=0x00000000003E2BB0 string=0x00000000003E2BB4 "i"
 *   insn=0x00000000003E2BB4 string=0x00000000003E2BB8 "`"
 *   insn=0x00000000003E2BC4 string=0x00000000003E2BC8 "`n"
 *   insn=0x00000000003E2BCC string=0x00000000003E2BD0 "`"
 *   insn=0x00000000003E2BD4 string=0x00000000003E2BD8 "`"
 *   insn=0x00000000003E2BD8 string=0x00000000003E2BDC "`v"
 *   insn=0x00000000003E2BDC string=0x00000000003E2BE0 "h\n"
 *   insn=0x00000000003E2BE8 string=0x00000000003E2BEC "`"
 *   insn=0x00000000003E2BEC string=0x00000000003E2BF0 "j"
 *   insn=0x00000000003E2BF0 string=0x00000000003E2BF4 " "
 *   insn=0x00000000003E2BF4 string=0x00000000003E2BF8 "j"
 *   insn=0x00000000003E2BF8 string=0x00000000003E2BFC "j"\n"
 *   insn=0x00000000003E2BFC string=0x00000000003E2C00 "tB"
 *   insn=0x00000000003E2C00 string=0x00000000003E2C04 "i"
 *   insn=0x00000000003E2C08 string=0x00000000003E2C0C "@"
 *   insn=0x00000000003E2C0C string=0x00000000003E2C10 "j"
 *   insn=0x00000000003E2C14 string=0x00000000003E2C18 "@"
 *   insn=0x00000000003E2C18 string=0x00000000003E2C1C " "
 *   insn=0x00000000003E2C24 string=0x00000000003E2C28 "`"
 *   insn=0x00000000003E2C2C string=0x00000000003E2C30 "`"
 *   insn=0x00000000003E2C34 string=0x00000000003E2C38 "`"
 *   insn=0x00000000003E2C38 string=0x00000000003E2C3C "`"
 *   insn=0x00000000003E2C3C string=0x00000000003E2C40 "h"
 *   insn=0x00000000003E2C40 string=0x00000000003E2C44 "`"
 *   insn=0x00000000003E2C50 string=0x00000000003E2C54 "Wk"
 *   insn=0x00000000003E2C54 string=0x00000000001FD9B0 "0'"
 *   insn=0x00000000003E2C5C string=0x00000000003E2C60 "\n"
 *   insn=0x00000000003E2C5C string=0x00000000003E2C6C "u"
 *   insn=0x00000000003E2C60 string=0x00000000003E2C64 "J"
 *   insn=0x00000000003E2C64 string=0x00000000003E2C68 "\n"
 *   insn=0x00000000003E2C6C string=0x00000000003E2C70 "i\n"
 *   insn=0x00000000003E2C70 string=0x00000000003E2C74 "h"
 *   insn=0x00000000003E2C74 string=0x00000000003E2C78 "5"
 *   insn=0x00000000003E2C78 string=0x00000000003E2CBC ""
 *   insn=0x00000000003E2C7C string=0x00000000003E2C80 ""
 *   insn=0x00000000003E2C8C string=0x00000000003E2C90 "\t@"
 *   insn=0x00000000003E2C9C string=0x00000000003E2CA0 ""
 *   insn=0x00000000003E2CAC string=0x00000000003E2CB0 "@"
 *   insn=0x00000000003E2CBC string=0x00000000003E2CC0 "h"
 *   insn=0x00000000003E2CC4 string=0x00000000003E2CC8 "i"
 *   insn=0x00000000003E2CCC string=0x00000000003E2CD0 ""
 *   insn=0x00000000003E2CD0 string=0x00000000003E2CD4 "h"
 *   insn=0x00000000003E2CD4 string=0x00000000003E2CD8 "*"
 *   insn=0x00000000003E2CD8 string=0x00000000003E2CDC "h""
 *   insn=0x00000000003E2CE8 string=0x00000000003E2CEC "!t"
 *   insn=0x00000000003E2CF4 string=0x00000000003E2CF8 "\n"
 *   insn=0x00000000003E2CF4 string=0x00000000003E2D04 "u"
 *   insn=0x00000000003E2CF8 string=0x00000000003E2CFC "J"
 *   insn=0x00000000003E2CFC string=0x00000000003E2D00 "\n"
 *   insn=0x00000000003E2D04 string=0x00000000003E2D08 "i""
 *   insn=0x00000000003E2D08 string=0x00000000003E2D0C "5"
 *   insn=0x00000000003E2D10 string=0x00000000003E2D14 ""
 *   insn=0x00000000003E2D20 string=0x00000000003E2D24 "\t@"
 *   insn=0x00000000003E2D30 string=0x00000000003E2D34 ""
 *   insn=0x00000000003E2D40 string=0x00000000003E2D44 "@"
 *   insn=0x00000000003E2D50 string=0x00000000003E2D54 "i&"
 *   insn=0x00000000003E2D58 string=0x00000000003E2D5C "h""
 *   insn=0x00000000003E2D5C string=0x00000000003E2D60 "*"
 *   insn=0x00000000003E2D60 string=0x00000000003E2D64 "h"
 *   insn=0x00000000003E2D64 string=0x00000000003E2D68 "z]"
 *   insn=0x00000000003E2D68 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003E2D70 string=0x0000000000592384 "ui_xp_frame"
 *   insn=0x00000000003E2D90 string=0x00000000003E2D94 "r"
 *   insn=0x00000000003E2DA4 string=0x00000000003E2DA8 "j]"
 *   insn=0x00000000003E2DA4 string=0x00000000003E3078 "\t"
 *   insn=0x00000000003E2DB0 string=0x0000000000592C10 "ui_health_bar"
 *   insn=0x00000000003E2DBC string=0x00000000003E2DC0 "~"
 *   insn=0x00000000003E2DE4 string=0x00000000003E309C "\t"
 *   insn=0x00000000003E2DEC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003E2DF4 string=0x00000000003E2DF8 ""o"
 *   insn=0x00000000003E2E04 string=0x00000000003E2E08 "hVQ"
 *   insn=0x00000000003E2E14 string=0x00000000003E2E18 "i""
 *   insn=0x00000000003E2E1C string=0x00000000003E2E20 "5"
 *   insn=0x00000000003E2E20 string=0x00000000003E2E64 "uB"
 *   insn=0x00000000003E2E24 string=0x00000000003E2E28 ""
 *   insn=0x00000000003E2E34 string=0x00000000003E2E38 "\t@"
 *   insn=0x00000000003E2E44 string=0x00000000003E2E48 ""
 *   insn=0x00000000003E2E54 string=0x00000000003E2E58 "@"
 *   insn=0x00000000003E2E90 string=0x00000000003E2E94 "\t9"
 *   insn=0x00000000003E2E94 string=0x00000000003E2E98 "   "
 *   insn=0x00000000003E2EA8 string=0x00000000003E2EAC "\t"
 *   insn=0x00000000003E2EAC string=0x00000000003E2EB0 "!H "
 *   insn=0x00000000003E2EB0 string=0x00000000003E2EB4 """
 *   insn=0x00000000003E2EBC string=0x00000000003E2EC0 "@  "
 *   insn=0x00000000003E2EC4 string=0x00000000003E2EC8 "\t"
 *   insn=0x00000000003E2EC4 string=0x00000000003E2EDC "\t"
 *   insn=0x00000000003E2ED0 string=0x00000000003E2ED4 "@  "
 *   insn=0x00000000003E2EE0 string=0x00000000003E2EE4 "I"
 *   insn=0x00000000003E2EE4 string=0x00000000003E2EE8 "!@&"
 *   insn=0x00000000003E2EE4 string=0x00000000003E2EEC " X "
 *   insn=0x00000000003E2EEC string=0x00000000003E2EF0 "@  "
 *   insn=0x00000000003E2EF0 string=0x00000000003E2EF4 "\t"
 *   insn=0x00000000003E2F08 string=0x00000000003E2F0C "\n"
 *   insn=0x00000000003E2F10 string=0x00000000003E2F14 "("
 *   insn=0x00000000003E2F14 string=0x00000000003E2F18 "h"
 *   insn=0x00000000003E2F18 string=0x00000000003E2F1C "i"
 *   insn=0x00000000003E2F1C string=0x00000000003E2F20 "1@"
 *   insn=0x00000000003E2F24 string=0x00000000003E2F28 "i"
 *   insn=0x00000000003E2F30 string=0x00000000003E2F34 "*"
 *   insn=0x00000000003E2F34 string=0x00000000003E2F38 "J"
 *   insn=0x00000000003E2F38 string=0x00000000003E2F3C "*"
 *   insn=0x00000000003E2F4C string=0x00000000003E2F50 "5"
 *   insn=0x00000000003E2F54 string=0x00000000003E2F58 ""
 *   insn=0x00000000003E2F64 string=0x00000000003E2F68 "\t@"
 *   insn=0x00000000003E2F74 string=0x00000000003E2F78 ""
 *   insn=0x00000000003E2F84 string=0x00000000003E2F88 "@"
 *   insn=0x00000000003E2F94 string=0x00000000003E2F98 "\tj"
 *   insn=0x00000000003E2F98 string=0x00000000003E2F9C "Y@"
 *   insn=0x00000000003E2FAC string=0x00000000003E2FB0 "p`"
 *   insn=0x00000000003E2FB0 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003E2FB4 string=0x00000000003E2FB8 "h"
 *   insn=0x00000000003E2FC0 string=0x00000000003E2FC4 "@"
 *   insn=0x00000000003E2FC4 string=0x00000000003E2FC8 ""
 *   insn=0x00000000003E2FC8 string=0x00000000003E2FCC ""
 *   insn=0x00000000003E2FD0 string=0x00000000003E2FD4 ""
 *   insn=0x00000000003E2FD4 string=0x00000000003E2FD8 ""
 *   insn=0x00000000003E2FE4 string=0x00000000003E2FE8 "@"
 *   insn=0x00000000003E2FE8 string=0x00000000003E2FEC ""
 *   insn=0x00000000003E2FEC string=0x00000000003E2FF0 ""
 *   insn=0x00000000003E2FF4 string=0x00000000003E2FF8 ""
 *   insn=0x00000000003E2FF8 string=0x00000000003E2FFC ""
 *   insn=0x00000000003E3004 string=0x00000000003E3008 "5"
 *   insn=0x00000000003E3008 string=0x00000000003E304C ""
 *   insn=0x00000000003E300C string=0x00000000003E3010 ""
 *   insn=0x00000000003E301C string=0x00000000003E3020 "\t@"
 *   insn=0x00000000003E302C string=0x00000000003E3030 ""
 *   insn=0x00000000003E303C string=0x00000000003E3040 "@"
 *   insn=0x00000000003E3054 string=0x00000000003E3058 "A"
 *   insn=0x00000000003E3058 string=0x00000000003E3100 "tL"
 *   insn=0x00000000003E3078 string=0x00000000003E307C ")=G"
 *   insn=0x00000000003E307C string=0x00000000003E3080 "!"
 *   insn=0x00000000003E3084 string=0x00000000003E3088 "\t"
 *   insn=0x00000000003E3084 string=0x00000000003E30C0 "\t"
 *   insn=0x00000000003E3088 string=0x00000000003E308C "*"
 *   insn=0x00000000003E308C string=0x00000000003E3090 "\n"
 *   insn=0x00000000003E3094 string=0x00000000003E3098 ""
 *   insn=0x00000000003E3098 string=0x00000000003E30CC "?"
 *   insn=0x00000000003E309C string=0x00000000003E30A0 ")=G"
 *   insn=0x00000000003E30A0 string=0x00000000003E30A4 "!"
 *   insn=0x00000000003E30A8 string=0x00000000003E30AC "\t"
 *   insn=0x00000000003E30A8 string=0x00000000003E30E0 "\t"
 *   insn=0x00000000003E30AC string=0x00000000003E30B0 "*"
 *   insn=0x00000000003E30B0 string=0x00000000003E30B4 "\n"
 *   insn=0x00000000003E30BC string=0x00000000003E30EC "?"
 *   insn=0x00000000003E30C0 string=0x00000000003E30C4 "*"
 *   insn=0x00000000003E30C4 string=0x00000000003E30C8 "\n"
 *   insn=0x00000000003E30D8 string=0x00000000003E30DC "3"
 *   insn=0x00000000003E30E0 string=0x00000000003E30E4 "*"
 *   insn=0x00000000003E30E4 string=0x00000000003E30E8 "\n"
 *   insn=0x00000000003E30F8 string=0x00000000003E30FC ";"
 *   insn=0x00000000003E3100 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E3114 string=0x00000000003E3118 "V"
 *   insn=0x00000000003E311C string=0x00000000003E3120 ""
 *   insn=0x00000000003E312C string=0x00000000003E3130 "\t@"
 *   insn=0x00000000003E313C string=0x00000000003E3140 ""
 *   insn=0x00000000003E314C string=0x00000000003E3150 "@"
 *   insn=0x00000000003E3158 string=0x00000000003E315C "I"
 *   insn=0x00000000003E3164 string=0x00000000003E3168 "RP"
 *   insn=0x00000000003E3168 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E3170 string=0x00000000003E3174 "L"
 *   insn=0x00000000003E3170 string=0x00000000003E3288 "@"
 *   insn=0x00000000003E317C string=0x00000000003E3180 "(a"
 *   insn=0x00000000003E3188 string=0x00000000003E318C "\n"
 *   insn=0x00000000003E318C string=0x00000000003E3190 "J=G"
 *   insn=0x00000000003E3190 string=0x00000000003E3194 ")!"
 *   insn=0x00000000003E3198 string=0x00000000003E319C "*"
 *   insn=0x00000000003E3198 string=0x00000000003E31B0 "*"
 *   insn=0x00000000003E319C string=0x00000000003E31A0 "K"
 *   insn=0x00000000003E31A0 string=0x00000000003E31A4 "+"
 *   insn=0x00000000003E31AC string=0x00000000003E31BC "_"
 *   insn=0x00000000003E31B0 string=0x00000000003E31B4 "K"
 *   insn=0x00000000003E31B4 string=0x00000000003E31B8 "+"
 *   insn=0x00000000003E31BC string=0x00000000003E31C0 ","
 *   insn=0x00000000003E31C8 string=0x00000000003E31CC "v"
 *   insn=0x00000000003E31D4 string=0x00000000003E31D8 "<"
 *   insn=0x00000000003E31D4 string=0x00000000003E32AC "@"
 *   insn=0x00000000003E31E4 string=0x00000000003E31E8 "(a"
 *   insn=0x00000000003E31F0 string=0x00000000003E31F4 "\n"
 *   insn=0x00000000003E31F4 string=0x00000000003E31F8 "J=G"
 *   insn=0x00000000003E31F8 string=0x00000000003E31FC ")!"
 *   insn=0x00000000003E3200 string=0x00000000003E3204 "*"
 *   insn=0x00000000003E3200 string=0x00000000003E3218 "*"
 *   insn=0x00000000003E3204 string=0x00000000003E3208 "K"
 *   insn=0x00000000003E3208 string=0x00000000003E320C "+"
 *   insn=0x00000000003E3214 string=0x00000000003E3224 "_"
 *   insn=0x00000000003E3218 string=0x00000000003E321C "K"
 *   insn=0x00000000003E321C string=0x00000000003E3220 "+"
 *   insn=0x00000000003E3230 string=0x00000000003E3234 "\"
 *   insn=0x00000000003E323C string=0x00000000003E3240 "4"
 *   insn=0x00000000003E3240 string=0x00000000003E3310 "v"
 *   insn=0x00000000003E3260 string=0x00000000003E3264 "v"
 *   insn=0x00000000003E3264 string=0x00000000003E3268 "*"
 *   insn=0x00000000003E326C string=0x00000000003E3270 "v"
 *   insn=0x00000000003E3270 string=0x00000000003E3274 "6"
 *   insn=0x00000000003E3274 string=0x00000000003E3278 "8"
 *   insn=0x00000000003E3288 string=0x00000000003E328C ""
 *   insn=0x00000000003E328C string=0x00000000003E3290 ""
 *   insn=0x00000000003E3294 string=0x00000000003E3298 ""
 *   insn=0x00000000003E3298 string=0x00000000003E329C ""
 *   insn=0x00000000003E32AC string=0x00000000003E32B0 ""
 *   insn=0x00000000003E32B0 string=0x00000000003E32B4 ""
 *   insn=0x00000000003E32B8 string=0x00000000003E32BC ""
 *   insn=0x00000000003E32BC string=0x00000000003E32C0 ""
 *   insn=0x00000000003E32C8 string=0x00000000003E32CC "6"
 *   insn=0x00000000003E32D0 string=0x00000000003E32D4 ""
 *   insn=0x00000000003E32E0 string=0x00000000003E32E4 "\t@"
 *   insn=0x00000000003E32F0 string=0x00000000003E32F4 ""
 *   insn=0x00000000003E3300 string=0x00000000003E3304 "@"
 *   insn=0x00000000003E3310 string=0x00000000003E3314 "6"
 *   insn=0x00000000003E3318 string=0x00000000003E331C ""
 *   insn=0x00000000003E3328 string=0x00000000003E332C "\t@"
 *   insn=0x00000000003E3338 string=0x00000000003E333C ""
 *   insn=0x00000000003E3348 string=0x00000000003E334C "@"
 *   insn=0x00000000003E335C string=0x00000000003E3360 "`"
 *   insn=0x00000000003E335C string=0x00000000001F8990 "0'"
 *   insn=0x00000000003E3364 string=0x00000000003E3368 "t"
 *   insn=0x00000000003E3368 string=0x00000000003E336C "4"
 *   insn=0x00000000003E336C string=0x00000000003E33B0 "h~@"
 *   insn=0x00000000003E3370 string=0x00000000003E3374 ""
 *   insn=0x00000000003E3380 string=0x00000000003E3384 "\t@"
 *   insn=0x00000000003E3390 string=0x00000000003E3394 ""
 *   insn=0x00000000003E33A0 string=0x00000000003E33A4 "@"
 *   insn=0x00000000003E33BC string=0x00000000003E33C0 "\t"
 *   insn=0x00000000003E33C0 string=0x00000000003E33C4 ")=G"
 *   insn=0x00000000003E33C4 string=0x00000000003E33C8 "!"
 *   insn=0x00000000003E33CC string=0x00000000003E33D0 "\t"
 *   insn=0x00000000003E33CC string=0x00000000003E3400 "\t"
 *   insn=0x00000000003E33D0 string=0x00000000003E33D4 "*"
 *   insn=0x00000000003E33D4 string=0x00000000003E33D8 "\n"
 *   insn=0x00000000003E33DC string=0x00000000003E33E0 "?"
 *   insn=0x00000000003E33E0 string=0x00000000003E33E4 "l"
 *   insn=0x00000000003E33F8 string=0x00000000003E33FC "2y"
 *   insn=0x00000000003E3400 string=0x00000000003E3404 "*"
 *   insn=0x00000000003E3404 string=0x00000000003E3408 "\n"
 *   insn=0x00000000003E3408 string=0x00000000003E340C "?"
 *   insn=0x00000000003E3418 string=0x00000000003E341C ""
 *   insn=0x00000000003E3424 string=0x00000000003E3428 "R_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::TargetFrame::TargetFrame(Caver::TargetFrame *this)
{
  Caver::FontLibrary *v2; // x0
  Caver::FontLibrary *v3; // x0
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  Caver::TextureLibrary *v7; // x0
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x8
  void *v11; // x0
  void *v12; // x0
  Caver::GUISlider *v13; // x0
  _QWORD *v14; // x21
  __int64 v15; // x9
  _QWORD *v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  float v20; // s1
  float v21; // s1
  _BYTE *v22; // x9
  float v23; // s0
  void (__fastcall *v24)(Caver::TargetFrame *, __int64 *); // x8
  _QWORD *v25; // x9
  _QWORD *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x8
  int v29; // w8
  int v30; // w8
  _DWORD *result; // x0
  int v32; // w8
  __int64 v33; // x8
  __int64 v34; // x8
  unsigned int *v35; // x8
  int v36; // w9
  unsigned int *v37; // x8
  int v38; // w9
  _DWORD *v39; // [xsp+10h] [xbp-80h]
  _DWORD *v40; // [xsp+18h] [xbp-78h]
  __int64 v41; // [xsp+20h] [xbp-70h]
  _QWORD *v42; // [xsp+28h] [xbp-68h]
  __int64 v43; // [xsp+38h] [xbp-58h] BYREF
  _QWORD *v44; // [xsp+40h] [xbp-50h]
  __int64 v45; // [xsp+48h] [xbp-48h]

  v45 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::FontLibrary *)Caver::GUIView::GUIView(this);
  *(_QWORD *)((char *)this + 236) = 2139095039;
  *(_QWORD *)this = off_6D0790;
  *((_BYTE *)this + 260) = 0;
  *((_BYTE *)this + 268) = 0;
  *((_DWORD *)this + 66) = -1082130432;
  *((_DWORD *)this + 76) = -16777216;
  *((_QWORD *)this + 31) = &byte_6FD2F8;
  *((_OWORD *)this + 17) = 0u;
  *((_OWORD *)this + 18) = 0u;
  *(_OWORD *)((char *)this + 312) = 0u;
  *((_DWORD *)this + 82) = 0;
  *((_BYTE *)this + 332) = -1;
  *(_OWORD *)((char *)this + 408) = 0u;
  *(_OWORD *)((char *)this + 392) = 0u;
  *(_OWORD *)((char *)this + 376) = 0u;
  *((_DWORD *)this + 106) = 0;
  *((_BYTE *)this + 456) = 0;
  *((_QWORD *)this + 56) = 0;
  *((_OWORD *)this + 27) = 0u;
  *((_DWORD *)this + 92) = 0;
  *((_OWORD *)this + 21) = 0u;
  *((_OWORD *)this + 22) = 0u;
  *((_QWORD *)this + 64) = 0;
  *((_OWORD *)this + 30) = 0u;
  *((_OWORD *)this + 31) = 0u;
  *((_OWORD *)this + 29) = 0u;
  *((_DWORD *)this + 130) = -1;
  *((_BYTE *)this + 546) = 0;
  *((_WORD *)this + 272) = 0;
  *((_OWORD *)this + 33) = 0u;
  *((_BYTE *)this + 547) = -1;
  *(_OWORD *)((char *)this + 552) = 0u;
  *((_BYTE *)this + 572) = -1;
  *((_DWORD *)this + 142) = 0;
  *(_OWORD *)((char *)this + 648) = 0u;
  *((_DWORD *)this + 166) = 0;
  *(_OWORD *)((char *)this + 632) = 0u;
  *(_OWORD *)((char *)this + 616) = 0u;
  *((_BYTE *)this + 696) = 0;
  *((_QWORD *)this + 86) = 0;
  *((_OWORD *)this + 42) = 0u;
  *((_DWORD *)this + 152) = 0;
  *((_OWORD *)this + 36) = 0u;
  *((_OWORD *)this + 37) = 0u;
  *((_QWORD *)this + 94) = 0;
  *((_OWORD *)this + 45) = 0u;
  *((_OWORD *)this + 46) = 0u;
  *((_OWORD *)this + 44) = 0u;
  *((_DWORD *)this + 190) = -1;
  *((_OWORD *)this + 48) = 0u;
  *((_BYTE *)this + 229) = 0;
  v3 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v2);
  Caver::FontLibrary::DefaultFont(v3);
  if ( v42 )
    ++v42[1];
  v4 = (_QWORD *)*((_QWORD *)this + 67);
  *((_QWORD *)this + 66) = v41;
  *((_QWORD *)this + 67) = v42;
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  *((_BYTE *)this + 568) = 1;
  *(_DWORD *)((char *)this + 569) = -16777216;
  *((_QWORD *)this + 72) = 0xBF8000003F800000LL;
  LODWORD(v43) = -1;
  v7 = (Caver::TextureLibrary *)Caver::FontText::SetColor(
                                  (Caver::TargetFrame *)((char *)this + 528),
                                  (const Caver::Color *)&v43);
  if ( v42 )
    ++v42[1];
  v8 = (_QWORD *)*((_QWORD *)this + 37);
  *((_QWORD *)this + 36) = v41;
  *((_QWORD *)this + 37) = v42;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      v7 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        v7 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  *((_BYTE *)this + 328) = 1;
  *(_DWORD *)((char *)this + 329) = -16777216;
  *((_QWORD *)this + 42) = 0xBF8000003F800000LL;
  Caver::TextureLibrary::sharedLibrary(v7);
  sub_566BB8((int)&v43, "ui_xp_frame");
  Caver::TextureLibrary::TextureForName();
  v11 = (void *)(v43 - 24);
  if ( (__int64 *)(v43 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v43 - 8);
    if ( &pthread_create )
    {
      do
        v36 = __ldaxr(v35);
      while ( __stlxr(v36 - 1, v35) );
    }
    else
    {
      v36 = (*v35)--;
    }
    if ( v36 <= 0 )
      operator delete(v11);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v11);
  sub_566BB8((int)&v43, "ui_health_bar");
  Caver::TextureLibrary::TextureForName();
  v12 = (void *)(v43 - 24);
  if ( (__int64 *)(v43 - 24) != &qword_6FD2E0 )
  {
    v37 = (unsigned int *)(v43 - 8);
    if ( &pthread_create )
    {
      do
        v38 = __ldaxr(v37);
      while ( __stlxr(v38 - 1, v37) );
    }
    else
    {
      v38 = (*v37)--;
    }
    if ( v38 <= 0 )
      operator delete(v12);
  }
  v13 = (Caver::GUISlider *)operator new(0x170u);
  Caver::GUISlider::GUISlider(v13);
  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>();
  v14 = (_QWORD *)*((_QWORD *)this + 35);
  v15 = v43;
  v43 = *((_QWORD *)this + 34);
  v16 = v44;
  *((_QWORD *)this + 34) = v15;
  *((_QWORD *)this + 35) = v16;
  v44 = v14;
  if ( v14 )
  {
    v17 = v14[1] - 1LL;
    v14[1] = v17;
    if ( !v17 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v18 = v14[2] - 1LL;
      v14[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 34) + 229LL) = 0;
  Caver::GUISlider::SetFrameTexture();
  Caver::GUISlider::SetBarTexture();
  v19 = *((_QWORD *)this + 34);
  v20 = *(float *)(v19 + 292);
  *(_DWORD *)(v19 + 312) = 1065353216;
  if ( v20 <= 1.0 )
  {
    if ( *(float *)(v19 + 296) <= 1.0 )
      goto LABEL_21;
  }
  else
  {
    v21 = *(float *)(v19 + 308);
    *(_DWORD *)(v19 + 300) = 0;
    *(_BYTE *)(v19 + 352) = 1;
    v20 = fmaxf(v21, 1.0);
    *(float *)(v19 + 292) = v20;
    *(float *)(v19 + 296) = v20;
    if ( v20 <= 1.0 )
    {
LABEL_21:
      v22 = (_BYTE *)(v19 + 352);
      goto LABEL_28;
    }
  }
  if ( *(_BYTE *)(v19 + 364) )
    v20 = roundf(v20);
  v23 = fminf(v20, 1.0);
  v22 = (_BYTE *)(v19 + 352);
  if ( *(float *)(v19 + 308) >= v23 )
    v23 = *(float *)(v19 + 308);
  *(_DWORD *)(v19 + 300) = 0;
  *(float *)(v19 + 292) = v23;
  *(float *)(v19 + 296) = v23;
  *(_BYTE *)(v19 + 352) = 1;
LABEL_28:
  *v22 = 1;
  v24 = *(void (__fastcall **)(Caver::TargetFrame *, __int64 *))(*(_QWORD *)this + 96LL);
  v43 = *((_QWORD *)this + 34);
  v25 = (_QWORD *)*((_QWORD *)this + 35);
  v44 = v25;
  if ( v25 )
    ++v25[1];
  v24(this, &v43);
  v26 = v44;
  if ( v44 )
  {
    v27 = v44[1] - 1LL;
    v44[1] = v27;
    if ( !v27 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  v29 = v40[22];
  v43 = 0;
  LODWORD(v44) = 1129316352;
  HIDWORD(v44) = v29;
  Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v43);
  *((_BYTE *)this + 228) = 1;
  if ( v39 )
  {
    v30 = v39[2] - 1;
    v39[2] = v30;
    if ( !v30 )
      (*(void (__fastcall **)())(*(_QWORD *)v39 + 8LL))();
  }
  result = v40;
  if ( v40 )
  {
    v32 = v40[2] - 1;
    v40[2] = v32;
    if ( !v32 )
      result = (_DWORD *)(*(__int64 (__fastcall **)())(*(_QWORD *)v40 + 8LL))();
  }
  if ( v42 )
  {
    v33 = v42[1] - 1LL;
    v42[1] = v33;
    if ( !v33 )
    {
      result = (_DWORD *)(*(__int64 (__fastcall **)())(*v42 + 16LL))();
      v34 = v42[2] - 1LL;
      v42[2] = v34;
      if ( !v34 )
        return (_DWORD *)(*(__int64 (__fastcall **)())(*v42 + 24LL))();
    }
  }
  return result;
}

