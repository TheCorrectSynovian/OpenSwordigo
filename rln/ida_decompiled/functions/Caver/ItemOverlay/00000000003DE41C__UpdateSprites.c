/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DE41C
 * Mangled: _ZN5Caver11ItemOverlay13UpdateSpritesEv
 * Demangled: Caver::ItemOverlay::UpdateSprites(void)
 *
 * Callers: 1
 *   0x00000000001FF530  Caver::ItemOverlay::UpdateSprites(void)
 *
 * Callees: 25
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F5200  Caver::FontText::Clear(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9060  Caver::Texture::SharedPtr(void)
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *   0x00000000001F9920  Caver::Sprite::Translate(Caver::Vector2 const&)
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FC1E0  Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite*)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x00000000002012D0  Caver::RenderingContext::SetBlendFunc(uint,uint)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 223
 *   insn=0x00000000003DE444 string=0x00000000003DE448 "H"
 *   insn=0x00000000003DE44C string=0x00000000003DE450 ""
 *   insn=0x00000000003DE454 string=0x00000000003DE458 "tB"
 *   insn=0x00000000003DE464 string=0x00000000003DE468 "u"
 *   insn=0x00000000003DE464 string=0x00000000001F9830 "0'"
 *   insn=0x00000000003DE470 string=0x00000000003DE474 "h"
 *   insn=0x00000000003DE474 string=0x00000000003DE478 "?"
 *   insn=0x00000000003DE478 string=0x00000000003DE47C "!"
 *   insn=0x00000000003DE47C string=0x00000000003DE4C0 "ib\t"
 *   insn=0x00000000003DE480 string=0x00000000003DE484 ""
 *   insn=0x00000000003DE4C4 string=0x00000000003DE4C8 "<"
 *   insn=0x00000000003DE4D4 string=0x00000000003DE4D8 "v"
 *   insn=0x00000000003DE4D8 string=0x00000000003DE4DC ""
 *   insn=0x00000000003DE4DC string=0x00000000003DE4E0 "\t"
 *   insn=0x00000000003DE4E0 string=0x00000000003DE4E4 "\n"
 *   insn=0x00000000003DE4E4 string=0x00000000003DE4E8 ""
 *   insn=0x00000000003DE4F0 string=0x00000000003DE4F4 "G"
 *   insn=0x00000000003DE4F4 string=0x00000000003DE610 "Po"
 *   insn=0x00000000003DE4F8 string=0x00000000003DE4FC ")=G"
 *   insn=0x00000000003DE4FC string=0x00000000003DE500 "!"
 *   insn=0x00000000003DE500 string=0x00000000003DE504 ")"
 *   insn=0x00000000003DE504 string=0x00000000003DE508 "\t"
 *   insn=0x00000000003DE504 string=0x00000000003DE588 "\t"
 *   insn=0x00000000003DE508 string=0x00000000003DE50C "*"
 *   insn=0x00000000003DE50C string=0x00000000003DE510 "\n"
 *   insn=0x00000000003DE518 string=0x00000000003DE594 "?"
 *   insn=0x00000000003DE51C string=0x00000000003DE520 ")=G"
 *   insn=0x00000000003DE520 string=0x00000000003DE524 "!"
 *   insn=0x00000000003DE524 string=0x00000000003DE528 "\t"
 *   insn=0x00000000003DE528 string=0x00000000003DE52C "\t"
 *   insn=0x00000000003DE528 string=0x00000000003DE5A8 "\t"
 *   insn=0x00000000003DE52C string=0x00000000003DE530 "*"
 *   insn=0x00000000003DE530 string=0x00000000003DE534 "\n"
 *   insn=0x00000000003DE53C string=0x00000000003DE5B4 "?"
 *   insn=0x00000000003DE540 string=0x00000000003DE544 ")=G"
 *   insn=0x00000000003DE544 string=0x00000000003DE548 "!"
 *   insn=0x00000000003DE54C string=0x00000000003DE550 "\t"
 *   insn=0x00000000003DE54C string=0x00000000003DE5C8 "\t"
 *   insn=0x00000000003DE550 string=0x00000000003DE554 "*"
 *   insn=0x00000000003DE554 string=0x00000000003DE558 "\n"
 *   insn=0x00000000003DE560 string=0x00000000003DE5D4 "?"
 *   insn=0x00000000003DE564 string=0x00000000003DE568 ")=G"
 *   insn=0x00000000003DE568 string=0x00000000003DE56C "!"
 *   insn=0x00000000003DE570 string=0x00000000003DE574 "\t"
 *   insn=0x00000000003DE570 string=0x00000000003DE5E8 "\t"
 *   insn=0x00000000003DE574 string=0x00000000003DE578 "*"
 *   insn=0x00000000003DE578 string=0x00000000003DE57C "\n"
 *   insn=0x00000000003DE584 string=0x00000000003DE5F4 "?"
 *   insn=0x00000000003DE588 string=0x00000000003DE58C "*"
 *   insn=0x00000000003DE58C string=0x00000000003DE590 "\n"
 *   insn=0x00000000003DE5A0 string=0x00000000003DE5A4 "2"
 *   insn=0x00000000003DE5A8 string=0x00000000003DE5AC "*"
 *   insn=0x00000000003DE5AC string=0x00000000003DE5B0 "\n"
 *   insn=0x00000000003DE5B4 string=0x00000000003DE5B8 ","
 *   insn=0x00000000003DE5BC string=0x00000000003DE5C0 "y/"
 *   insn=0x00000000003DE5C0 string=0x00000000003DE5C4 "."
 *   insn=0x00000000003DE5C8 string=0x00000000003DE5CC "*"
 *   insn=0x00000000003DE5CC string=0x00000000003DE5D0 "\n"
 *   insn=0x00000000003DE5D4 string=0x00000000003DE5D8 "l"
 *   insn=0x00000000003DE5DC string=0x00000000003DE5E0 "q/"
 *   insn=0x00000000003DE5E0 string=0x00000000003DE5E4 "x"
 *   insn=0x00000000003DE5E8 string=0x00000000003DE5EC "*"
 *   insn=0x00000000003DE5EC string=0x00000000003DE5F0 "\n"
 *   insn=0x00000000003DE5FC string=0x00000000003DE600 "i/"
 *   insn=0x00000000003DE604 string=0x00000000003DE608 "h"
 *   insn=0x00000000003DE608 string=0x00000000003DE60C "t"
 *   insn=0x00000000003DE610 string=0x00000000003DE614 "h"
 *   insn=0x00000000003DE610 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003DE618 string=0x00000000003DE61C "\t"
 *   insn=0x00000000003DE620 string=0x00000000003DE624 "ii"
 *   insn=0x00000000003DE634 string=0x00000000005922A8 "overlayitem_"
 *   insn=0x00000000003DE640 string=0x00000000003DE644 "{"
 *   insn=0x00000000003DE668 string=0x00000000003DE4F8 ")"
 *   insn=0x00000000003DE674 string=0x00000000003DE678 "!"
 *   insn=0x00000000003DE678 string=0x00000000003DE51C ")"
 *   insn=0x00000000003DE68C string=0x00000000003DE6DC "`"
 *   insn=0x00000000003DE694 string=0x00000000003DE698 "rj"
 *   insn=0x00000000003DE698 string=0x00000000001F9060 "0'"
 *   insn=0x00000000003DE6AC string=0x00000000003DE6B0 " l"
 *   insn=0x00000000003DE6B0 string=0x00000000001F9730 "0'"
 *   insn=0x00000000003DE6B8 string=0x00000000003DE6BC "@"
 *   insn=0x00000000003DE6BC string=0x00000000003DE6C0 ""
 *   insn=0x00000000003DE6C0 string=0x00000000003DE6C4 ""
 *   insn=0x00000000003DE6C8 string=0x00000000003DE6CC ""
 *   insn=0x00000000003DE6CC string=0x00000000003DE6D0 ""
 *   insn=0x00000000003DE6DC string=0x00000000003DE6E0 "b"
 *   insn=0x00000000003DE6E0 string=0x00000000003DE6E4 ""
 *   insn=0x00000000003DE6E4 string=0x00000000003DE6E8 "#"
 *   insn=0x00000000003DE6E8 string=0x00000000003DE6EC "c(("
 *   insn=0x00000000003DE6EC string=0x00000000003DE6F0 "d"
 *   insn=0x00000000003DE6F0 string=0x00000000003DE6F4 "c$"
 *   insn=0x00000000003DE6F4 string=0x00000000003DE6F8 "!(""
 *   insn=0x00000000003DE700 string=0x00000000003DE704 "!8#"
 *   insn=0x00000000003DE704 string=0x00000000003DE708 ""
 *   insn=0x00000000003DE720 string=0x00000000003DE724 ""
 *   insn=0x00000000003DE72C string=0x00000000001F5200 "P'"
 *   insn=0x00000000003DE730 string=0x00000000003DE734 "h"
 *   insn=0x00000000003DE738 string=0x00000000003DE73C "#\t"
 *   insn=0x00000000003DE748 string=0x00000000003DE74C "?"
 *   insn=0x00000000003DE74C string=0x00000000003DE750 " W"
 *   insn=0x00000000003DE764 string=0x00000000003DE768 "\t"
 *   insn=0x00000000003DE770 string=0x00000000003DE774 "D"
 *   insn=0x00000000003DE788 string=0x00000000005944F3 "x "
 *   insn=0x00000000003DE794 string=0x00000000003DE798 "&"
 *   insn=0x00000000003DE7AC string=0x00000000003DE7B0 "Hm"
 *   insn=0x00000000003DE7B0 string=0x00000000001F9CD0 "0'"
 *   insn=0x00000000003DE7C0 string=0x00000000003DE540 ")"
 *   insn=0x00000000003DE7D0 string=0x00000000003DE564 ")"
 *   insn=0x00000000003DE808 string=0x00000000003DE80C "A8#"
 *   insn=0x00000000003DE80C string=0x00000000003DE810 "!(*"
 *   insn=0x00000000003DE810 string=0x00000000003DE814 "!+"
 *   insn=0x00000000003DE814 string=0x00000000003DE818 "!@&"
 *   insn=0x00000000003DE82C string=0x00000000003DE830 "<l"
 *   insn=0x00000000003DE830 string=0x00000000001F9920 "0'"
 *   insn=0x00000000003DE838 string=0x00000000003DE83C "iv"
 *   insn=0x00000000003DE83C string=0x00000000001FC1E0 "0'"
 *   insn=0x00000000003DE844 string=0x00000000003DE848 "@"
 *   insn=0x00000000003DE844 string=0x00000000003DE864 "h"
 *   insn=0x00000000003DE848 string=0x00000000003DE84C ""
 *   insn=0x00000000003DE84C string=0x00000000003DE850 ""
 *   insn=0x00000000003DE854 string=0x00000000003DE858 ""
 *   insn=0x00000000003DE858 string=0x00000000003DE85C ""
 *   insn=0x00000000003DE868 string=0x00000000003DE86C "("
 *   insn=0x00000000003DE870 string=0x00000000003DE874 ""
 *   insn=0x00000000003DE874 string=0x00000000003DE878 "iU"
 *   insn=0x00000000003DE878 string=0x00000000003DE87C "}\t"
 *   insn=0x00000000003DE880 string=0x00000000003DE884 "c"
 *   insn=0x00000000003DE88C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003DE894 string=0x00000000003DE898 ""
 *   insn=0x00000000003DE898 string=0x00000000003DE89C "\t\t@"
 *   insn=0x00000000003DE89C string=0x00000000003DE8A0 ")"
 *   insn=0x00000000003DE8A0 string=0x00000000003DE8A4 "\t\t"
 *   insn=0x00000000003DE8A8 string=0x00000000003DE8AC "\t"
 *   insn=0x00000000003DE8AC string=0x00000000003DE8B0 ")"
 *   insn=0x00000000003DE8B4 string=0x00000000003DE8B8 " "
 *   insn=0x00000000003DE8CC string=0x00000000003DE8D0 "(a"
 *   insn=0x00000000003DE8D8 string=0x00000000003DE8DC "*"
 *   insn=0x00000000003DE8DC string=0x00000000003DE8E0 "J=G"
 *   insn=0x00000000003DE8E0 string=0x00000000003DE8E4 ")!"
 *   insn=0x00000000003DE8E8 string=0x00000000003DE8EC "*"
 *   insn=0x00000000003DE8E8 string=0x00000000003DE900 "*"
 *   insn=0x00000000003DE8EC string=0x00000000003DE8F0 "K"
 *   insn=0x00000000003DE8F0 string=0x00000000003DE8F4 "+"
 *   insn=0x00000000003DE8FC string=0x00000000003DE90C "_"
 *   insn=0x00000000003DE900 string=0x00000000003DE904 "K"
 *   insn=0x00000000003DE904 string=0x00000000003DE908 "+"
 *   insn=0x00000000003DE938 string=0x00000000003DE93C ")"
 *   insn=0x00000000003DE93C string=0x00000000003DE940 ")=G"
 *   insn=0x00000000003DE940 string=0x00000000003DE944 "!"
 *   insn=0x00000000003DE944 string=0x00000000003DE948 ")"
 *   insn=0x00000000003DE948 string=0x00000000003DE94C "\t"
 *   insn=0x00000000003DE948 string=0x00000000003DE96C "\t"
 *   insn=0x00000000003DE94C string=0x00000000003DE950 "*"
 *   insn=0x00000000003DE950 string=0x00000000003DE954 "\n"
 *   insn=0x00000000003DE958 string=0x00000000003DE95C "?"
 *   insn=0x00000000003DE964 string=0x00000000003DE968 "I"
 *   insn=0x00000000003DE968 string=0x00000000003DEA8C "F."
 *   insn=0x00000000003DE96C string=0x00000000003DE970 "*"
 *   insn=0x00000000003DE970 string=0x00000000003DE974 "\n"
 *   insn=0x00000000003DE974 string=0x00000000003DE978 "?"
 *   insn=0x00000000003DE978 string=0x00000000003DE97C "M"
 *   insn=0x00000000003DE97C string=0x00000000003DE980 "N"
 *   insn=0x00000000003DE98C string=0x00000000003DE990 "(a"
 *   insn=0x00000000003DE998 string=0x00000000003DE99C "*"
 *   insn=0x00000000003DE99C string=0x00000000003DE9A0 "J=G"
 *   insn=0x00000000003DE9A0 string=0x00000000003DE9A4 ")!"
 *   insn=0x00000000003DE9A8 string=0x00000000003DE9AC "*"
 *   insn=0x00000000003DE9A8 string=0x00000000003DE9C0 "*"
 *   insn=0x00000000003DE9AC string=0x00000000003DE9B0 "K"
 *   insn=0x00000000003DE9B0 string=0x00000000003DE9B4 "+"
 *   insn=0x00000000003DE9BC string=0x00000000003DE9CC "_"
 *   insn=0x00000000003DE9C0 string=0x00000000003DE9C4 "K"
 *   insn=0x00000000003DE9C4 string=0x00000000003DE9C8 "+"
 *   insn=0x00000000003DE9D8 string=0x00000000003DE9DC "r."
 *   insn=0x00000000003DE9F0 string=0x00000000003DE9F4 "@"
 *   insn=0x00000000003DE9F4 string=0x00000000003DE9F8 ")"
 *   insn=0x00000000003DE9F8 string=0x00000000003DE9FC ")=G"
 *   insn=0x00000000003DE9FC string=0x00000000003DEA00 "!"
 *   insn=0x00000000003DEA00 string=0x00000000003DEA04 "i"
 *   insn=0x00000000003DEA04 string=0x00000000003DEA08 "\t"
 *   insn=0x00000000003DEA04 string=0x00000000003DEA30 "\t"
 *   insn=0x00000000003DEA08 string=0x00000000003DEA0C "*"
 *   insn=0x00000000003DEA0C string=0x00000000003DEA10 "\n"
 *   insn=0x00000000003DEA14 string=0x00000000003DEA18 "?"
 *   insn=0x00000000003DEA20 string=0x00000000003DEA24 "`."
 *   insn=0x00000000003DEA30 string=0x00000000003DEA34 "*"
 *   insn=0x00000000003DEA34 string=0x00000000003DEA38 "\n"
 *   insn=0x00000000003DEA38 string=0x00000000003DEA3C "?"
 *   insn=0x00000000003DEA3C string=0x00000000003DEA40 ""
 *   insn=0x00000000003DEA40 string=0x00000000003DEA44 "&"
 *   insn=0x00000000003DEA4C string=0x00000000003DEA50 "(a"
 *   insn=0x00000000003DEA58 string=0x00000000003DEA5C "*"
 *   insn=0x00000000003DEA5C string=0x00000000003DEA60 "J=G"
 *   insn=0x00000000003DEA60 string=0x00000000003DEA64 ")!"
 *   insn=0x00000000003DEA68 string=0x00000000003DEA6C "*"
 *   insn=0x00000000003DEA68 string=0x00000000003DEA9C "*"
 *   insn=0x00000000003DEA6C string=0x00000000003DEA70 "K"
 *   insn=0x00000000003DEA70 string=0x00000000003DEA74 "+"
 *   insn=0x00000000003DEA78 string=0x00000000003DEA7C "_"
 *   insn=0x00000000003DEA90 string=0x00000000003DEA94 "`"
 *   insn=0x00000000003DEA94 string=0x00000000003DEAC0 "@"
 *   insn=0x00000000003DEA9C string=0x00000000003DEAA0 "K"
 *   insn=0x00000000003DEAA0 string=0x00000000003DEAA4 "+"
 *   insn=0x00000000003DEAA4 string=0x00000000003DEAA8 "_"
 *   insn=0x00000000003DEAC0 string=0x00000000003DEAC4 ""
 *   insn=0x00000000003DEAC4 string=0x00000000003DEAC8 ""
 *   insn=0x00000000003DEACC string=0x00000000003DEAD0 ""
 *   insn=0x00000000003DEAD0 string=0x00000000003DEAD4 ""
 *   insn=0x00000000003DEADC string=0x00000000003DEAE0 "y"
 *   insn=0x00000000003DEAF4 string=0x00000000003DEAF8 "h"
 *   insn=0x00000000003DEB04 string=0x00000000003DEB08 "h"
 *   insn=0x00000000003DEB14 string=0x00000000003DEB18 ""
 *   insn=0x00000000003DEB24 string=0x00000000001F7210 "0'"
 *   insn=0x00000000003DEB2C string=0x00000000003DEB30 "Hv"
 *   insn=0x00000000003DEB30 string=0x00000000001FC450 "0'"
 *   insn=0x00000000003DEB34 string=0x00000000003DEB38 ":S"
 *   insn=0x00000000003DEB38 string=0x00000000001F3820 "P'"
 *   insn=0x00000000003DEB44 string=0x00000000003DEB48 "`B"
 *   insn=0x00000000003DEB44 string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000003DEB50 string=0x00000000003DEB54 "A`"
 *   insn=0x00000000003DEB50 string=0x00000000001FCDA0 "0'"
 *   insn=0x00000000003DEB54 string=0x00000000003DEB58 "b`"
 *   insn=0x00000000003DEB64 string=0x00000000003DEB68 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::TextureLibrary *__fastcall Caver::ItemOverlay::UpdateSprites(Caver::ItemOverlay *this)
{
  Caver::Sprite *v2; // x20
  _QWORD *v3; // x21
  Caver::TextureLibrary *result; // x0
  __int64 *v5; // x28
  unsigned __int64 v6; // x24
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  void *v15; // x0
  void *v16; // x0
  Caver::TextureLibrary *v17; // x8
  __int64 *v18; // x23
  float v19; // w25
  float v20; // w28
  __int64 v21; // x0
  int v22; // w8
  unsigned __int64 v23; // x27
  float v24; // s1
  int v25; // w25
  __int64 *v26; // x24
  __int64 v27; // x0
  __int64 v28; // x8
  void *v29; // x0
  __int64 *v30; // x0
  float v31; // s1
  int v32; // w8
  Caver::Sprite *v33; // [xsp+28h] [xbp-D8h]
  __int64 *v34; // [xsp+30h] [xbp-D0h] BYREF
  __int64 v35; // [xsp+38h] [xbp-C8h] BYREF
  __int64 v36; // [xsp+40h] [xbp-C0h] BYREF
  float v37; // [xsp+48h] [xbp-B8h]
  float v38; // [xsp+4Ch] [xbp-B4h]
  Caver::TextureLibrary *v39; // [xsp+50h] [xbp-B0h]
  __int64 v40[2]; // [xsp+60h] [xbp-A0h] BYREF
  _BYTE v41[12]; // [xsp+74h] [xbp-8Ch] BYREF

  v2 = (Caver::ItemOverlay *)((char *)this + 336);
  *(_QWORD *)&v41[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Sprite::Clear((Caver::ItemOverlay *)((char *)this + 336));
  v3 = (_QWORD *)((char *)this + 424);
  result = (Caver::TextureLibrary *)Caver::Sprite::Clear((Caver::ItemOverlay *)((char *)this + 424));
  if ( *((_QWORD *)this + 34) != *((_QWORD *)this + 33) )
  {
    v33 = (Caver::ItemOverlay *)((char *)this + 600);
    v5 = &qword_6FD2E0;
    v6 = 0;
    do
    {
      Caver::TextureLibrary::sharedLibrary(result);
      sub_56A528(&v36, *(_QWORD *)(*((_QWORD *)this + 33) + 24 * v6) + 8LL);
      ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64 *))loc_25A030)(v40, "overlayitem_", &v36);
      Caver::TextureLibrary::TextureForName();
      v15 = (void *)(v40[0] - 24);
      if ( (__int64 *)(v40[0] - 24) != v5 )
      {
        v7 = (unsigned int *)(v40[0] - 8);
        if ( &pthread_create )
        {
          do
            v8 = __ldaxr(v7);
          while ( __stlxr(v8 - 1, v7) );
        }
        else
        {
          v8 = (*v7)--;
        }
        if ( v8 <= 0 )
          operator delete(v15);
      }
      v16 = (void *)(v36 - 24);
      if ( (__int64 *)(v36 - 24) != v5 )
      {
        v9 = (unsigned int *)(v36 - 8);
        if ( &pthread_create )
        {
          do
            v10 = __ldaxr(v9);
          while ( __stlxr(v10 - 1, v9) );
        }
        else
        {
          v10 = (*v9)--;
        }
        if ( v10 <= 0 )
          operator delete(v16);
      }
      v17 = v39;
      v18 = v5;
      v20 = *((float *)v39 + 21);
      v19 = *((float *)v39 + 22);
      if ( !*(_QWORD *)v2 )
      {
        Caver::Texture::SharedPtr(v40, *((Caver::Texture **)v39 + 14));
        Caver::Sprite::Init();
        v21 = v40[0];
        if ( v40[0] )
        {
          v22 = *(_DWORD *)(v40[0] + 8) - 1;
          *(_DWORD *)(v40[0] + 8) = v22;
          if ( !v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        }
        v17 = v39;
      }
      v23 = v6 + 1;
      v24 = (float)(*((float *)this + 34) + *((float *)this + 36)) - (float)((float)(v19 + 10.0) * (float)(v6 + 1));
      *(float *)&v36 = *((float *)this + 33) + 3.0;
      *((float *)&v36 + 1) = v24;
      v37 = v20;
      v38 = v19;
      LODWORD(v40[0]) = -1;
      Caver::Sprite::AddRectangle(
        v2,
        (const Caver::Rectangle *)&v36,
        (Caver::TextureLibrary *)((char *)v17 + 92),
        (const Caver::Color *)v40);
      Caver::FontText::Clear((Caver::ItemOverlay *)((char *)this + 512));
      v5 = v18;
      v25 = *(_DWORD *)(*((_QWORD *)this + 33) + 24 * v6 + 16);
      v26 = v18 + 3;
      v34 = v18 + 3;
      v27 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
      v28 = v27;
      if ( v25 < 0 )
      {
        *(_BYTE *)(v27 - 1) = 45;
        v28 = v27 - 1;
        v26 = v34;
      }
      sub_569E1C(&v34, 0, *(v26 - 3), v28, &v41[-v28]);
      ((void (__fastcall *)(__int64 *__return_ptr, char *, __int64 **))loc_25A030)(&v35, "x ", &v34);
      v40[0] = 0;
      Caver::FontText::AddText();
      v29 = (void *)(v35 - 24);
      if ( (__int64 *)(v35 - 24) != v18 )
      {
        v11 = (unsigned int *)(v35 - 8);
        if ( &pthread_create )
        {
          do
            v12 = __ldaxr(v11);
          while ( __stlxr(v12 - 1, v11) );
        }
        else
        {
          v12 = (*v11)--;
        }
        if ( v12 <= 0 )
          operator delete(v29);
      }
      v30 = v34 - 3;
      if ( v34 - 3 == v18 )
        goto LABEL_47;
      v13 = (unsigned int *)(v34 - 1);
      if ( &pthread_create )
      {
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
      }
      else
      {
        v14 = (*v13)--;
      }
      if ( v14 > 0 )
      {
LABEL_47:
        if ( !*v3 )
LABEL_40:
          Caver::Sprite::Init();
      }
      else
      {
        operator delete(v30);
        if ( !*v3 )
          goto LABEL_40;
      }
      v31 = *((float *)&v36 + 1) + roundf((float)((float)(v38 - *(float *)(*((_QWORD *)this + 64) + 72LL)) + 2.0) * 0.5);
      *(float *)v40 = (float)(*(float *)&v36 + v37) + 5.0;
      *((float *)v40 + 1) = v31;
      Caver::Sprite::Translate(v33, (const Caver::Vector2 *)v40);
      Caver::Sprite::AddTrianglesFromSprite((Caver::ItemOverlay *)((char *)this + 424), v33);
      result = v39;
      if ( v39 )
      {
        v32 = *((_DWORD *)v39 + 2) - 1;
        *((_DWORD *)v39 + 2) = v32;
        if ( !v32 )
          result = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::TextureLibrary *))(*(_QWORD *)result + 8LL))(result);
      }
      v6 = v23;
    }
    while ( v23 < 0xAAAAAAAAAAAAAAABLL * ((__int64)(*((_QWORD *)this + 34) - *((_QWORD *)this + 33)) >> 3) );
  }
  return result;
}

