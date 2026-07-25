/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029858C
 * Mangled: _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver15AttackComponentEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::AttackComponent>*,std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>>,boost::intrusive_ptr<Caver::AttackComponent> const&)
 *
 * Callers: 1
 *   0x00000000001F58C0  std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::AttackComponent>*,std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>>,boost::intrusive_ptr<Caver::AttackComponent> const&)
 *
 * Callees: 13
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA3B0  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 170
 *   insn=0x00000000002985B8 string=0x00000000002985BC "\t"
 *   insn=0x00000000002985BC string=0x00000000002985C0 "\t"
 *   insn=0x00000000002985C4 string=0x00000000002985C8 "*\t@"
 *   insn=0x00000000002985C4 string=0x00000000002985D4 "\t!"
 *   insn=0x00000000002985C8 string=0x00000000002985CC "J"
 *   insn=0x00000000002985CC string=0x00000000002985D0 "*\t"
 *   insn=0x00000000002985E0 string=0x00000000002985F0 "!"
 *   insn=0x00000000002985E4 string=0x00000000002985E8 ")"
 *   insn=0x00000000002985F0 string=0x00000000002985F4 "\t"
 *   insn=0x00000000002985F4 string=0x00000000002985F8 "?"
 *   insn=0x00000000002985FC string=0x0000000000298600 ")"
 *   insn=0x0000000000298600 string=0x0000000000298604 "5"
 *   insn=0x0000000000298610 string=0x0000000000298614 "*\t@"
 *   insn=0x0000000000298614 string=0x0000000000298618 "J"
 *   insn=0x0000000000298618 string=0x000000000029861C "*\t"
 *   insn=0x0000000000298620 string=0x0000000000298624 "\t"
 *   insn=0x0000000000298628 string=0x000000000029862C "@"
 *   insn=0x000000000029862C string=0x0000000000298630 ""
 *   insn=0x0000000000298630 string=0x0000000000298634 ""
 *   insn=0x0000000000298638 string=0x000000000029863C ""
 *   insn=0x000000000029863C string=0x0000000000298640 ""
 *   insn=0x0000000000298658 string=0x0000000000298668 "`"
 *   insn=0x000000000029865C string=0x0000000000298660 ""
 *   insn=0x0000000000298668 string=0x000000000029866C "t"
 *   insn=0x0000000000298670 string=0x0000000000298674 "@"
 *   insn=0x0000000000298674 string=0x0000000000298678 ""
 *   insn=0x0000000000298678 string=0x000000000029867C ""
 *   insn=0x0000000000298680 string=0x0000000000298684 ""
 *   insn=0x0000000000298684 string=0x0000000000298688 ""
 *   insn=0x0000000000298694 string=0x0000000000298698 ""
 *   insn=0x000000000029869C string=0x00000000002986A0 "A"
 *   insn=0x00000000002986C0 string=0x00000000002986C4 " "
 *   insn=0x00000000002986C8 string=0x00000000002986CC ""
 *   insn=0x00000000002986CC string=0x00000000002986D0 ""
 *   insn=0x00000000002986D0 string=0x00000000002986D4 "\n"
 *   insn=0x00000000002986D4 string=0x00000000002986D8 "H"
 *   insn=0x00000000002986D8 string=0x00000000002986DC ""
 *   insn=0x00000000002986E8 string=0x00000000002986EC "J"
 *   insn=0x00000000002986EC string=0x00000000002986F0 "_"
 *   insn=0x00000000002986F4 string=0x00000000002986F8 "W"
 *   insn=0x00000000002986FC string=0x0000000000298700 "\n"
 *   insn=0x0000000000298704 string=0x0000000000298708 "v"
 *   insn=0x000000000029870C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029871C string=0x0000000000298720 "\t\t@"
 *   insn=0x0000000000298720 string=0x0000000000298724 ")"
 *   insn=0x0000000000298724 string=0x0000000000298728 "\t\t"
 *   insn=0x0000000000298730 string=0x0000000000298734 "@"
 *   insn=0x0000000000298738 string=0x000000000029873C "h""
 *   insn=0x000000000029873C string=0x0000000000298740 "j"
 *   insn=0x000000000029874C string=0x0000000000298750 "l\t@"
 *   insn=0x000000000029874C string=0x000000000029875C ")!"
 *   insn=0x0000000000298754 string=0x0000000000298758 "l\t"
 *   insn=0x000000000029875C string=0x0000000000298760 "_"
 *   insn=0x0000000000298764 string=0x0000000000298768 ""
 *   insn=0x0000000000298768 string=0x000000000029876C ""
 *   insn=0x0000000000298770 string=0x0000000000298774 "!"
 *   insn=0x0000000000298784 string=0x0000000000298788 "?"
 *   insn=0x0000000000298788 string=0x000000000029878C "@"
 *   insn=0x000000000029878C string=0x0000000000298790 "(#"
 *   insn=0x0000000000298798 string=0x000000000029879C "K"
 *   insn=0x000000000029879C string=0x00000000002987A0 "+"
 *   insn=0x00000000002987A4 string=0x00000000002987A8 "l\t@"
 *   insn=0x00000000002987A4 string=0x00000000002987B4 "J!"
 *   insn=0x00000000002987AC string=0x00000000002987B0 "l\t"
 *   insn=0x00000000002987B4 string=0x00000000002987B8 "?"
 *   insn=0x00000000002987B8 string=0x00000000002987BC ")!"
 *   insn=0x00000000002987C0 string=0x00000000002987C4 ""
 *   insn=0x00000000002987C4 string=0x00000000002987C8 ""
 *   insn=0x00000000002987C8 string=0x00000000002987CC ""
 *   insn=0x00000000002987D8 string=0x0000000000298810 "v"
 *   insn=0x00000000002987E0 string=0x00000000002987E4 "@"
 *   insn=0x00000000002987E4 string=0x00000000002987E8 ""
 *   insn=0x00000000002987E8 string=0x00000000002987EC ""
 *   insn=0x00000000002987F0 string=0x00000000002987F4 ""
 *   insn=0x00000000002987F4 string=0x00000000002987F8 ""
 *   insn=0x0000000000298800 string=0x0000000000298804 "?"
 *   insn=0x0000000000298818 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000298848 string=0x000000000029884C ""
 *   insn=0x0000000000298850 string=0x0000000000298854 "4"
 *   insn=0x0000000000298858 string=0x000000000029885C ""
 *   insn=0x0000000000298868 string=0x000000000029886C ""
 *   insn=0x000000000029889C string=0x00000000002988A0 "Y"
 *   insn=0x00000000002988A0 string=0x00000000002988A4 "("
 *   insn=0x00000000002988B0 string=0x00000000002988B4 "h""
 *   insn=0x00000000002988B0 string=0x00000000001FA3B0 "0'"
 *   insn=0x00000000002988B4 string=0x00000000002988B8 "]@"
 *   insn=0x00000000002988B8 string=0x00000000002988BC "v""
 *   insn=0x00000000002988C0 string=0x00000000002988C4 "w""
 *   insn=0x00000000002988C8 string=0x00000000002988CC "\n"
 *   insn=0x00000000002988CC string=0x00000000002988D0 "\tA"
 *   insn=0x00000000002988D0 string=0x00000000002988D4 "@"
 *   insn=0x00000000002988D4 string=0x00000000002988D8 ""
 *   insn=0x00000000002988E4 string=0x00000000002988E8 "i"
 *   insn=0x00000000002988EC string=0x00000000002988F0 "`"
 *   insn=0x0000000000298918 string=0x000000000029891C "h"
 *   insn=0x0000000000298924 string=0x0000000000298928 "a"
 *   insn=0x0000000000298928 string=0x000000000058783F "walkAnimation"
 *   insn=0x0000000000298950 string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000298954 string=0x0000000000298958 "u""
 *   insn=0x0000000000298964 string=0x0000000000298968 "a"
 *   insn=0x0000000000298968 string=0x00000000002989D4 "i""
 *   insn=0x000000000029896C string=0x00000000005891AC "leapAttack"
 *   insn=0x00000000002989A4 string=0x00000000002989A8 "("
 *   insn=0x00000000002989A4 string=0x00000000002989F8 "i""
 *   insn=0x00000000002989B0 string=0x00000000002989B4 "A"
 *   insn=0x00000000002989D4 string=0x00000000002989D8 ")=G"
 *   insn=0x00000000002989D8 string=0x00000000002989DC "!"
 *   insn=0x00000000002989E0 string=0x00000000002989E4 "\t"
 *   insn=0x00000000002989E0 string=0x0000000000298A1C "\t"
 *   insn=0x00000000002989E4 string=0x00000000002989E8 "*"
 *   insn=0x00000000002989E8 string=0x00000000002989EC "\n"
 *   insn=0x00000000002989F0 string=0x00000000002989F4 ""
 *   insn=0x00000000002989F4 string=0x0000000000298A28 "?"
 *   insn=0x00000000002989F8 string=0x00000000002989FC ")=G"
 *   insn=0x00000000002989FC string=0x0000000000298A00 "!"
 *   insn=0x0000000000298A04 string=0x0000000000298A08 "\t"
 *   insn=0x0000000000298A04 string=0x0000000000298A3C "\t"
 *   insn=0x0000000000298A08 string=0x0000000000298A0C "*"
 *   insn=0x0000000000298A0C string=0x0000000000298A10 "\n"
 *   insn=0x0000000000298A18 string=0x0000000000298A48 "?"
 *   insn=0x0000000000298A1C string=0x0000000000298A20 "*"
 *   insn=0x0000000000298A20 string=0x0000000000298A24 "\n"
 *   insn=0x0000000000298A30 string=0x0000000000298A34 "\F"
 *   insn=0x0000000000298A3C string=0x0000000000298A40 "*"
 *   insn=0x0000000000298A40 string=0x0000000000298A44 "\n"
 *   insn=0x0000000000298A50 string=0x0000000000298A54 "TF"
 *   insn=0x0000000000298A5C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000298A60 string=0x0000000000298A64 "(a"
 *   insn=0x0000000000298A70 string=0x0000000000298A74 "j""
 *   insn=0x0000000000298A74 string=0x0000000000298A78 "J=G"
 *   insn=0x0000000000298A78 string=0x0000000000298A7C ")!"
 *   insn=0x0000000000298A80 string=0x0000000000298A84 "*"
 *   insn=0x0000000000298A80 string=0x0000000000298AF0 "*"
 *   insn=0x0000000000298A84 string=0x0000000000298A88 "K"
 *   insn=0x0000000000298A88 string=0x0000000000298A8C "+"
 *   insn=0x0000000000298A94 string=0x0000000000298AD8 "_"
 *   insn=0x0000000000298A9C string=0x0000000000298AA0 "j""
 *   insn=0x0000000000298AA0 string=0x0000000000298AA4 "J"
 *   insn=0x0000000000298AA8 string=0x0000000000298AAC "(a"
 *   insn=0x0000000000298AB4 string=0x0000000000298AB8 "j""
 *   insn=0x0000000000298AB8 string=0x0000000000298ABC "J=G"
 *   insn=0x0000000000298ABC string=0x0000000000298AC0 ")!"
 *   insn=0x0000000000298AC0 string=0x0000000000298AC4 "j"
 *   insn=0x0000000000298AC4 string=0x0000000000298AC8 "*"
 *   insn=0x0000000000298AC8 string=0x0000000000298ACC "K"
 *   insn=0x0000000000298ACC string=0x0000000000298AD0 "+"
 *   insn=0x0000000000298AE4 string=0x0000000000298AE8 "/F"
 *   insn=0x0000000000298AE8 string=0x0000000000298AEC ""
 *   insn=0x0000000000298AF0 string=0x0000000000298AF4 "K"
 *   insn=0x0000000000298AF4 string=0x0000000000298AF8 "+"
 *   insn=0x0000000000298AF8 string=0x0000000000298AFC "_"
 *   insn=0x0000000000298AFC string=0x0000000000298B00 ""
 *   insn=0x0000000000298B18 string=0x0000000000298B1C "@"
 *   insn=0x0000000000298B18 string=0x0000000000298B38 "`r@"
 *   insn=0x0000000000298B1C string=0x0000000000298B20 ""
 *   insn=0x0000000000298B20 string=0x0000000000298B24 ""
 *   insn=0x0000000000298B28 string=0x0000000000298B2C ""
 *   insn=0x0000000000298B2C string=0x0000000000298B30 ""
 *   insn=0x0000000000298B3C string=0x0000000000298B40 "hj"
 *   insn=0x0000000000298B44 string=0x0000000000298B48 "@"
 *   insn=0x0000000000298B48 string=0x0000000000298B4C ""
 *   insn=0x0000000000298B4C string=0x0000000000298B50 ""
 *   insn=0x0000000000298B54 string=0x0000000000298B58 ""
 *   insn=0x0000000000298B58 string=0x0000000000298B5C ""
 *   insn=0x0000000000298B64 string=0x0000000000298B68 "f"
 *   insn=0x0000000000298B6C string=0x0000000000298B70 "U"
 *   insn=0x0000000000298B88 string=0x0000000000298B8C "%m"
 *   insn=0x0000000000298B8C string=0x0000000000298B90 "h"
 *   insn=0x0000000000298B8C string=0x00000000001F4020 "P'"
 *   insn=0x0000000000298B94 string=0x0000000000298B98 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::intrusive_ptr<Caver::AttackComponent>>::_M_insert_aux(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v4; // x8
  __int64 v7; // x9
  _DWORD *v8; // x20
  char *v9; // x8
  __int64 v10; // x21
  char *v11; // x22
  _DWORD *v12; // x9
  _DWORD *v13; // t1
  _DWORD *v14; // x0
  int v15; // w8
  _DWORD *v16; // x0
  int v17; // w8
  int v18; // w8
  bool v19; // zf
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x10
  bool v23; // cf
  unsigned __int64 v24; // x8
  int v25; // w10
  unsigned __int64 v26; // x23
  char *v27; // x22
  __int64 v28; // x0
  _DWORD *v29; // x8
  __int64 v30; // x21
  char *v31; // x22
  __int64 v32; // x9
  __int64 v33; // x11
  unsigned __int64 v34; // x8
  char *v35; // x25
  unsigned __int64 v36; // x24
  _QWORD *v37; // x9
  char *v38; // x10
  __int64 v39; // x11
  _DWORD *v40; // x0
  int v41; // w8

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    v20 = v4 - *a1;
    v19 = v20 == 0;
    v21 = v20 >> 3;
    if ( v19 )
      v22 = 1;
    else
      v22 = v21;
    v23 = __CFADD__(v22, v21);
    v24 = v22 + v21;
    v25 = v23;
    if ( v25 | (v24 >> 61 != 0) )
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v26 = v24;
    if ( v26 >> 61 )
      sub_565294();
    v27 = (char *)(a2 - *a1);
    v28 = operator new(8 * v26);
    v29 = (_DWORD *)*a3;
    v30 = v28;
    *(_QWORD *)&v27[v28] = v29;
    if ( v29 )
      ++v29[2];
    v31 = *a1;
    if ( *a1 == a2 )
    {
      v34 = v28;
    }
    else
    {
      v32 = 0;
      do
      {
        v33 = *(_QWORD *)&v31[v32];
        *(_QWORD *)(v28 + v32) = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v32 += 8;
      }
      while ( a2 - v31 != v32 );
      v34 = v28 + ((a2 - 8 - v31) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    }
    v35 = a1[1];
    v36 = v34 + 8;
    if ( v35 != a2 )
    {
      v37 = (_QWORD *)(v34 + 8);
      v38 = a2;
      do
      {
        v39 = *(_QWORD *)v38;
        *v37 = *(_QWORD *)v38;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        v38 += 8;
        ++v37;
      }
      while ( v35 != v38 );
      v36 += ((v35 - 8 - a2) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    }
    if ( v31 != v35 )
    {
      do
      {
        v40 = *(_DWORD **)v31;
        if ( *(_QWORD *)v31 )
        {
          v41 = v40[2] - 1;
          v40[2] = v41;
          if ( !v41 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v40 + 8LL))(v40);
        }
        v31 += 8;
      }
      while ( v35 != v31 );
      v31 = *a1;
    }
    if ( v31 )
      operator delete(v31);
    *a1 = (char *)v30;
    a1[1] = (char *)v36;
    a1[2] = (char *)(v30 + 8 * v26);
  }
  else
  {
    v7 = *((_QWORD *)v4 - 1);
    *(_QWORD *)v4 = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    a1[1] = v4 + 8;
    v8 = (_DWORD *)*a3;
    if ( *a3 )
      ++v8[2];
    v9 = v4 - 8;
    if ( v9 - a2 >= 1 )
    {
      v10 = ((unsigned __int64)(v9 - a2) >> 3) + 1;
      v11 = v9;
      do
      {
        v13 = (_DWORD *)*((_QWORD *)v11 - 1);
        v11 -= 8;
        v12 = v13;
        if ( v13 )
          ++v12[2];
        v14 = *(_DWORD **)v9;
        *(_QWORD *)v9 = v12;
        if ( v14 )
        {
          v15 = v14[2] - 1;
          v14[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
        }
        --v10;
        v9 = v11;
      }
      while ( v10 > 1 );
    }
    if ( v8 )
      ++v8[2];
    v16 = *(_DWORD **)a2;
    *(_QWORD *)a2 = v8;
    if ( v16 )
    {
      v17 = v16[2] - 1;
      v16[2] = v17;
      if ( !v17 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    if ( v8 )
    {
      v18 = v8[2] - 1;
      v8[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
}

