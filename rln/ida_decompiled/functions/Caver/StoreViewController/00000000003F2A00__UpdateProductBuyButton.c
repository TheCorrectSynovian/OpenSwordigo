/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F2A00
 * Mangled: _ZN5Caver19StoreViewController22UpdateProductBuyButtonERKSs
 * Demangled: Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *
 * Callers: 2
 *   0x00000000001F56F0  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000003F2524  Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 22
 *   0x00000000001F4080  Caver::GameInterfaceBuilder::AlertView(std::string const&,std::string const&,int,std::string const*,int)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F56F0  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B30  Caver::GUIButton::titleLabel(void)
 *   0x00000000001F7060  Caver::StripeView::SetTitle(std::string const&)
 *   0x00000000001F7D90  Caver::StoreProductView::SetBuyButtonEnabled(bool)
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *   0x00000000001FDDF0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x00000000001FE900  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000200780  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find(std::string const&)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000003F3C40  Caver::StoreViewController::ProductViewForProduct(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 502
 *   insn=0x00000000003F2A1C string=0x00000000003F2A20 "H"
 *   insn=0x00000000003F2A24 string=0x00000000003F2A28 ""
 *   insn=0x00000000003F2A38 string=0x00000000003F2A3C ""
 *   insn=0x00000000003F2A40 string=0x00000000003F2A44 "v"
 *   insn=0x00000000003F2A50 string=0x00000000003F2A54 "x"
 *   insn=0x00000000003F2A58 string=0x00000000003F2A5C ""
 *   insn=0x00000000003F2A64 string=0x00000000003F2AC4 "Z"
 *   insn=0x00000000003F2A70 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003F2A7C string=0x00000000003F2A80 "`{y"
 *   insn=0x00000000003F2A80 string=0x00000000003F2A84 ""
 *   insn=0x00000000003F2A8C string=0x00000000003F2AA0 "9"
 *   insn=0x00000000003F2AB4 string=0x00000000003F2AB8 ""
 *   insn=0x00000000003F2ABC string=0x00000000003F2AC0 "4"
 *   insn=0x00000000003F2AC8 string=0x00000000003F2ACC "H"
 *   insn=0x00000000003F2AD0 string=0x00000000003F2AD4 ""
 *   insn=0x00000000003F2ADC string=0x00000000003F2AE0 "A'"
 *   insn=0x00000000003F2B10 string=0x00000000003F2B14 "7"
 *   insn=0x00000000003F2B28 string=0x00000000003F2B2C "u/"
 *   insn=0x00000000003F2B3C string=0x00000000001F7D90 "0'"
 *   insn=0x00000000003F2B44 string=0x00000000005934B6 "Owned"
 *   insn=0x00000000003F2B60 string=0x00000000001FC220 "0'"
 *   insn=0x00000000003F2B68 string=0x00000000003F2B6C ")"
 *   insn=0x00000000003F2B7C string=0x00000000003F2B80 ")=G"
 *   insn=0x00000000003F2B80 string=0x00000000003F2B84 "!"
 *   insn=0x00000000003F2B84 string=0x00000000003F2B88 "i"
 *   insn=0x00000000003F2B88 string=0x00000000003F2B8C "\t"
 *   insn=0x00000000003F2B88 string=0x00000000003F2E74 "\t"
 *   insn=0x00000000003F2B8C string=0x00000000003F2B90 "*"
 *   insn=0x00000000003F2B90 string=0x00000000003F2B94 "\n"
 *   insn=0x00000000003F2B9C string=0x00000000003F2E80 "?"
 *   insn=0x00000000003F2BA0 string=0x00000000003F2BA4 ""
 *   insn=0x00000000003F2BAC string=0x00000000003F2BB0 "h"
 *   insn=0x00000000003F2BB0 string=0x00000000003F2BB4 ""
 *   insn=0x00000000003F2BB4 string=0x00000000003F2BB8 "h"
 *   insn=0x00000000003F2BC4 string=0x00000000003F2BC8 "r"
 *   insn=0x00000000003F2BD8 string=0x00000000003F2BDC "S"
 *   insn=0x00000000003F2BE4 string=0x00000000003F2BE8 "P"
 *   insn=0x00000000003F2BEC string=0x00000000005934BC " - Details"
 *   insn=0x00000000003F2BF4 string=0x00000000003F2BF8 "B"
 *   insn=0x00000000003F2C1C string=0x00000000003F2C20 "a"
 *   insn=0x00000000003F2C38 string=0x00000000001F6B30 "0'"
 *   insn=0x00000000003F2C3C string=0x00000000003F2C40 "\C"
 *   insn=0x00000000003F2C54 string=0x00000000003F2C58 "   "
 *   insn=0x00000000003F2C58 string=0x00000000003F2C5C "M"
 *   insn=0x00000000003F2C5C string=0x00000000003F2DE4 "s"
 *   insn=0x00000000003F2C64 string=0x00000000003F2C68 "0"
 *   insn=0x00000000003F2C70 string=0x00000000003F2C74 "-"
 *   insn=0x00000000003F2C78 string=0x00000000005934C7 " - Info"
 *   insn=0x00000000003F2C90 string=0x00000000003F2C94 "c%"
 *   insn=0x00000000003F2CB8 string=0x00000000003F2CBC ")=G"
 *   insn=0x00000000003F2CBC string=0x00000000003F2CC0 "!"
 *   insn=0x00000000003F2CC4 string=0x00000000003F2CC8 "\t"
 *   insn=0x00000000003F2CC4 string=0x00000000003F2F3C "\t"
 *   insn=0x00000000003F2CC8 string=0x00000000003F2CCC "*"
 *   insn=0x00000000003F2CCC string=0x00000000003F2CD0 "\n"
 *   insn=0x00000000003F2CD8 string=0x00000000003F2F48 "?"
 *   insn=0x00000000003F2CE8 string=0x00000000003F2CEC ")"
 *   insn=0x00000000003F2CF4 string=0x0000000000592FD6 "Unavailable"
 *   insn=0x00000000003F2D0C string=0x00000000003F2D10 "D%"
 *   insn=0x00000000003F2D18 string=0x00000000003F2D1C ")"
 *   insn=0x00000000003F2D2C string=0x00000000003F2D30 ")=G"
 *   insn=0x00000000003F2D30 string=0x00000000003F2D34 "!"
 *   insn=0x00000000003F2D34 string=0x00000000003F2D38 "i"
 *   insn=0x00000000003F2D38 string=0x00000000003F2D3C "\t"
 *   insn=0x00000000003F2D38 string=0x00000000003F2FA4 "\t"
 *   insn=0x00000000003F2D3C string=0x00000000003F2D40 "*"
 *   insn=0x00000000003F2D40 string=0x00000000003F2D44 "\n"
 *   insn=0x00000000003F2D4C string=0x00000000003F2FB0 "?"
 *   insn=0x00000000003F2D54 string=0x000000000058F6A7 "Loading..."
 *   insn=0x00000000003F2D6C string=0x00000000003F2D70 ",%"
 *   insn=0x00000000003F2D78 string=0x00000000003F2D7C ")"
 *   insn=0x00000000003F2D84 string=0x00000000003F2D88 "a"
 *   insn=0x00000000003F2D94 string=0x00000000003F2D98 "N"
 *   insn=0x00000000003F2DD0 string=0x00000000003F2DD4 ")"
 *   insn=0x00000000003F2DE4 string=0x00000000003F2DE8 "h"
 *   insn=0x00000000003F2DE8 string=0x00000000003F2DEC ""
 *   insn=0x00000000003F2DEC string=0x00000000003F2DF0 "h"
 *   insn=0x00000000003F2DF4 string=0x00000000003F2DF8 "h"
 *   insn=0x00000000003F2DFC string=0x00000000003F2E00 "\t@"
 *   insn=0x00000000003F2E04 string=0x00000000003F2E08 "h\n@"
 *   insn=0x00000000003F2E08 string=0x00000000003F2E0C ""
 *   insn=0x00000000003F2E0C string=0x00000000003F2E10 "h\n"
 *   insn=0x00000000003F2E14 string=0x00000000003F2E18 "h"
 *   insn=0x00000000003F2E1C string=0x00000000003F2E20 "@"
 *   insn=0x00000000003F2E24 string=0x00000000003F2E28 "*"
 *   insn=0x00000000003F2E2C string=0x00000000003F2E30 ")=G"
 *   insn=0x00000000003F2E30 string=0x00000000003F2E34 "!"
 *   insn=0x00000000003F2E34 string=0x00000000003F2E38 "\t"
 *   insn=0x00000000003F2E38 string=0x00000000003F2E3C "\t"
 *   insn=0x00000000003F2E38 string=0x00000000003F2EB8 "\t"
 *   insn=0x00000000003F2E3C string=0x00000000003F2E40 "*"
 *   insn=0x00000000003F2E40 string=0x00000000003F2E44 "\n"
 *   insn=0x00000000003F2E4C string=0x00000000003F2EC4 "?"
 *   insn=0x00000000003F2E50 string=0x00000000003F2E54 ")=G"
 *   insn=0x00000000003F2E54 string=0x00000000003F2E58 "!"
 *   insn=0x00000000003F2E5C string=0x00000000003F2E60 "\t"
 *   insn=0x00000000003F2E5C string=0x00000000003F2ED8 "\t"
 *   insn=0x00000000003F2E60 string=0x00000000003F2E64 "*"
 *   insn=0x00000000003F2E64 string=0x00000000003F2E68 "\n"
 *   insn=0x00000000003F2E70 string=0x00000000003F2EE4 "?"
 *   insn=0x00000000003F2E74 string=0x00000000003F2E78 "*"
 *   insn=0x00000000003F2E78 string=0x00000000003F2E7C "\n"
 *   insn=0x00000000003F2E80 string=0x00000000003F2E84 "l"
 *   insn=0x00000000003F2E88 string=0x00000000003F2E8C "F"
 *   insn=0x00000000003F2E94 string=0x00000000003F2E98 ")=G"
 *   insn=0x00000000003F2E98 string=0x00000000003F2E9C "!"
 *   insn=0x00000000003F2EA0 string=0x00000000003F2EA4 "\t"
 *   insn=0x00000000003F2EA0 string=0x00000000003F2F1C "\t"
 *   insn=0x00000000003F2EA4 string=0x00000000003F2EA8 "*"
 *   insn=0x00000000003F2EA8 string=0x00000000003F2EAC "\n"
 *   insn=0x00000000003F2EB4 string=0x00000000003F2F28 "?"
 *   insn=0x00000000003F2EB8 string=0x00000000003F2EBC "*"
 *   insn=0x00000000003F2EBC string=0x00000000003F2EC0 "\n"
 *   insn=0x00000000003F2ECC string=0x00000000003F2ED0 "5"
 *   insn=0x00000000003F2ED0 string=0x00000000003F2ED4 "T"
 *   insn=0x00000000003F2ED8 string=0x00000000003F2EDC "*"
 *   insn=0x00000000003F2EDC string=0x00000000003F2EE0 "\n"
 *   insn=0x00000000003F2EE4 string=0x00000000003F2EE8 "l"
 *   insn=0x00000000003F2EEC string=0x00000000003F2EF0 "-"
 *   insn=0x00000000003F2EF0 string=0x00000000003F2EF4 "P"
 *   insn=0x00000000003F2EF8 string=0x00000000003F2EFC ")=G"
 *   insn=0x00000000003F2EFC string=0x00000000003F2F00 "!"
 *   insn=0x00000000003F2F04 string=0x00000000003F2F08 "\t"
 *   insn=0x00000000003F2F04 string=0x00000000003F2F60 "\t"
 *   insn=0x00000000003F2F08 string=0x00000000003F2F0C "*"
 *   insn=0x00000000003F2F0C string=0x00000000003F2F10 "\n"
 *   insn=0x00000000003F2F18 string=0x00000000003F2F6C "?"
 *   insn=0x00000000003F2F1C string=0x00000000003F2F20 "*"
 *   insn=0x00000000003F2F20 string=0x00000000003F2F24 "\n"
 *   insn=0x00000000003F2F3C string=0x00000000003F2F40 "*"
 *   insn=0x00000000003F2F40 string=0x00000000003F2F44 "\n"
 *   insn=0x00000000003F2F60 string=0x00000000003F2F64 "*"
 *   insn=0x00000000003F2F64 string=0x00000000003F2F68 "\n"
 *   insn=0x00000000003F2F74 string=0x00000000003F2F78 ""
 *   insn=0x00000000003F2F78 string=0x00000000003F2F7C "K"
 *   insn=0x00000000003F2F80 string=0x00000000003F2F84 ")=G"
 *   insn=0x00000000003F2F84 string=0x00000000003F2F88 "!"
 *   insn=0x00000000003F2F8C string=0x00000000003F2F90 "\t"
 *   insn=0x00000000003F2F90 string=0x00000000003F2F94 "*"
 *   insn=0x00000000003F2F94 string=0x00000000003F2F98 "\n"
 *   insn=0x00000000003F2FA4 string=0x00000000003F2FA8 "*"
 *   insn=0x00000000003F2FA8 string=0x00000000003F2FAC "\n"
 *   insn=0x00000000003F2FBC string=0x00000000003F2FC0 "S"
 *   insn=0x00000000003F2FC8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003F2FD0 string=0x00000000003F2FD4 "J"
 *   insn=0x00000000003F2FD8 string=0x00000000003F2FDC "(a"
 *   insn=0x00000000003F2FE4 string=0x00000000003F3324 "3"
 *   insn=0x00000000003F2FE8 string=0x00000000003F2FEC "J=G"
 *   insn=0x00000000003F2FEC string=0x00000000003F2FF0 ")!"
 *   insn=0x00000000003F2FF4 string=0x00000000003F2FF8 "*"
 *   insn=0x00000000003F2FF4 string=0x00000000003F3068 "*"
 *   insn=0x00000000003F2FF8 string=0x00000000003F2FFC "K"
 *   insn=0x00000000003F2FFC string=0x00000000003F3000 "+"
 *   insn=0x00000000003F3008 string=0x00000000003F304C "_"
 *   insn=0x00000000003F3014 string=0x00000000003F3018 "J"
 *   insn=0x00000000003F301C string=0x00000000003F3020 "(a"
 *   insn=0x00000000003F302C string=0x00000000003F3030 "J=G"
 *   insn=0x00000000003F3030 string=0x00000000003F3034 ")!"
 *   insn=0x00000000003F3038 string=0x00000000003F303C "*"
 *   insn=0x00000000003F303C string=0x00000000003F3040 "K"
 *   insn=0x00000000003F3040 string=0x00000000003F3044 "+"
 *   insn=0x00000000003F305C string=0x00000000003F3060 "S"
 *   insn=0x00000000003F3060 string=0x00000000003F3328 "h"
 *   insn=0x00000000003F3068 string=0x00000000003F306C "K"
 *   insn=0x00000000003F306C string=0x00000000003F3070 "+"
 *   insn=0x00000000003F3070 string=0x00000000003F3074 "_"
 *   insn=0x00000000003F3088 string=0x00000000003F308C "(a"
 *   insn=0x00000000003F3090 string=0x00000000003F3094 "@"
 *   insn=0x00000000003F3098 string=0x00000000003F309C "J=G"
 *   insn=0x00000000003F309C string=0x00000000003F30A0 ")!"
 *   insn=0x00000000003F30A4 string=0x00000000003F30A8 "*"
 *   insn=0x00000000003F30A4 string=0x00000000003F30F4 "*"
 *   insn=0x00000000003F30A8 string=0x00000000003F30AC "K"
 *   insn=0x00000000003F30AC string=0x00000000003F30B0 "+"
 *   insn=0x00000000003F30B8 string=0x00000000003F3100 "_"
 *   insn=0x00000000003F30C0 string=0x00000000003F30C4 "(a"
 *   insn=0x00000000003F30D0 string=0x00000000003F30D4 "J=G"
 *   insn=0x00000000003F30D4 string=0x00000000003F30D8 ")!"
 *   insn=0x00000000003F30DC string=0x00000000003F30E0 "*"
 *   insn=0x00000000003F30E0 string=0x00000000003F30E4 "K"
 *   insn=0x00000000003F30E4 string=0x00000000003F30E8 "+"
 *   insn=0x00000000003F30F4 string=0x00000000003F30F8 "K"
 *   insn=0x00000000003F30F8 string=0x00000000003F30FC "+"
 *   insn=0x00000000003F312C string=0x00000000003F3130 ")=G"
 *   insn=0x00000000003F3130 string=0x00000000003F3134 "!"
 *   insn=0x00000000003F3138 string=0x00000000003F313C "\t"
 *   insn=0x00000000003F3138 string=0x00000000003F3290 "\t"
 *   insn=0x00000000003F313C string=0x00000000003F3140 "*"
 *   insn=0x00000000003F3140 string=0x00000000003F3144 "\n"
 *   insn=0x00000000003F3148 string=0x00000000003F314C "K"
 *   insn=0x00000000003F314C string=0x00000000003F3278 "?"
 *   insn=0x00000000003F3158 string=0x00000000003F315C "J"
 *   insn=0x00000000003F3160 string=0x00000000003F3164 "(a"
 *   insn=0x00000000003F3170 string=0x00000000003F3174 "J=G"
 *   insn=0x00000000003F3174 string=0x00000000003F3178 ")!"
 *   insn=0x00000000003F3178 string=0x00000000003F317C "J"
 *   insn=0x00000000003F317C string=0x00000000003F3180 "*"
 *   insn=0x00000000003F317C string=0x00000000003F3304 "*"
 *   insn=0x00000000003F3180 string=0x00000000003F3184 "K"
 *   insn=0x00000000003F3184 string=0x00000000003F3188 "+"
 *   insn=0x00000000003F318C string=0x00000000003F3190 "V"
 *   insn=0x00000000003F3190 string=0x00000000003F32E8 "_"
 *   insn=0x00000000003F319C string=0x00000000003F31A0 "J"
 *   insn=0x00000000003F31A4 string=0x00000000003F31A8 "(a"
 *   insn=0x00000000003F31B4 string=0x00000000003F31B8 "J=G"
 *   insn=0x00000000003F31B8 string=0x00000000003F31BC ")!"
 *   insn=0x00000000003F31C0 string=0x00000000003F31C4 "*"
 *   insn=0x00000000003F31C0 string=0x00000000003F3218 "*"
 *   insn=0x00000000003F31C4 string=0x00000000003F31C8 "K"
 *   insn=0x00000000003F31C8 string=0x00000000003F31CC "+"
 *   insn=0x00000000003F31D4 string=0x00000000003F3224 "_"
 *   insn=0x00000000003F31DC string=0x00000000003F31E0 "J"
 *   insn=0x00000000003F31E4 string=0x00000000003F31E8 "(a"
 *   insn=0x00000000003F31F4 string=0x00000000003F31F8 "J=G"
 *   insn=0x00000000003F31F8 string=0x00000000003F31FC ")!"
 *   insn=0x00000000003F3200 string=0x00000000003F3204 "*"
 *   insn=0x00000000003F3204 string=0x00000000003F3208 "K"
 *   insn=0x00000000003F3208 string=0x00000000003F320C "+"
 *   insn=0x00000000003F3218 string=0x00000000003F321C "K"
 *   insn=0x00000000003F321C string=0x00000000003F3220 "+"
 *   insn=0x00000000003F3230 string=0x00000000003F3234 "\"
 *   insn=0x00000000003F3244 string=0x00000000003F3248 ")"
 *   insn=0x00000000003F3258 string=0x00000000003F325C ")=G"
 *   insn=0x00000000003F325C string=0x00000000003F3260 "!"
 *   insn=0x00000000003F3260 string=0x00000000003F3264 "i"
 *   insn=0x00000000003F3264 string=0x00000000003F3268 "\t"
 *   insn=0x00000000003F3268 string=0x00000000003F326C "*"
 *   insn=0x00000000003F326C string=0x00000000003F3270 "\n"
 *   insn=0x00000000003F3278 string=0x00000000003F327C "L"
 *   insn=0x00000000003F3280 string=0x00000000003F3284 "H"
 *   insn=0x00000000003F3288 string=0x00000000003F328C "7"
 *   insn=0x00000000003F3290 string=0x00000000003F3294 "*"
 *   insn=0x00000000003F3294 string=0x00000000003F3298 "\n"
 *   insn=0x00000000003F3298 string=0x00000000003F329C "?"
 *   insn=0x00000000003F329C string=0x00000000003F32A0 ""
 *   insn=0x00000000003F32A0 string=0x00000000003F32A4 " "
 *   insn=0x00000000003F32B0 string=0x00000000003F32B4 "J"
 *   insn=0x00000000003F32B8 string=0x00000000003F32BC "(a"
 *   insn=0x00000000003F32C0 string=0x00000000003F32C4 " "
 *   insn=0x00000000003F32C8 string=0x00000000003F32CC "J=G"
 *   insn=0x00000000003F32CC string=0x00000000003F32D0 ")!"
 *   insn=0x00000000003F32D4 string=0x00000000003F32D8 "*"
 *   insn=0x00000000003F32D8 string=0x00000000003F32DC "K"
 *   insn=0x00000000003F32DC string=0x00000000003F32E0 "+"
 *   insn=0x00000000003F32F4 string=0x00000000003F32F8 "+"
 *   insn=0x00000000003F32FC string=0x00000000003F3300 "q9"
 *   insn=0x00000000003F3304 string=0x00000000003F3308 "K"
 *   insn=0x00000000003F3308 string=0x00000000003F330C "+"
 *   insn=0x00000000003F330C string=0x00000000003F3310 "_"
 *   insn=0x00000000003F3328 string=0x00000000003F332C ""
 *   insn=0x00000000003F332C string=0x00000000003F3330 "h"
 *   insn=0x00000000003F3334 string=0x00000000003F3338 "h"
 *   insn=0x00000000003F3338 string=0x00000000003F333C "\t@"
 *   insn=0x00000000003F3344 string=0x00000000003F3348 "h\n@"
 *   insn=0x00000000003F3348 string=0x00000000003F334C ""
 *   insn=0x00000000003F334C string=0x00000000003F3350 "h\n"
 *   insn=0x00000000003F3354 string=0x00000000003F3358 "h"
 *   insn=0x00000000003F3358 string=0x00000000003F335C "@"
 *   insn=0x00000000003F3368 string=0x00000000003F336C "V9"
 *   insn=0x00000000003F338C string=0x00000000003F3390 "W"
 *   insn=0x00000000003F33A4 string=0x00000000003F33A8 "iB"
 *   insn=0x00000000003F33B8 string=0x00000000003F33BC "h&G"
 *   insn=0x00000000003F33B8 string=0x00000000003F348C "y/"
 *   insn=0x00000000003F33BC string=0x00000000003F33C0 "?"
 *   insn=0x00000000003F33D4 string=0x00000000003F33D8 "jF@"
 *   insn=0x00000000003F33DC string=0x00000000003F33E0 "+"
 *   insn=0x00000000003F33DC string=0x00000000003F33EC "J"
 *   insn=0x00000000003F33E0 string=0x00000000003F33E4 "k"
 *   insn=0x00000000003F33E4 string=0x00000000003F33E8 "+"
 *   insn=0x00000000003F33EC string=0x00000000003F33F0 "U"
 *   insn=0x00000000003F33F0 string=0x00000000003F33F4 "H%"
 *   insn=0x00000000003F33F4 string=0x00000000003F33F8 "U"
 *   insn=0x00000000003F33F8 string=0x00000000003F3460 "h&G"
 *   insn=0x00000000003F33FC string=0x00000000003F3400 ""
 *   insn=0x00000000003F3410 string=0x00000000003F3414 "\t@"
 *   insn=0x00000000003F341C string=0x00000000003F3420 ""
 *   insn=0x00000000003F3430 string=0x00000000003F3434 "@"
 *   insn=0x00000000003F3438 string=0x00000000003F343C "\t"
 *   insn=0x00000000003F3448 string=0x00000000003F344C "("
 *   insn=0x00000000003F344C string=0x00000000003F3450 "_"
 *   insn=0x00000000003F3450 string=0x00000000003F3454 "a"
 *   insn=0x00000000003F3454 string=0x00000000003F3458 "N"
 *   insn=0x00000000003F3460 string=0x00000000003F3464 "9"
 *   insn=0x00000000003F3468 string=0x00000000003F346C ")"
 *   insn=0x00000000003F346C string=0x00000000003F3470 ")"
 *   insn=0x00000000003F3470 string=0x00000000003F3474 "?"
 *   insn=0x00000000003F3474 string=0x00000000003F3478 "H"
 *   insn=0x00000000003F3484 string=0x00000000001F56F0 "P'"
 *   insn=0x00000000003F3490 string=0x00000000003F3494 "-"
 *   insn=0x00000000003F3498 string=0x00000000003F349C "h"
 *   insn=0x00000000003F349C string=0x00000000003F34A0 "h"
 *   insn=0x00000000003F34A0 string=0x00000000003F34A4 "h.@"
 *   insn=0x00000000003F34A0 string=0x00000000003F366C "v"G"
 *   insn=0x00000000003F34A8 string=0x00000000003F34AC "q/"
 *   insn=0x00000000003F34AC string=0x00000000003F34B0 ""
 *   insn=0x00000000003F34B0 string=0x00000000003F34B4 "\t\t@"
 *   insn=0x00000000003F34B8 string=0x00000000003F34BC " "
 *   insn=0x00000000003F34C0 string=0x00000000005934EA "Could not connect to "
 *   insn=0x00000000003F34E0 string=0x0000000000593500 " Store"
 *   insn=0x00000000003F34FC string=0x00000000001F7060 "0'"
 *   insn=0x00000000003F3520 string=0x00000000003F3524 "!"
 *   insn=0x00000000003F3538 string=0x00000000003F353C "h"
 *   insn=0x00000000003F3540 string=0x000000000058F6BA "Ok"
 *   insn=0x00000000003F3554 string=0x0000000000592FE7 "OOPS!"
 *   insn=0x00000000003F3580 string=0x00000000001F4080 "P'"
 *   insn=0x00000000003F3590 string=0x00000000003F3594 "a"
 *   insn=0x00000000003F359C string=0x00000000003F35A0 "h"
 *   insn=0x00000000003F359C string=0x00000000003F35B4 "u"
 *   insn=0x00000000003F35A0 string=0x00000000003F35A4 "@"
 *   insn=0x00000000003F35AC string=0x00000000003F35B0 "a"
 *   insn=0x00000000003F35BC string=0x00000000003F35C0 ""
 *   insn=0x00000000003F35C8 string=0x00000000003F35CC "\t*"
 *   insn=0x00000000003F35CC string=0x00000000003F35D0 "5"
 *   insn=0x00000000003F35CC string=0x00000000001FDDF0 "0'"
 *   insn=0x00000000003F35D4 string=0x00000000003F35D8 ""
 *   insn=0x00000000003F35E4 string=0x00000000003F35E8 "\t@"
 *   insn=0x00000000003F35F4 string=0x00000000003F35F8 ""
 *   insn=0x00000000003F3604 string=0x00000000003F3608 "@"
 *   insn=0x00000000003F3614 string=0x00000000003F3618 "5"
 *   insn=0x00000000003F361C string=0x00000000003F3620 ""
 *   insn=0x00000000003F362C string=0x00000000003F3630 "\t@"
 *   insn=0x00000000003F363C string=0x00000000003F3640 ""
 *   insn=0x00000000003F364C string=0x00000000003F3650 "@"
 *   insn=0x00000000003F3664 string=0x00000000003F3668 "a"
 *   insn=0x00000000003F366C string=0x00000000003F3670 ""
 *   insn=0x00000000003F3670 string=0x00000000003F3674 " "
 *   insn=0x00000000003F368C string=0x00000000003F3690 ""
 *   insn=0x00000000003F3698 string=0x00000000003F36AC "9"
 *   insn=0x00000000003F36A8 string=0x00000000003F36C0 "h.@"
 *   insn=0x00000000003F36AC string=0x00000000003F36B0 "_"
 *   insn=0x00000000003F36C0 string=0x00000000003F36C4 ""
 *   insn=0x00000000003F36C8 string=0x00000000003F36CC "s"
 *   insn=0x00000000003F36D8 string=0x00000000003F36DC "s"
 *   insn=0x00000000003F36EC string=0x00000000003F36F0 "2"
 *   insn=0x00000000003F3704 string=0x00000000003F3708 ")"
 *   insn=0x00000000003F3710 string=0x00000000003F3714 "!"
 *   insn=0x00000000003F3724 string=0x00000000003F38DC "}\n"
 *   insn=0x00000000003F3744 string=0x00000000003F3748 ")=G"
 *   insn=0x00000000003F3748 string=0x00000000003F374C "!"
 *   insn=0x00000000003F374C string=0x00000000003F3750 "I"
 *   insn=0x00000000003F3750 string=0x00000000003F3754 "\t"
 *   insn=0x00000000003F3750 string=0x00000000003F37F8 "\t"
 *   insn=0x00000000003F3754 string=0x00000000003F3758 "*"
 *   insn=0x00000000003F3758 string=0x00000000003F375C "\n"
 *   insn=0x00000000003F3760 string=0x00000000003F3764 "("
 *   insn=0x00000000003F3764 string=0x00000000003F3804 "?"
 *   insn=0x00000000003F3768 string=0x00000000003F376C ")=G"
 *   insn=0x00000000003F376C string=0x00000000003F3770 "!"
 *   insn=0x00000000003F3770 string=0x00000000003F3774 ")"
 *   insn=0x00000000003F3774 string=0x00000000003F3778 "\t"
 *   insn=0x00000000003F3774 string=0x00000000003F3818 "\t"
 *   insn=0x00000000003F3778 string=0x00000000003F377C "*"
 *   insn=0x00000000003F377C string=0x00000000003F3780 "\n"
 *   insn=0x00000000003F3784 string=0x00000000003F3788 "'"
 *   insn=0x00000000003F3788 string=0x00000000003F3824 "?"
 *   insn=0x00000000003F378C string=0x00000000003F3790 ")=G"
 *   insn=0x00000000003F3790 string=0x00000000003F3794 "!"
 *   insn=0x00000000003F3794 string=0x00000000003F3798 "\t"
 *   insn=0x00000000003F3798 string=0x00000000003F379C "\t"
 *   insn=0x00000000003F3798 string=0x00000000003F3838 "\t"
 *   insn=0x00000000003F379C string=0x00000000003F37A0 "*"
 *   insn=0x00000000003F37A0 string=0x00000000003F37A4 "\n"
 *   insn=0x00000000003F37A8 string=0x00000000003F37AC "&"
 *   insn=0x00000000003F37AC string=0x00000000003F3844 "?"
 *   insn=0x00000000003F37B0 string=0x00000000003F37B4 ")=G"
 *   insn=0x00000000003F37B4 string=0x00000000003F37B8 "!"
 *   insn=0x00000000003F37BC string=0x00000000003F37C0 "\t"
 *   insn=0x00000000003F37BC string=0x00000000003F3858 "\t"
 *   insn=0x00000000003F37C0 string=0x00000000003F37C4 "*"
 *   insn=0x00000000003F37C4 string=0x00000000003F37C8 "\n"
 *   insn=0x00000000003F37CC string=0x00000000003F37D0 "%"
 *   insn=0x00000000003F37D0 string=0x00000000003F3864 "?"
 *   insn=0x00000000003F37D4 string=0x00000000003F37D8 ")=G"
 *   insn=0x00000000003F37D8 string=0x00000000003F37DC "!"
 *   insn=0x00000000003F37E0 string=0x00000000003F37E4 "\t"
 *   insn=0x00000000003F37E0 string=0x00000000003F3878 "\t"
 *   insn=0x00000000003F37E4 string=0x00000000003F37E8 "*"
 *   insn=0x00000000003F37E8 string=0x00000000003F37EC "\n"
 *   insn=0x00000000003F37F0 string=0x00000000003F37F4 "$"
 *   insn=0x00000000003F37F4 string=0x00000000003F3884 "?"
 *   insn=0x00000000003F37F8 string=0x00000000003F37FC "*"
 *   insn=0x00000000003F37FC string=0x00000000003F3800 "\n"
 *   insn=0x00000000003F3810 string=0x00000000003F3814 "A"
 *   insn=0x00000000003F3818 string=0x00000000003F381C "*"
 *   insn=0x00000000003F381C string=0x00000000003F3820 "\n"
 *   insn=0x00000000003F3830 string=0x00000000003F3834 "="
 *   insn=0x00000000003F3838 string=0x00000000003F383C "*"
 *   insn=0x00000000003F383C string=0x00000000003F3840 "\n"
 *   insn=0x00000000003F3850 string=0x00000000003F3854 "9"
 *   insn=0x00000000003F3858 string=0x00000000003F385C "*"
 *   insn=0x00000000003F385C string=0x00000000003F3860 "\n"
 *   insn=0x00000000003F3864 string=0x00000000003F3868 "l"
 *   insn=0x00000000003F3870 string=0x00000000003F3874 "H"
 *   insn=0x00000000003F3878 string=0x00000000003F387C "*"
 *   insn=0x00000000003F387C string=0x00000000003F3880 "\n"
 *   insn=0x00000000003F3884 string=0x00000000003F3888 ","
 *   insn=0x00000000003F3890 string=0x00000000003F3894 "v"
 *   insn=0x00000000003F3898 string=0x00000000003F389C ")=G"
 *   insn=0x00000000003F389C string=0x00000000003F38A0 "!"
 *   insn=0x00000000003F38A4 string=0x00000000003F38A8 "\t"
 *   insn=0x00000000003F38A4 string=0x00000000003F38BC "\t"
 *   insn=0x00000000003F38A8 string=0x00000000003F38AC "*"
 *   insn=0x00000000003F38AC string=0x00000000003F38B0 "\n"
 *   insn=0x00000000003F38B8 string=0x00000000003F38C8 "?"
 *   insn=0x00000000003F38BC string=0x00000000003F38C0 "*"
 *   insn=0x00000000003F38C0 string=0x00000000003F38C4 "\n"
 *   insn=0x00000000003F38C8 string=0x00000000003F38CC "l"
 *   insn=0x00000000003F38E4 string=0x00000000003F38E8 "J"
 *   insn=0x00000000003F38EC string=0x00000000003F38F0 "(a"
 *   insn=0x00000000003F38FC string=0x00000000003F3900 "J=G"
 *   insn=0x00000000003F3900 string=0x00000000003F3904 ")!"
 *   insn=0x00000000003F3908 string=0x00000000003F390C "*"
 *   insn=0x00000000003F3908 string=0x00000000003F3938 "*"
 *   insn=0x00000000003F390C string=0x00000000003F3910 "K"
 *   insn=0x00000000003F3910 string=0x00000000003F3914 "+"
 *   insn=0x00000000003F3918 string=0x00000000003F391C "_"
 *   insn=0x00000000003F3938 string=0x00000000003F393C "K"
 *   insn=0x00000000003F393C string=0x00000000003F3940 "+"
 *   insn=0x00000000003F3940 string=0x00000000003F3944 "_"
 *   insn=0x00000000003F3960 string=0x00000000003F3964 "?"
 *   insn=0x00000000003F3968 string=0x00000000003F396C "5"
 *   insn=0x00000000003F3970 string=0x00000000003F3974 ""
 *   insn=0x00000000003F3980 string=0x00000000003F3984 "\t@"
 *   insn=0x00000000003F3990 string=0x00000000003F3994 ""
 *   insn=0x00000000003F39A0 string=0x00000000003F39A4 "@"
 *   insn=0x00000000003F39B0 string=0x00000000003F39B4 "t"
 *   insn=0x00000000003F39B8 string=0x00000000003F39BC ""
 *   insn=0x00000000003F39C8 string=0x00000000003F39CC "\t@"
 *   insn=0x00000000003F39D8 string=0x00000000003F39DC ""
 *   insn=0x00000000003F39E8 string=0x00000000003F39EC "@"
 *   insn=0x00000000003F3A04 string=0x00000000003F3A08 "(a"
 *   insn=0x00000000003F3A14 string=0x00000000003F3A18 "J=G"
 *   insn=0x00000000003F3A18 string=0x00000000003F3A1C ")!"
 *   insn=0x00000000003F3A20 string=0x00000000003F3A24 "*"
 *   insn=0x00000000003F3A20 string=0x00000000003F3A38 "*"
 *   insn=0x00000000003F3A24 string=0x00000000003F3A28 "K"
 *   insn=0x00000000003F3A28 string=0x00000000003F3A2C "+"
 *   insn=0x00000000003F3A34 string=0x00000000003F3A44 "_"
 *   insn=0x00000000003F3A38 string=0x00000000003F3A3C "K"
 *   insn=0x00000000003F3A3C string=0x00000000003F3A40 "+"
 *   insn=0x00000000003F3A50 string=0x00000000003F3A54 "T"
 *   insn=0x00000000003F3A68 string=0x00000000003F3A6C "`"
 *   insn=0x00000000003F3A70 string=0x00000000003F3A74 ")=G"
 *   insn=0x00000000003F3A74 string=0x00000000003F3A78 "!"
 *   insn=0x00000000003F3A78 string=0x00000000003F3A7C "i"
 *   insn=0x00000000003F3A7C string=0x00000000003F3A80 "\t"
 *   insn=0x00000000003F3A7C string=0x00000000003F3AA8 "\t"
 *   insn=0x00000000003F3A80 string=0x00000000003F3A84 "*"
 *   insn=0x00000000003F3A84 string=0x00000000003F3A88 "\n"
 *   insn=0x00000000003F3A8C string=0x00000000003F3A90 "?"
 *   insn=0x00000000003F3A90 string=0x00000000003F3A94 ","
 *   insn=0x00000000003F3A98 string=0x00000000003F3A9C "B"
 *   insn=0x00000000003F3AA8 string=0x00000000003F3AAC "*"
 *   insn=0x00000000003F3AAC string=0x00000000003F3AB0 "\n"
 *   insn=0x00000000003F3AB0 string=0x00000000003F3AB4 "?"
 *   insn=0x00000000003F3AB4 string=0x00000000003F3AB8 ""
 *   insn=0x00000000003F3AB8 string=0x00000000003F3ABC "_"
 *   insn=0x00000000003F3AD0 string=0x00000000003F3AD4 "J"
 *   insn=0x00000000003F3AD8 string=0x00000000003F3ADC "(a"
 *   insn=0x00000000003F3AE8 string=0x00000000003F3AEC "J=G"
 *   insn=0x00000000003F3AEC string=0x00000000003F3AF0 ")!"
 *   insn=0x00000000003F3AF4 string=0x00000000003F3AF8 "*"
 *   insn=0x00000000003F3AF4 string=0x00000000003F3B4C "*"
 *   insn=0x00000000003F3AF8 string=0x00000000003F3AFC "K"
 *   insn=0x00000000003F3AFC string=0x00000000003F3B00 "+"
 *   insn=0x00000000003F3B08 string=0x00000000003F3B58 "_"
 *   insn=0x00000000003F3B10 string=0x00000000003F3B14 "J"
 *   insn=0x00000000003F3B18 string=0x00000000003F3B1C "(a"
 *   insn=0x00000000003F3B28 string=0x00000000003F3B2C "J=G"
 *   insn=0x00000000003F3B2C string=0x00000000003F3B30 ")!"
 *   insn=0x00000000003F3B34 string=0x00000000003F3B38 "*"
 *   insn=0x00000000003F3B38 string=0x00000000003F3B3C "K"
 *   insn=0x00000000003F3B3C string=0x00000000003F3B40 "+"
 *   insn=0x00000000003F3B4C string=0x00000000003F3B50 "K"
 *   insn=0x00000000003F3B50 string=0x00000000003F3B54 "+"
 *   insn=0x00000000003F3B78 string=0x00000000003F3B7C ")"
 *   insn=0x00000000003F3B84 string=0x00000000003F3B88 "`"
 *   insn=0x00000000003F3B8C string=0x00000000003F3B90 ")=G"
 *   insn=0x00000000003F3B90 string=0x00000000003F3B94 "!"
 *   insn=0x00000000003F3B98 string=0x00000000003F3B9C "\t"
 *   insn=0x00000000003F3B98 string=0x00000000003F3BB0 "\t"
 *   insn=0x00000000003F3B9C string=0x00000000003F3BA0 "*"
 *   insn=0x00000000003F3BA0 string=0x00000000003F3BA4 "\n"
 *   insn=0x00000000003F3BAC string=0x00000000003F3BBC "?"
 *   insn=0x00000000003F3BB0 string=0x00000000003F3BB4 "*"
 *   insn=0x00000000003F3BB4 string=0x00000000003F3BB8 "\n"
 *   insn=0x00000000003F3BD8 string=0x00000000003F3BDC ")"
 *   insn=0x00000000003F3BEC string=0x00000000003F3BF0 ")=G"
 *   insn=0x00000000003F3BF0 string=0x00000000003F3BF4 "!"
 *   insn=0x00000000003F3BF4 string=0x00000000003F3BF8 "i"
 *   insn=0x00000000003F3BF8 string=0x00000000003F3BFC "\t"
 *   insn=0x00000000003F3BF8 string=0x00000000003F3C24 "\t"
 *   insn=0x00000000003F3BFC string=0x00000000003F3C00 "*"
 *   insn=0x00000000003F3C00 string=0x00000000003F3C04 "\n"
 *   insn=0x00000000003F3C08 string=0x00000000003F3C0C "?"
 *   insn=0x00000000003F3C0C string=0x00000000003F3C10 "L"
 *   insn=0x00000000003F3C1C string=0x00000000003F3C20 ")7"
 *   insn=0x00000000003F3C24 string=0x00000000003F3C28 "*"
 *   insn=0x00000000003F3C28 string=0x00000000003F3C2C "\n"
 *   insn=0x00000000003F3C2C string=0x00000000003F3C30 "?"
 *   insn=0x00000000003F3C30 string=0x00000000003F3C34 ""
 *   insn=0x00000000003F3C38 string=0x00000000003F3C3C ""7"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreViewController::UpdateProductBuyButton(__int64 a1, const void **a2)
{
  __int64 v3; // x27
  __int64 v4; // x8
  const void *v5; // x22
  __int64 v6; // x26
  unsigned __int64 v7; // x28
  size_t v8; // x23
  const void **v9; // x24
  __int64 v10; // x20
  unsigned __int64 v11; // x25
  const void *v12; // x0
  Caver::StoreController *v13; // x0
  Caver::GUIButton **v14; // x20
  Caver::GUIButton *v15; // x19
  void *v16; // x0
  unsigned int *v17; // x8
  int v18; // w9
  __int64 *v19; // x8
  _QWORD *v20; // x19
  __int64 v21; // x23
  Caver::GUIButton *v22; // x22
  void *v23; // x0
  void *v24; // x0
  Caver::GUILabel *v25; // x0
  float *v26; // x20
  void *v27; // x0
  void *v28; // x0
  unsigned int *v29; // x8
  int v30; // w9
  Caver::GUIButton *v31; // x20
  void *v32; // x0
  unsigned int *v33; // x8
  int v34; // w9
  Caver::GUIButton *v35; // x19
  void *v36; // x0
  Caver::GUIButton *v37; // x20
  __int64 v38; // x8
  __int64 v39; // x8
  unsigned int *v40; // x8
  int v41; // w9
  unsigned int *v42; // x8
  int v43; // w9
  unsigned int *v44; // x8
  int v45; // w9
  unsigned int *v46; // x8
  int v47; // w9
  __int64 v48; // [xsp+90h] [xbp-78h] BYREF
  __int64 v49; // [xsp+98h] [xbp-70h] BYREF
  _QWORD v50[3]; // [xsp+A0h] [xbp-68h] BYREF

  v50[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_QWORD *)(a1 + 120) - v3;
  if ( !v4 )
    return;
  v5 = *a2;
  v6 = 0;
  v7 = v4 >> 3;
  v8 = *((_QWORD *)*a2 - 3);
  while ( 1 )
  {
    v9 = (const void **)(v3 + 8 * v6);
    if ( *((_QWORD *)*v9 - 3) == v8 && !memcmp(*v9, v5, v8) )
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(const void **)(v3 + 8 * v11);
        if ( *((_QWORD *)v12 - 3) == v8 )
        {
          v13 = (Caver::StoreController *)memcmp(v12, v5, v8);
          if ( !(_DWORD)v13 )
            break;
        }
        ++v11;
        v10 += 16;
        if ( v7 <= v11 )
          goto LABEL_11;
      }
      v14 = *(Caver::GUIButton ***)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 320LL) + v10);
      if ( v14 )
        break;
    }
