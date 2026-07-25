/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000432A08
 * Mangled: _ZN5Caver10QuestsView14LayoutSubviewsEv
 * Demangled: Caver::QuestsView::LayoutSubviews(void)
 *
 * Callers: 1
 *   0x00000000004327B0  Caver::QuestsView::LabelGroup::~LabelGroup()
 *
 * Callees: 14
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FA7D0  std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[](std::string const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x0000000000202430  std::map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::operator[](std::string const&)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 222
 *   insn=0x0000000000432A34 string=0x0000000000432A38 "U"
 *   insn=0x0000000000432A48 string=0x00000000001F94B0 "0'"
 *   insn=0x0000000000432A5C string=0x00000000001F5CB0 "P'"
 *   insn=0x0000000000432A68 string=0x0000000000432A6C "\t"
 *   insn=0x0000000000432A88 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000432A90 string=0x0000000000432A94 ""
 *   insn=0x0000000000432A94 string=0x0000000000432A98 "\t"
 *   insn=0x0000000000432A98 string=0x0000000000432A9C ""
 *   insn=0x0000000000432AB8 string=0x0000000000432ABC "\tyC"
 *   insn=0x0000000000432ACC string=0x0000000000432AD0 "Z"
 *   insn=0x0000000000432AD8 string=0x0000000000432ADC ""
 *   insn=0x0000000000432AE8 string=0x0000000000432AEC "\n"
 *   insn=0x0000000000432AEC string=0x0000000000432AF0 ""
 *   insn=0x0000000000432AF0 string=0x0000000000432AF4 "0'"
 *   insn=0x0000000000432AF4 string=0x0000000000432AF8 "-"
 *   insn=0x0000000000432B04 string=0x0000000000432B08 "$"
 *   insn=0x0000000000432B0C string=0x0000000000432B10 ")=G"
 *   insn=0x0000000000432B10 string=0x0000000000432B14 "!"
 *   insn=0x0000000000432B18 string=0x0000000000432B1C "\t"
 *   insn=0x0000000000432B18 string=0x0000000000432B54 "\t"
 *   insn=0x0000000000432B1C string=0x0000000000432B20 "*"
 *   insn=0x0000000000432B20 string=0x0000000000432B24 "\n"
 *   insn=0x0000000000432B28 string=0x0000000000432B2C ""
 *   insn=0x0000000000432B2C string=0x0000000000432B60 "?"
 *   insn=0x0000000000432B30 string=0x0000000000432B34 ")=G"
 *   insn=0x0000000000432B34 string=0x0000000000432B38 "!"
 *   insn=0x0000000000432B3C string=0x0000000000432B40 "\t"
 *   insn=0x0000000000432B3C string=0x0000000000432B78 "\t"
 *   insn=0x0000000000432B40 string=0x0000000000432B44 "*"
 *   insn=0x0000000000432B44 string=0x0000000000432B48 "\n"
 *   insn=0x0000000000432B4C string=0x0000000000432B50 ""
 *   insn=0x0000000000432B50 string=0x0000000000432B84 "?"
 *   insn=0x0000000000432B54 string=0x0000000000432B58 "*"
 *   insn=0x0000000000432B58 string=0x0000000000432B5C "\n"
 *   insn=0x0000000000432B64 string=0x0000000000432BD8 "X"
 *   insn=0x0000000000432B6C string=0x0000000000432B70 "x"
 *   insn=0x0000000000432B70 string=0x0000000000432B74 ""
 *   insn=0x0000000000432B70 string=0x0000000000432BDC "{@"
 *   insn=0x0000000000432B74 string=0x0000000000432FA0 "3"
 *   insn=0x0000000000432B78 string=0x0000000000432B7C "*"
 *   insn=0x0000000000432B7C string=0x0000000000432B80 "\n"
 *   insn=0x0000000000432B84 string=0x0000000000432B88 ","
 *   insn=0x0000000000432B90 string=0x0000000000432B94 "6"
 *   insn=0x0000000000432BA0 string=0x0000000000432BA4 "a"
 *   insn=0x0000000000432BAC string=0x0000000000432BB0 " >"
 *   insn=0x0000000000432BB8 string=0x0000000000432BBC "h"
 *   insn=0x0000000000432BBC string=0x0000000000432BC0 ""
 *   insn=0x0000000000432BC0 string=0x0000000000432BC4 "h"
 *   insn=0x0000000000432BE4 string=0x0000000000432BE8 "!"
 *   insn=0x0000000000432BE8 string=0x0000000000432BEC "D"
 *   insn=0x0000000000432BF4 string=0x0000000000432BF8 "!()"
 *   insn=0x0000000000432C0C string=0x0000000000432C10 "X!"
 *   insn=0x0000000000432C24 string=0x0000000000432C28 "v"
 *   insn=0x0000000000432C28 string=0x00000000001F6E00 "0'"
 *   insn=0x0000000000432C2C string=0x0000000000432C30 ""
 *   insn=0x0000000000432C30 string=0x0000000000432C34 ""
 *   insn=0x0000000000432C44 string=0x0000000000432C48 "8"
 *   insn=0x0000000000432C54 string=0x00000000001FA7D0 "0'"
 *   insn=0x0000000000432C64 string=0x0000000000432C68 "A"
 *   insn=0x0000000000432C88 string=0x0000000000432C8C "("
 *   insn=0x0000000000432C8C string=0x0000000000432C90 ""
 *   insn=0x0000000000432C90 string=0x0000000000432C94 "("
 *   insn=0x0000000000432CA4 string=0x0000000000432CA8 "@"
 *   insn=0x0000000000432CA8 string=0x0000000000432CAC ""
 *   insn=0x0000000000432CAC string=0x0000000000432CB0 ""
 *   insn=0x0000000000432CC0 string=0x0000000000432CC4 ""
 *   insn=0x0000000000432CC4 string=0x0000000000432CC8 "H"
 *   insn=0x0000000000432CDC string=0x0000000000432CE0 "x@"
 *   insn=0x0000000000432CE4 string=0x0000000000432CE8 "I@"
 *   insn=0x0000000000432D08 string=0x0000000000432D0C ")C"
 *   insn=0x0000000000432D18 string=0x0000000000432D1C "%C"
 *   insn=0x0000000000432D28 string=0x0000000000432D2C "!C"
 *   insn=0x0000000000432D38 string=0x0000000000432D3C "A)!"
 *   insn=0x0000000000432D50 string=0x0000000000432D54 "!"
 *   insn=0x0000000000432D5C string=0x0000000000432D60 "w"
 *   insn=0x0000000000432D60 string=0x0000000000432D64 ")"
 *   insn=0x0000000000432D60 string=0x0000000000432D8C " C"
 *   insn=0x0000000000432D68 string=0x0000000000432D6C "7}@"
 *   insn=0x0000000000432D78 string=0x00000000001F3C90 "P'"
 *   insn=0x0000000000432DAC string=0x0000000000432DB0 "("
 *   insn=0x0000000000432DB0 string=0x0000000000432DB4 "}@"
 *   insn=0x0000000000432DCC string=0x0000000000432DD0 "_"
 *   insn=0x0000000000432DDC string=0x0000000000432DE0 "\n"
 *   insn=0x0000000000432DE0 string=0x0000000000432DE4 "h"
 *   insn=0x0000000000432DE4 string=0x0000000000432DE8 "0'"
 *   insn=0x0000000000432DEC string=0x0000000000432DF0 "hOG"
 *   insn=0x0000000000432DF8 string=0x0000000000432DFC "a"
 *   insn=0x0000000000432E00 string=0x0000000000432E04 "h'A) "
 *   insn=0x0000000000432E04 string=0x0000000000432E08 " "
 *   insn=0x0000000000432E0C string=0x0000000000432E10 ":"
 *   insn=0x0000000000432E18 string=0x0000000000432E1C "!"
 *   insn=0x0000000000432E1C string=0x0000000000432E20 """
 *   insn=0x0000000000432E20 string=0x0000000000432E24 "!(""
 *   insn=0x0000000000432E28 string=0x0000000000432E2C "!(""
 *   insn=0x0000000000432E2C string=0x0000000000432E30 "!8#"
 *   insn=0x0000000000432E54 string=0x0000000000432E58 "!"
 *   insn=0x0000000000432E60 string=0x0000000000432E74 """
 *   insn=0x0000000000432E68 string=0x0000000000432E6C "!(""
 *   insn=0x0000000000432E6C string=0x0000000000432E70 ""
 *   insn=0x0000000000432E74 string=0x0000000000432E78 "#"
 *   insn=0x0000000000432E7C string=0x0000000000432E80 "!(""
 *   insn=0x0000000000432E84 string=0x0000000000432E88 "!(""
 *   insn=0x0000000000432E88 string=0x0000000000432E8C "!8#"
 *   insn=0x0000000000432E94 string=0x0000000000432E98 "!"
 *   insn=0x0000000000432E9C string=0x0000000000432EA0 "!(""
 *   insn=0x0000000000432EA0 string=0x0000000000432EA4 " 8 "
 *   insn=0x0000000000432EB8 string=0x0000000000432EBC ","
 *   insn=0x0000000000432ED4 string=0x0000000000432ED8 ""
 *   insn=0x0000000000432ED8 string=0x0000000000432EDC ""
 *   insn=0x0000000000432EE4 string=0x0000000000432EE8 "8"
 *   insn=0x0000000000432EE8 string=0x0000000000432EEC "@"
 *   insn=0x0000000000432EE8 string=0x0000000000432F2C "5"
 *   insn=0x0000000000432EEC string=0x0000000000432EF0 ""
 *   insn=0x0000000000432EF0 string=0x0000000000432EF4 ""
 *   insn=0x0000000000432EF8 string=0x0000000000432EFC ""
 *   insn=0x0000000000432EFC string=0x0000000000432F00 "\t@"
 *   insn=0x0000000000432F08 string=0x0000000000432F0C "@"
 *   insn=0x0000000000432F0C string=0x0000000000432F10 ""
 *   insn=0x0000000000432F10 string=0x0000000000432F14 ""
 *   insn=0x0000000000432F18 string=0x0000000000432F1C ""
 *   insn=0x0000000000432F1C string=0x0000000000432F20 "@"
 *   insn=0x0000000000432F30 string=0x0000000000432F34 ""
 *   insn=0x0000000000432F40 string=0x0000000000432F44 "\t@"
 *   insn=0x0000000000432F50 string=0x0000000000432F54 ""
 *   insn=0x0000000000432F60 string=0x0000000000432F64 "@"
 *   insn=0x0000000000432F84 string=0x0000000000432F88 "Z"
 *   insn=0x0000000000432F94 string=0x0000000000432F98 "Z"
 *   insn=0x0000000000432FA0 string=0x0000000000432FA4 "h"
 *   insn=0x0000000000432FA4 string=0x0000000000432FA8 ""
 *   insn=0x0000000000432FA8 string=0x0000000000432FAC "h"
 *   insn=0x0000000000432FB0 string=0x0000000000432FB4 "h"
 *   insn=0x0000000000432FB8 string=0x0000000000432FBC "\t@"
 *   insn=0x0000000000432FC0 string=0x0000000000432FC4 "h\n@"
 *   insn=0x0000000000432FC4 string=0x0000000000432FC8 ""
 *   insn=0x0000000000432FC8 string=0x0000000000432FCC "h\n"
 *   insn=0x0000000000432FD0 string=0x0000000000432FD4 "h"
 *   insn=0x0000000000432FD8 string=0x0000000000432FDC "@"
 *   insn=0x0000000000432FE8 string=0x0000000000432FEC "a"
 *   insn=0x0000000000432FF4 string=0x0000000000432FF8 ""
 *   insn=0x0000000000432FFC string=0x0000000000433000 ""
 *   insn=0x000000000043300C string=0x0000000000433010 " ( "
 *   insn=0x0000000000433014 string=0x0000000000433018 "!(""
 *   insn=0x0000000000433018 string=0x000000000043301C "!8 "
 *   insn=0x0000000000433024 string=0x0000000000433028 "  ""
 *   insn=0x000000000043302C string=0x0000000000433044 ""
 *   insn=0x0000000000433048 string=0x000000000043304C ""
 *   insn=0x0000000000433058 string=0x000000000043305C ""EI"
 *   insn=0x0000000000433058 string=0x0000000000583944 "\n"
 *   insn=0x000000000043306C string=0x0000000000433070 "c"
 *   insn=0x0000000000433070 string=0x0000000000433074 "` ""
 *   insn=0x0000000000433074 string=0x0000000000433078 "!@!"
 *   insn=0x0000000000433078 string=0x000000000043307C "M"
 *   insn=0x0000000000433088 string=0x000000000043308C "\t"
 *   insn=0x0000000000433090 string=0x0000000000433094 "#8#"
 *   insn=0x0000000000433094 string=0x0000000000433098 "c"
 *   insn=0x0000000000433098 string=0x000000000043309C "` ""
 *   insn=0x000000000043309C string=0x00000000004330A0 "M"
 *   insn=0x00000000004330A0 string=0x00000000004330A8 "\t"
 *   insn=0x00000000004330C4 string=0x00000000004330F8 "v"
 *   insn=0x00000000004330F8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000433104 string=0x0000000000433108 "k"
 *   insn=0x0000000000433108 string=0x00000000004332B4 "3"
 *   insn=0x0000000000433110 string=0x0000000000433114 "W"
 *   insn=0x0000000000433110 string=0x0000000000433230 "@"
 *   insn=0x0000000000433114 string=0x0000000000433270 "5"
 *   insn=0x000000000043311C string=0x0000000000433120 "T"
 *   insn=0x0000000000433124 string=0x0000000000433128 "X"
 *   insn=0x0000000000433128 string=0x000000000043312C "Q"
 *   insn=0x0000000000433134 string=0x0000000000433138 "(a"
 *   insn=0x0000000000433144 string=0x0000000000433148 "J=G"
 *   insn=0x0000000000433148 string=0x000000000043314C ")!"
 *   insn=0x0000000000433150 string=0x0000000000433154 "*"
 *   insn=0x0000000000433150 string=0x0000000000433180 "*"
 *   insn=0x0000000000433154 string=0x0000000000433158 "K"
 *   insn=0x0000000000433158 string=0x000000000043315C "+"
 *   insn=0x0000000000433160 string=0x0000000000433164 "_"
 *   insn=0x0000000000433164 string=0x0000000000433168 "l\n"
 *   insn=0x0000000000433178 string=0x000000000043317C "_"
 *   insn=0x0000000000433178 string=0x00000000004332B8 "h"
 *   insn=0x0000000000433180 string=0x0000000000433184 "K"
 *   insn=0x0000000000433184 string=0x0000000000433188 "+"
 *   insn=0x0000000000433188 string=0x000000000043318C "_"
 *   insn=0x0000000000433190 string=0x0000000000433194 "H"
 *   insn=0x00000000004331A8 string=0x00000000004331AC "(a"
 *   insn=0x00000000004331B0 string=0x00000000004331B4 " \n"
 *   insn=0x00000000004331B8 string=0x00000000004331BC "J=G"
 *   insn=0x00000000004331BC string=0x00000000004331C0 ")!"
 *   insn=0x00000000004331C4 string=0x00000000004331C8 "*"
 *   insn=0x00000000004331C4 string=0x00000000004331F4 "*"
 *   insn=0x00000000004331C8 string=0x00000000004331CC "K"
 *   insn=0x00000000004331CC string=0x00000000004331D0 "+"
 *   insn=0x00000000004331D4 string=0x00000000004331D8 "_"
 *   insn=0x00000000004331E4 string=0x00000000004331E8 "o"
 *   insn=0x00000000004331F4 string=0x00000000004331F8 "K"
 *   insn=0x00000000004331F8 string=0x00000000004331FC "+"
 *   insn=0x00000000004331FC string=0x0000000000433200 "_"
 *   insn=0x0000000000433204 string=0x0000000000433208 "<"
 *   insn=0x0000000000433218 string=0x000000000043321C "7"
 *   insn=0x0000000000433228 string=0x000000000043322C "8"
 *   insn=0x0000000000433230 string=0x0000000000433234 ""
 *   insn=0x0000000000433234 string=0x0000000000433238 ""
 *   insn=0x000000000043323C string=0x0000000000433240 ""
 *   insn=0x0000000000433240 string=0x0000000000433244 "\t@"
 *   insn=0x000000000043324C string=0x0000000000433250 "@"
 *   insn=0x0000000000433250 string=0x0000000000433254 ""
 *   insn=0x0000000000433254 string=0x0000000000433258 ""
 *   insn=0x000000000043325C string=0x0000000000433260 ""
 *   insn=0x0000000000433260 string=0x0000000000433264 "@"
 *   insn=0x0000000000433274 string=0x0000000000433278 ""
 *   insn=0x0000000000433284 string=0x0000000000433288 "\t@"
 *   insn=0x0000000000433294 string=0x0000000000433298 ""
 *   insn=0x00000000004332A4 string=0x00000000004332A8 "@"
 *   insn=0x00000000004332B8 string=0x00000000004332BC ""
 *   insn=0x00000000004332BC string=0x00000000004332C0 "h"
 *   insn=0x00000000004332C4 string=0x00000000004332C8 "h"
 *   insn=0x00000000004332C8 string=0x00000000004332CC "\t@"
 *   insn=0x00000000004332D4 string=0x00000000004332D8 "h\n@"
 *   insn=0x00000000004332D8 string=0x00000000004332DC ""
 *   insn=0x00000000004332DC string=0x00000000004332E0 "h\n"
 *   insn=0x00000000004332E4 string=0x00000000004332E8 "h"
 *   insn=0x00000000004332E8 string=0x00000000004332EC "@"
 *   insn=0x00000000004332F8 string=0x00000000004332FC "r9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::QuestsView::LayoutSubviews(Caver::QuestsView *this)
{
  __int128 v1; // q8
  __int128 v2; // q10
  float v4; // s8
  int v5; // w19
  Caver::GUIView *v6; // x0
  _DWORD *v7; // x0
  unsigned int v8; // w9
  void (__fastcall *v9)(_DWORD *, __int128 *); // x8
  _QWORD *v10; // x22
  _QWORD *v11; // x25
  float v12; // s11
  float v13; // s13
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  __int64 v18; // x23
  __int64 v19; // x0
  _QWORD *v20; // x19
  _QWORD *v21; // x24
  void *v22; // x0
  float v23; // s0
  float v24; // s1
  float v25; // s13
  __int64 *v26; // x23
  void *v27; // x0
  __int64 v28; // x28
  int v29; // w26
  _QWORD *v30; // x9
  float *v31; // x25
  __int64 v32; // x23
  _QWORD *v33; // x24
  Caver::GUILabel **v34; // x21
  Caver::GUILabel **v35; // x26
  __int128 v36; // q11
  __int128 v37; // q8
  float v38; // s12
  char v39; // w23
  Caver::GUIView *v40; // x0
  unsigned int v41; // s0
  unsigned int v42; // w8
  Caver::GUIView *v43; // x27
  float v44; // s15
  float v45; // s10
  Caver::GUILabel *v46; // x8
  float v47; // s12
  void (__fastcall *v48)(float *, __int128 *); // x23
  float v49; // s1
  float v50; // w8
  float v51; // s0
  float v52; // w8
  float v53; // w9
  float v54; // s1
  float v55; // s0
  char v56; // w8
  float v57; // s1
  float v58; // s12
  __int64 v59; // x8
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x8
  __int64 v64; // x8
  __int64 v65; // x0
  float v66; // s1
  float v67; // s2
  float v68; // s0
  float v69; // s1
  float v70; // s2
  float v71; // s0
  __int64 result; // x0
  __int64 v73; // x8
  float v74; // s0
  float v75; // s1
  float v76; // s3
  __int64 v77; // [xsp+8h] [xbp-158h]
  __int64 v78; // [xsp+10h] [xbp-150h]
  _QWORD *v79; // [xsp+18h] [xbp-148h]
  int v80; // [xsp+44h] [xbp-11Ch]
  _QWORD *v81; // [xsp+48h] [xbp-118h]
  __int128 v82; // [xsp+50h] [xbp-110h] BYREF
  __int64 v83; // [xsp+68h] [xbp-F8h] BYREF
  float v84; // [xsp+70h] [xbp-F0h]
  float v85; // [xsp+74h] [xbp-ECh]
  __int64 v86; // [xsp+78h] [xbp-E8h] BYREF
  __int64 v87; // [xsp+80h] [xbp-E0h] BYREF
  __int64 v88; // [xsp+88h] [xbp-D8h] BYREF
  __int128 v89; // [xsp+90h] [xbp-D0h] BYREF
  __int128 v90; // [xsp+A0h] [xbp-C0h] BYREF
  float v91; // [xsp+B8h] [xbp-A8h]
  float v92; // [xsp+C0h] [xbp-A0h]
  __int64 v93; // [xsp+C8h] [xbp-98h]

  v93 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews(this);
  v4 = *((float *)this + 33);
  v5 = *((_DWORD *)this + 36);
  Caver::GUIView::safeBounds(this);
  v6 = (Caver::GUIView *)*((_QWORD *)this + 33);
  *(_QWORD *)&v90 = 0;
  *((float *)&v90 + 2) = (float)(v91 + v92) - v4;
  HIDWORD(v90) = v5;
  Caver::GUIView::SetFrame(v6, (const Caver::Rectangle *)&v90);
  v7 = (_DWORD *)*((_QWORD *)this + 33);
  v8 = v7[35];
  v9 = *(void (__fastcall **)(_DWORD *, __int128 *))(*(_QWORD *)v7 + 304LL);
  *(_QWORD *)&v90 = 0;
  *((_QWORD *)&v90 + 1) = v8;
  v9(v7, &v90);
  v10 = (_QWORD *)*((_QWORD *)this + 35);
  v11 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v10 != v11 )
  {
    LODWORD(v2) = 5.0;
    LODWORD(v1) = -8.0;
    v12 = 25.0;
    v13 = -50.0;
    do
    {
      v18 = *v10;
      sub_56A528(&v90, *v10);
      v19 = std::map<std::string,boost::shared_ptr<Caver::GUILabel>>::operator[]();
      v21 = *(_QWORD **)v19;
      v20 = *(_QWORD **)(v19 + 8);
      if ( v20 )
        ++v20[1];
      v22 = (void *)(v90 - 24);
      if ( (__int64 *)(v90 - 24) == &qword_6FD2E0 )
        goto LABEL_19;
      v14 = (unsigned int *)(v90 - 8);
      if ( &pthread_create )
      {
        do
          v15 = __ldaxr(v14);
        while ( __stlxr(v15 - 1, v14) );
      }
      else
      {
        v15 = (*v14)--;
      }
      if ( v15 > 0 )
      {
LABEL_19:
        if ( v21 )
        {
LABEL_20:
          v23 = *(float *)(v21[30] + 72LL);
          v24 = *(float *)(*((_QWORD *)this + 33) + 140LL);
          LODWORD(v90) = 1109393408;
          v25 = v13 - (float)(v23 + *(float *)&v2);
          *((float *)&v90 + 1) = v25;
          *((float *)&v90 + 2) = v24 + -50.0;
          *((float *)&v90 + 3) = v23;
          Caver::GUIView::SetFrame((Caver::GUIView *)v21, (const Caver::Rectangle *)&v90);
          v90 = *(_OWORD *)(*((_QWORD *)this + 33) + 236LL);
          Caver::Rectangle::ExpandToincludeRectangle(
            (Caver::Rectangle *)&v90,
            (const Caver::Rectangle *)((char *)v21 + 116));
          (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 33) + 304LL))(*((_QWORD *)this + 33), &v90);
          sub_56A528(&v89, v18);
          v26 = (__int64 *)std::map<std::string,std::vector<Caver::QuestsView::LabelGroup>>::operator[]();
          v27 = (void *)(v89 - 24);
          if ( (__int64 *)(v89 - 24) != &qword_6FD2E0 )
          {
            v16 = (unsigned int *)(v89 - 8);
            if ( &pthread_create )
            {
              do
                v17 = __ldaxr(v16);
              while ( __stlxr(v17 - 1, v16) );
            }
            else
            {
              v17 = (*v16)--;
            }
            if ( v17 <= 0 )
              operator delete(v27);
          }
          v28 = *v26;
          v13 = v25 + *(float *)&v1;
          if ( *v26 != v26[1] )
          {
            v29 = 0;
            v78 = v26[1];
            v79 = v11;
            do
            {
              v31 = *(float **)(v28 + 24);
              v30 = *(_QWORD **)(v28 + 32);
              if ( v30 )
                ++v30[1];
              v80 = v29;
              v81 = v30;
              v32 = *(_QWORD *)(v28 + 40);
              v33 = *(_QWORD **)(v28 + 48);
              if ( v33 )
                ++v33[1];
              v34 = *(Caver::GUILabel ***)v28;
              v35 = *(Caver::GUILabel ***)(v28 + 8);
              if ( *(Caver::GUILabel ***)v28 != v35 )
              {
                v77 = v32;
                v36 = v1;
                v37 = v2;
                v38 = 0.0;
                v39 = 1;
                do
                {
                  v40 = *v34;
                  *(float *)&v41 = *(float *)(*((_QWORD *)this + 33) + 244LL) + -120.0;
                  v42 = *(_DWORD *)(*((_QWORD *)*v34 + 30) + 72LL);
                  *(_QWORD *)&v89 = 0;
                  *((_QWORD *)&v89 + 1) = __PAIR64__(v42, v41);
                  Caver::GUIView::SetFrame(v40, (const Caver::Rectangle *)&v89);
                  v43 = *v34;
                  Caver::GUILabel::TextSize(&v88, *v34);
                  v44 = *((float *)&v88 + 1);
                  Caver::GUILabel::TextSize(&v87, *v34);
                  v45 = *(float *)&v87;
                  Caver::GUILabel::TextSize(&v86, *v34);
                  LODWORD(v89) = 0;
                  *((float *)&v89 + 1) = v38 - v44;
                  *((float *)&v89 + 2) = v45 + 4.0;
                  HIDWORD(v89) = HIDWORD(v86);
                  Caver::GUIView::SetFrame(v43, (const Caver::Rectangle *)&v89);
                  v46 = *v34;
                  v47 = *((float *)*v34 + 30);
                  if ( (v39 & 1) != 0 )
                  {
                    v48 = *(void (__fastcall **)(float *, __int128 *))(*(_QWORD *)v31 + 248LL);
                    Caver::Rectangle::RectangleByOutsetting(
                      (__int64 *)&v89,
                      (Caver::GUILabel *)((char *)v46 + 116),
                      15.0);
                    v48(v31, &v89);
                  }
                  else
                  {
                    v89 = *(_OWORD *)(v31 + 33);
                    Caver::Rectangle::RectangleByOutsetting(&v83, (Caver::GUILabel *)((char *)v46 + 116), 15.0);
                    Caver::Rectangle::ExpandToincludeRectangle((Caver::Rectangle *)&v89, (const Caver::Rectangle *)&v83);
                    (*(void (__fastcall **)(float *, __int128 *))(*(_QWORD *)v31 + 248LL))(v31, &v89);
                  }
                  v34 += 2;
                  v39 = 0;
                  v38 = v47 + -10.0;
                }
                while ( v35 != v34 );
                v32 = v77;
                v2 = v37;
                v1 = v36;
                v12 = 25.0;
              }
              v49 = v12;
              *(_QWORD *)&v89 = *(_QWORD *)(v31 + 29);
              v50 = v31[31];
              v51 = v31[32];
              *((_QWORD *)&v89 + 1) = __PAIR64__(LODWORD(v51), LODWORD(v50));
              if ( (v80 & 1) != 0 )
                v49 = (float)((float)(*(float *)(*((_QWORD *)this + 33) + 236LL)
                                    + *(float *)(*((_QWORD *)this + 33) + 244LL))
                            + -25.0)
                    - v50;
              *(float *)&v89 = v49;
              *((float *)&v89 + 1) = v13 - v51;
              Caver::GUIView::SetFrame((Caver::GUIView *)v31, (const Caver::Rectangle *)&v89);
              v83 = *(_QWORD *)(v32 + 116);
              v53 = *(float *)(v32 + 124);
              v52 = *(float *)(v32 + 128);
              v84 = v53;
              v85 = v52;
              v54 = v31[33];
              v55 = v52;
              if ( (v80 & 1) != 0 )
              {
                v56 = 1;
                v57 = v54 + 40.0;
              }
              else
              {
                v56 = 0;
                v57 = (float)((float)(v54 + v31[35]) + -40.0) - v53;
              }
              *(float *)&v83 = v57;
              *(_BYTE *)(v32 + 264) = v56;
              *((float *)&v83 + 1) = (float)(v31[34] + 3.0) - v55;
              Caver::GUIView::SetFrame((Caver::GUIView *)v32, (const Caver::Rectangle *)&v83);
              v58 = v31[32];
              v82 = *(_OWORD *)(*((_QWORD *)this + 33) + 236LL);
              Caver::Rectangle::ExpandToincludeRectangle((Caver::Rectangle *)&v82, (const Caver::Rectangle *)(v31 + 29));
              (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 33) + 304LL))(
                *((_QWORD *)this + 33),
                &v82);
              if ( v33 )
              {
                v59 = v33[1] - 1LL;
                v33[1] = v59;
                if ( !v59 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
                  v60 = v33[2] - 1LL;
                  v33[2] = v60;
                  if ( !v60 )
                    (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
                }
              }
              if ( v81 )
              {
                v61 = v81[1] - 1LL;
                v81[1] = v61;
                if ( !v61 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v81 + 16LL))(v81);
                  v62 = v81[2] - 1LL;
                  v81[2] = v62;
                  if ( !v62 )
                    (*(void (__fastcall **)(_QWORD *))(*v81 + 24LL))(v81);
                }
              }
              v11 = v79;
              v28 += 56;
              v13 = v13 - (float)(v58 + 20.0);
              v29 = v80 ^ 1;
            }
            while ( v28 != v78 );
          }
        }
      }
      else
      {
        operator delete(v22);
        if ( v21 )
          goto LABEL_20;
      }
      if ( v20 )
      {
        v63 = v20[1] - 1LL;
        v20[1] = v63;
        if ( !v63 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
          v64 = v20[2] - 1LL;
          v20[2] = v64;
          if ( !v64 )
            (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
        }
      }
      ++v10;
    }
    while ( v10 != v11 );
  }
  v65 = *((_QWORD *)this + 33);
  LODWORD(v90) = *(_DWORD *)(v65 + 236);
  v66 = *(float *)(v65 + 240);
  DWORD2(v90) = *(_DWORD *)(v65 + 244);
  v67 = *(float *)(v65 + 248);
  v68 = v66 + -30.0;
  *((float *)&v90 + 1) = v66 + -30.0;
  v69 = (float)(v66 + v67) - (float)(v66 + -30.0);
  *((float *)&v90 + 3) = v69;
  v70 = *(float *)(v65 + 144);
  if ( v69 < v70 )
  {
    v71 = v68 + v69;
    *((float *)&v90 + 3) = v71 - (float)(v71 - v70);
    *((float *)&v90 + 1) = v71 - v70;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v65 + 304LL))(v65, &v90);
  v73 = *((_QWORD *)this + 33);
  v74 = -*(float *)(v73 + 236);
  v75 = -*(float *)(v73 + 240);
  if ( fabsf(v74 - *(float *)(v73 + 264)) > 0.01 )
    *(_DWORD *)(v73 + 292) = 0;
  v76 = *(float *)(v73 + 308);
  *(_BYTE *)(v73 + 260) = 1;
  *(float *)(v73 + 264) = v74;
  if ( fabsf(v75 - v76) > 0.01 )
    *(_DWORD *)(v73 + 336) = 0;
  *(_BYTE *)(v73 + 304) = 1;
  *(float *)(v73 + 308) = v75;
  *(float *)(v73 + 256) = v74;
  *(float *)(v73 + 300) = v75;
  return result;
}

