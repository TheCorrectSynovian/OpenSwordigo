/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024731C
 * Mangled: _ZN5Caver16ComponentManager31ComponentCollectionForInterfaceEl
 * Demangled: Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Callers: 1
 *   0x00000000001FE780  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Callees: 14
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FABC0  std::map<long,boost::shared_ptr<Caver::ComponentCollection>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::operator[](long const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FECF0  std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,long const&)
 *   0x00000000001FF820  boost::shared_ptr<Caver::ComponentCollection>::shared_ptr<Caver::ComponentCollection>(Caver::ComponentCollection *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C700  sub_54C700
 *   0x000000000054C8A0  sub_54C8A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 143
 *   insn=0x000000000024732C string=0x0000000000247330 "U"
 *   insn=0x0000000000247338 string=0x000000000024733C "v"
 *   insn=0x0000000000247344 string=0x0000000000247348 "i"@"
 *   insn=0x000000000024734C string=0x0000000000247350 ")"
 *   insn=0x0000000000247350 string=0x0000000000247354 "*"
 *   insn=0x0000000000247354 string=0x0000000000247358 "+a"
 *   insn=0x0000000000247358 string=0x000000000024735C ",A"
 *   insn=0x000000000024735C string=0x0000000000247360 "_"
 *   insn=0x0000000000247360 string=0x0000000000247364 "j"
 *   insn=0x0000000000247364 string=0x0000000000247368 ""
 *   insn=0x0000000000247368 string=0x000000000024736C "I"
 *   insn=0x000000000024736C string=0x0000000000247370 ")"
 *   insn=0x0000000000247378 string=0x000000000024737C "\t"
 *   insn=0x000000000024737C string=0x0000000000247380 "?"
 *   insn=0x0000000000247384 string=0x0000000000247388 "?"
 *   insn=0x000000000024738C string=0x00000000002474C4 " "
 *   insn=0x0000000000247390 string=0x0000000000247394 "t"
 *   insn=0x0000000000247398 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002473BC string=0x00000000001FABC0 "0'"
 *   insn=0x00000000002473C4 string=0x00000000002473C8 "\n"
 *   insn=0x00000000002473C8 string=0x00000000002473CC "J"
 *   insn=0x00000000002473CC string=0x00000000002473D0 "\n"
 *   insn=0x00000000002473D4 string=0x00000000002473D8 "\t "
 *   insn=0x00000000002473D8 string=0x00000000002473DC "4"
 *   insn=0x00000000002473E0 string=0x00000000002473E4 ""
 *   insn=0x00000000002473F0 string=0x00000000002473F4 "\t@"
 *   insn=0x0000000000247400 string=0x0000000000247404 ""
 *   insn=0x0000000000247410 string=0x0000000000247414 "@"
 *   insn=0x0000000000247424 string=0x0000000000247458 "i"@"
 *   insn=0x0000000000247428 string=0x000000000024742C ""
 *   insn=0x0000000000247430 string=0x0000000000247434 "!"
 *   insn=0x000000000024743C string=0x0000000000247440 "\t@"
 *   insn=0x0000000000247448 string=0x000000000024744C ""
 *   insn=0x0000000000247458 string=0x000000000024745C "I"
 *   insn=0x0000000000247464 string=0x0000000000247468 "+"
 *   insn=0x0000000000247468 string=0x000000000024746C ",a"
 *   insn=0x000000000024746C string=0x0000000000247470 "-A"
 *   insn=0x0000000000247478 string=0x000000000024747C ""
 *   insn=0x000000000024747C string=0x0000000000247480 "i"
 *   insn=0x0000000000247480 string=0x0000000000247484 ")"
 *   insn=0x0000000000247484 string=0x0000000000247488 ""
 *   insn=0x0000000000247490 string=0x0000000000247494 "@"
 *   insn=0x0000000000247498 string=0x000000000024749C "i"@"
 *   insn=0x000000000024749C string=0x00000000002474A0 "\t"
 *   insn=0x00000000002474B4 string=0x00000000002474B8 "\n"
 *   insn=0x00000000002474B8 string=0x00000000002474BC "?"
 *   insn=0x00000000002474D4 string=0x00000000002474EC "y"
 *   insn=0x00000000002474EC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002474F4 string=0x00000000002474F8 "4"
 *   insn=0x00000000002474FC string=0x0000000000247500 ""
 *   insn=0x000000000024750C string=0x0000000000247510 "\t@"
 *   insn=0x000000000024751C string=0x0000000000247520 ""
 *   insn=0x000000000024752C string=0x0000000000247530 "@"
 *   insn=0x0000000000247568 string=0x000000000024756C "\t%"
 *   insn=0x000000000024756C string=0x0000000000247570 ")AA"
 *   insn=0x000000000024757C string=0x0000000000247580 "(A"
 *   insn=0x0000000000247584 string=0x0000000000247588 ""
 *   insn=0x00000000002475AC string=0x00000000002475B0 "S"
 *   insn=0x00000000002475AC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000002475B0 string=0x00000000002475B4 "h&@"
 *   insn=0x00000000002475B0 string=0x0000000000247618 "V"
 *   insn=0x00000000002475C4 string=0x0000000000247604 "t"
 *   insn=0x00000000002475CC string=0x00000000002475D0 " "
 *   insn=0x00000000002475D0 string=0x00000000002475D4 "\n@"
 *   insn=0x00000000002475D4 string=0x00000000002475D8 "J"
 *   insn=0x00000000002475D8 string=0x00000000002475DC "\n"
 *   insn=0x00000000002475E0 string=0x00000000002475E4 "\t"
 *   insn=0x00000000002475E4 string=0x00000000002475E8 ")"
 *   insn=0x00000000002475E8 string=0x00000000002475EC " "
 *   insn=0x00000000002475F4 string=0x00000000002475F8 "?"
 *   insn=0x00000000002475FC string=0x0000000000247600 "t"
 *   insn=0x0000000000247608 string=0x000000000024760C ")"
 *   insn=0x000000000024760C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000247610 string=0x0000000000247614 "'"
 *   insn=0x000000000024761C string=0x0000000000247620 ""
 *   insn=0x0000000000247628 string=0x000000000024762C "h"
 *   insn=0x0000000000247640 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000247648 string=0x000000000024764C "@"
 *   insn=0x0000000000247664 string=0x0000000000247668 "X"
 *   insn=0x0000000000247668 string=0x000000000024766C ""
 *   insn=0x000000000024767C string=0x0000000000247680 "H"
 *   insn=0x0000000000247680 string=0x0000000000247684 ")"
 *   insn=0x0000000000247688 string=0x000000000024768C "\n"
 *   insn=0x000000000024768C string=0x0000000000247690 "a"
 *   insn=0x0000000000247694 string=0x0000000000247698 "_"
 *   insn=0x0000000000247698 string=0x000000000024769C "j"
 *   insn=0x000000000024769C string=0x00000000002476A0 "s"
 *   insn=0x00000000002476A0 string=0x00000000002476A4 "H"
 *   insn=0x00000000002476A4 string=0x00000000002476A8 "("
 *   insn=0x00000000002476AC string=0x00000000002476B0 " "
 *   insn=0x00000000002476B0 string=0x00000000002476B4 "("
 *   insn=0x00000000002476B0 string=0x00000000002476D4 "("
 *   insn=0x00000000002476B4 string=0x00000000002476B8 "i"
 *   insn=0x00000000002476C0 string=0x00000000002476C4 ";"
 *   insn=0x00000000002476C4 string=0x00000000002477B0 ""
 *   insn=0x00000000002476CC string=0x00000000002476D0 "!"
 *   insn=0x000000000024772C string=0x0000000000247730 "`\n"
 *   insn=0x0000000000247730 string=0x0000000000247734 "h"
 *   insn=0x0000000000247738 string=0x000000000024773C "\t"
 *   insn=0x000000000024773C string=0x0000000000247740 ")"
 *   insn=0x0000000000247740 string=0x0000000000247744 "\t"
 *   insn=0x0000000000247754 string=0x0000000000247758 "R"
 *   insn=0x000000000024775C string=0x0000000000247760 ""
 *   insn=0x0000000000247768 string=0x000000000024776C "4"
 *   insn=0x0000000000247770 string=0x0000000000247774 ""
 *   insn=0x0000000000247780 string=0x0000000000247784 "\t@"
 *   insn=0x0000000000247790 string=0x0000000000247794 ""
 *   insn=0x00000000002477A0 string=0x00000000002477A4 "@"
 *   insn=0x00000000002477BC string=0x00000000002477C0 "`"
 *   insn=0x00000000002477E8 string=0x00000000002477EC "4"
 *   insn=0x00000000002477F0 string=0x00000000002477F4 ""
 *   insn=0x0000000000247800 string=0x0000000000247804 "\t@"
 *   insn=0x0000000000247810 string=0x0000000000247814 ""
 *   insn=0x0000000000247820 string=0x0000000000247824 "@"
 *   insn=0x0000000000247830 string=0x0000000000247834 "$"
 *   insn=0x0000000000247850 string=0x0000000000247854 "h\n@"
 *   insn=0x0000000000247858 string=0x000000000024785C "t""
 *   insn=0x0000000000247868 string=0x000000000024786C "K"
 *   insn=0x000000000024786C string=0x0000000000247870 "La"
 *   insn=0x0000000000247870 string=0x0000000000247874 "MA"
 *   insn=0x000000000024787C string=0x0000000000247880 ")"
 *   insn=0x0000000000247880 string=0x0000000000247884 "j"
 *   insn=0x0000000000247884 string=0x0000000000247888 "*"
 *   insn=0x0000000000247888 string=0x000000000024788C "?"
 *   insn=0x0000000000247890 string=0x0000000000247894 "\t"
 *   insn=0x0000000000247890 string=0x00000000002478A4 "*"
 *   insn=0x0000000000247898 string=0x000000000024789C "?"
 *   insn=0x00000000002478A4 string=0x00000000002478A8 "_"
 *   insn=0x00000000002478AC string=0x00000000002478B0 "?"
 *   insn=0x00000000002478B0 string=0x00000000002478B4 "a"
 *   insn=0x00000000002478C8 string=0x00000000002478CC "?"
 *   insn=0x00000000002478CC string=0x00000000002478D0 "H"
 *   insn=0x00000000002478D0 string=0x00000000002478D4 ""
 *   insn=0x00000000002478D4 string=0x00000000002478D8 "("
 *   insn=0x00000000002478D8 string=0x00000000002478DC "?"
 *   insn=0x00000000002478E0 string=0x00000000002478E4 "l"
 *   insn=0x00000000002478E4 string=0x00000000002478E8 ""
 *   insn=0x00000000002478E4 string=0x00000000002478F0 "h"
 *   insn=0x00000000002478E8 string=0x0000000000247904 ""
 *   insn=0x0000000000247930 string=0x0000000000247934 "+"
 *   insn=0x0000000000247950 string=0x0000000000247954 "h"
 *   insn=0x0000000000247954 string=0x0000000000247958 ""
 *   insn=0x0000000000247958 string=0x000000000024795C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentManager::ComponentCollectionForInterface(Caver::ComponentManager *this, __int64 a2)
{
  char *v3; // x22
  _QWORD *v4; // x9
  char *v5; // x8
  __int64 v6; // x10
  bool v7; // cc
  _QWORD *v8; // x10
  char *v9; // x9
  _QWORD *v10; // x0
  _QWORD *v11; // x0
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x9
  char *v18; // x8
  __int64 v19; // x11
  bool v20; // cc
  _QWORD *v21; // x11
  __int64 v23; // [xsp+A0h] [xbp-40h]
  _QWORD *v24; // [xsp+A8h] [xbp-38h]

  v3 = (char *)this + 56;
  _ReadStatusReg(TPIDR_EL0);
  v4 = (_QWORD *)*((_QWORD *)this + 8);
  v5 = (char *)this + 56;
  if ( v4 )
  {
    do
    {
      v6 = v4[4];
      v7 = v6 < a2;
      if ( v6 >= a2 )
        v8 = v4 + 2;
      else
        v8 = v4 + 3;
      if ( !v7 )
        v5 = (char *)v4;
      v4 = (_QWORD *)*v8;
    }
    while ( *v8 );
  }
  if ( v5 == v3 || (*((_QWORD *)v5 + 4) <= a2 ? (v9 = v5) : (v9 = (char *)this + 56), v9 == v3) )
  {
    v10 = (_QWORD *)operator new(0x18u);
    v10[1] = 0;
    v10[2] = 0;
    *v10 = 0;
    boost::shared_ptr<Caver::ComponentCollection>::shared_ptr<Caver::ComponentCollection>();
    std::map<long,boost::shared_ptr<Caver::ComponentCollection>>::operator[]();
    if ( v24 )
      ++v24[1];
    v12 = (_QWORD *)v11[1];
    *v11 = v23;
    v11[1] = v24;
    if ( v12 )
    {
      v13 = v12[1] - 1LL;
      v12[1] = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        v14 = v12[2] - 1LL;
        v12[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
      }
    }
    if ( !v24
      || (v15 = v24[1] - 1LL, (v24[1] = v15) != 0)
      || ((*(void (__fastcall **)())(*v24 + 16LL))(), v16 = v24[2] - 1LL, (v24[2] = v16) != 0) )
    {
      v17 = (_QWORD *)*((_QWORD *)this + 8);
      if ( v17 )
        goto LABEL_23;
    }
    else
    {
      (*(void (__fastcall **)())(*v24 + 24LL))();
      v17 = (_QWORD *)*((_QWORD *)this + 8);
      if ( v17 )
      {
LABEL_23:
        v18 = v3;
        do
        {
          v19 = v17[4];
          v20 = v19 < a2;
          if ( v19 >= a2 )
            v21 = v17 + 2;
          else
            v21 = v17 + 3;
          if ( !v20 )
            v18 = (char *)v17;
          v17 = (_QWORD *)*v21;
        }
        while ( *v21 );
        goto LABEL_33;
      }
    }
    v18 = v3;
LABEL_33:
    v9 = v3;
    if ( v18 != v3 )
    {
      if ( a2 >= *((_QWORD *)v18 + 4) )
        v9 = v18;
      else
        v9 = v3;
    }
  }
  return *((_QWORD *)v9 + 5);
}

