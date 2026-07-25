/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D7C60
 * Mangled: _ZN5Caver15GameOverlayView19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::GameOverlayView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FA9C0  Caver::GameOverlayView::ButtonHighlightChanged(void *,Caver::GUIEvent *)
 *   0x00000000001FABA0  Caver::GUIView::IsSubviewRemoved(boost::shared_ptr<Caver::GUIView> const&)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 230
 *   insn=0x00000000003D7C7C string=0x00000000003D7C80 "!"
 *   insn=0x00000000003D7C8C string=0x00000000003D7C90 ""
 *   insn=0x00000000003D7C90 string=0x00000000003D7C94 "?"
 *   insn=0x00000000003D7C94 string=0x00000000003D7C98 "a"
 *   insn=0x00000000003D7CA4 string=0x00000000003D7CA8 "i"
 *   insn=0x00000000003D7CB0 string=0x00000000003D7D20 "\tE"
 *   insn=0x00000000003D7CB4 string=0x00000000003D7CB8 "`"
 *   insn=0x00000000003D7CBC string=0x00000000003D7CC0 "A"
 *   insn=0x00000000003D7CCC string=0x00000000003D7CD0 ""
 *   insn=0x00000000003D7CD0 string=0x00000000003D7CD4 "?"
 *   insn=0x00000000003D7CD4 string=0x00000000003D7CD8 "!"
 *   insn=0x00000000003D7CD8 string=0x00000000003D7CDC ""
 *   insn=0x00000000003D7CD8 string=0x00000000003D7CFC ""
 *   insn=0x00000000003D7CDC string=0x00000000003D7CE0 ""
 *   insn=0x00000000003D7CE0 string=0x00000000003D7D00 "a"
 *   insn=0x00000000003D7CF4 string=0x00000000003D7CF8 "@"
 *   insn=0x00000000003D7D1C string=0x00000000001FB420 "0'"
 *   insn=0x00000000003D7D20 string=0x00000000003D7D24 "?1"
 *   insn=0x00000000003D7D30 string=0x00000000003D7D38 "Iy"
 *   insn=0x00000000003D7D38 string=0x00000000003D7D3C ")"
 *   insn=0x00000000003D7D3C string=0x00000000003D7D40 " "
 *   insn=0x00000000003D7D48 string=0x00000000003D7D4C "i"
 *   insn=0x00000000003D7D4C string=0x00000000003D7D50 ")"
 *   insn=0x00000000003D7D50 string=0x00000000003D7D54 "i"
 *   insn=0x00000000003D7D60 string=0x00000000003D7D64 " "
 *   insn=0x00000000003D7D68 string=0x00000000003D7D6C "!"
 *   insn=0x00000000003D7D74 string=0x00000000003D7D78 "("
 *   insn=0x00000000003D7D88 string=0x00000000003D7D8C ""
 *   insn=0x00000000003D7D9C string=0x00000000003D7DA0 ""
 *   insn=0x00000000003D7DA0 string=0x00000000003D7DA4 "0"
 *   insn=0x00000000003D7DA0 string=0x00000000001FA9C0 "0'"
 *   insn=0x00000000003D7DA8 string=0x00000000003D7DAC "`"
 *   insn=0x00000000003D7DB0 string=0x00000000003D7DB4 "a"
 *   insn=0x00000000003D7DB4 string=0x00000000003D7DE0 "S"
 *   insn=0x00000000003D7DB8 string=0x00000000003D7DBC " "
 *   insn=0x00000000003D7DC0 string=0x00000000003D7DC4 ""
 *   insn=0x00000000003D7DC4 string=0x00000000003D7DC8 "?"
 *   insn=0x00000000003D7DCC string=0x00000000003D7DD0 ""
 *   insn=0x00000000003D7DCC string=0x00000000003D7F6C ""
 *   insn=0x00000000003D7DD0 string=0x00000000003D7DD4 "A"
 *   insn=0x00000000003D7DD8 string=0x00000000003D7DDC "g"
 *   insn=0x00000000003D7DE0 string=0x00000000003D7DE4 "h"
 *   insn=0x00000000003D7DE4 string=0x00000000003D7DE8 ""
 *   insn=0x00000000003D7DE8 string=0x00000000003D7DEC "h"
 *   insn=0x00000000003D7DF0 string=0x00000000003D7DF4 "h"
 *   insn=0x00000000003D7DF8 string=0x00000000003D7DFC "\t@"
 *   insn=0x00000000003D7E00 string=0x00000000003D7E04 "h\n@"
 *   insn=0x00000000003D7E04 string=0x00000000003D7E08 ""
 *   insn=0x00000000003D7E08 string=0x00000000003D7E0C "h\n"
 *   insn=0x00000000003D7E10 string=0x00000000003D7E14 "h"
 *   insn=0x00000000003D7E18 string=0x00000000003D7E1C "@"
 *   insn=0x00000000003D7E28 string=0x00000000003D7E2C "a"
 *   insn=0x00000000003D7E2C string=0x00000000003D7E38 "(x"
 *   insn=0x00000000003D7E30 string=0x00000000003D7E34 ""
 *   insn=0x00000000003D7E48 string=0x00000000003D7E4C ""
 *   insn=0x00000000003D7E70 string=0x00000000003D7EAC "3"
 *   insn=0x00000000003D7E7C string=0x00000000003D7E80 "\t"
 *   insn=0x00000000003D7E84 string=0x00000000003D7E88 "\t"
 *   insn=0x00000000003D7E8C string=0x00000000003D7E90 "\t"
 *   insn=0x00000000003D7E94 string=0x00000000003D7E98 "\t"
 *   insn=0x00000000003D7E9C string=0x00000000003D7EA0 "\t"
 *   insn=0x00000000003D7EA4 string=0x00000000003D7EA8 "\t"
 *   insn=0x00000000003D7EAC string=0x00000000003D7EB0 "h"
 *   insn=0x00000000003D7EB0 string=0x00000000003D7EB4 ""
 *   insn=0x00000000003D7EB4 string=0x00000000003D7EB8 "h"
 *   insn=0x00000000003D7EBC string=0x00000000003D7EC0 "h"
 *   insn=0x00000000003D7EC4 string=0x00000000003D7EC8 "\t@"
 *   insn=0x00000000003D7ECC string=0x00000000003D7ED0 "h\n@"
 *   insn=0x00000000003D7ED0 string=0x00000000003D7ED4 ""
 *   insn=0x00000000003D7ED4 string=0x00000000003D7ED8 "h\n"
 *   insn=0x00000000003D7EDC string=0x00000000003D7EE0 "h"
 *   insn=0x00000000003D7EE4 string=0x00000000003D7EE8 "@"
 *   insn=0x00000000003D7F04 string=0x00000000003D7F08 "3"
 *   insn=0x00000000003D7F18 string=0x00000000003D7F1C "?"
 *   insn=0x00000000003D7F1C string=0x00000000003D7F20 "i"
 *   insn=0x00000000003D7F20 string=0x00000000003D7F24 "6M@"
 *   insn=0x00000000003D7F24 string=0x00000000003D7F28 "3"
 *   insn=0x00000000003D7F3C string=0x00000000003D7F40 "s"
 *   insn=0x00000000003D7F60 string=0x00000000003D7F64 "S"
 *   insn=0x00000000003D7F64 string=0x00000000003D7F68 "|"
 *   insn=0x00000000003D7F6C string=0x00000000003D7F70 "A"
 *   insn=0x00000000003D7F78 string=0x00000000003D7F7C "h"
 *   insn=0x00000000003D7F7C string=0x00000000003D7F80 ""
 *   insn=0x00000000003D7F80 string=0x00000000003D7F84 "h"
 *   insn=0x00000000003D7F84 string=0x00000000003D7F88 "a"
 *   insn=0x00000000003D7F88 string=0x00000000003D7F8C "h"
 *   insn=0x00000000003D7F90 string=0x00000000003D7F94 "\t@"
 *   insn=0x00000000003D7F98 string=0x00000000003D7F9C "h\n@"
 *   insn=0x00000000003D7F9C string=0x00000000003D7FA0 ""
 *   insn=0x00000000003D7FA0 string=0x00000000003D7FA4 "h\n"
 *   insn=0x00000000003D7FA4 string=0x00000000003D7FA8 "a"
 *   insn=0x00000000003D7FA8 string=0x00000000003D7FAC "h"
 *   insn=0x00000000003D7FC0 string=0x00000000003D7FC4 " "
 *   insn=0x00000000003D7FCC string=0x00000000003D7FDC "h"
 *   insn=0x00000000003D7FD4 string=0x00000000003D7FD8 "3"
 *   insn=0x00000000003D7FDC string=0x00000000003D7FE0 ""
 *   insn=0x00000000003D7FE0 string=0x00000000003D7FE4 "h"
 *   insn=0x00000000003D7FE8 string=0x00000000003D7FEC "h"
 *   insn=0x00000000003D7FEC string=0x00000000003D7FF0 "\t@"
 *   insn=0x00000000003D7FF8 string=0x00000000003D7FFC "h\n@"
 *   insn=0x00000000003D7FFC string=0x00000000003D8000 ""
 *   insn=0x00000000003D8000 string=0x00000000003D8004 "h\n"
 *   insn=0x00000000003D8008 string=0x00000000003D800C "h"
 *   insn=0x00000000003D800C string=0x00000000003D8010 "@"
 *   insn=0x00000000003D801C string=0x00000000003D8020 ")"
 *   insn=0x00000000003D804C string=0x00000000003D8050 "X"
 *   insn=0x00000000003D8050 string=0x00000000003D8054 "\t"
 *   insn=0x00000000003D8068 string=0x00000000003D806C "\t"
 *   insn=0x00000000003D8070 string=0x00000000003D8074 ""
 *   insn=0x00000000003D807C string=0x00000000003D8080 "A"
 *   insn=0x00000000003D80AC string=0x00000000003D80B0 ""
 *   insn=0x00000000003D80BC string=0x00000000003D80C0 "q@"
 *   insn=0x00000000003D80C4 string=0x00000000003D80C8 "@"
 *   insn=0x00000000003D80CC string=0x00000000003D80D0 "("
 *   insn=0x00000000003D80D8 string=0x00000000003D80DC "h"
 *   insn=0x00000000003D80DC string=0x00000000003D80E0 "\t"
 *   insn=0x00000000003D80F0 string=0x00000000003D80F4 "H@"
 *   insn=0x00000000003D80F4 string=0x00000000003D80F8 "\t!A"
 *   insn=0x00000000003D8100 string=0x00000000003D8104 "\t"
 *   insn=0x00000000003D8104 string=0x00000000003D8108 ")"
 *   insn=0x00000000003D8108 string=0x00000000003D810C "\t"
 *   insn=0x00000000003D8118 string=0x00000000003D811C "`\t"
 *   insn=0x00000000003D8118 string=0x00000000001FABA0 "0'"
 *   insn=0x00000000003D8128 string=0x00000000003D812C ")"
 *   insn=0x00000000003D8140 string=0x00000000003D8144 " "
 *   insn=0x00000000003D8158 string=0x00000000003D815C "<"
 *   insn=0x00000000003D8164 string=0x00000000003D8168 "\t-@"
 *   insn=0x00000000003D8168 string=0x00000000003D816C "?"
 *   insn=0x00000000003D8180 string=0x00000000003D8184 " "
 *   insn=0x00000000003D818C string=0x00000000003D8190 "\n"
 *   insn=0x00000000003D8190 string=0x00000000003D8194 "@!)"
 *   insn=0x00000000003D8194 string=0x00000000003D8198 "E"
 *   insn=0x00000000003D81A0 string=0x00000000003D81B0 "3"
 *   insn=0x00000000003D81A4 string=0x00000000003D81A8 ""
 *   insn=0x00000000003D81B0 string=0x00000000003D81B4 "h"
 *   insn=0x00000000003D81B4 string=0x00000000003D81B8 ""
 *   insn=0x00000000003D81B8 string=0x00000000003D81BC "h"
 *   insn=0x00000000003D81C0 string=0x00000000003D81C4 "h"
 *   insn=0x00000000003D81C4 string=0x00000000003D81C8 "\t@"
 *   insn=0x00000000003D81D0 string=0x00000000003D81D4 "h\n@"
 *   insn=0x00000000003D81D4 string=0x00000000003D81D8 ""
 *   insn=0x00000000003D81D8 string=0x00000000003D81DC "h\n"
 *   insn=0x00000000003D81E0 string=0x00000000003D81E4 "h"
 *   insn=0x00000000003D81E4 string=0x00000000003D81E8 "@"
 *   insn=0x00000000003D81F8 string=0x00000000003D81FC "I"
 *   insn=0x00000000003D8200 string=0x00000000003D8204 "7"
 *   insn=0x00000000003D8208 string=0x00000000003D820C ""
 *   insn=0x00000000003D8218 string=0x00000000003D821C "\t@"
 *   insn=0x00000000003D8228 string=0x00000000003D822C ""
 *   insn=0x00000000003D8238 string=0x00000000003D823C "@"
 *   insn=0x00000000003D8248 string=0x00000000003D824C "7"
 *   insn=0x00000000003D824C string=0x00000000003D8290 "Z@"
 *   insn=0x00000000003D8250 string=0x00000000003D8254 ""
 *   insn=0x00000000003D8260 string=0x00000000003D8264 "\t@"
 *   insn=0x00000000003D8270 string=0x00000000003D8274 ""
 *   insn=0x00000000003D8280 string=0x00000000003D8284 "@"
 *   insn=0x00000000003D8290 string=0x00000000003D8294 "("
 *   insn=0x00000000003D82A4 string=0x00000000003D82A8 "s"
 *   insn=0x00000000003D82A8 string=0x00000000003D82AC "h"
 *   insn=0x00000000003D82AC string=0x00000000003D82B0 "("
 *   insn=0x00000000003D82B0 string=0x00000000003D82B4 "0"
 *   insn=0x00000000003D82B4 string=0x00000000003D8374 "h"
 *   insn=0x00000000003D82BC string=0x00000000003D82C0 "h"
 *   insn=0x00000000003D82C0 string=0x00000000003D82C4 "s"
 *   insn=0x00000000003D82C4 string=0x00000000003D82C8 "h"
 *   insn=0x00000000003D82C8 string=0x00000000003D82CC ""
 *   insn=0x00000000003D82CC string=0x00000000003D82D0 "h"
 *   insn=0x00000000003D82D4 string=0x00000000003D82D8 "h"
 *   insn=0x00000000003D82DC string=0x00000000003D82E0 "\t@"
 *   insn=0x00000000003D82E4 string=0x00000000003D82E8 "h\n@"
 *   insn=0x00000000003D82E8 string=0x00000000003D82EC ""
 *   insn=0x00000000003D82EC string=0x00000000003D82F0 "h\n"
 *   insn=0x00000000003D82F4 string=0x00000000003D82F8 "h"
 *   insn=0x00000000003D82FC string=0x00000000003D8300 "@"
 *   insn=0x00000000003D8304 string=0x00000000003D8308 "Z"
 *   insn=0x00000000003D8310 string=0x00000000003D83AC "h"
 *   insn=0x00000000003D831C string=0x00000000003D8320 ""
 *   insn=0x00000000003D8330 string=0x00000000003D8334 "\t@"
 *   insn=0x00000000003D8340 string=0x00000000003D8344 ""
 *   insn=0x00000000003D8350 string=0x00000000003D8354 "@"
 *   insn=0x00000000003D8360 string=0x00000000003D8364 "h"
 *   insn=0x00000000003D8364 string=0x00000000003D8368 ""
 *   insn=0x00000000003D8368 string=0x00000000003D836C "h"
 *   insn=0x00000000003D836C string=0x00000000003D8370 "!"
 *   insn=0x00000000003D8378 string=0x00000000003D837C "\t@"
 *   insn=0x00000000003D8380 string=0x00000000003D8384 "h\n@"
 *   insn=0x00000000003D8384 string=0x00000000003D8388 ""
 *   insn=0x00000000003D8388 string=0x00000000003D838C "h\n"
 *   insn=0x00000000003D838C string=0x00000000003D8390 "!"
 *   insn=0x00000000003D8390 string=0x00000000003D8394 "h"
 *   insn=0x00000000003D8398 string=0x00000000003D839C "@"
 *   insn=0x00000000003D83A0 string=0x00000000003D83A4 "4"
 *   insn=0x00000000003D83A8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003D83AC string=0x00000000003D83B0 ""
 *   insn=0x00000000003D83B0 string=0x00000000003D83B4 "A"
 *   insn=0x00000000003D83BC string=0x00000000003D83C0 "p"
 *   insn=0x00000000003D83C0 string=0x00000000001FA980 "0'"
 *   insn=0x00000000003D83C8 string=0x00000000003D83CC ")"
 *   insn=0x00000000003D83D0 string=0x00000000003D83D4 "F"
 *   insn=0x00000000003D83D0 string=0x00000000003D84AC "h"
 *   insn=0x00000000003D83DC string=0x00000000003D83E0 "C"
 *   insn=0x00000000003D83E8 string=0x00000000003D83EC "s"
 *   insn=0x00000000003D83EC string=0x00000000003D83F0 "h"
 *   insn=0x00000000003D83F0 string=0x00000000003D83F4 ""
 *   insn=0x00000000003D83F4 string=0x00000000003D83F8 "h"
 *   insn=0x00000000003D83FC string=0x00000000003D8400 "h"
 *   insn=0x00000000003D8400 string=0x00000000003D8404 "\t@"
 *   insn=0x00000000003D840C string=0x00000000003D8410 "h\n@"
 *   insn=0x00000000003D8410 string=0x00000000003D8414 ""
 *   insn=0x00000000003D8414 string=0x00000000003D8418 "h\n"
 *   insn=0x00000000003D841C string=0x00000000003D8420 "h"
 *   insn=0x00000000003D8420 string=0x00000000003D8424 "@"
 *   insn=0x00000000003D8430 string=0x00000000003D8434 ""
 *   insn=0x00000000003D843C string=0x00000000003D8440 "U"
 *   insn=0x00000000003D8444 string=0x00000000003D84A8 "3"
 *   insn=0x00000000003D8450 string=0x00000000003D8454 "&"
 *   insn=0x00000000003D8460 string=0x00000000003D8464 "5"
 *   insn=0x00000000003D8468 string=0x00000000003D846C ""
 *   insn=0x00000000003D8478 string=0x00000000003D847C "\t@"
 *   insn=0x00000000003D8488 string=0x00000000003D848C ""
 *   insn=0x00000000003D8498 string=0x00000000003D849C "@"
 *   insn=0x00000000003D84AC string=0x00000000003D84B0 ""
 *   insn=0x00000000003D84B0 string=0x00000000003D84B4 "h"
 *   insn=0x00000000003D84B8 string=0x00000000003D84BC "h"
 *   insn=0x00000000003D84BC string=0x00000000003D84C0 "\t@"
 *   insn=0x00000000003D84C8 string=0x00000000003D84CC "h\n@"
 *   insn=0x00000000003D84CC string=0x00000000003D84D0 ""
 *   insn=0x00000000003D84D0 string=0x00000000003D84D4 "h\n"
 *   insn=0x00000000003D84D8 string=0x00000000003D84DC "h"
 *   insn=0x00000000003D84DC string=0x00000000003D84E0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameOverlayView::HandleKeyboardEvent(__int64 a1, __int64 a2)
{
  int v2; // w8
  void (***v4)(void); // x0
  void (**v5)(void); // x8
  void (*v6)(void); // x2
  void (***v7)(void); // x0
  void (**v8)(void); // x8
  void (*v9)(void); // x8
  _QWORD *v10; // x19
  _DWORD *v11; // x22
  int v12; // w8
  int v13; // w1
  void (***v14)(void); // x0
  void (**v15)(void); // x8
  __int64 v16; // x8
  __int64 v17; // x8
  int v18; // w1
  char v19; // w22
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x8
  __int64 v25; // x8

  v2 = *(_DWORD *)(a2 + 16);
  if ( v2 == 19 )
  {
    v4 = *(void (****)(void))(a1 + 240);
    if ( v4 )
    {
      v5 = *v4;
      if ( *(_DWORD *)(a2 + 12) == 1 )
        v6 = *v5;
      else
        v6 = v5[1];
      v6();
      return;
    }
LABEL_16:
    Caver::GUIResponder::HandleKeyboardEvent();
    return;
  }
  if ( *(_BYTE *)(a1 + 416) || *(_BYTE *)(a1 + 228) )
  {
    if ( v2 == 38 || v2 == 17 )
    {
      v7 = *(void (****)(void))(a1 + 240);
      if ( v7 )
      {
        v8 = *v7;
        if ( *(_DWORD *)(a2 + 12) == 1 )
          v9 = *v8;
        else
          v9 = v8[1];
        v9();
      }
    }
    goto LABEL_16;
  }
  v10 = 0;
  switch ( v2 )
  {
    case 17:
      if ( *(_BYTE *)(a1 + 417) )
        v23 = a1 + 384;
      else
        v23 = a1 + 368;
      v11 = *(_DWORD **)v23;
      v10 = *(_QWORD **)(v23 + 8);
      if ( v10 )
        goto LABEL_19;
      goto LABEL_20;
    case 27:
    case 33:
    case 93:
      v11 = *(_DWORD **)(a1 + 456);
      v10 = *(_QWORD **)(a1 + 464);
      if ( v10 )
        goto LABEL_19;
      goto LABEL_20;
    case 37:
      v11 = *(_DWORD **)(a1 + 320);
      v10 = *(_QWORD **)(a1 + 328);
      if ( !v10 )
        goto LABEL_20;
      goto LABEL_19;
    case 38:
      v11 = *(_DWORD **)(a1 + 352);
      v10 = *(_QWORD **)(a1 + 360);
      if ( !v10 )
        goto LABEL_20;
      goto LABEL_19;
    case 39:
      v11 = *(_DWORD **)(a1 + 336);
      v10 = *(_QWORD **)(a1 + 344);
      if ( !v10 )
        goto LABEL_20;
      goto LABEL_19;
    case 49:
      v11 = *(_DWORD **)(a1 + 472);
      v10 = *(_QWORD **)(a1 + 480);
      if ( !v10 )
        goto LABEL_20;
      goto LABEL_19;
    case 65:
      v11 = *(_DWORD **)(a1 + 400);
      v10 = *(_QWORD **)(a1 + 408);
      if ( !v10 )
        goto LABEL_20;
      goto LABEL_19;
    case 72:
      v11 = *(_DWORD **)(a1 + 440);
      v10 = *(_QWORD **)(a1 + 448);
      if ( !v10 )
        goto LABEL_20;
LABEL_19:
      ++v10[1];
LABEL_20:
      if ( !v11 )
        goto LABEL_27;
      v12 = *(_DWORD *)(a2 + 12);
      if ( v12 == 2 )
      {
        v18 = v11[72];
        if ( (v18 & 1) != 0 )
        {
          v11[72] = v18 & 0xFFFFFFFE;
          if ( (v18 & 0xFFFFFFFE) != v18 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 304LL))(v11);
          goto LABEL_40;
        }
LABEL_37:
        v19 = 0;
        goto LABEL_41;
      }
      if ( v12 != 1 )
        goto LABEL_37;
      v13 = v11[72];
      if ( (v13 & 1) != 0 )
        goto LABEL_37;
      v11[72] = v13 | 1;
      if ( (v13 | 1) != v13 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 304LL))(v11);
