/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D6A38
 * Mangled: _ZN5Caver15GameOverlayView14LayoutSubviewsEv
 * Demangled: Caver::GameOverlayView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC260  Caver::GUIViewLayout::SubviewWithIdentifier(std::string const&)
 *   0x0000000000200200  Caver::Rectangle::Intersection(Caver::Rectangle const&)
 *   0x0000000000200380  Caver::GUIView::controlBounds(void)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *   0x0000000000202500  Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 202
 *   insn=0x00000000003D6A58 string=0x00000000003D6A5C "V"
 *   insn=0x00000000003D6A70 string=0x00000000001F5CB0 "P'"
 *   insn=0x00000000003D6A74 string=0x00000000003D6A78 "hb\t"
 *   insn=0x00000000003D6A84 string=0x00000000003D6A88 ">"
 *   insn=0x00000000003D6A90 string=0x00000000003D6A94 "h"
 *   insn=0x00000000003D6A94 string=0x00000000003D6A98 ")"
 *   insn=0x00000000003D6A9C string=0x00000000003D6AA0 "!"
 *   insn=0x00000000003D6AA8 string=0x00000000003D6AAC "`:A"
 *   insn=0x00000000003D6AAC string=0x00000000003D6AB0 """
 *   insn=0x00000000003D6AB0 string=0x00000000003D6AB4 "c6A"
 *   insn=0x00000000003D6AB4 string=0x00000000003D6AB8 "`"
 *   insn=0x00000000003D6AB8 string=0x00000000003D6ABC "\n!"
 *   insn=0x00000000003D6ABC string=0x00000000003D6AC0 ")"
 *   insn=0x00000000003D6AC0 string=0x00000000003D6AC4 "`"
 *   insn=0x00000000003D6AD4 string=0x00000000003D6AD8 "h"
 *   insn=0x00000000003D6AD4 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003D6AD8 string=0x00000000003D6ADC "`nB"
 *   insn=0x00000000003D6ADC string=0x00000000003D6AE0 "`"
 *   insn=0x00000000003D6AE0 string=0x00000000003D6AE4 ""
 *   insn=0x00000000003D6AF8 string=0x00000000003D6AFC "!(""
 *   insn=0x00000000003D6AFC string=0x00000000003D6B00 "!(("
 *   insn=0x00000000003D6B08 string=0x00000000003D6B0C "`jB"
 *   insn=0x00000000003D6B0C string=0x00000000003D6B10 "arB"
 *   insn=0x00000000003D6B10 string=0x00000000003D6B14 "bnB"
 *   insn=0x00000000003D6B14 string=0x00000000003D6B18 "`"
 *   insn=0x00000000003D6B28 string=0x00000000003D6B2C "A($"
 *   insn=0x00000000003D6B40 string=0x00000000003D6B44 "h"
 *   insn=0x00000000003D6B44 string=0x00000000003D6B48 "`nB"
 *   insn=0x00000000003D6B48 string=0x00000000003D6B4C "`"
 *   insn=0x00000000003D6B60 string=0x00000000003D6B64 "!(""
 *   insn=0x00000000003D6B64 string=0x00000000003D6B68 "!8+"
 *   insn=0x00000000003D6B70 string=0x00000000003D6B74 "`jB"
 *   insn=0x00000000003D6B74 string=0x00000000003D6B78 "arB"
 *   insn=0x00000000003D6B7C string=0x00000000003D6B80 "bnB"
 *   insn=0x00000000003D6B84 string=0x00000000003D6B88 "`"
 *   insn=0x00000000003D6B90 string=0x00000000003D6B94 "A(#"
 *   insn=0x00000000003D6BA4 string=0x00000000003D6BA8 "r"
 *   insn=0x00000000003D6BA8 string=0x00000000003D6BAC "`"
 *   insn=0x00000000003D6BB0 string=0x00000000003D6BB4 "`.A"
 *   insn=0x00000000003D6BB0 string=0x00000000003D6BE0 "`"
 *   insn=0x00000000003D6BB4 string=0x00000000003D6BB8 "a2A"
 *   insn=0x00000000003D6BD8 string=0x00000000003D6BDC "e"
 *   insn=0x00000000003D6BE4 string=0x00000000003D6BE8 "`^B"
 *   insn=0x00000000003D6BE4 string=0x00000000003D6C20 "`"
 *   insn=0x00000000003D6BE8 string=0x00000000003D6BEC "afB"
 *   insn=0x00000000003D6BEC string=0x00000000003D6BF0 ""
 *   insn=0x00000000003D6BF4 string=0x00000000003D6BF8 "\n,"
 *   insn=0x00000000003D6BFC string=0x00000000003D6C00 "!"
 *   insn=0x00000000003D6C18 string=0x00000000003D6C1C "U"
 *   insn=0x00000000003D6C24 string=0x00000000003D6C28 "arB"
 *   insn=0x00000000003D6C24 string=0x00000000003D6C64 "`"
 *   insn=0x00000000003D6C2C string=0x00000000003D6C30 "bjB"
 *   insn=0x00000000003D6C30 string=0x00000000003D6C34 "cnB"
 *   insn=0x00000000003D6C38 string=0x00000000003D6C3C "!$"
 *   insn=0x00000000003D6C40 string=0x00000000003D6C44 "A(!"
 *   insn=0x00000000003D6C44 string=0x00000000003D6C48 "!8$"
 *   insn=0x00000000003D6C48 string=0x00000000003D6C4C "c(("
 *   insn=0x00000000003D6C4C string=0x00000000003D6C50 "!@&"
 *   insn=0x00000000003D6C5C string=0x00000000003D6C60 "D"
 *   insn=0x00000000003D6C64 string=0x00000000003D6C68 "`^B"
 *   insn=0x00000000003D6C68 string=0x00000000003D6C6C "afB"
 *   insn=0x00000000003D6C6C string=0x00000000003D6C70 "cbB"
 *   insn=0x00000000003D6C70 string=0x00000000003D6C74 ""
 *   insn=0x00000000003D6C74 string=0x00000000003D6C78 "bZB"
 *   insn=0x00000000003D6C78 string=0x00000000003D6C7C ""
 *   insn=0x00000000003D6C84 string=0x00000000003D6C88 "c("
 *   insn=0x00000000003D6C90 string=0x00000000003D6C94 "B(#"
 *   insn=0x00000000003D6C94 string=0x00000000003D6C98 "!("
 *   insn=0x00000000003D6C98 string=0x00000000003D6C9C "#"
 *   insn=0x00000000003D6C9C string=0x00000000003D6CA0 "A8!"
 *   insn=0x00000000003D6CA4 string=0x00000000003D6CA8 "!@&"
 *   insn=0x00000000003D6CB4 string=0x00000000003D6CB8 "."
 *   insn=0x00000000003D6CB8 string=0x00000000003D6CBC "`"
 *   insn=0x00000000003D6CBC string=0x00000000003D6CC0 "`^B"
 *   insn=0x00000000003D6CC0 string=0x00000000003D6CC4 "afB"
 *   insn=0x00000000003D6CC8 string=0x00000000003D6CCC "cbB"
 *   insn=0x00000000003D6CCC string=0x00000000003D6CD0 "bZB"
 *   insn=0x00000000003D6CD8 string=0x00000000003D6CDC ""
 *   insn=0x00000000003D6CDC string=0x00000000003D6CE0 "c("
 *   insn=0x00000000003D6CE0 string=0x00000000003D6CE4 "B(#"
 *   insn=0x00000000003D6CEC string=0x00000000003D6CF0 "!("
 *   insn=0x00000000003D6CF0 string=0x00000000003D6CF4 "#"
 *   insn=0x00000000003D6CF4 string=0x00000000003D6CF8 "A8!"
 *   insn=0x00000000003D6CFC string=0x00000000003D6D00 "!@&"
 *   insn=0x00000000003D6D10 string=0x00000000003D6D14 "bbB"
 *   insn=0x00000000003D6D14 string=0x00000000003D6D18 "aZB"
 *   insn=0x00000000003D6D20 string=0x00000000003D6D24 "`^B"
 *   insn=0x00000000003D6D28 string=0x00000000003D6D2C "B("
 *   insn=0x00000000003D6D2C string=0x00000000003D6D30 "`"
 *   insn=0x00000000003D6D30 string=0x00000000003D6D34 "!(""
 *   insn=0x00000000003D6D38 string=0x00000000003D6D3C "!(#"
 *   insn=0x00000000003D6D40 string=0x00000000003D6D44 "!@&"
 *   insn=0x00000000003D6D50 string=0x00000000003D6D54 ""
 *   insn=0x00000000003D6D54 string=0x00000000003D6D58 "`&A"
 *   insn=0x00000000003D6D58 string=0x00000000003D6D5C "`ZB"
 *   insn=0x00000000003D6D5C string=0x00000000003D6D60 "b^B"
 *   insn=0x00000000003D6D60 string=0x00000000003D6D64 "cfB"
 *   insn=0x00000000003D6D74 string=0x00000000003D6D78 "A(#"
 *   insn=0x00000000003D6D7C string=0x00000000003D6D80 "|@"
 *   insn=0x00000000003D6D80 string=0x00000000003D6D84 "!($"
 *   insn=0x00000000003D6D88 string=0x00000000003D6D8C " 8""
 *   insn=0x00000000003D6DA0 string=0x00000000003D6DA4 "`FA"
 *   insn=0x00000000003D6DA4 string=0x00000000003D6DA8 "`"
 *   insn=0x00000000003D6DA8 string=0x00000000003D6DAC "a"
 *   insn=0x00000000003D6DA8 string=0x00000000003D6DB4 "`>A"
 *   insn=0x00000000003D6DB4 string=0x00000000003D6DB8 "@"
 *   insn=0x00000000003D6DB8 string=0x00000000003D6DBC "t"
 *   insn=0x00000000003D6DB8 string=0x00000000003D6E60 "`"
 *   insn=0x00000000003D6DBC string=0x00000000003D6DC0 "wB"
 *   insn=0x00000000003D6DEC string=0x00000000001FC260 "0'"
 *   insn=0x00000000003D6E00 string=0x00000000003D6E04 "5"
 *   insn=0x00000000003D6E08 string=0x00000000003D6E0C ""
 *   insn=0x00000000003D6E1C string=0x00000000003D6E20 "\t@"
 *   insn=0x00000000003D6E28 string=0x00000000003D6E2C ""
 *   insn=0x00000000003D6E3C string=0x00000000003D6E40 "@"
 *   insn=0x00000000003D6E58 string=0x00000000003D6DD4 "`>A"
 *   insn=0x00000000003D6E60 string=0x00000000003D6E64 "`bB"
 *   insn=0x00000000003D6E64 string=0x00000000003D6E68 "aZB"
 *   insn=0x00000000003D6E74 string=0x00000000003D6E78 "x@"
 *   insn=0x00000000003D6E78 string=0x00000000003D6E7C "\t"
 *   insn=0x00000000003D6E7C string=0x00000000003D6E80 " ( "
 *   insn=0x00000000003D6E80 string=0x00000000003D6E84 "A("
 *   insn=0x00000000003D6EA0 string=0x00000000003D6EA4 "`"
 *   insn=0x00000000003D6EA4 string=0x00000000003D6EA8 "`bB"
 *   insn=0x00000000003D6EA8 string=0x00000000003D6EAC "aZB"
 *   insn=0x00000000003D6EB8 string=0x00000000003D6EBC "x@"
 *   insn=0x00000000003D6EBC string=0x00000000003D6EC0 "\t"
 *   insn=0x00000000003D6EC0 string=0x00000000003D6EC4 " ( "
 *   insn=0x00000000003D6EC4 string=0x00000000003D6EC8 "A("
 *   insn=0x00000000003D6EE4 string=0x00000000003D6EE8 "`"
 *   insn=0x00000000003D6EE8 string=0x00000000003D6EEC "`bB"
 *   insn=0x00000000003D6EEC string=0x00000000003D6EF0 "aZB"
 *   insn=0x00000000003D6EFC string=0x00000000003D6F00 "x@"
 *   insn=0x00000000003D6F00 string=0x00000000003D6F04 "\t"
 *   insn=0x00000000003D6F04 string=0x00000000003D6F08 " ( "
 *   insn=0x00000000003D6F08 string=0x00000000003D6F0C "A("
 *   insn=0x00000000003D6F28 string=0x00000000003D6F2C "h"
 *   insn=0x00000000003D6F2C string=0x00000000003D6F30 "`"
 *   insn=0x00000000003D6F38 string=0x00000000003D6F3C "h&T"
 *   insn=0x00000000003D6F44 string=0x00000000003D6F48 "*"
 *   insn=0x00000000003D6F44 string=0x00000000003D6F54 "i*U"
 *   insn=0x00000000003D6F48 string=0x00000000003D6F4C "J"
 *   insn=0x00000000003D6F4C string=0x00000000003D6F50 "*"
 *   insn=0x00000000003D6F5C string=0x00000000003D6F60 "K"
 *   insn=0x00000000003D6F5C string=0x00000000003D6F6C "j.V"
 *   insn=0x00000000003D6F60 string=0x00000000003D6F64 "k"
 *   insn=0x00000000003D6F64 string=0x00000000003D6F68 "K"
 *   insn=0x00000000003D6F74 string=0x00000000003D6F78 "l"
 *   insn=0x00000000003D6F74 string=0x00000000003D6F84 "k2W"
 *   insn=0x00000000003D6F7C string=0x00000000003D6F80 "l"
 *   insn=0x00000000003D6F8C string=0x00000000003D6F9C "l6X"
 *   insn=0x00000000003D6FA4 string=0x00000000003D6FB4 "m"
 *   insn=0x00000000003D6FB8 string=0x00000000003D6FBC "m"
 *   insn=0x00000000003D6FC4 string=0x00000000003D6FD4 "m"
 *   insn=0x00000000003D6FD8 string=0x00000000003D6FDC "m"
 *   insn=0x00000000003D6FE4 string=0x00000000003D6FF4 "m"
 *   insn=0x00000000003D6FF8 string=0x00000000003D6FFC "m"
 *   insn=0x00000000003D7014 string=0x00000000003D7018 "D"
 *   insn=0x00000000003D702C string=0x00000000003D7030 " "
 *   insn=0x00000000003D7030 string=0x00000000003D7034 ""A\t"
 *   insn=0x00000000003D703C string=0x00000000003D7040 " "
 *   insn=0x00000000003D7040 string=0x00000000003D7044 "@"
 *   insn=0x00000000003D7044 string=0x00000000003D7048 "BA\t"
 *   insn=0x00000000003D704C string=0x00000000003D7050 "5"
 *   insn=0x00000000003D7054 string=0x00000000003D7058 "@"
 *   insn=0x00000000003D7058 string=0x00000000003D705C "`"
 *   insn=0x00000000003D705C string=0x00000000003D7060 "bA\t"
 *   insn=0x00000000003D7064 string=0x00000000003D7068 "`"
 *   insn=0x00000000003D70B8 string=0x00000000003D70BC "h"
 *   insn=0x00000000003D70C8 string=0x00000000003D70CC " "
 *   insn=0x00000000003D70D4 string=0x00000000003D70D8 "3"
 *   insn=0x00000000003D70D8 string=0x00000000003D70DC "h"
 *   insn=0x00000000003D70DC string=0x00000000003D70E0 ""
 *   insn=0x00000000003D70E0 string=0x00000000003D70E4 "h"
 *   insn=0x00000000003D70E8 string=0x00000000003D70EC "h"
 *   insn=0x00000000003D70EC string=0x00000000003D70F0 "\t@"
 *   insn=0x00000000003D70F8 string=0x00000000003D70FC "h\n@"
 *   insn=0x00000000003D70FC string=0x00000000003D7100 ""
 *   insn=0x00000000003D7100 string=0x00000000003D7104 "h\n"
 *   insn=0x00000000003D7108 string=0x00000000003D710C "h"
 *   insn=0x00000000003D710C string=0x00000000003D7110 "@"
 *   insn=0x00000000003D7130 string=0x00000000003D7134 "A"
 *   insn=0x00000000003D7134 string=0x00000000003D715C "]|"
 *   insn=0x00000000003D715C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003D7174 string=0x00000000003D7178 "4"
 *   insn=0x00000000003D717C string=0x00000000003D7180 ""
 *   insn=0x00000000003D718C string=0x00000000003D7190 "\t@"
 *   insn=0x00000000003D719C string=0x00000000003D71A0 ""
 *   insn=0x00000000003D71AC string=0x00000000003D71B0 "@"
 *   insn=0x00000000003D71D8 string=0x00000000003D71DC "4"
 *   insn=0x00000000003D71E0 string=0x00000000003D71E4 ""
 *   insn=0x00000000003D71F0 string=0x00000000003D71F4 "\t@"
 *   insn=0x00000000003D7200 string=0x00000000003D7204 ""
 *   insn=0x00000000003D7210 string=0x00000000003D7214 "@"
 *   insn=0x00000000003D7224 string=0x00000000003D7228 "I"
 *   insn=0x00000000003D723C string=0x00000000003D7240 "U"
 *   insn=0x00000000003D7254 string=0x00000000003D7258 "`"
 *   insn=0x00000000003D7264 string=0x00000000003D7268 "F"
 *   insn=0x00000000003D7278 string=0x00000000003D727C "M"
 *   insn=0x00000000003D7290 string=0x00000000003D7294 "`"
 *   insn=0x00000000003D7298 string=0x00000000003D729C "  "
 *   insn=0x00000000003D72B4 string=0x00000000003D72B8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::LayoutSubviews(Caver::GameOverlayView *this)
{
  float v2; // s0
  Caver::GUIView *v3; // x0
  unsigned int v4; // s10
  unsigned int v5; // s11
  __int64 v6; // x8
  Caver::GUIView *v7; // x0
  float v8; // s1
  float v9; // s2
  unsigned int v10; // s0
  float v11; // s2
  Caver::GUIView *v12; // x0
  Caver::GUIView *v13; // x0
  float v14; // s1
  unsigned int v15; // s0
  float v16; // s2
  Caver::GUIView *v17; // x0
  __int64 v18; // x0
  float32x2_t v19; // d3
  __int64 v20; // x0
  unsigned int v21; // w8
  float v22; // s1
  unsigned int v23; // s0
  __int64 v24; // x0
  __int64 v25; // d0
  float *v26; // x0
  float v27; // w8
  float v28; // s3
  float *v29; // x0
  float v30; // w8
  float v31; // s3
  Caver::GUIView *v32; // x0
  float *v33; // x0
  float v34; // s2
  unsigned int v35; // w8
  float v36; // s1
  Caver::GUIView *v37; // x0
  Caver::GameOverlayView *i; // x20
  _QWORD *v39; // x21
  __int64 v40; // x8
  __int64 v41; // x8
  float *v42; // x0
  float v43; // s2
  unsigned int v44; // w9
  float *v45; // x0
  float v46; // s2
  unsigned int v47; // w9
  float *v48; // x0
  float v49; // s2
  unsigned int v50; // w9
  __int64 result; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  __int64 v54; // x9
  __int64 v55; // x10
  __int64 v56; // x10
  __int64 v57; // x11
  __int64 v58; // x11
  __int64 v59; // x12
  __int64 v60; // x12
  __int64 v61; // x13
  __int64 v62; // x13
  __int64 v63; // x13
  __int64 v64; // x13
  float32x2_t v65; // d1
  unsigned __int64 v71; // d0
  float32x2_t v72; // d0
  __int64 v73; // x20
  float32x2_t v74; // d0
  float32x2_t v75; // d0
  float32x2_t v76; // d0
  __int64 v77; // x8
  float32x2_t v78; // d0
  __int64 v79; // x8
  float32x2_t v80; // d0
  __int64 v81; // x8
  float32x2_t v82; // d0
  __int64 v84; // x8
  float32x2_t v86; // d1
  _QWORD *v87; // x19
  __int64 v88; // x8
  __int64 v89; // x8
  __int128 v90; // [xsp+70h] [xbp-E8h] BYREF
  __int64 v91; // [xsp+80h] [xbp-D8h]
  __int64 v92; // [xsp+88h] [xbp-D0h]
  __int64 v93; // [xsp+90h] [xbp-C8h]
  __int64 v94; // [xsp+98h] [xbp-C0h]
  __int64 v95; // [xsp+A0h] [xbp-B8h]
  __int64 v96; // [xsp+A8h] [xbp-B0h]
  __int64 v97; // [xsp+B0h] [xbp-A8h]
  __int64 v98; // [xsp+B8h] [xbp-A0h]
  __int64 v99; // [xsp+C0h] [xbp-98h]
  __int64 v100; // [xsp+C8h] [xbp-90h]
  __int64 v101; // [xsp+D0h] [xbp-88h]
  __int64 v102; // [xsp+D8h] [xbp-80h]
  __int64 v103; // [xsp+E0h] [xbp-78h]
  _QWORD v104[2]; // [xsp+E8h] [xbp-70h]

  v104[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::safeBounds(this);
  *(_OWORD *)((char *)this + 600) = v90;
  Caver::GUIView::controlBounds(this);
  *(_OWORD *)((char *)this + 616) = v90;
  v2 = *((float *)this + 78);
  v3 = (Caver::GUIView *)*((_QWORD *)this + 40);
  *(float *)&v4 = v2 * 45.0;
  *(float *)&v5 = v2 * 70.0;
  *(float32x2_t *)&v90 = vadd_f32(*(float32x2_t *)((char *)this + 616), (float32x2_t)0x4120000041A00000LL);
  *((float *)&v90 + 2) = v2 * 70.0;
  *((float *)&v90 + 3) = v2 * 45.0;
  Caver::GUIView::SetFrame(v3, (const Caver::Rectangle *)&v90);
  v6 = *((_QWORD *)this + 40);
  v7 = (Caver::GUIView *)*((_QWORD *)this + 42);
  v8 = *(float *)(v6 + 116);
  v9 = *(float *)(v6 + 124);
  *(float *)&v10 = *((float *)this + 155) + 10.0;
  HIDWORD(v90) = v4;
  *(float *)&v90 = (float)(v8 + v9) + 10.0;
  *(_QWORD *)((char *)&v90 + 4) = __PAIR64__(v5, v10);
  Caver::GUIView::SetFrame(v7, (const Caver::Rectangle *)&v90);
  v11 = *((float *)this + 155);
  v12 = (Caver::GUIView *)*((_QWORD *)this + 44);
  *(float *)&v90 = (float)((float)(*((float *)this + 154) + *((float *)this + 156)) + -20.0) - *(float *)&v5;
  *((float *)&v90 + 1) = v11 + 20.0;
  *((_QWORD *)&v90 + 1) = __PAIR64__(v4, v5);
  Caver::GUIView::SetFrame(v12, (const Caver::Rectangle *)&v90);
  v13 = (Caver::GUIView *)*((_QWORD *)this + 46);
  v14 = *(float *)(*((_QWORD *)this + 44) + 116LL);
  *(float *)&v15 = *((float *)this + 155) + 10.0;
  HIDWORD(v90) = v4;
  *(float *)&v90 = (float)(v14 + -10.0) - *(float *)&v5;
  *(_QWORD *)((char *)&v90 + 4) = __PAIR64__(v5, v15);
  Caver::GUIView::SetFrame(v13, (const Caver::Rectangle *)&v90);
  v16 = *((float *)this + 155);
  v17 = (Caver::GUIView *)*((_QWORD *)this + 50);
  *(float *)&v90 = (float)((float)(*((float *)this + 154) + *((float *)this + 156)) - *(float *)&v5) + 10.0;
  *((float *)&v90 + 1) = v16 + 140.0;
  *((_QWORD *)&v90 + 1) = __PAIR64__(v4, v5);
  Caver::GUIView::SetFrame(v17, (const Caver::Rectangle *)&v90);
  v18 = *((_QWORD *)this + 57);
  if ( v18 )
  {
    v19.n64_u64[0] = *(unsigned __int64 *)(v18 + 124);
    *(float32x2_t *)&v90 = vsub_f32(
                             vadd_f32(
                               vadd_f32(*(float32x2_t *)((char *)this + 600), *(float32x2_t *)((char *)this + 608)),
                               (float32x2_t)0xC0A0000041200000LL),
                             v19);
    *((float32x2_t *)&v90 + 1) = v19;
    Caver::GUIView::SetFrame((Caver::GUIView *)v18, (const Caver::Rectangle *)&v90);
  }
  v20 = *((_QWORD *)this + 55);
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 + 124);
    v22 = *(float *)(v20 + 128);
    *(float *)&v23 = (float)((float)(*((float *)this + 151) + *((float *)this + 153)) + -17.0) - v22;
    LODWORD(v90) = 1096810496;
    *(_QWORD *)((char *)&v90 + 4) = __PAIR64__(v21, v23);
    *((float *)&v90 + 3) = v22;
    Caver::GUIView::SetFrame((Caver::GUIView *)v20, (const Caver::Rectangle *)&v90);
  }
  v24 = *((_QWORD *)this + 59);
  if ( v24 )
  {
    v25 = *(_QWORD *)(v24 + 124);
    *(_QWORD *)&v90 = __PAIR64__(
                        *((float *)this + 155) + 10.0,
                        COERCE_UNSIGNED_INT(
                          roundf(
                            (float)(*((float *)this + 154) + (float)(*((float *)this + 156) * 0.5))
                          - vmuls_n_f32(0.5, *(float *)&v25))));
    *((_QWORD *)&v90 + 1) = v25;
    Caver::GUIView::SetFrame((Caver::GUIView *)v24, (const Caver::Rectangle *)&v90);
  }
  v26 = (float *)*((_QWORD *)this + 61);
  v27 = v26[31];
  v28 = v26[32];
  *(_QWORD *)&v90 = __PAIR64__(
                      (float)((float)(*((float *)this + 151) + *((float *)this + 153)) + -5.0) - v28,
                      COERCE_UNSIGNED_INT(roundf((float)(*((float *)this + 150) + (float)(*((float *)this + 152) * 0.5)) - (float)(v27 * 0.5))));
  *((_QWORD *)&v90 + 1) = __PAIR64__(LODWORD(v28), LODWORD(v27));
  Caver::GUIView::SetFrame((Caver::GUIView *)v26, (const Caver::Rectangle *)&v90);
  v29 = (float *)*((_QWORD *)this + 65);
  v30 = v29[31];
  v31 = v29[32];
  *(_QWORD *)&v90 = __PAIR64__(
                      (float)((float)(*((float *)this + 151) + *((float *)this + 153)) + -50.0) - v31,
                      COERCE_UNSIGNED_INT(roundf((float)(*((float *)this + 150) + (float)(*((float *)this + 152) * 0.5)) - (float)(v30 * 0.5))));
  *((_QWORD *)&v90 + 1) = __PAIR64__(LODWORD(v31), LODWORD(v30));
  Caver::GUIView::SetFrame((Caver::GUIView *)v29, (const Caver::Rectangle *)&v90);
  v32 = (Caver::GUIView *)*((_QWORD *)this + 67);
  *(_QWORD *)&v90 = __PAIR64__(
                      *((float *)this + 151) + 70.0,
                      COERCE_UNSIGNED_INT(roundf((float)(*((float *)this + 150) + (float)(*((float *)this + 152) * 0.5)) + -136.0)));
  *((_QWORD *)&v90 + 1) = 0x4190000043880000LL;
  Caver::GUIView::SetFrame(v32, (const Caver::Rectangle *)&v90);
  v33 = (float *)*((_QWORD *)this + 73);
  v34 = v33[32];
  v35 = *((_DWORD *)v33 + 31);
  v36 = (float)(*((float *)this + 151) + *((float *)this + 153)) + -53.0;
  *(float *)&v90 = *((float *)this + 150) + 5.0;
  *((float *)&v90 + 1) = v36 - v34;
  *((_QWORD *)&v90 + 1) = __PAIR64__(LODWORD(v34), v35);
  Caver::GUIView::SetFrame((Caver::GUIView *)v33, (const Caver::Rectangle *)&v90);
  v37 = (Caver::GUIView *)*((_QWORD *)this + 81);
  if ( v37 )
    Caver::GUIView::SetFrame(v37, (Caver::GameOverlayView *)((char *)this + 132));
  if ( *((_QWORD *)this + 79) )
  {
    for ( i = (Caver::GameOverlayView *)*((_QWORD *)this + 36);
          (Caver::GameOverlayView *)((char *)this + 272) != i;
          i = (Caver::GameOverlayView *)sub_54C640(i) )
    {
      Caver::GUIViewLayout::SubviewWithIdentifier();
      Caver::GameOverlayView::SetSubviewLayout();
      v39 = (_QWORD *)*((_QWORD *)&v90 + 1);
      if ( *((_QWORD *)&v90 + 1) )
      {
        v40 = *(_QWORD *)(*((_QWORD *)&v90 + 1) + 8LL) - 1LL;
        *(_QWORD *)(*((_QWORD *)&v90 + 1) + 8LL) = v40;
        if ( !v40 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
          v41 = v39[2] - 1LL;
          v39[2] = v41;
          if ( !v41 )
            (*(void (__fastcall **)(_QWORD *))(*v39 + 24LL))(v39);
        }
      }
    }
  }
  v42 = (float *)*((_QWORD *)this + 61);
  v43 = v42[31];
  v44 = *((_DWORD *)v42 + 32);
  *(_QWORD *)&v90 = __PAIR64__(
                      *((_DWORD *)v42 + 30),
                      COERCE_UNSIGNED_INT(roundf((float)(*((float *)this + 150) + (float)(*((float *)this + 152) * 0.5)) - (float)(v43 * 0.5))));
  *((_QWORD *)&v90 + 1) = __PAIR64__(v44, LODWORD(v43));
  Caver::GUIView::SetFrame((Caver::GUIView *)v42, (const Caver::Rectangle *)&v90);
  v45 = (float *)*((_QWORD *)this + 65);
  v46 = v45[31];
  v47 = *((_DWORD *)v45 + 32);
  *(_QWORD *)&v90 = __PAIR64__(
                      *((_DWORD *)v45 + 30),
                      COERCE_UNSIGNED_INT(roundf((float)(*((float *)this + 150) + (float)(*((float *)this + 152) * 0.5)) - (float)(v46 * 0.5))));
  *((_QWORD *)&v90 + 1) = __PAIR64__(v47, LODWORD(v46));
  Caver::GUIView::SetFrame((Caver::GUIView *)v45, (const Caver::Rectangle *)&v90);
  v48 = (float *)*((_QWORD *)this + 67);
  v49 = v48[31];
  v50 = *((_DWORD *)v48 + 32);
  *(_QWORD *)&v90 = __PAIR64__(
                      *((_DWORD *)v48 + 30),
                      COERCE_UNSIGNED_INT(roundf((float)(*((float *)this + 150) + (float)(*((float *)this + 152) * 0.5)) - (float)(v49 * 0.5))));
  *((_QWORD *)&v90 + 1) = __PAIR64__(v50, LODWORD(v49));
  Caver::GUIView::SetFrame((Caver::GUIView *)v48, (const Caver::Rectangle *)&v90);
  result = Caver::GUIView::SetFrame(
             *((Caver::GUIView **)this + 48),
             (const Caver::Rectangle *)(*((_QWORD *)this + 46) + 116LL));
  v52 = *((_QWORD *)this + 40);
  v53 = *((_QWORD *)this + 41);
  *(_QWORD *)&v90 = v52;
  *((_QWORD *)&v90 + 1) = v53;
  if ( v53 )
    ++*(_QWORD *)(v53 + 8);
  v54 = *((_QWORD *)this + 42);
  v55 = *((_QWORD *)this + 43);
  v91 = v54;
  v92 = v55;
  if ( v55 )
    ++*(_QWORD *)(v55 + 8);
  v56 = *((_QWORD *)this + 44);
  v57 = *((_QWORD *)this + 45);
  v93 = v56;
  v94 = v57;
  if ( v57 )
    ++*(_QWORD *)(v57 + 8);
  v58 = *((_QWORD *)this + 46);
  v59 = *((_QWORD *)this + 47);
  v95 = v58;
  v96 = v59;
  if ( v59 )
    ++*(_QWORD *)(v59 + 8);
  v60 = *((_QWORD *)this + 48);
  v61 = *((_QWORD *)this + 49);
  v97 = v60;
  v98 = v61;
  if ( v61 )
    ++*(_QWORD *)(v61 + 8);
  v99 = *((_QWORD *)this + 50);
  v62 = *((_QWORD *)this + 51);
  v100 = v62;
  if ( v62 )
    ++*(_QWORD *)(v62 + 8);
  v101 = *((_QWORD *)this + 55);
  v63 = *((_QWORD *)this + 56);
  v102 = v63;
  if ( v63 )
    ++*(_QWORD *)(v63 + 8);
  v103 = *((_QWORD *)this + 57);
  v64 = *((_QWORD *)this + 58);
  v104[0] = v64;
  if ( v64 )
    ++*(_QWORD *)(v64 + 8);
  v65.n64_u64[0] = vdup_n_s32(0x42200000u).n64_u64[0];
  __asm { FMOV            V2.2S, #-20.0 }
  v71 = vadd_f32(*(float32x2_t *)(v52 + 140), v65).n64_u64[0];
  *(_QWORD *)(v52 + 148) = _D2;
  *(_QWORD *)(v52 + 156) = v71;
  v72.n64_u64[0] = *(unsigned __int64 *)(v54 + 140);
  *(_QWORD *)(v54 + 148) = _D2;
  v73 = 0;
  *(float32x2_t *)(v54 + 156) = vadd_f32(v72, v65);
  v74.n64_u64[0] = *(unsigned __int64 *)(v56 + 140);
  *(_QWORD *)(v56 + 148) = _D2;
  *(float32x2_t *)(v56 + 156) = vadd_f32(v74, v65);
  v75.n64_u64[0] = *(unsigned __int64 *)(v58 + 140);
  *(_QWORD *)(v58 + 148) = _D2;
  *(float32x2_t *)(v58 + 156) = vadd_f32(v75, v65);
  v76.n64_u64[0] = *(unsigned __int64 *)(v60 + 140);
  *(_QWORD *)(v60 + 148) = _D2;
  *(float32x2_t *)(v60 + 156) = vadd_f32(v76, v65);
  v77 = v99;
  v78.n64_u64[0] = *(unsigned __int64 *)(v99 + 140);
  *(_QWORD *)(v99 + 148) = _D2;
  *(float32x2_t *)(v77 + 156) = vadd_f32(v78, v65);
  v79 = v101;
  v80.n64_u64[0] = *(unsigned __int64 *)(v101 + 140);
  *(_QWORD *)(v101 + 148) = _D2;
  *(float32x2_t *)(v79 + 156) = vadd_f32(v80, v65);
  v81 = v103;
  v82.n64_u64[0] = *(unsigned __int64 *)(v103 + 140);
  *(_QWORD *)(v103 + 148) = _D2;
  __asm { FMOV            V2.2S, #-10.0 }
  *(float32x2_t *)(v81 + 156) = vadd_f32(v82, v65);
  v84 = *((_QWORD *)this + 59);
  __asm { FMOV            V0.2S, #20.0 }
  v86.n64_u64[0] = *(unsigned __int64 *)(v84 + 124);
  *(_QWORD *)(v84 + 148) = _D2;
  *(float32x2_t *)(v84 + 156) = vadd_f32(v86, _D0);
  do
  {
    v87 = (_QWORD *)v104[v73];
    if ( v87 )
    {
      v88 = v87[1] - 1LL;
      v87[1] = v88;
      if ( !v88 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v87 + 16LL))(v87);
        v89 = v87[2] - 1LL;
        v87[2] = v89;
        if ( !v89 )
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v87 + 24LL))(v87);
      }
    }
    v73 -= 2;
  }
  while ( v73 != -16 );
  return result;
}

