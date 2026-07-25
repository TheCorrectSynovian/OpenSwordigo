/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000216ED0
 * Mangled: _ZNSt8_Rb_treeIN5Caver13CollisionPairESt4pairIKS1_bESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS4_E
 * Demangled: std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *
 * Callers: 1
 *   0x00000000001FD090  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F66A0  Caver::RectangleIntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8850  Caver::CircleIntersectsCircle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000001F8FE0  Caver::RectangleIntersectsPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *   0x00000000001FAE20  Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *   0x00000000001FAEA0  Caver::CircleIntersectsRectangle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x00000000001FDC30  Caver::Rectangle::FlipHorizontally(void)
 *   0x00000000001FEBB0  Caver::CircleIntersectsPolygon(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x0000000000202C50  Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054CA60  sub_54CA60
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 104
 *   insn=0x0000000000216EDC string=0x0000000000216EE0 "h""
 *   insn=0x0000000000216EF8 string=0x0000000000216EFC "@"
 *   insn=0x0000000000216EFC string=0x0000000000216F00 ""
 *   insn=0x0000000000216F00 string=0x0000000000216F04 ""
 *   insn=0x0000000000216F08 string=0x0000000000216F0C ""
 *   insn=0x0000000000216F0C string=0x0000000000216F10 ""
 *   insn=0x0000000000216F1C string=0x0000000000216F20 "@"
 *   insn=0x0000000000216F20 string=0x0000000000216F24 ""
 *   insn=0x0000000000216F24 string=0x0000000000216F28 ""
 *   insn=0x0000000000216F2C string=0x0000000000216F30 ""
 *   insn=0x0000000000216F30 string=0x0000000000216F34 ""
 *   insn=0x0000000000216F40 string=0x0000000000216F44 "h"
 *   insn=0x0000000000216F40 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000216F44 string=0x0000000000216F48 ""
 *   insn=0x0000000000216F48 string=0x0000000000216F4C "h"
 *   insn=0x0000000000216F60 string=0x0000000000216F64 "("
 *   insn=0x0000000000216F64 string=0x0000000000216F68 "\t\t@"
 *   insn=0x0000000000216F68 string=0x0000000000216F6C ")"
 *   insn=0x0000000000216F6C string=0x0000000000216F70 "\t\t"
 *   insn=0x0000000000216F74 string=0x0000000000216F78 "\t"
 *   insn=0x0000000000216F78 string=0x0000000000216F7C ")"
 *   insn=0x0000000000216F80 string=0x0000000000216F84 " "
 *   insn=0x0000000000216F88 string=0x0000000000216F8C "N"
 *   insn=0x0000000000216FB0 string=0x0000000000216FB4 "V"
 *   insn=0x0000000000216FBC string=0x0000000000216FC0 "i"
 *   insn=0x0000000000216FC0 string=0x0000000000583734 "o"
 *   insn=0x0000000000216FCC string=0x0000000000216FD0 ""5G"
 *   insn=0x0000000000216FD8 string=0x0000000000216FDC ""
 *   insn=0x0000000000216FDC string=0x0000000000216FE0 "!(""
 *   insn=0x0000000000216FE0 string=0x0000000000216FE4 "` !"
 *   insn=0x0000000000216FE8 string=0x0000000000216FEC "h"
 *   insn=0x0000000000216FEC string=0x00000000005837A4 "o"
 *   insn=0x0000000000216FFC string=0x0000000000217000 "@  "
 *   insn=0x0000000000217010 string=0x0000000000217014 "_\t"
 *   insn=0x0000000000217018 string=0x000000000021701C "_"
 *   insn=0x0000000000217030 string=0x0000000000217034 "h"
 *   insn=0x000000000021703C string=0x00000000001FDC30 "0'"
 *   insn=0x0000000000217040 string=0x0000000000217044 "h"
 *   insn=0x0000000000217044 string=0x0000000000583944 "\n"
 *   insn=0x0000000000217048 string=0x000000000021704C ")("
 *   insn=0x000000000021704C string=0x0000000000217050 "!"
 *   insn=0x0000000000217050 string=0x0000000000217054 "   "
 *   insn=0x0000000000217054 string=0x0000000000217058 "H("
 *   insn=0x000000000021705C string=0x000000000021706C "h"
 *   insn=0x0000000000217060 string=0x0000000000217064 "   "
 *   insn=0x0000000000217080 string=0x00000000001FC440 "0'"
 *   insn=0x0000000000217088 string=0x000000000021708C "#\t "
 *   insn=0x0000000000217094 string=0x0000000000217098 "c"
 *   insn=0x0000000000217098 string=0x000000000021709C "B\t""
 *   insn=0x000000000021709C string=0x00000000002170A0 "` ""
 *   insn=0x00000000002170A0 string=0x00000000002170A4 ","
 *   insn=0x00000000002170A8 string=0x00000000002170AC "!\t!"
 *   insn=0x00000000002170B8 string=0x00000000002170BC "A\t""
 *   insn=0x00000000002170D8 string=0x00000000002170DC "#8("
 *   insn=0x00000000002170EC string=0x00000000002170F0 "L"
 *   insn=0x00000000002170F0 string=0x00000000002170F4 "`"
 *   insn=0x00000000002170F0 string=0x00000000001FAE20 "0'"
 *   insn=0x0000000000217114 string=0x0000000000217118 "A"
 *   insn=0x0000000000217128 string=0x000000000021712C "H"
 *   insn=0x000000000021712C string=0x0000000000217130 "("
 *   insn=0x0000000000217150 string=0x0000000000217154 "@"
 *   insn=0x0000000000217158 string=0x000000000021715C "J\t@"
 *   insn=0x0000000000217164 string=0x0000000000217168 "k"
 *   insn=0x0000000000217174 string=0x0000000000217178 "k"
 *   insn=0x0000000000217178 string=0x000000000021717C "bEI"
 *   insn=0x0000000000217184 string=0x0000000000217188 "` ""
 *   insn=0x0000000000217188 string=0x000000000021718C "!("
 *   insn=0x0000000000217190 string=0x0000000000217194 "#"
 *   insn=0x0000000000217194 string=0x0000000000217198 "` ""
 *   insn=0x0000000000217198 string=0x000000000021719C "-"
 *   insn=0x00000000002171A0 string=0x00000000002171A4 "B"
 *   insn=0x00000000002171A8 string=0x00000000002171AC "%!"
 *   insn=0x00000000002171AC string=0x00000000002171B0 "b""
 *   insn=0x00000000002171B4 string=0x00000000002171B8 "B""
 *   insn=0x00000000002171BC string=0x00000000002171C0 ""
 *   insn=0x00000000002171C4 string=0x00000000002171C8 "#"
 *   insn=0x00000000002171C8 string=0x00000000002171CC "@8 "
 *   insn=0x00000000002171CC string=0x00000000002171D0 "a8!"
 *   insn=0x00000000002171F0 string=0x00000000002171F4 "`"
 *   insn=0x000000000021720C string=0x0000000000217210 "!"
 *   insn=0x000000000021721C string=0x0000000000217220 "\t@"
 *   insn=0x0000000000217228 string=0x000000000021722C "h"
 *   insn=0x0000000000217254 string=0x0000000000217258 "~"
 *   insn=0x0000000000217258 string=0x00000000001F8850 "0'"
 *   insn=0x000000000021726C string=0x0000000000217270 "h"
 *   insn=0x0000000000217274 string=0x0000000000217278 "n"
 *   insn=0x000000000021729C string=0x00000000001FAEA0 "0'"
 *   insn=0x00000000002172CC string=0x00000000002172D0 "8"
 *   insn=0x0000000000217330 string=0x0000000000217334 "h"
 *   insn=0x0000000000217338 string=0x000000000021733C "="
 *   insn=0x0000000000217364 string=0x00000000001F66A0 "0'"
 *   insn=0x0000000000217368 string=0x000000000021736C "!"
 *   insn=0x0000000000217378 string=0x000000000021737C "\t@"
 *   insn=0x0000000000217384 string=0x0000000000217388 "h"
 *   insn=0x00000000002173B4 string=0x00000000002173B8 "@"
 *   insn=0x00000000002173C8 string=0x00000000002173CC "s"
 *   insn=0x00000000002173E8 string=0x00000000001F8FE0 "0'"
 *   insn=0x00000000002173F8 string=0x00000000002173FC "h"
 *   insn=0x0000000000217400 string=0x0000000000217404 "h"
 *   insn=0x0000000000217408 string=0x000000000021740C "h\n"
 *   insn=0x0000000000217410 string=0x0000000000217414 "h"
 *   insn=0x0000000000217418 string=0x000000000021741C "`"
 *   insn=0x000000000021741C string=0x0000000000217420 "h""
 *   insn=0x0000000000217428 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // x20
  _DWORD *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8

  v3 = (_QWORD *)sub_54CA60(a2, a1 + 8);
  v4 = (_DWORD *)v3[5];
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (_DWORD *)v3[4];
  if ( v6 )
  {
    v7 = v6[2] - 1;
    v6[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  operator delete(v3);
  --*(_QWORD *)(a1 + 40);
}