LABEL_40:
      Caver::GameOverlayView::ButtonHighlightChanged();
      v19 = 1;
LABEL_41:
      if ( *(_BYTE *)(a1 + 316) != 1 )
      {
        v20 = *(_QWORD *)(a1 + 320);
        *(_BYTE *)(a1 + 316) = 1;
        *(_BYTE *)(v20 + 292) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 336) + 292LL) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 368) + 292LL) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 352) + 292LL) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 400) + 292LL) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 384) + 292LL) = 1;
      }
      if ( v10 )
      {
        v21 = v10[1] - 1LL;
        v10[1] = v21;
        if ( !v21 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v22 = v10[2] - 1LL;
          v10[2] = v22;
          if ( !v22 )
            (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
        }
      }
      if ( (v19 & 1) == 0 )
        goto LABEL_16;
      return;
    default:
LABEL_27:
      if ( v2 == 187 || v2 == 13 )
      {
        v14 = *(void (****)(void))(a1 + 240);
        if ( v14 )
        {
          v15 = *v14;
          if ( *(_DWORD *)(a2 + 12) == 1 )
            (*v15)();
          else
            v15[1]();
          if ( v10 )
          {
            v24 = v10[1] - 1LL;
            v10[1] = v24;
            if ( !v24 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
              v25 = v10[2] - 1LL;
              v10[2] = v25;
              if ( !v25 )
                (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
            }
          }
          return;
        }
      }
      if ( v10 )
      {
        v16 = v10[1] - 1LL;
        v10[1] = v16;
        if ( !v16 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v17 = v10[2] - 1LL;
          v10[2] = v17;
          if ( !v17 )
            (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
        }
      }
      goto LABEL_16;
  }
}