LABEL_11:
    if ( v7 <= ++v6 )
      return;
  }
  if ( *(_BYTE *)(a1 + 209)
    || (std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find(),
        (Caver::StoreController *)(a1 + 168) != v13) )
  {
    Caver::StoreController::SharedController(v13);
    if ( (Caver::StoreController::IsProductUnlockedCheck() & 1) != 0 )
    {
      Caver::StoreProductView::SetBuyButtonEnabled((Caver::StoreProductView *)v14);
      v15 = v14[32];
      sub_566BB8((int)v50, "Owned");
      Caver::GUIButton::SetTitle(v15);
      v16 = (void *)(v50[0] - 24LL);
      if ( (__int64 *)(v50[0] - 24LL) != &qword_6FD2E0 )
      {
        v17 = (unsigned int *)(v50[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v18 = __ldaxr(v17);
          while ( __stlxr(v18 - 1, v17) );
        }
        else
        {
          v18 = (*v17)--;
        }
        if ( v18 <= 0 )
          operator delete(v16);
      }
      return;
    }
    v19 = (__int64 *)(*(_QWORD *)(a1 + 136) + 16 * v6);
    v21 = *v19;
    v20 = (_QWORD *)v19[1];
    if ( v20 )
      ++v20[1];
    if ( v21 )
    {
      Caver::StoreProductView::SetBuyButtonEnabled((Caver::StoreProductView *)v14);
      v22 = v14[32];
      sub_56A528(&v49, v21 + 8);
      sub_56A528(v50, &v49);
      sub_5677D4(v50, " - Details", 10);
      Caver::GUIButton::SetTitle(v22);
      v23 = (void *)(v50[0] - 24LL);
      if ( (__int64 *)(v50[0] - 24LL) != &qword_6FD2E0 )
      {
        v40 = (unsigned int *)(v50[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v41 = __ldaxr(v40);
          while ( __stlxr(v41 - 1, v40) );
        }
        else
        {
          v41 = (*v40)--;
        }
        if ( v41 <= 0 )
          operator delete(v23);
      }
      v24 = (void *)(v49 - 24);
      if ( (__int64 *)(v49 - 24) != &qword_6FD2E0 )
      {
        v42 = (unsigned int *)(v49 - 8);
        if ( &pthread_create )
        {
          do
            v43 = __ldaxr(v42);
          while ( __stlxr(v43 - 1, v42) );
        }
        else
        {
          v43 = (*v42)--;
        }
        if ( v43 <= 0 )
          operator delete(v24);
      }
      Caver::GUIButton::titleLabel(v14[32]);
      Caver::GUILabel::TextSize(&v48, v25);
      v26 = (float *)v14[32];
      if ( *(float *)&v48 > (float)(v26[35] + -10.0) )
      {
        sub_56A528(&v49, v21 + 8);
        sub_56A528(v50, &v49);
        sub_5677D4(v50, " - Info", 7);
        Caver::GUIButton::SetTitle((Caver::GUIButton *)v26);
        v27 = (void *)(v50[0] - 24LL);
        if ( (__int64 *)(v50[0] - 24LL) != &qword_6FD2E0 )
        {
          v46 = (unsigned int *)(v50[0] - 8LL);
          if ( &pthread_create )
          {
            do
              v47 = __ldaxr(v46);
            while ( __stlxr(v47 - 1, v46) );
          }
          else
          {
            v47 = (*v46)--;
          }
          if ( v47 <= 0 )
            operator delete(v27);
        }
        v28 = (void *)(v49 - 24);
        if ( (__int64 *)(v49 - 24) != &qword_6FD2E0 )
        {
          v29 = (unsigned int *)(v49 - 8);
          if ( &pthread_create )
          {
            do
              v30 = __ldaxr(v29);
            while ( __stlxr(v30 - 1, v29) );
          }
          else
          {
            v30 = (*v29)--;
          }
          if ( v30 <= 0 )
          {
            operator delete(v28);
            if ( !v20 )
              return;
            goto LABEL_40;
          }
        }
      }
      goto LABEL_39;
    }
    if ( *(_BYTE *)(a1 + 208) )
    {
      Caver::StoreProductView::SetBuyButtonEnabled((Caver::StoreProductView *)v14);
      v31 = v14[32];
      sub_566BB8((int)v50, "Unavailable");
      Caver::GUIButton::SetTitle(v31);
      v32 = (void *)(v50[0] - 24LL);
      if ( (__int64 *)(v50[0] - 24LL) == &qword_6FD2E0 )
        goto LABEL_39;
      v33 = (unsigned int *)(v50[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v34 = __ldaxr(v33);
        while ( __stlxr(v34 - 1, v33) );
        goto LABEL_78;
      }
    }
    else
    {
      Caver::StoreProductView::SetBuyButtonEnabled((Caver::StoreProductView *)v14);
      v37 = v14[32];
      sub_566BB8((int)v50, "Loading...");
      Caver::GUIButton::SetTitle(v37);
      v32 = (void *)(v50[0] - 24LL);
      if ( (__int64 *)(v50[0] - 24LL) == &qword_6FD2E0 )
        goto LABEL_39;
      v33 = (unsigned int *)(v50[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v34 = __ldaxr(v33);
        while ( __stlxr(v34 - 1, v33) );
LABEL_78:
        if ( v34 <= 0 )
        {
          operator delete(v32);
          if ( !v20 )
            return;
LABEL_40:
          v38 = v20[1] - 1LL;
          v20[1] = v38;
          if ( !v38 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
            v39 = v20[2] - 1LL;
            v20[2] = v39;
            if ( !v39 )
              (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
          }
          return;
        }
LABEL_39:
        if ( !v20 )
          return;
        goto LABEL_40;
      }
    }
    v34 = (*v33)--;
    goto LABEL_78;
  }
  v35 = v14[32];
  sub_566BB8((int)v50, "Loading...");
  Caver::GUIButton::SetTitle(v35);
  v36 = (void *)(v50[0] - 24LL);
  if ( (__int64 *)(v50[0] - 24LL) != &qword_6FD2E0 )
  {
    v44 = (unsigned int *)(v50[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v45 = __ldaxr(v44);
      while ( __stlxr(v45 - 1, v44) );
    }
    else
    {
      v45 = (*v44)--;
    }
    if ( v45 <= 0 )
      operator delete(v36);
  }
  Caver::StoreProductView::SetBuyButtonEnabled((Caver::StoreProductView *)v14);
}

