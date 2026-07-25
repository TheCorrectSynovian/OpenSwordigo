/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000039FB4C
 * Mangled: _ZN5Caver16ProfilePanelView27DeleteTextFieldValueChangedEPvPNS_8GUIEventE
 * Demangled: Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Callees: 16
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D50  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *   0x00000000001F71F0  Caver::StateProperties::AddFlag(std::string const&)
 *   0x00000000001F84A0  Caver::GameState::StateForQuestWithName(std::string const&)
 *   0x00000000001F8A60  Caver::PlayerProfile::LoadGameState(void)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001F9B10  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *   0x00000000001FCE10  Caver::PlayerProfile::Save(bool)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x0000000000568EA8  sub_568EA8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 286
 *   insn=0x000000000039FB64 string=0x000000000039FB68 "V"
 *   insn=0x000000000039FB7C string=0x00000000005914CB "delete"
 *   insn=0x000000000039FB88 string=0x000000000039FB8C ""
 *   insn=0x000000000039FB8C string=0x000000000039FB90 "h"
 *   insn=0x000000000039FB90 string=0x000000000039FB94 ""
 *   insn=0x000000000039FB9C string=0x000000000039FBA0 ""
 *   insn=0x000000000039FBA4 string=0x000000000039FBA8 ""
 *   insn=0x000000000039FBA8 string=0x000000000039FBAC ")"
 *   insn=0x000000000039FBB0 string=0x000000000039FBB4 "!"
 *   insn=0x000000000039FBC0 string=0x000000000039FBC4 "h"
 *   insn=0x000000000039FBC4 string=0x000000000039FBC8 ""
 *   insn=0x000000000039FBD4 string=0x000000000039FBD8 "\t"
 *   insn=0x000000000039FBD8 string=0x000000000039FBDC "\n"
 *   insn=0x000000000039FBDC string=0x000000000039FBE0 "8iw8"
 *   insn=0x000000000039FBE4 string=0x000000000039FBF4 "\tiw8"
 *   insn=0x000000000039FBF8 string=0x000000000039FBFC "@"
 *   insn=0x000000000039FBFC string=0x000000000039FC00 "h"
 *   insn=0x000000000039FBFC string=0x000000000039FC44 ""
 *   insn=0x000000000039FC00 string=0x000000000039FC04 ""
 *   insn=0x000000000039FC10 string=0x000000000039FC14 "\t"
 *   insn=0x000000000039FC14 string=0x000000000039FC18 "\n"
 *   insn=0x000000000039FC18 string=0x000000000039FC1C "8i"
 *   insn=0x000000000039FC20 string=0x000000000039FC30 "\ti"
 *   insn=0x000000000039FC30 string=0x000000000039FC34 ")"
 *   insn=0x000000000039FC34 string=0x000000000039FC38 "?"
 *   insn=0x000000000039FC60 string=0x000000000039FCA0 "h"
 *   insn=0x000000000039FC68 string=0x000000000039FC6C "("
 *   insn=0x000000000039FC6C string=0x000000000039FC70 ")x"
 *   insn=0x000000000039FC70 string=0x000000000039FC74 "("
 *   insn=0x000000000039FC78 string=0x000000000039FC7C " "
 *   insn=0x000000000039FC80 string=0x000000000039FC84 ""
 *   insn=0x000000000039FC84 string=0x000000000039FC88 ""
 *   insn=0x000000000039FC98 string=0x000000000039FC9C "@"
 *   insn=0x000000000039FCA0 string=0x000000000039FCA4 ""
 *   insn=0x000000000039FCB0 string=0x000000000039FCB8 "J#"
 *   insn=0x000000000039FCB0 string=0x00000000005914D2 "enablecheatpassu"
 *   insn=0x000000000039FCBC string=0x000000000039FCC0 "h"
 *   insn=0x000000000039FCC0 string=0x000000000039FCC4 ""
 *   insn=0x000000000039FCD0 string=0x000000000039FCD8 "B#"
 *   insn=0x000000000039FCD0 string=0x00000000005914E3 "disablecheat"
 *   insn=0x000000000039FCDC string=0x000000000039FCE0 "h"
 *   insn=0x000000000039FCE0 string=0x000000000039FCE4 ""
 *   insn=0x000000000039FCF0 string=0x000000000039FCF8 ":#"
 *   insn=0x000000000039FCF0 string=0x00000000005914F0 "showdebugpassu"
 *   insn=0x000000000039FCFC string=0x000000000039FD00 "h"
 *   insn=0x000000000039FD00 string=0x000000000039FD04 ""
 *   insn=0x000000000039FD10 string=0x000000000039FD18 "2#"
 *   insn=0x000000000039FD10 string=0x00000000005914FF "testconsume1337"
 *   insn=0x000000000039FD1C string=0x000000000039FD20 "h"
 *   insn=0x000000000039FD20 string=0x000000000039FD24 ""
 *   insn=0x000000000039FD30 string=0x000000000039FD38 "*#"
 *   insn=0x000000000039FD30 string=0x000000000059150F "usetestads1337"
 *   insn=0x000000000039FD40 string=0x000000000039FD44 ""
 *   insn=0x000000000039FD40 string=0x00000000001F93B0 "0'"
 *   insn=0x000000000039FD44 string=0x000000000039FD48 ""
 *   insn=0x000000000039FD58 string=0x000000000039FD5C ""
 *   insn=0x000000000039FD60 string=0x000000000039FF58 "h"
 *   insn=0x000000000039FD6C string=0x000000000039FD70 "T"
 *   insn=0x000000000039FD70 string=0x000000000039FD74 "U"
 *   insn=0x000000000039FD74 string=0x000000000039FDDC "x"
 *   insn=0x000000000039FD78 string=0x000000000039FDD8 ""c"
 *   insn=0x000000000039FD7C string=0x000000000039FD80 ""
 *   insn=0x000000000039FD9C string=0x000000000039FDD0 "u"
 *   insn=0x000000000039FDA0 string=0x000000000039FDA4 "\t@"
 *   insn=0x000000000039FDB0 string=0x000000000039FDB4 ""
 *   insn=0x000000000039FDC0 string=0x000000000039FDC4 "@"
 *   insn=0x000000000039FDD8 string=0x00000000001F8A60 "0'"
 *   insn=0x000000000039FDE8 string=0x000000000039FDF8 "a"
 *   insn=0x000000000039FDEC string=0x000000000039FDF0 ""
 *   insn=0x000000000039FDF8 string=0x000000000058EEA4 "town_herohouse"
 *   insn=0x000000000039FE04 string=0x000000000039FE08 "l"
 *   insn=0x000000000039FE18 string=0x00000000001F6D50 "0'"
 *   insn=0x000000000039FE1C string=0x000000000039FE20 "a"
 *   insn=0x000000000039FE20 string=0x000000000058EEDB "movieplayed"
 *   insn=0x000000000039FE2C string=0x000000000039FE30 "b"
 *   insn=0x000000000039FE3C string=0x00000000001F71F0 "0'"
 *   insn=0x000000000039FE40 string=0x000000000039FE44 "9"
 *   insn=0x000000000039FE44 string=0x000000000039FE48 "9"
 *   insn=0x000000000039FE50 string=0x000000000039FE54 "a"
 *   insn=0x000000000039FE54 string=0x00000000003A0120 ")"
 *   insn=0x000000000039FE64 string=0x000000000039FE68 "4"
 *   insn=0x000000000039FE64 string=0x00000000003A0144 ")"
 *   insn=0x000000000039FE6C string=0x000000000039FE70 ""
 *   insn=0x000000000039FE7C string=0x000000000039FE80 "\t@"
 *   insn=0x000000000039FE8C string=0x000000000039FE90 ""
 *   insn=0x000000000039FE9C string=0x000000000039FEA0 "@"
 *   insn=0x000000000039FEB8 string=0x000000000039FEBC ""
 *   insn=0x000000000039FEC4 string=0x000000000059151E "quest01_find_master"
 *   insn=0x000000000039FED0 string=0x000000000039FED4 "9"
 *   insn=0x000000000039FEDC string=0x000000000039FEE0 "pa"
 *   insn=0x000000000039FEE0 string=0x00000000001F84A0 "0'"
 *   insn=0x000000000039FEF4 string=0x000000000039FEF8 "4"
 *   insn=0x000000000039FEF4 string=0x00000000003A0168 ")"
 *   insn=0x000000000039FEF8 string=0x000000000039FF3C "U"
 *   insn=0x000000000039FEFC string=0x000000000039FF00 ""
 *   insn=0x000000000039FF0C string=0x000000000039FF10 "\t@"
 *   insn=0x000000000039FF1C string=0x000000000039FF20 ""
 *   insn=0x000000000039FF2C string=0x000000000039FF30 "@"
 *   insn=0x000000000039FF54 string=0x00000000001FCE10 "0'"
 *   insn=0x000000000039FF80 string=0x000000000039FF84 ")"
 *   insn=0x000000000039FF84 string=0x000000000039FF88 ")"
 *   insn=0x000000000039FF90 string=0x000000000039FF94 "A\t"
 *   insn=0x000000000039FF94 string=0x00000000003A00BC ")"
 *   insn=0x000000000039FF98 string=0x000000000039FF9C ")"
 *   insn=0x000000000039FF9C string=0x000000000039FFA0 ")"
 *   insn=0x000000000039FFA8 string=0x000000000039FFAC "a"
 *   insn=0x000000000039FFAC string=0x00000000003A0098 ")"
 *   insn=0x000000000039FFBC string=0x00000000003A023C "%X"
 *   insn=0x000000000039FFDC string=0x000000000039FFE0 ""
 *   insn=0x000000000039FFE0 string=0x000000000039FFE4 "-@"
 *   insn=0x000000000039FFF0 string=0x000000000039FFF4 ""
 *   insn=0x000000000039FFF4 string=0x000000000039FFF8 "!@"
 *   insn=0x00000000003A0010 string=0x00000000003A0014 ""
 *   insn=0x00000000003A0038 string=0x00000000001F9B10 "0'"
 *   insn=0x00000000003A0048 string=0x00000000003A004C "A"
 *   insn=0x00000000003A004C string=0x00000000003A01F4 ")"
 *   insn=0x00000000003A0054 string=0x00000000003A0058 ""
 *   insn=0x00000000003A0064 string=0x00000000003A0068 "\t@"
 *   insn=0x00000000003A0074 string=0x00000000003A0078 ""
 *   insn=0x00000000003A0084 string=0x00000000003A0088 "@"
 *   insn=0x00000000003A0098 string=0x00000000003A009C ")=G"
 *   insn=0x00000000003A009C string=0x00000000003A00A0 "!"
 *   insn=0x00000000003A00A4 string=0x00000000003A00A8 "\t"
 *   insn=0x00000000003A00A4 string=0x00000000003A00E0 "\t"
 *   insn=0x00000000003A00A8 string=0x00000000003A00AC "*"
 *   insn=0x00000000003A00AC string=0x00000000003A00B0 "\n"
 *   insn=0x00000000003A00B4 string=0x00000000003A00B8 ""
 *   insn=0x00000000003A00B8 string=0x00000000003A00EC "?"
 *   insn=0x00000000003A00BC string=0x00000000003A00C0 ")=G"
 *   insn=0x00000000003A00C0 string=0x00000000003A00C4 "!"
 *   insn=0x00000000003A00C8 string=0x00000000003A00CC "\t"
 *   insn=0x00000000003A00C8 string=0x00000000003A0100 "\t"
 *   insn=0x00000000003A00CC string=0x00000000003A00D0 "*"
 *   insn=0x00000000003A00D0 string=0x00000000003A00D4 "\n"
 *   insn=0x00000000003A00DC string=0x00000000003A010C "?"
 *   insn=0x00000000003A00E0 string=0x00000000003A00E4 "*"
 *   insn=0x00000000003A00E4 string=0x00000000003A00E8 "\n"
 *   insn=0x00000000003A0100 string=0x00000000003A0104 "*"
 *   insn=0x00000000003A0104 string=0x00000000003A0108 "\n"
 *   insn=0x00000000003A010C string=0x00000000003A0110 "L"
 *   insn=0x00000000003A0120 string=0x00000000003A0124 ")=G"
 *   insn=0x00000000003A0124 string=0x00000000003A0128 "!"
 *   insn=0x00000000003A0128 string=0x00000000003A012C "\t"
 *   insn=0x00000000003A012C string=0x00000000003A0130 "\t"
 *   insn=0x00000000003A012C string=0x00000000003A018C "\t"
 *   insn=0x00000000003A0130 string=0x00000000003A0134 "*"
 *   insn=0x00000000003A0134 string=0x00000000003A0138 "\n"
 *   insn=0x00000000003A0140 string=0x00000000003A0198 "?"
 *   insn=0x00000000003A0144 string=0x00000000003A0148 ")=G"
 *   insn=0x00000000003A0148 string=0x00000000003A014C "!"
 *   insn=0x00000000003A0150 string=0x00000000003A0154 "\t"
 *   insn=0x00000000003A0150 string=0x00000000003A01AC "\t"
 *   insn=0x00000000003A0154 string=0x00000000003A0158 "*"
 *   insn=0x00000000003A0158 string=0x00000000003A015C "\n"
 *   insn=0x00000000003A0164 string=0x00000000003A01B8 "?"
 *   insn=0x00000000003A0168 string=0x00000000003A016C ")=G"
 *   insn=0x00000000003A016C string=0x00000000003A0170 "!"
 *   insn=0x00000000003A0174 string=0x00000000003A0178 "\t"
 *   insn=0x00000000003A0174 string=0x00000000003A01D0 "\t"
 *   insn=0x00000000003A0178 string=0x00000000003A017C "*"
 *   insn=0x00000000003A017C string=0x00000000003A0180 "\n"
 *   insn=0x00000000003A0188 string=0x00000000003A01DC "?"
 *   insn=0x00000000003A018C string=0x00000000003A0190 "*"
 *   insn=0x00000000003A0190 string=0x00000000003A0194 "\n"
 *   insn=0x00000000003A01A4 string=0x00000000003A01A8 ","
 *   insn=0x00000000003A01AC string=0x00000000003A01B0 "*"
 *   insn=0x00000000003A01B0 string=0x00000000003A01B4 "\n"
 *   insn=0x00000000003A01B8 string=0x00000000003A01BC "l"
 *   insn=0x00000000003A01C0 string=0x00000000003A01C4 "x("
 *   insn=0x00000000003A01C4 string=0x00000000003A01C8 "4"
 *   insn=0x00000000003A01C8 string=0x00000000003A01CC "8"
 *   insn=0x00000000003A01D0 string=0x00000000003A01D4 "*"
 *   insn=0x00000000003A01D4 string=0x00000000003A01D8 "\n"
 *   insn=0x00000000003A01E4 string=0x00000000003A01E8 "o("
 *   insn=0x00000000003A01EC string=0x00000000003A01F0 "S"
 *   insn=0x00000000003A01F4 string=0x00000000003A01F8 ")=G"
 *   insn=0x00000000003A01F8 string=0x00000000003A01FC "!"
 *   insn=0x00000000003A0200 string=0x00000000003A0204 "\t"
 *   insn=0x00000000003A0200 string=0x00000000003A0218 "\t"
 *   insn=0x00000000003A0204 string=0x00000000003A0208 "*"
 *   insn=0x00000000003A0208 string=0x00000000003A020C "\n"
 *   insn=0x00000000003A0214 string=0x00000000003A0224 "?"
 *   insn=0x00000000003A0218 string=0x00000000003A021C "*"
 *   insn=0x00000000003A021C string=0x00000000003A0220 "\n"
 *   insn=0x00000000003A0224 string=0x00000000003A0228 "L"
 *   insn=0x00000000003A022C string=0x00000000003A0230 "]("
 *   insn=0x00000000003A0234 string=0x00000000003A0238 "B"
 *   insn=0x00000000003A023C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A0244 string=0x00000000003A0248 "(a"
 *   insn=0x00000000003A0250 string=0x00000000003A0254 "*"
 *   insn=0x00000000003A0250 string=0x00000000003A02A4 "t"
 *   insn=0x00000000003A0254 string=0x00000000003A0258 "J=G"
 *   insn=0x00000000003A0258 string=0x00000000003A025C ")!"
 *   insn=0x00000000003A0260 string=0x00000000003A0264 "*"
 *   insn=0x00000000003A0260 string=0x00000000003A0278 "*"
 *   insn=0x00000000003A0264 string=0x00000000003A0268 "K"
 *   insn=0x00000000003A0268 string=0x00000000003A026C "+"
 *   insn=0x00000000003A0274 string=0x00000000003A0284 "_"
 *   insn=0x00000000003A0278 string=0x00000000003A027C "K"
 *   insn=0x00000000003A027C string=0x00000000003A0280 "+"
 *   insn=0x00000000003A0290 string=0x00000000003A0294 "D("
 *   insn=0x00000000003A02A8 string=0x00000000003A02AC ""
 *   insn=0x00000000003A02B8 string=0x00000000003A02BC "\t@"
 *   insn=0x00000000003A02C8 string=0x00000000003A02CC ""
 *   insn=0x00000000003A02D8 string=0x00000000003A02DC "@"
 *   insn=0x00000000003A02F4 string=0x00000000003A02F8 "(a"
 *   insn=0x00000000003A0300 string=0x00000000003A0304 "*"
 *   insn=0x00000000003A0304 string=0x00000000003A0308 "J=G"
 *   insn=0x00000000003A0308 string=0x00000000003A030C ")!"
 *   insn=0x00000000003A0310 string=0x00000000003A0314 "*"
 *   insn=0x00000000003A0310 string=0x00000000003A0328 "*"
 *   insn=0x00000000003A0314 string=0x00000000003A0318 "K"
 *   insn=0x00000000003A0318 string=0x00000000003A031C "+"
 *   insn=0x00000000003A0324 string=0x00000000003A0334 "_"
 *   insn=0x00000000003A0328 string=0x00000000003A032C "K"
 *   insn=0x00000000003A032C string=0x00000000003A0330 "+"
 *   insn=0x00000000003A0348 string=0x00000000003A034C "y"
 *   insn=0x00000000003A0358 string=0x00000000003A035C ""
 *   insn=0x00000000003A0360 string=0x00000000003A0364 "a"
 *   insn=0x00000000003A0368 string=0x00000000003A036C "\t@"
 *   insn=0x00000000003A0378 string=0x00000000003A037C ""
 *   insn=0x00000000003A0380 string=0x00000000003A0384 "a"
 *   insn=0x00000000003A0388 string=0x00000000003A038C "@"
 *   insn=0x00000000003A0394 string=0x00000000003A0398 "f"
 *   insn=0x00000000003A039C string=0x00000000003A03A0 "*"
 *   insn=0x00000000003A03A0 string=0x00000000003A03A4 "J"
 *   insn=0x00000000003A03A8 string=0x00000000003A03AC "(a"
 *   insn=0x00000000003A03B4 string=0x00000000003A03B8 "*"
 *   insn=0x00000000003A03B8 string=0x00000000003A03BC "J=G"
 *   insn=0x00000000003A03BC string=0x00000000003A03C0 ")!"
 *   insn=0x00000000003A03C4 string=0x00000000003A03C8 "*"
 *   insn=0x00000000003A03C4 string=0x00000000003A03DC "*"
 *   insn=0x00000000003A03C8 string=0x00000000003A03CC "K"
 *   insn=0x00000000003A03CC string=0x00000000003A03D0 "+"
 *   insn=0x00000000003A03D8 string=0x00000000003A03E8 "_"
 *   insn=0x00000000003A03DC string=0x00000000003A03E0 "K"
 *   insn=0x00000000003A03E0 string=0x00000000003A03E4 "+"
 *   insn=0x00000000003A0408 string=0x00000000003A040C ")"
 *   insn=0x00000000003A040C string=0x00000000003A0410 ")"
 *   insn=0x00000000003A041C string=0x00000000003A0420 ")"
 *   insn=0x00000000003A041C string=0x00000000003A046C "4"
 *   insn=0x00000000003A0420 string=0x00000000003A0424 ")=G"
 *   insn=0x00000000003A0424 string=0x00000000003A0428 "!"
 *   insn=0x00000000003A042C string=0x00000000003A0430 "\t"
 *   insn=0x00000000003A042C string=0x00000000003A0444 "\t"
 *   insn=0x00000000003A0430 string=0x00000000003A0434 "*"
 *   insn=0x00000000003A0434 string=0x00000000003A0438 "\n"
 *   insn=0x00000000003A0440 string=0x00000000003A0450 "?"
 *   insn=0x00000000003A0444 string=0x00000000003A0448 "*"
 *   insn=0x00000000003A0448 string=0x00000000003A044C "\n"
 *   insn=0x00000000003A0460 string=0x00000000003A0464 "3"
 *   insn=0x00000000003A0470 string=0x00000000003A0474 ""
 *   insn=0x00000000003A0480 string=0x00000000003A0484 "\t@"
 *   insn=0x00000000003A0490 string=0x00000000003A0494 ""
 *   insn=0x00000000003A04A0 string=0x00000000003A04A4 "@"
 *   insn=0x00000000003A04AC string=0x00000000003A04B0 " "
 *   insn=0x00000000003A04B8 string=0x00000000003A04BC "*"
 *   insn=0x00000000003A04BC string=0x00000000003A04C0 "J"
 *   insn=0x00000000003A04C4 string=0x00000000003A04C8 "(a"
 *   insn=0x00000000003A04D0 string=0x00000000003A04D4 "*"
 *   insn=0x00000000003A04D4 string=0x00000000003A04D8 "J=G"
 *   insn=0x00000000003A04D8 string=0x00000000003A04DC ")!"
 *   insn=0x00000000003A04E0 string=0x00000000003A04E4 "*"
 *   insn=0x00000000003A04E0 string=0x00000000003A04F8 "*"
 *   insn=0x00000000003A04E4 string=0x00000000003A04E8 "K"
 *   insn=0x00000000003A04E8 string=0x00000000003A04EC "+"
 *   insn=0x00000000003A04F4 string=0x00000000003A0504 "_"
 *   insn=0x00000000003A04F8 string=0x00000000003A04FC "K"
 *   insn=0x00000000003A04FC string=0x00000000003A0500 "+"
 *   insn=0x00000000003A0504 string=0x00000000003A0508 "L"
 *   insn=0x00000000003A0530 string=0x00000000003A0534 ")"
 *   insn=0x00000000003A0534 string=0x00000000003A0538 ")"
 *   insn=0x00000000003A0544 string=0x00000000003A0548 ")"
 *   insn=0x00000000003A0548 string=0x00000000003A054C ")=G"
 *   insn=0x00000000003A054C string=0x00000000003A0550 "!"
 *   insn=0x00000000003A0550 string=0x00000000003A0554 "i"
 *   insn=0x00000000003A0554 string=0x00000000003A0558 "\t"
 *   insn=0x00000000003A0554 string=0x00000000003A0580 "\t"
 *   insn=0x00000000003A0558 string=0x00000000003A055C "*"
 *   insn=0x00000000003A055C string=0x00000000003A0560 "\n"
 *   insn=0x00000000003A0564 string=0x00000000003A0568 "?"
 *   insn=0x00000000003A0568 string=0x00000000003A056C "l"
 *   insn=0x00000000003A0580 string=0x00000000003A0584 "*"
 *   insn=0x00000000003A0584 string=0x00000000003A0588 "\n"
 *   insn=0x00000000003A0588 string=0x00000000003A058C "?"
 *   insn=0x00000000003A058C string=0x00000000003A0590 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfilePanelView::DeleteTextFieldValueChanged(__int64 a1, __int64 a2)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x23
  char v6; // w21
  _QWORD *v7; // x0
  __int64 v8; // x8
  int v9; // w24
  _QWORD *v10; // x0
  int v11; // w24
  _DWORD *v12; // x0
  int v13; // w1
  unsigned int v14; // w8
  int v15; // w0
  int v16; // w0
  int v17; // w0
  Caver::StoreController *v18; // x0
  int v19; // w0
  Caver::StoreController *v20; // x0
  int v21; // w0
  Caver::OnlineController *v22; // x0
  __int64 v23; // x0
  Caver::PlayerProfile *v24; // x0
  Caver::PlayerProfile **v25; // x23
  int v26; // w24
  _QWORD *v27; // x20
  __int64 v28; // x21
  __int64 v29; // x8
  _QWORD *v30; // x20
  void *v31; // x0
  void *v32; // x0
  __int64 v33; // x8
  __int64 v34; // x8
  _QWORD *v35; // x20
  __int64 v36; // x21
  void *v37; // x0
  __int64 v38; // x8
  __int64 v39; // x8
  Caver::PlayerProfile *v40; // x0
  void (__fastcall *v41)(__int64, __int64 *); // x20
  void *v42; // x0
  void *v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  _QWORD *v46; // x20
  void *v47; // x0
  __int64 v48; // x8
  __int64 v49; // x8
  unsigned int *v50; // x8
  int v51; // w9
  unsigned int *v52; // x8
  int v53; // w9
  unsigned int *v54; // x8
  int v55; // w9
  unsigned int *v56; // x8
  int v57; // w9
  unsigned int *v58; // x8
  int v59; // w9
  unsigned int *v60; // x8
  int v61; // w9
  __int64 v62; // [xsp+10h] [xbp-70h] BYREF
  __int64 v63; // [xsp+20h] [xbp-60h] BYREF
  _QWORD v64[3]; // [xsp+28h] [xbp-58h] BYREF

  v64[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v64, "delete");
  v4 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 344LL))(a2) - 24LL);
  if ( v4 == *(_QWORD *)(v64[0] - 24LL) )
  {
    if ( !v4 )
    {
      v6 = 1;
      v12 = *(_DWORD **)(a1 + 304);
      if ( !v12 )
        goto LABEL_19;
      goto LABEL_14;
    }
    v5 = 0;
    v6 = 1;
    do
    {
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 344LL))(a2);
      v8 = v64[0];
      v9 = *(unsigned __int8 *)(*v7 + v5);
      if ( (*(_DWORD *)(v64[0] - 8LL) & 0x80000000) == 0 )
      {
        sub_568EA8(v64);
        v8 = v64[0];
      }
      if ( v9 != *(unsigned __int8 *)(v8 + v5) )
      {
        v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 344LL))(a2);
        v8 = v64[0];
        v11 = *(char *)(*v10 + v5);
        if ( (*(_DWORD *)(v64[0] - 8LL) & 0x80000000) == 0 )
        {
          sub_568EA8(v64);
          v8 = v64[0];
        }
        v6 &= *(char *)(v8 + v5) - 32 == v11;
      }
      ++v5;
    }
    while ( v5 < *(_QWORD *)(v8 - 24) );
  }
  else
  {
    v6 = 0;
  }
  v12 = *(_DWORD **)(a1 + 304);
  if ( !v12 )
    goto LABEL_19;
