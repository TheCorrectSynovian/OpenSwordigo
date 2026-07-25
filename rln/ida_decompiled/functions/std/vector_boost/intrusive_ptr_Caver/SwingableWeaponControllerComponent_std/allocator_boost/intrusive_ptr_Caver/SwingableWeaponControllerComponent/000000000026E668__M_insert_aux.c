/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E668
 * Mangled: _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver34SwingableWeaponControllerComponentEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *
 * Callers: 1
 *   0x00000000002001E0  std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>*,std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>>>,boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent> const&)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 85
 *   insn=0x000000000026E694 string=0x000000000026E698 "\t"
 *   insn=0x000000000026E698 string=0x000000000026E69C "\t"
 *   insn=0x000000000026E6A0 string=0x000000000026E6A4 "*\t@"
 *   insn=0x000000000026E6A0 string=0x000000000026E6B0 "\t!"
 *   insn=0x000000000026E6A4 string=0x000000000026E6A8 "J"
 *   insn=0x000000000026E6A8 string=0x000000000026E6AC "*\t"
 *   insn=0x000000000026E6BC string=0x000000000026E6CC "!"
 *   insn=0x000000000026E6C0 string=0x000000000026E6C4 ")"
 *   insn=0x000000000026E6CC string=0x000000000026E6D0 "\t"
 *   insn=0x000000000026E6D0 string=0x000000000026E6D4 "?"
 *   insn=0x000000000026E6D8 string=0x000000000026E6DC ")"
 *   insn=0x000000000026E6DC string=0x000000000026E6E0 "5"
 *   insn=0x000000000026E6EC string=0x000000000026E6F0 "*\t@"
 *   insn=0x000000000026E6F0 string=0x000000000026E6F4 "J"
 *   insn=0x000000000026E6F4 string=0x000000000026E6F8 "*\t"
 *   insn=0x000000000026E6FC string=0x000000000026E700 "\t"
 *   insn=0x000000000026E704 string=0x000000000026E708 "@"
 *   insn=0x000000000026E708 string=0x000000000026E70C ""
 *   insn=0x000000000026E70C string=0x000000000026E710 ""
 *   insn=0x000000000026E714 string=0x000000000026E718 ""
 *   insn=0x000000000026E718 string=0x000000000026E71C ""
 *   insn=0x000000000026E734 string=0x000000000026E744 "`"
 *   insn=0x000000000026E738 string=0x000000000026E73C ""
 *   insn=0x000000000026E744 string=0x000000000026E748 "t"
 *   insn=0x000000000026E74C string=0x000000000026E750 "@"
 *   insn=0x000000000026E750 string=0x000000000026E754 ""
 *   insn=0x000000000026E754 string=0x000000000026E758 ""
 *   insn=0x000000000026E75C string=0x000000000026E760 ""
 *   insn=0x000000000026E760 string=0x000000000026E764 ""
 *   insn=0x000000000026E770 string=0x000000000026E774 ""
 *   insn=0x000000000026E778 string=0x000000000026E77C "A"
 *   insn=0x000000000026E79C string=0x000000000026E7A0 " "
 *   insn=0x000000000026E7A4 string=0x000000000026E7A8 ""
 *   insn=0x000000000026E7A8 string=0x000000000026E7AC ""
 *   insn=0x000000000026E7AC string=0x000000000026E7B0 "\n"
 *   insn=0x000000000026E7B0 string=0x000000000026E7B4 "H"
 *   insn=0x000000000026E7B4 string=0x000000000026E7B8 ""
 *   insn=0x000000000026E7C4 string=0x000000000026E7C8 "J"
 *   insn=0x000000000026E7C8 string=0x000000000026E7CC "_"
 *   insn=0x000000000026E7D0 string=0x000000000026E7D4 "W"
 *   insn=0x000000000026E7D8 string=0x000000000026E7DC "\n"
 *   insn=0x000000000026E7DC string=0x000000000026E91C "^"
 *   insn=0x000000000026E7E0 string=0x000000000026E7E4 "v"
 *   insn=0x000000000026E7E4 string=0x000000000026E7E8 "~"
 *   insn=0x000000000026E7E8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000026E7F8 string=0x000000000026E7FC "\t\t@"
 *   insn=0x000000000026E7FC string=0x000000000026E800 ")"
 *   insn=0x000000000026E800 string=0x000000000026E804 "\t\t"
 *   insn=0x000000000026E80C string=0x000000000026E810 "@"
 *   insn=0x000000000026E814 string=0x000000000026E818 "h""
 *   insn=0x000000000026E818 string=0x000000000026E81C "j"
 *   insn=0x000000000026E828 string=0x000000000026E82C "l\t@"
 *   insn=0x000000000026E828 string=0x000000000026E838 ")!"
 *   insn=0x000000000026E830 string=0x000000000026E834 "l\t"
 *   insn=0x000000000026E838 string=0x000000000026E83C "_"
 *   insn=0x000000000026E840 string=0x000000000026E844 ""
 *   insn=0x000000000026E844 string=0x000000000026E848 ""
 *   insn=0x000000000026E84C string=0x000000000026E850 "!"
 *   insn=0x000000000026E860 string=0x000000000026E864 "?"
 *   insn=0x000000000026E864 string=0x000000000026E868 "@"
 *   insn=0x000000000026E868 string=0x000000000026E86C "(#"
 *   insn=0x000000000026E874 string=0x000000000026E878 "K"
 *   insn=0x000000000026E878 string=0x000000000026E87C "+"
 *   insn=0x000000000026E880 string=0x000000000026E884 "l\t@"
 *   insn=0x000000000026E880 string=0x000000000026E890 "J!"
 *   insn=0x000000000026E888 string=0x000000000026E88C "l\t"
 *   insn=0x000000000026E890 string=0x000000000026E894 "?"
 *   insn=0x000000000026E894 string=0x000000000026E898 ")!"
 *   insn=0x000000000026E89C string=0x000000000026E8A0 ""
 *   insn=0x000000000026E8A0 string=0x000000000026E8A4 ""
 *   insn=0x000000000026E8A4 string=0x000000000026E8A8 ""
 *   insn=0x000000000026E8B4 string=0x000000000026E8EC "v"
 *   insn=0x000000000026E8BC string=0x000000000026E8C0 "@"
 *   insn=0x000000000026E8C0 string=0x000000000026E8C4 ""
 *   insn=0x000000000026E8C4 string=0x000000000026E8C8 ""
 *   insn=0x000000000026E8CC string=0x000000000026E8D0 ""
 *   insn=0x000000000026E8D0 string=0x000000000026E8D4 ""
 *   insn=0x000000000026E8DC string=0x000000000026E8E0 "?"
 *   insn=0x000000000026E8F0 string=0x000000000026E8F4 "o""
 *   insn=0x000000000026E8F4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000026E924 string=0x000000000026E928 ""
 *   insn=0x000000000026E92C string=0x000000000026E930 "4"
 *   insn=0x000000000026E934 string=0x000000000026E938 ""
 *   insn=0x000000000026E944 string=0x000000000026E948 ""
 *   insn=0x000000000026E958 string=0x000000000026E95C "|~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>::_M_insert_aux(
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

