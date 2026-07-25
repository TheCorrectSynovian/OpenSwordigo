/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BFAB8
 * Mangled: _ZN5Caver22GroundPolygonComponent7ProcessEPSt6vectorIN5boost13intrusive_ptrINS_9ComponentEEESaIS5_EE
 * Demangled: Caver::GroundPolygonComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3790  Caver::Shape::ShapeWithPolygon(Caver::Polygon const&)
 *   0x00000000001F3A10  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *   0x00000000001F5280  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,Caver::Vector2 const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9940  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back(Caver::Polygon const&)
 *   0x00000000001FC1F0  Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *   0x00000000001FE1E0  Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *   0x0000000000202920  Caver::CollisionShapeComponent::setOnCollide(Caver::Program const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002BFFA8  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back(Caver::Polygon const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 107
 *   insn=0x00000000002BFAD4 string=0x00000000002BFAD8 "X"
 *   insn=0x00000000002BFAD8 string=0x00000000002BFADC ""
 *   insn=0x00000000002BFAE8 string=0x00000000002BFAEC "h"
 *   insn=0x00000000002BFAF0 string=0x00000000002BFAF4 "hr@"
 *   insn=0x00000000002BFAF0 string=0x00000000002BFD04 ""
 *   insn=0x00000000002BFAF8 string=0x00000000002BFAFC "K"
 *   insn=0x00000000002BFB20 string=0x00000000002BFB28 "i>@"
 *   insn=0x00000000002BFB28 string=0x00000000002BFB2C "?"
 *   insn=0x00000000002BFB2C string=0x00000000002BFB30 "*"
 *   insn=0x00000000002BFB30 string=0x00000000002BFB34 "I)@)"
 *   insn=0x00000000002BFB3C string=0x00000000002BFB40 ")("
 *   insn=0x00000000002BFB48 string=0x00000000002BFB60 "("
 *   insn=0x00000000002BFB58 string=0x00000000001F5280 "P'"
 *   insn=0x00000000002BFB60 string=0x00000000002BFB64 "\t"
 *   insn=0x00000000002BFB64 string=0x00000000002BFB68 "?)"
 *   insn=0x00000000002BFB68 string=0x00000000002BFB6C "c"
 *   insn=0x00000000002BFB6C string=0x00000000002BFB70 "ir@"
 *   insn=0x00000000002BFB6C string=0x00000000002BFBB8 "hr@"
 *   insn=0x00000000002BFB70 string=0x00000000002BFB74 ")"
 *   insn=0x00000000002BFB74 string=0x00000000002BFB78 "?"
 *   insn=0x00000000002BFB94 string=0x00000000002BFB98 "j"
 *   insn=0x00000000002BFB98 string=0x00000000001F9940 "0'"
 *   insn=0x00000000002BFB9C string=0x00000000002BFBA0 "@"
 *   insn=0x00000000002BFBA4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002BFBC0 string=0x00000000002BFBC4 ""
 *   insn=0x00000000002BFBCC string=0x00000000002BFBD0 "A"
 *   insn=0x00000000002BFBD0 string=0x00000000002BFBD4 "("
 *   insn=0x00000000002BFBEC string=0x00000000002BFBF0 "T"
 *   insn=0x00000000002BFBF0 string=0x00000000002BFBF4 "."
 *   insn=0x00000000002BFBF8 string=0x00000000002BFBFC "b>@"
 *   insn=0x00000000002BFBFC string=0x00000000002BFC00 "?"
 *   insn=0x00000000002BFC04 string=0x00000000002BFC08 "I"
 *   insn=0x00000000002BFC08 string=0x00000000002BFC0C ")"
 *   insn=0x00000000002BFC14 string=0x00000000002BFC28 "?"
 *   insn=0x00000000002BFC1C string=0x00000000002BFC20 "b>@"
 *   insn=0x00000000002BFC28 string=0x00000000002BFC2C "I "
 *   insn=0x00000000002BFC30 string=0x00000000002BFC34 ")"
 *   insn=0x00000000002BFC34 string=0x00000000002BFC38 ")"
 *   insn=0x00000000002BFC3C string=0x00000000002BFC40 ""
 *   insn=0x00000000002BFC40 string=0x00000000002BFC5C "?"
 *   insn=0x00000000002BFC50 string=0x00000000002BFC54 "b>@"
 *   insn=0x00000000002BFC5C string=0x00000000002BFC60 "B@"
 *   insn=0x00000000002BFC64 string=0x00000000002BFC68 "H"
 *   insn=0x00000000002BFC68 string=0x00000000002BFC6C "("
 *   insn=0x00000000002BFC88 string=0x00000000002BFC8C "("
 *   insn=0x00000000002BFC98 string=0x00000000002BFC9C "Q"
 *   insn=0x00000000002BFCA4 string=0x00000000002BFCA8 "&"
 *   insn=0x00000000002BFCAC string=0x00000000002BFCB0 "@"
 *   insn=0x00000000002BFCC4 string=0x00000000002BFCC8 "`"
 *   insn=0x00000000002BFCC8 string=0x00000000002BFCCC "y"
 *   insn=0x00000000002BFCD8 string=0x00000000002BFCF8 "v"
 *   insn=0x00000000002BFCDC string=0x00000000002BFCE0 "@"
 *   insn=0x00000000002BFCE0 string=0x00000000002BFCE4 "s"
 *   insn=0x00000000002BFCEC string=0x00000000002BFCF0 "a"
 *   insn=0x00000000002BFCFC string=0x00000000002BFD00 "l"
 *   insn=0x00000000002BFD40 string=0x00000000002BFD44 "u"
 *   insn=0x00000000002BFD50 string=0x00000000002BFD54 "#"
 *   insn=0x00000000002BFD54 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002BFD5C string=0x00000000002BFD60 "$"
 *   insn=0x00000000002BFD60 string=0x00000000001FC1F0 "0'"
 *   insn=0x00000000002BFD70 string=0x00000000002BFD74 " "
 *   insn=0x00000000002BFD7C string=0x00000000001F3790 "P'"
 *   insn=0x00000000002BFD8C string=0x00000000002BFD90 "7"
 *   insn=0x00000000002BFD90 string=0x00000000002BFDD4 "hV@"
 *   insn=0x00000000002BFD94 string=0x00000000002BFD98 ""
 *   insn=0x00000000002BFDA4 string=0x00000000002BFDA8 "\t@"
 *   insn=0x00000000002BFDB4 string=0x00000000002BFDB8 ""
 *   insn=0x00000000002BFDC4 string=0x00000000002BFDC8 "@"
 *   insn=0x00000000002BFDD8 string=0x00000000002BFDDC "h"
 *   insn=0x00000000002BFDE0 string=0x00000000002BFDE4 "h"
 *   insn=0x00000000002BFDFC string=0x00000000002BFE00 "\t"
 *   insn=0x00000000002BFE08 string=0x00000000002BFE0C "?"
 *   insn=0x00000000002BFE10 string=0x00000000002BFE14 "6"
 *   insn=0x00000000002BFE14 string=0x00000000002BFE18 "\t"
 *   insn=0x00000000002BFE28 string=0x00000000002BFE2C ""
 *   insn=0x00000000002BFE28 string=0x00000000002BFE44 "@"
 *   insn=0x00000000002BFE38 string=0x00000000001F3A10 "P'"
 *   insn=0x00000000002BFE44 string=0x00000000002BFE48 ""
 *   insn=0x00000000002BFE48 string=0x00000000002BFE4C ""
 *   insn=0x00000000002BFE50 string=0x00000000002BFE54 ""
 *   insn=0x00000000002BFE54 string=0x00000000002BFE58 ""
 *   insn=0x00000000002BFE60 string=0x00000000002BFE64 "Z"
 *   insn=0x00000000002BFE64 string=0x00000000002BFE68 "9"
 *   insn=0x00000000002BFE6C string=0x00000000002BFE70 ""
 *   insn=0x00000000002BFE70 string=0x00000000002BFE74 "}"
 *   insn=0x00000000002BFE74 string=0x00000000002BFE78 "_"
 *   insn=0x00000000002BFE84 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BFEA8 string=0x00000000002BFEAC "\t\t@"
 *   insn=0x00000000002BFEAC string=0x00000000002BFEB0 ")"
 *   insn=0x00000000002BFEB0 string=0x00000000002BFEB4 "\t\t"
 *   insn=0x00000000002BFEB4 string=0x00000000002BFEB8 "A"
 *   insn=0x00000000002BFEB8 string=0x00000000002BFEBC "\t"
 *   insn=0x00000000002BFEBC string=0x00000000002BFEC0 ")"
 *   insn=0x00000000002BFEC4 string=0x00000000002BFEC8 " "
 *   insn=0x00000000002BFEC8 string=0x00000000002BFECC "%"
 *   insn=0x00000000002BFED4 string=0x00000000002BFED8 "T"
 *   insn=0x00000000002BFEDC string=0x00000000002BFEE0 ""
 *   insn=0x00000000002BFEEC string=0x00000000002BFEF0 "\t@"
 *   insn=0x00000000002BFEFC string=0x00000000002BFF00 ""
 *   insn=0x00000000002BFF0C string=0x00000000002BFF10 "@"
 *   insn=0x00000000002BFF28 string=0x00000000002BFF2C ""
 *   insn=0x00000000002BFF3C string=0x00000000002BFF40 ""
 *   insn=0x00000000002BFF60 string=0x00000000002BFF64 "@"
 *   insn=0x00000000002BFF74 string=0x00000000002BFF94 "t"
 *   insn=0x00000000002BFF78 string=0x00000000002BFF7C "@"
 *   insn=0x00000000002BFF88 string=0x00000000002BFF8C "a"
 *   insn=0x00000000002BFFA0 string=0x00000000002BFFA4 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundPolygonComponent::Process(__int64 a1)
{
  int v2; // w21
  __int64 v4; // [xsp+40h] [xbp-80h] BYREF
  void *p; // [xsp+48h] [xbp-78h]
  __int64 v6; // [xsp+68h] [xbp-58h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 176) )
  {
    if ( *(int *)(a1 + 112) >= 3 )
    {
      v2 = 0;
      do
      {
        std::vector<Caver::Vector2>::_M_insert_aux();
        ++v2;
      }
      while ( v2 < *(_DWORD *)(a1 + 112) );
      Caver::Polygon::Polygon((Caver::Polygon *)&v4, 0, 0, 1);
      std::vector<Caver::Polygon>::push_back();
      if ( p )
        operator delete(p);
    }
  }
  return 1;
}

