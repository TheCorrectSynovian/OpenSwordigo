/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000351C5C
 * Mangled: _ZN5Caver18GameViewController13LoadGameStateEv
 * Demangled: Caver::GameViewController::LoadGameState(void)
 *
 * Callers: 2
 *   0x00000000001FDD80  Caver::GameViewController::LoadGameState(void)
 *   0x0000000000351478  Caver::GameViewController::~GameViewController()
 *
 * Callees: 15
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D50  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *   0x00000000001FB110  Caver::CharacterState::ExperiencePointsRequiredForLevel(int)
 *   0x00000000001FBAC0  Caver::MapNode::ExperienceLevel(void)
 *   0x00000000001FD830  Caver::PlayerProfile::Load(void)
 *   0x00000000001FE550  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x0000000000202260  Caver::Map::NodeForName(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 324
 *   insn=0x0000000000351C74 string=0x0000000000351C78 "W"
 *   insn=0x0000000000351C84 string=0x0000000000351C88 "`F@"
 *   insn=0x0000000000351C8C string=0x0000000000351C90 ""
 *   insn=0x0000000000351C8C string=0x0000000000351E2C "hV@"
 *   insn=0x0000000000351C90 string=0x0000000000351C94 "H"
 *   insn=0x0000000000351C94 string=0x0000000000351CDC "hF@"
 *   insn=0x0000000000351C98 string=0x00000000001FD830 "0'"
 *   insn=0x0000000000351C9C string=0x0000000000351CA0 "tF@"
 *   insn=0x0000000000351CA4 string=0x000000000058EE84 "newplayer"
 *   insn=0x0000000000351CBC string=0x0000000000351CC0 "$"
 *   insn=0x0000000000351CC8 string=0x0000000000351CCC ")"
 *   insn=0x0000000000351CDC string=0x0000000000351CE0 "QG"
 *   insn=0x0000000000351CE4 string=0x0000000000351CF4 "uR@"
 *   insn=0x0000000000351CE8 string=0x0000000000351CEC ")\t"
 *   insn=0x0000000000351CF4 string=0x0000000000351CF8 "h"
 *   insn=0x0000000000351CF8 string=0x0000000000351CFC "5"
 *   insn=0x0000000000351CFC string=0x0000000000351D40 "4"
 *   insn=0x0000000000351D00 string=0x0000000000351D04 ""
 *   insn=0x0000000000351D10 string=0x0000000000351D14 "\t@"
 *   insn=0x0000000000351D20 string=0x0000000000351D24 ""
 *   insn=0x0000000000351D30 string=0x0000000000351D34 "@"
 *   insn=0x0000000000351D40 string=0x0000000000351D84 "hF@"
 *   insn=0x0000000000351D44 string=0x0000000000351D48 ""
 *   insn=0x0000000000351D58 string=0x0000000000351D5C "\t@"
 *   insn=0x0000000000351D64 string=0x0000000000351D68 ""
 *   insn=0x0000000000351D78 string=0x0000000000351D7C "@"
 *   insn=0x0000000000351D84 string=0x0000000000351D88 "QH"
 *   insn=0x0000000000351D8C string=0x0000000000351D9C "uZ@"
 *   insn=0x0000000000351D90 string=0x0000000000351D94 ")\t"
 *   insn=0x0000000000351D9C string=0x0000000000351DA0 "h"
 *   insn=0x0000000000351DA0 string=0x0000000000351DA4 "5"
 *   insn=0x0000000000351DA4 string=0x0000000000351DE8 "4"
 *   insn=0x0000000000351DA8 string=0x0000000000351DAC ""
 *   insn=0x0000000000351DB8 string=0x0000000000351DBC "\t@"
 *   insn=0x0000000000351DC8 string=0x0000000000351DCC ""
 *   insn=0x0000000000351DD8 string=0x0000000000351DDC "@"
 *   insn=0x0000000000351DEC string=0x0000000000351DF0 ""
 *   insn=0x0000000000351E00 string=0x0000000000351E04 "\t@"
 *   insn=0x0000000000351E0C string=0x0000000000351E10 ""
 *   insn=0x0000000000351E20 string=0x0000000000351E24 "@"
 *   insn=0x0000000000351E2C string=0x0000000000351E30 "\t"
 *   insn=0x0000000000351E30 string=0x0000000000351E34 ")"
 *   insn=0x0000000000351E34 string=0x0000000000351E38 "\t"
 *   insn=0x0000000000351E34 string=0x0000000000351FD8 "tV@"
 *   insn=0x0000000000351E38 string=0x0000000000351E3C "\n"
 *   insn=0x0000000000351E44 string=0x0000000000351E48 ")y"
 *   insn=0x0000000000351E48 string=0x0000000000351E4C "J})"
 *   insn=0x0000000000351E4C string=0x0000000000351E50 ")"
 *   insn=0x0000000000351E50 string=0x0000000000351E54 "J)"
 *   insn=0x0000000000351E58 string=0x0000000000351E5C "\t)"
 *   insn=0x0000000000351E78 string=0x0000000000351E7C "a"
 *   insn=0x0000000000351E7C string=0x0000000000351E80 "vV@"
 *   insn=0x0000000000351EAC string=0x0000000000351EB0 "uV@"
 *   insn=0x0000000000351EB4 string=0x00000000005948C9 "portal"
 *   insn=0x0000000000351EC0 string=0x0000000000351EC4 "=S"
 *   insn=0x0000000000351EE4 string=0x0000000000351EE8 ")=G"
 *   insn=0x0000000000351EE8 string=0x0000000000351EEC "!"
 *   insn=0x0000000000351EF0 string=0x0000000000351EF4 "\t"
 *   insn=0x0000000000351EF0 string=0x0000000000352508 "\t"
 *   insn=0x0000000000351EF4 string=0x0000000000351EF8 "*"
 *   insn=0x0000000000351EF8 string=0x0000000000351EFC "\n"
 *   insn=0x0000000000351F04 string=0x0000000000352514 "?"
 *   insn=0x0000000000351F08 string=0x0000000000351F0C ")=G"
 *   insn=0x0000000000351F0C string=0x0000000000351F10 "!"
 *   insn=0x0000000000351F14 string=0x0000000000351F18 "\t"
 *   insn=0x0000000000351F14 string=0x0000000000351F50 "\t"
 *   insn=0x0000000000351F18 string=0x0000000000351F1C "*"
 *   insn=0x0000000000351F1C string=0x0000000000351F20 "\n"
 *   insn=0x0000000000351F24 string=0x0000000000351F28 ""
 *   insn=0x0000000000351F28 string=0x0000000000351F5C "?"
 *   insn=0x0000000000351F2C string=0x0000000000351F30 ")=G"
 *   insn=0x0000000000351F30 string=0x0000000000351F34 "!"
 *   insn=0x0000000000351F38 string=0x0000000000351F3C "\t"
 *   insn=0x0000000000351F38 string=0x0000000000352528 "\t"
 *   insn=0x0000000000351F3C string=0x0000000000351F40 "*"
 *   insn=0x0000000000351F40 string=0x0000000000351F44 "\n"
 *   insn=0x0000000000351F48 string=0x0000000000351F4C "z"
 *   insn=0x0000000000351F4C string=0x0000000000352534 "?"
 *   insn=0x0000000000351F50 string=0x0000000000351F54 "*"
 *   insn=0x0000000000351F54 string=0x0000000000351F58 "\n"
 *   insn=0x0000000000351F68 string=0x0000000000351F6C "vV@"
 *   insn=0x0000000000351F74 string=0x000000000058EE8E "town_part1"
 *   insn=0x0000000000351F80 string=0x0000000000351F84 "S"
 *   insn=0x0000000000351FA0 string=0x0000000000351FA4 "uV@"
 *   insn=0x0000000000351FA8 string=0x000000000058EE99 "spawn_from_town_herohouse"
 *   insn=0x0000000000351FE0 string=0x0000000000351FE4 "Qa"
 *   insn=0x0000000000351FF0 string=0x0000000000351FF4 "W"
 *   insn=0x0000000000351FF4 string=0x00000000001F6D50 "0'"
 *   insn=0x000000000035200C string=0x0000000000352010 "!!"
 *   insn=0x0000000000352018 string=0x000000000035201C "hV@"
 *   insn=0x0000000000352024 string=0x0000000000352034 "hN@"
 *   insn=0x0000000000352028 string=0x000000000035202C ""
 *   insn=0x0000000000352038 string=0x000000000035203C "5"
 *   insn=0x0000000000352048 string=0x000000000035204C "\t@"
 *   insn=0x0000000000352058 string=0x000000000035205C ""
 *   insn=0x0000000000352068 string=0x000000000035206C "@"
 *   insn=0x0000000000352078 string=0x000000000035207C "hN@"
 *   insn=0x0000000000352078 string=0x0000000000352234 "hV@"
 *   insn=0x0000000000352084 string=0x0000000000352088 "H@"
 *   insn=0x0000000000352090 string=0x0000000000352094 ""
 *   insn=0x0000000000352094 string=0x0000000000352098 "H"
 *   insn=0x0000000000352098 string=0x000000000035209C ""
 *   insn=0x000000000035209C string=0x00000000003520BC "hV@"
 *   insn=0x00000000003520D4 string=0x00000000003520D8 "b"
 *   insn=0x00000000003520E8 string=0x00000000003520EC "9"
 *   insn=0x00000000003520F0 string=0x00000000003520F4 ""
 *   insn=0x0000000000352100 string=0x0000000000352104 "\t@"
 *   insn=0x0000000000352110 string=0x0000000000352114 ""
 *   insn=0x0000000000352120 string=0x0000000000352124 "@"
 *   insn=0x0000000000352130 string=0x0000000000352134 "hV@"
 *   insn=0x0000000000352134 string=0x0000000000352138 "I"
 *   insn=0x0000000000352140 string=0x0000000000352144 "K"
 *   insn=0x0000000000352144 string=0x0000000000352148 "k"
 *   insn=0x0000000000352148 string=0x000000000035214C "K"
 *   insn=0x0000000000352150 string=0x0000000000352154 "\t)"
 *   insn=0x000000000035215C string=0x0000000000352160 ""
 *   insn=0x0000000000352164 string=0x0000000000352168 "!"
 *   insn=0x000000000035216C string=0x0000000000352170 "\t@"
 *   insn=0x000000000035217C string=0x0000000000352180 ""
 *   insn=0x0000000000352184 string=0x0000000000352188 "!"
 *   insn=0x000000000035218C string=0x0000000000352190 "@"
 *   insn=0x00000000003521A4 string=0x00000000003521A8 "5"
 *   insn=0x00000000003521AC string=0x00000000003521B0 ""
 *   insn=0x00000000003521BC string=0x00000000003521C0 "\t@"
 *   insn=0x00000000003521CC string=0x00000000003521D0 ""
 *   insn=0x00000000003521DC string=0x00000000003521E0 "@"
 *   insn=0x00000000003521EC string=0x00000000003521F0 "5"
 *   insn=0x00000000003521F4 string=0x00000000003521F8 ""
 *   insn=0x0000000000352204 string=0x0000000000352208 "\t@"
 *   insn=0x0000000000352214 string=0x0000000000352218 ""
 *   insn=0x0000000000352224 string=0x0000000000352228 "@"
 *   insn=0x0000000000352234 string=0x0000000000352238 "\t"
 *   insn=0x0000000000352238 string=0x000000000035223C "I"
 *   insn=0x000000000035223C string=0x00000000003523C4 "4"
 *   insn=0x0000000000352240 string=0x0000000000352244 "5"
 *   insn=0x0000000000352250 string=0x0000000000352254 "\t@"
 *   insn=0x0000000000352260 string=0x0000000000352264 ""
 *   insn=0x0000000000352270 string=0x0000000000352274 "@"
 *   insn=0x0000000000352280 string=0x0000000000352284 "hV@"
 *   insn=0x000000000035228C string=0x0000000000352290 "@"
 *   insn=0x0000000000352298 string=0x000000000035229C ""
 *   insn=0x000000000035229C string=0x00000000003522A0 ""
 *   insn=0x00000000003522A0 string=0x00000000003522A4 "\n"
 *   insn=0x00000000003522C0 string=0x0000000000352318 "uV@"
 *   insn=0x00000000003522CC string=0x00000000001FBAC0 "0'"
 *   insn=0x00000000003522D0 string=0x00000000003522D4 "9"
 *   insn=0x00000000003522D8 string=0x00000000003522DC ""
 *   insn=0x00000000003522E8 string=0x00000000003522EC "\t@"
 *   insn=0x00000000003522F8 string=0x00000000003522FC ""
 *   insn=0x0000000000352308 string=0x000000000035230C "@"
 *   insn=0x0000000000352324 string=0x0000000000352328 "z"
 *   insn=0x0000000000352328 string=0x00000000001FB110 "0'"
 *   insn=0x000000000035232C string=0x0000000000352330 "hV@"
 *   insn=0x0000000000352334 string=0x0000000000352338 "k"
 *   insn=0x0000000000352338 string=0x000000000035233C "kU"
 *   insn=0x0000000000352338 string=0x00000000003523A4 "\t"
 *   insn=0x0000000000352344 string=0x0000000000352348 "KU"
 *   insn=0x0000000000352348 string=0x000000000035234C "-}"
 *   insn=0x0000000000352354 string=0x0000000000352358 "-"
 *   insn=0x0000000000352370 string=0x0000000000352388 "I,"
 *   insn=0x000000000035238C string=0x0000000000352390 "J"
 *   insn=0x0000000000352390 string=0x0000000000352394 ")"
 *   insn=0x000000000035239C string=0x00000000003523A0 "a"
 *   insn=0x00000000003523A4 string=0x00000000003523A8 "\n"
 *   insn=0x00000000003523AC string=0x00000000003523B0 ")y"
 *   insn=0x00000000003523B0 string=0x00000000003523B4 "J})"
 *   insn=0x00000000003523B4 string=0x00000000003523B8 ")"
 *   insn=0x00000000003523B8 string=0x00000000003523BC "J)"
 *   insn=0x00000000003523BC string=0x00000000003523C0 "\t)"
 *   insn=0x00000000003523C8 string=0x00000000003523CC ""
 *   insn=0x00000000003523DC string=0x00000000003523E0 "\t@"
 *   insn=0x00000000003523E8 string=0x00000000003523EC ""
 *   insn=0x00000000003523FC string=0x0000000000352400 "@"
 *   insn=0x0000000000352414 string=0x00000000003525AC "I"
 *   insn=0x0000000000352434 string=0x0000000000352438 ")=G"
 *   insn=0x0000000000352438 string=0x000000000035243C "!"
 *   insn=0x0000000000352440 string=0x0000000000352444 "\t"
 *   insn=0x0000000000352440 string=0x000000000035247C "\t"
 *   insn=0x0000000000352444 string=0x0000000000352448 "*"
 *   insn=0x0000000000352448 string=0x000000000035244C "\n"
 *   insn=0x0000000000352450 string=0x0000000000352454 ""
 *   insn=0x0000000000352454 string=0x0000000000352488 "?"
 *   insn=0x0000000000352458 string=0x000000000035245C ")=G"
 *   insn=0x000000000035245C string=0x0000000000352460 "!"
 *   insn=0x0000000000352464 string=0x0000000000352468 "\t"
 *   insn=0x0000000000352464 string=0x000000000035249C "\t"
 *   insn=0x0000000000352468 string=0x000000000035246C "*"
 *   insn=0x000000000035246C string=0x0000000000352470 "\n"
 *   insn=0x0000000000352478 string=0x00000000003524A8 "?"
 *   insn=0x000000000035247C string=0x0000000000352480 "*"
 *   insn=0x0000000000352480 string=0x0000000000352484 "\n"
 *   insn=0x0000000000352488 string=0x000000000035248C "L"
 *   insn=0x000000000035249C string=0x00000000003524A0 "*"
 *   insn=0x00000000003524A0 string=0x00000000003524A4 "\n"
 *   insn=0x00000000003524C0 string=0x00000000003524C4 ")=G"
 *   insn=0x00000000003524C4 string=0x00000000003524C8 "!"
 *   insn=0x00000000003524C8 string=0x00000000003524CC "\t"
 *   insn=0x00000000003524CC string=0x00000000003524D0 "\t"
 *   insn=0x00000000003524CC string=0x000000000035256C "\t"
 *   insn=0x00000000003524D0 string=0x00000000003524D4 "*"
 *   insn=0x00000000003524D4 string=0x00000000003524D8 "\n"
 *   insn=0x00000000003524DC string=0x00000000003524E0 "&"
 *   insn=0x00000000003524E0 string=0x0000000000352578 "?"
 *   insn=0x00000000003524E4 string=0x00000000003524E8 ")=G"
 *   insn=0x00000000003524E8 string=0x00000000003524EC "!"
 *   insn=0x00000000003524F0 string=0x00000000003524F4 "\t"
 *   insn=0x00000000003524F4 string=0x00000000003524F8 "*"
 *   insn=0x00000000003524F8 string=0x00000000003524FC "\n"
 *   insn=0x0000000000352508 string=0x000000000035250C "*"
 *   insn=0x000000000035250C string=0x0000000000352510 "\n"
 *   insn=0x0000000000352528 string=0x000000000035252C "*"
 *   insn=0x000000000035252C string=0x0000000000352530 "\n"
 *   insn=0x0000000000352540 string=0x0000000000352544 "["
 *   insn=0x0000000000352548 string=0x000000000035254C ")=G"
 *   insn=0x000000000035254C string=0x0000000000352550 "!"
 *   insn=0x0000000000352554 string=0x0000000000352558 "\t"
 *   insn=0x0000000000352554 string=0x000000000035258C "\t"
 *   insn=0x0000000000352558 string=0x000000000035255C "*"
 *   insn=0x000000000035255C string=0x0000000000352560 "\n"
 *   insn=0x0000000000352568 string=0x0000000000352598 "?"
 *   insn=0x000000000035256C string=0x0000000000352570 "*"
 *   insn=0x0000000000352570 string=0x0000000000352574 "\n"
 *   insn=0x0000000000352578 string=0x000000000035257C "L"
 *   insn=0x000000000035258C string=0x0000000000352590 "*"
 *   insn=0x0000000000352590 string=0x0000000000352594 "\n"
 *   insn=0x00000000003525AC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003525B8 string=0x00000000003525BC "J"
 *   insn=0x00000000003525C0 string=0x00000000003525C4 "(a"
 *   insn=0x00000000003525C8 string=0x00000000003525CC "@"
 *   insn=0x00000000003525D0 string=0x00000000003525D4 "J=G"
 *   insn=0x00000000003525D4 string=0x00000000003525D8 ")!"
 *   insn=0x00000000003525D8 string=0x00000000003525DC "*"
 *   insn=0x00000000003525DC string=0x00000000003525E0 "*"
 *   insn=0x00000000003525DC string=0x0000000000352980 "*"
 *   insn=0x00000000003525E0 string=0x00000000003525E4 "K"
 *   insn=0x00000000003525E4 string=0x00000000003525E8 "+"
 *   insn=0x00000000003525F0 string=0x0000000000352964 "_"
 *   insn=0x0000000000352604 string=0x0000000000352608 ""
 *   insn=0x000000000035260C string=0x0000000000352610 "a"
 *   insn=0x0000000000352614 string=0x0000000000352618 "\t@"
 *   insn=0x0000000000352624 string=0x0000000000352628 ""
 *   insn=0x000000000035262C string=0x0000000000352630 "a"
 *   insn=0x0000000000352634 string=0x0000000000352638 "@"
 *   insn=0x000000000035264C string=0x0000000000352650 "(a"
 *   insn=0x000000000035265C string=0x0000000000352660 "J=G"
 *   insn=0x0000000000352660 string=0x0000000000352664 ")!"
 *   insn=0x0000000000352668 string=0x000000000035266C "*"
 *   insn=0x000000000035266C string=0x0000000000352670 "K"
 *   insn=0x0000000000352670 string=0x0000000000352674 "+"
 *   insn=0x0000000000352688 string=0x000000000035268C "(a"
 *   insn=0x0000000000352698 string=0x000000000035269C "J=G"
 *   insn=0x000000000035269C string=0x00000000003526A0 ")!"
 *   insn=0x00000000003526A4 string=0x00000000003526A8 "*"
 *   insn=0x00000000003526A8 string=0x00000000003526AC "K"
 *   insn=0x00000000003526AC string=0x00000000003526B0 "+"
 *   insn=0x00000000003526C8 string=0x00000000003526CC ""
 *   insn=0x00000000003526D8 string=0x00000000003526DC "\t@"
 *   insn=0x00000000003526E8 string=0x00000000003526EC ""
 *   insn=0x00000000003526F8 string=0x00000000003526FC "@"
 *   insn=0x000000000035270C string=0x0000000000352710 "4"
 *   insn=0x0000000000352714 string=0x0000000000352718 ""
 *   insn=0x0000000000352724 string=0x0000000000352728 "\t@"
 *   insn=0x0000000000352734 string=0x0000000000352738 ""
 *   insn=0x0000000000352744 string=0x0000000000352748 "@"
 *   insn=0x0000000000352760 string=0x0000000000352764 ""
 *   insn=0x000000000035276C string=0x0000000000352770 ""
 *   insn=0x0000000000352770 string=0x0000000000352774 "\t@"
 *   insn=0x0000000000352780 string=0x0000000000352784 ""
 *   insn=0x000000000035278C string=0x0000000000352790 ""
 *   insn=0x0000000000352790 string=0x0000000000352794 "@"
 *   insn=0x000000000035279C string=0x00000000003527A0 "O"
 *   insn=0x00000000003527A8 string=0x00000000003527AC "(a"
 *   insn=0x00000000003527B8 string=0x00000000003527BC "J=G"
 *   insn=0x00000000003527BC string=0x00000000003527C0 ")!"
 *   insn=0x00000000003527C4 string=0x00000000003527C8 "*"
 *   insn=0x00000000003527C8 string=0x00000000003527CC "K"
 *   insn=0x00000000003527CC string=0x00000000003527D0 "+"
 *   insn=0x00000000003527D4 string=0x00000000003527D8 "c"
 *   insn=0x00000000003527E4 string=0x00000000003527E8 "(a"
 *   insn=0x00000000003527EC string=0x00000000003527F0 " "
 *   insn=0x00000000003527F4 string=0x00000000003527F8 "J=G"
 *   insn=0x00000000003527F8 string=0x00000000003527FC ")!"
 *   insn=0x00000000003527FC string=0x0000000000352800 "\n"
 *   insn=0x0000000000352800 string=0x0000000000352804 "*"
 *   insn=0x0000000000352804 string=0x0000000000352808 "K"
 *   insn=0x0000000000352808 string=0x000000000035280C "+"
 *   insn=0x0000000000352810 string=0x0000000000352814 "T"
 *   insn=0x0000000000352824 string=0x0000000000352828 "["
 *   insn=0x0000000000352830 string=0x0000000000352834 "(a"
 *   insn=0x000000000035283C string=0x0000000000352898 "9"
 *   insn=0x0000000000352840 string=0x0000000000352844 "J=G"
 *   insn=0x0000000000352844 string=0x0000000000352848 ")!"
 *   insn=0x000000000035284C string=0x0000000000352850 "*"
 *   insn=0x000000000035284C string=0x000000000035287C "*"
 *   insn=0x0000000000352850 string=0x0000000000352854 "K"
 *   insn=0x0000000000352854 string=0x0000000000352858 "+"
 *   insn=0x000000000035285C string=0x0000000000352860 "_"
 *   insn=0x0000000000352870 string=0x0000000000352874 "Y"
 *   insn=0x000000000035287C string=0x0000000000352880 "K"
 *   insn=0x0000000000352880 string=0x0000000000352884 "+"
 *   insn=0x0000000000352884 string=0x0000000000352888 "_"
 *   insn=0x000000000035289C string=0x00000000003528A0 ""
 *   insn=0x00000000003528A8 string=0x00000000003528AC "H"
 *   insn=0x00000000003528AC string=0x00000000003528B0 "\t@"
 *   insn=0x00000000003528BC string=0x00000000003528C0 ""
 *   insn=0x00000000003528C8 string=0x00000000003528CC "H"
 *   insn=0x00000000003528CC string=0x00000000003528D0 "@"
 *   insn=0x00000000003528E0 string=0x00000000003528E4 ""
 *   insn=0x00000000003528E8 string=0x00000000003528EC "A"
 *   insn=0x00000000003528F0 string=0x00000000003528F4 "\t@"
 *   insn=0x0000000000352900 string=0x0000000000352904 ""
 *   insn=0x0000000000352908 string=0x000000000035290C "A"
 *   insn=0x0000000000352910 string=0x0000000000352914 "@"
 *   insn=0x000000000035292C string=0x0000000000352930 "J"
 *   insn=0x0000000000352934 string=0x0000000000352938 "(a"
 *   insn=0x0000000000352944 string=0x0000000000352948 "J=G"
 *   insn=0x0000000000352948 string=0x000000000035294C ")!"
 *   insn=0x0000000000352950 string=0x0000000000352954 "*"
 *   insn=0x0000000000352954 string=0x0000000000352958 "K"
 *   insn=0x0000000000352958 string=0x000000000035295C "+"
 *   insn=0x0000000000352964 string=0x0000000000352968 "l"
 *   insn=0x0000000000352980 string=0x0000000000352984 "K"
 *   insn=0x0000000000352984 string=0x0000000000352988 "+"
 *   insn=0x0000000000352988 string=0x000000000035298C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameViewController::LoadGameState(Caver::GameViewController *this)
{
  Caver::PlayerProfile *v2; // x0
  void *v3; // x0
  __int64 v4; // x8
  _QWORD *v5; // x20
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x20
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  _DWORD *v18; // x8
  int v19; // w10
  void *v20; // x0
  __int64 v21; // x21
  __int64 v22; // x22
  void *v23; // x0
  __int64 v24; // x21
  void *v25; // x0
  unsigned int *v26; // x8
  int v27; // w9
  unsigned int *v28; // x8
  int v29; // w9
  unsigned int *v30; // x8
  int v31; // w9
  void *v32; // x0
  __int64 v33; // x21
  __int64 v34; // x20
  void *v35; // x0
  _QWORD *v36; // x20
  __int64 v37; // x8
  _QWORD *v38; // x21
  __int64 v39; // x22
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x26
  char v43; // w25
  _QWORD *v44; // x21
  void *v45; // x0
  __int64 v46; // x8
  __int64 v47; // x8
  __int64 v48; // x9
  __int64 v49; // x8
  _QWORD *v50; // x10
  _QWORD *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  _QWORD *v56; // x21
  __int64 v57; // x8
  __int64 v58; // x8
  __int64 v59; // x8
  _QWORD *v60; // x21
  __int64 v61; // x22
  __int64 v62; // x8
  __int64 v63; // x8
  Caver::MapNode *v64; // x0
  __int64 v65; // x24
  char v66; // w25
  _QWORD *v67; // x21
  int v68; // w22
  int v69; // w0
  __int64 v70; // x8
  __int64 v71; // x8
  _DWORD *v72; // x21
  unsigned int v73; // w12
  int v74; // w0
  _DWORD *v75; // x8
  unsigned int v76; // w9
  int v77; // w10
  unsigned int v78; // w13
  int v79; // w10
  __int64 v80; // x8
  __int64 v81; // x8
  unsigned int *v82; // x8
  int v83; // w9
  unsigned int *v84; // x8
  int v85; // w9
  unsigned int *v86; // x8
  int v87; // w9
  unsigned int *v88; // x8
  int v89; // w9
  __int64 v90; // [xsp+0h] [xbp-70h] BYREF
  __int64 v91; // [xsp+8h] [xbp-68h] BYREF
  _QWORD *v92; // [xsp+10h] [xbp-60h]
  _QWORD v93[3]; // [xsp+18h] [xbp-58h] BYREF

  v93[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::PlayerProfile *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    if ( !*((_BYTE *)v2 + 104) && (Caver::PlayerProfile::Load(v2) & 1) == 0 )
    {
      sub_566BB8((int)&v91, "newplayer");
      Caver::PlayerProfile::CreateProfile();
      v3 = (void *)(v91 - 24);
      if ( (__int64 *)(v91 - 24) != &qword_6FD2E0 )
      {
        v88 = (unsigned int *)(v91 - 8);
        if ( &pthread_create )
        {
          do
            v89 = __ldaxr(v88);
          while ( __stlxr(v89 - 1, v88) );
        }
        else
        {
          v89 = (*v88)--;
        }
        if ( v89 <= 0 )
          operator delete(v3);
      }
    }
    v4 = *(_QWORD *)(*((_QWORD *)this + 17) + 112LL);
    v5 = *(_QWORD **)(*((_QWORD *)this + 17) + 120LL);
    if ( v5 )
      v5[1] += 2LL;
    v6 = (_QWORD *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 19) = v4;
    *((_QWORD *)this + 20) = v5;
    if ( v6 )
    {
      v7 = v6[1] - 1LL;
      v6[1] = v7;
      if ( !v7 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
        v8 = v6[2] - 1LL;
        v6[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      }
    }
    if ( v5 )
    {
      v9 = v5[1] - 1LL;
      v5[1] = v9;
      if ( !v9 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v10 = v5[2] - 1LL;
        v5[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
    v11 = *(_QWORD *)(*((_QWORD *)this + 17) + 128LL);
    v12 = *(_QWORD **)(*((_QWORD *)this + 17) + 136LL);
    if ( v12 )
      v12[1] += 2LL;
    v13 = (_QWORD *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 21) = v11;
    *((_QWORD *)this + 22) = v12;
    if ( v13 )
    {
      v14 = v13[1] - 1LL;
      v13[1] = v14;
      if ( !v14 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
        v15 = v13[2] - 1LL;
        v13[2] = v15;
        if ( !v15 )
          (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
      }
    }
    if ( v12 )
    {
      v16 = v12[1] - 1LL;
      v12[1] = v16;
      if ( !v16 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        v17 = v12[2] - 1LL;
        v12[2] = v17;
        if ( !v17 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
      }
    }
  }
  v18 = (_DWORD *)*((_QWORD *)this + 21);
  if ( !v18[42] )
  {
    v19 = 20 * v18[49] + 10;
    v18[42] = 2 * v18[47] + 4;
    v18[43] = v19;
    sub_56A528(v93, v18 + 90);
    v20 = (void *)(v93[0] - 24LL);
    v21 = *(_QWORD *)(v93[0] - 24LL);
    if ( (__int64 *)(v93[0] - 24LL) == &qword_6FD2E0 )
      goto LABEL_27;
    v28 = (unsigned int *)(v93[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v29 = __ldaxr(v28);
      while ( __stlxr(v29 - 1, v28) );
    }
    else
    {
      v29 = (*v28)--;
    }
    if ( v29 > 0 )
    {
LABEL_27:
      v22 = *((_QWORD *)this + 21);
      if ( !v21 )
      {
LABEL_42:
        sub_566BB8((int)&v91, "town_part1");
        sub_56A6A8(v22 + 344);
        v32 = (void *)(v91 - 24);
        if ( (__int64 *)(v91 - 24) != &qword_6FD2E0 )
        {
          v86 = (unsigned int *)(v91 - 8);
          if ( &pthread_create )
          {
            do
              v87 = __ldaxr(v86);
            while ( __stlxr(v87 - 1, v86) );
          }
          else
          {
            v87 = (*v86)--;
          }
          if ( v87 <= 0 )
            operator delete(v32);
        }
        v33 = *((_QWORD *)this + 21);
        sub_566BB8((int)&v91, "spawn_from_town_herohouse");
        sub_56A6A8(v33 + 352);
        v25 = (void *)(v91 - 24);
        if ( (__int64 *)(v91 - 24) == &qword_6FD2E0 )
          goto LABEL_44;
        v26 = (unsigned int *)(v91 - 8);
        if ( &pthread_create )
        {
          do
            v27 = __ldaxr(v26);
          while ( __stlxr(v27 - 1, v26) );
LABEL_130:
          if ( v27 <= 0 )
            operator delete(v25);
          goto LABEL_44;
        }
        goto LABEL_129;
      }
    }
    else
    {
      operator delete(v20);
      v22 = *((_QWORD *)this + 21);
      if ( !v21 )
        goto LABEL_42;
    }
    sub_56A528(&v91, v22 + 360);
    sub_56A6A8(v22 + 344);
    v23 = (void *)(v91 - 24);
    if ( (__int64 *)(v91 - 24) != &qword_6FD2E0 )
    {
      v30 = (unsigned int *)(v91 - 8);
      if ( &pthread_create )
      {
        do
          v31 = __ldaxr(v30);
        while ( __stlxr(v31 - 1, v30) );
      }
      else
      {
        v31 = (*v30)--;
      }
      if ( v31 <= 0 )
        operator delete(v23);
    }
    v24 = *((_QWORD *)this + 21);
    sub_566BB8((int)&v91, "portal");
    sub_56A6A8(v24 + 352);
    v25 = (void *)(v91 - 24);
    if ( (__int64 *)(v91 - 24) != &qword_6FD2E0 )
    {
      v26 = (unsigned int *)(v91 - 8);
      if ( &pthread_create )
      {
        do
          v27 = __ldaxr(v26);
        while ( __stlxr(v27 - 1, v26) );
        goto LABEL_130;
      }
LABEL_129:
      v27 = (*v26)--;
      goto LABEL_130;
    }
  }
LABEL_44:
  sub_56A528(&v91, *((_QWORD *)this + 21) + 344LL);
  v34 = Caver::GameState::StateForLevelWithName();
  v35 = (void *)(v91 - 24);
  if ( (__int64 *)(v91 - 24) != &qword_6FD2E0 )
  {
    v82 = (unsigned int *)(v91 - 8);
    if ( &pthread_create )
    {
      do
        v83 = __ldaxr(v82);
      while ( __stlxr(v83 - 1, v82) );
    }
    else
    {
      v83 = (*v82)--;
    }
    if ( v83 <= 0 )
      operator delete(v35);
  }
  *(_BYTE *)(v34 + 8) = 1;
  v36 = *(_QWORD **)(*((_QWORD *)this + 21) + 376LL);
  if ( v36 )
    ++v36[1];
  v37 = *((_QWORD *)this + 19);
  v39 = *(_QWORD *)(v37 + 72);
  v38 = *(_QWORD **)(v37 + 80);
  if ( !v38 )
  {
    if ( !v39 )
      goto LABEL_78;
    v44 = 0;
    goto LABEL_57;
  }
  if ( !v38[1] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
    v40 = v38[2] - 1LL;
    v38[2] = v40;
    if ( !v40 )
      (*(void (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
  }
  if ( v39 )
  {
    v41 = *((_QWORD *)this + 19);
    v42 = *(_QWORD *)(v41 + 80);
    if ( v42 )
    {
      v43 = 0;
      v44 = *(_QWORD **)(v41 + 80);
      ++*(_QWORD *)(v42 + 8);
LABEL_58:
      sub_56A528(&v90, *((_QWORD *)this + 21) + 344LL);
      Caver::Map::NodeForName();
      v45 = (void *)(v90 - 24);
      if ( (__int64 *)(v90 - 24) == &qword_6FD2E0 )
        goto LABEL_59;
      v84 = (unsigned int *)(v90 - 8);
      if ( &pthread_create )
      {
        do
          v85 = __ldaxr(v84);
        while ( __stlxr(v85 - 1, v84) );
      }
      else
      {
        v85 = (*v84)--;
      }
      if ( v85 > 0 )
      {
LABEL_59:
        if ( (v43 & 1) != 0 )
          goto LABEL_63;
      }
      else
      {
        operator delete(v45);
        if ( (v43 & 1) != 0 )
          goto LABEL_63;
      }
      v46 = v44[1] - 1LL;
      v44[1] = v46;
      if ( !v46 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
        v47 = v44[2] - 1LL;
        v44[2] = v47;
        if ( !v47 )
          (*(void (__fastcall **)(_QWORD *))(*v44 + 24LL))(v44);
      }
LABEL_63:
      v48 = v91;
      v49 = *((_QWORD *)this + 21);
      if ( v91 )
      {
        v50 = v92;
        if ( v92 )
          ++v92[1];
        v51 = *(_QWORD **)(v49 + 376);
        *(_QWORD *)(v49 + 368) = v48;
        *(_QWORD *)(v49 + 376) = v50;
        if ( !v51 )
          goto LABEL_74;
        v52 = v51[1] - 1LL;
        v51[1] = v52;
        if ( v52 )
          goto LABEL_74;
        (*(void (__fastcall **)(_QWORD *))(*v51 + 16LL))(v51);
        v53 = v51[2] - 1LL;
        v51[2] = v53;
        if ( v53 )
          goto LABEL_74;
      }
      else
      {
        v51 = *(_QWORD **)(v49 + 376);
        *(_QWORD *)(v49 + 368) = 0;
        *(_QWORD *)(v49 + 376) = 0;
        if ( !v51
          || (v54 = v51[1] - 1LL, (v51[1] = v54) != 0)
          || ((*(void (__fastcall **)(_QWORD *))(*v51 + 16LL))(v51), v55 = v51[2] - 1LL, (v51[2] = v55) != 0) )
        {
LABEL_74:
          v56 = v92;
          if ( v92 )
          {
            v57 = v92[1] - 1LL;
            v92[1] = v57;
            if ( !v57 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v56 + 16LL))(v56);
              v58 = v56[2] - 1LL;
              v56[2] = v58;
              if ( !v58 )
                (*(void (__fastcall **)(_QWORD *))(*v56 + 24LL))(v56);
            }
          }
          goto LABEL_78;
        }
      }
      (*(void (__fastcall **)(_QWORD *))(*v51 + 24LL))(v51);
      goto LABEL_74;
    }
    v44 = 0;
LABEL_57:
    v43 = 1;
    goto LABEL_58;
  }
LABEL_78:
  v59 = *((_QWORD *)this + 21);
  if ( *(_DWORD *)(v59 + 184) )
    goto LABEL_105;
  v61 = *(_QWORD *)(v59 + 368);
  v60 = *(_QWORD **)(v59 + 376);
  if ( v60 )
  {
    if ( !v60[1] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v60 + 16LL))(v60);
      v62 = v60[2] - 1LL;
      v60[2] = v62;
      if ( !v62 )
        (*(void (__fastcall **)(_QWORD *))(*v60 + 24LL))(v60);
    }
    if ( v61 )
    {
      v63 = *((_QWORD *)this + 21);
      v64 = *(Caver::MapNode **)(v63 + 368);
      v65 = *(_QWORD *)(v63 + 376);
      if ( v65 )
      {
        v66 = 0;
        v67 = *(_QWORD **)(v63 + 376);
        ++*(_QWORD *)(v65 + 8);
LABEL_91:
        Caver::MapNode::ExperienceLevel(v64);
        v68 = v69;
        if ( (v66 & 1) == 0 )
        {
          v70 = v67[1] - 1LL;
          v67[1] = v70;
          if ( !v70 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v67 + 16LL))(v67);
            v71 = v67[2] - 1LL;
            v67[2] = v71;
            if ( !v71 )
              (*(void (__fastcall **)(_QWORD *))(*v67 + 24LL))(v67);
          }
        }
        goto LABEL_95;
      }
      v67 = 0;
LABEL_90:
      v66 = 1;
      goto LABEL_91;
    }
  }
  else if ( v61 )
  {
    v64 = *(Caver::MapNode **)(v59 + 368);
    v67 = 0;
    goto LABEL_90;
  }
  v68 = 1;
LABEL_95:
  v72 = (_DWORD *)*((_QWORD *)this + 21);
  v72[46] = v68;
  Caver::CharacterState::ExperiencePointsRequiredForLevel((Caver::CharacterState *)(v72 + 4));
  v72[45] = v74;
  v75 = (_DWORD *)*((_QWORD *)this + 21);
  if ( v68 >= 2 )
  {
    v76 = 0;
    v77 = v68 - 1;
    do
    {
      v78 = (v76 % 3) & 3;
      switch ( v78 )
      {
        case 2u:
          v73 = 2;
          break;
        case 1u:
          v73 = 1;
          break;
        case 0u:
          v73 = 0;
          break;
      }
      --v77;
      ++v76;
      ++v75[v73 + 47];
    }
    while ( v77 );
  }
  v79 = 20 * v75[49] + 10;
  v75[42] = 2 * v75[47] + 4;
  v75[43] = v79;
LABEL_105:
  if ( v36 )
  {
    v80 = v36[1] - 1LL;
    v36[1] = v80;
    if ( !v80 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
      v81 = v36[2] - 1LL;
      v36[2] = v81;
      if ( !v81 )
        (*(void (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
    }
  }
}