LABEL_14:
  v13 = v12[72];
  v14 = v13 | 2;
  if ( (v6 & 1) != 0 )
    v14 = v13 & 0xFFFFFFFD;
  v12[72] = v14;
  if ( v14 != v13 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 304LL))(v12);
LABEL_19:
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 344LL))(a2);
  if ( (unsigned int)sub_5689E0(v15, "enablecheatpassu") )
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 344LL))(a2);
    if ( (unsigned int)sub_5689E0(v16, "disablecheat") )
    {
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 344LL))(a2);
      v18 = (Caver::StoreController *)sub_5689E0(v17, "showdebugpassu");
      if ( (_DWORD)v18 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 344LL))(a2);
        v20 = (Caver::StoreController *)sub_5689E0(v19, "testconsume1337");
        if ( (_DWORD)v20 )
        {
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 344LL))(a2);
          v22 = (Caver::OnlineController *)sub_5689E0(v21, "usetestads1337");
          if ( !(_DWORD)v22 )
          {
            v23 = Caver::OnlineController::SharedController(v22);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 280LL))(v23, 1);
          }
        }
        else
        {
          v45 = Caver::StoreController::SharedController(v20);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 64LL))(v45);
        }
      }
      else
      {
        v44 = Caver::StoreController::SharedController(v18);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 88LL))(v44);
      }
      goto LABEL_57;
    }
    v24 = *(Caver::PlayerProfile **)(a1 + 360);
    if ( *((_BYTE *)v24 + 192) )
    {
      v26 = 0;
      v25 = (Caver::PlayerProfile **)(a1 + 360);
      v28 = *((_QWORD *)v24 + 16);
      v27 = (_QWORD *)*((_QWORD *)v24 + 17);
      if ( v27 )
      {
LABEL_31:
        if ( !v27[1] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
          v29 = v27[2] - 1LL;
          v27[2] = v29;
          if ( !v29 )
            (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
        }
        if ( v28 )
        {
LABEL_37:
          if ( !v26 )
          {
LABEL_55:
            v40 = *v25;
            *((_BYTE *)v40 + 192) = v26;
            Caver::PlayerProfile::Save(v40);
            goto LABEL_56;
          }
          v30 = (_QWORD *)*((_QWORD *)*v25 + 17);
          if ( v30 )
            ++v30[1];
          sub_566BB8((int)&v63, "town_herohouse");
          Caver::GameState::StateForLevelWithName();
          sub_566BB8((int)&v62, "movieplayed");
          Caver::StateProperties::AddFlag();
          v31 = (void *)(v62 - 24);
          if ( (__int64 *)(v62 - 24) != &qword_6FD2E0 )
          {
            v54 = (unsigned int *)(v62 - 8);
            if ( &pthread_create )
            {
              do
                v55 = __ldaxr(v54);
              while ( __stlxr(v55 - 1, v54) );
            }
            else
            {
              v55 = (*v54)--;
            }
            if ( v55 <= 0 )
              operator delete(v31);
          }
          v32 = (void *)(v63 - 24);
          if ( (__int64 *)(v63 - 24) == &qword_6FD2E0 )
            goto LABEL_42;
          v56 = (unsigned int *)(v63 - 8);
          if ( &pthread_create )
          {
            do
              v57 = __ldaxr(v56);
            while ( __stlxr(v57 - 1, v56) );
          }
          else
          {
            v57 = (*v56)--;
          }
          if ( v57 > 0 )
          {
LABEL_42:
            if ( !v30 )
              goto LABEL_46;
          }
          else
          {
            operator delete(v32);
            if ( !v30 )
              goto LABEL_46;
          }
          v33 = v30[1] - 1LL;
          v30[1] = v33;
          if ( !v33 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
            v34 = v30[2] - 1LL;
            v30[2] = v34;
            if ( !v34 )
              (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
          }
LABEL_46:
          v35 = (_QWORD *)*((_QWORD *)*v25 + 17);
          if ( v35 )
            ++v35[1];
          sub_566BB8((int)&v63, "quest01_find_master");
          v36 = Caver::GameState::StateForQuestWithName();
          v37 = (void *)(v63 - 24);
          if ( (__int64 *)(v63 - 24) == &qword_6FD2E0 )
            goto LABEL_49;
          v58 = (unsigned int *)(v63 - 8);
          if ( &pthread_create )
          {
            do
              v59 = __ldaxr(v58);
            while ( __stlxr(v59 - 1, v58) );
          }
          else
          {
            v59 = (*v58)--;
          }
          if ( v59 > 0 )
          {
LABEL_49:
            if ( !v35 )
              goto LABEL_53;
          }
          else
          {
            operator delete(v37);
            if ( !v35 )
              goto LABEL_53;
          }
          v38 = v35[1] - 1LL;
          v35[1] = v38;
          if ( !v38 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
            v39 = v35[2] - 1LL;
            v35[2] = v39;
            if ( !v39 )
              (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
          }
LABEL_53:
          if ( v36 )
          {
LABEL_54:
            *(_BYTE *)(v36 + 8) = 1;
            goto LABEL_55;
          }
          v46 = (_QWORD *)*((_QWORD *)*v25 + 17);
          if ( v46 )
            ++v46[1];
          sub_566BB8((int)&v63, "quest01_find_master");
          v36 = Caver::GameState::AddStateForQuestWithName();
          v47 = (void *)(v63 - 24);
          if ( (__int64 *)(v63 - 24) == &qword_6FD2E0 )
            goto LABEL_64;
          v60 = (unsigned int *)(v63 - 8);
          if ( &pthread_create )
          {
            do
              v61 = __ldaxr(v60);
            while ( __stlxr(v61 - 1, v60) );
          }
          else
          {
            v61 = (*v60)--;
          }
          if ( v61 > 0 )
          {
LABEL_64:
            if ( !v46 )
              goto LABEL_54;
          }
          else
          {
            operator delete(v47);
            if ( !v46 )
              goto LABEL_54;
          }
          v48 = v46[1] - 1LL;
          v46[1] = v48;
          if ( !v48 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v46 + 16LL))(v46);
            v49 = v46[2] - 1LL;
            v46[2] = v49;
            if ( !v49 )
              (*(void (__fastcall **)(_QWORD *))(*v46 + 24LL))(v46);
          }
          goto LABEL_54;
        }
        v24 = *v25;
LABEL_36:
        Caver::PlayerProfile::LoadGameState(v24);
        goto LABEL_37;
      }
LABEL_27:
      if ( v28 )
        goto LABEL_37;
      goto LABEL_36;
    }
  }
  else
  {
    v24 = *(Caver::PlayerProfile **)(a1 + 360);
    if ( !*((_BYTE *)v24 + 192) )
    {
      v25 = (Caver::PlayerProfile **)(a1 + 360);
      v26 = 1;
      v28 = *((_QWORD *)v24 + 16);
      v27 = (_QWORD *)*((_QWORD *)v24 + 17);
      if ( v27 )
        goto LABEL_31;
      goto LABEL_27;
    }
  }
LABEL_56:
  v41 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 352LL);
  sub_566BB8((int)&v63, "");
  v41(a2, &v63);
  v42 = (void *)(v63 - 24);
  if ( (__int64 *)(v63 - 24) != &qword_6FD2E0 )
  {
    v52 = (unsigned int *)(v63 - 8);
    if ( &pthread_create )
    {
      do
        v53 = __ldaxr(v52);
      while ( __stlxr(v53 - 1, v52) );
    }
    else
    {
      v53 = (*v52)--;
    }
    if ( v53 <= 0 )
      operator delete(v42);
  }
LABEL_57:
  v43 = (void *)(v64[0] - 24LL);
  if ( (__int64 *)(v64[0] - 24LL) != &qword_6FD2E0 )
  {
    v50 = (unsigned int *)(v64[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v51 = __ldaxr(v50);
      while ( __stlxr(v51 - 1, v50) );
    }
    else
    {
      v51 = (*v50)--;
    }
    if ( v51 <= 0 )
      operator delete(v43);
  }
}

