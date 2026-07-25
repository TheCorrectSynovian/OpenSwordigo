/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045FA58
 * Mangled: _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver14ObjectTemplateEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::ObjectTemplate>*,std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>>,boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Callers: 1
 *   0x00000000001FF080  std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::ObjectTemplate>*,std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>>,boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 181
 *   insn=0x000000000045FA84 string=0x000000000045FA88 "\t"
 *   insn=0x000000000045FA88 string=0x000000000045FA8C "\t"
 *   insn=0x000000000045FA90 string=0x000000000045FA94 "*\t@"
 *   insn=0x000000000045FA90 string=0x000000000045FAA0 "\t!"
 *   insn=0x000000000045FA94 string=0x000000000045FA98 "J"
 *   insn=0x000000000045FA98 string=0x000000000045FA9C "*\t"
 *   insn=0x000000000045FAAC string=0x000000000045FABC "!"
 *   insn=0x000000000045FAB0 string=0x000000000045FAB4 ")"
 *   insn=0x000000000045FABC string=0x000000000045FAC0 "\t"
 *   insn=0x000000000045FAC0 string=0x000000000045FAC4 "?"
 *   insn=0x000000000045FAC8 string=0x000000000045FACC ")"
 *   insn=0x000000000045FACC string=0x000000000045FAD0 "5"
 *   insn=0x000000000045FADC string=0x000000000045FAE0 "*\t@"
 *   insn=0x000000000045FAE0 string=0x000000000045FAE4 "J"
 *   insn=0x000000000045FAE4 string=0x000000000045FAE8 "*\t"
 *   insn=0x000000000045FAEC string=0x000000000045FAF0 "\t"
 *   insn=0x000000000045FAF4 string=0x000000000045FAF8 "@"
 *   insn=0x000000000045FAF8 string=0x000000000045FAFC ""
 *   insn=0x000000000045FAFC string=0x000000000045FB00 ""
 *   insn=0x000000000045FB04 string=0x000000000045FB08 ""
 *   insn=0x000000000045FB08 string=0x000000000045FB0C ""
 *   insn=0x000000000045FB24 string=0x000000000045FB34 "`"
 *   insn=0x000000000045FB28 string=0x000000000045FB2C ""
 *   insn=0x000000000045FB34 string=0x000000000045FB38 "t"
 *   insn=0x000000000045FB3C string=0x000000000045FB40 "@"
 *   insn=0x000000000045FB40 string=0x000000000045FB44 ""
 *   insn=0x000000000045FB44 string=0x000000000045FB48 ""
 *   insn=0x000000000045FB4C string=0x000000000045FB50 ""
 *   insn=0x000000000045FB50 string=0x000000000045FB54 ""
 *   insn=0x000000000045FB60 string=0x000000000045FB64 ""
 *   insn=0x000000000045FB68 string=0x000000000045FB6C "A"
 *   insn=0x000000000045FB8C string=0x000000000045FB90 " "
 *   insn=0x000000000045FB94 string=0x000000000045FB98 ""
 *   insn=0x000000000045FB98 string=0x000000000045FB9C ""
 *   insn=0x000000000045FB9C string=0x000000000045FBA0 "\n"
 *   insn=0x000000000045FBA0 string=0x000000000045FBA4 "H"
 *   insn=0x000000000045FBA4 string=0x000000000045FBA8 ""
 *   insn=0x000000000045FBB4 string=0x000000000045FBB8 "J"
 *   insn=0x000000000045FBB8 string=0x000000000045FBBC "_"
 *   insn=0x000000000045FBC0 string=0x000000000045FBC4 "W"
 *   insn=0x000000000045FBC8 string=0x000000000045FBCC "\n"
 *   insn=0x000000000045FBCC string=0x000000000045FD0C "b"
 *   insn=0x000000000045FBD0 string=0x000000000045FBD4 "v"
 *   insn=0x000000000045FBD8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045FBE8 string=0x000000000045FBEC "\t\t@"
 *   insn=0x000000000045FBEC string=0x000000000045FBF0 ")"
 *   insn=0x000000000045FBF0 string=0x000000000045FBF4 "\t\t"
 *   insn=0x000000000045FBFC string=0x000000000045FC00 "@"
 *   insn=0x000000000045FC04 string=0x000000000045FC08 "h""
 *   insn=0x000000000045FC08 string=0x000000000045FC0C "j"
 *   insn=0x000000000045FC18 string=0x000000000045FC1C "l\t@"
 *   insn=0x000000000045FC18 string=0x000000000045FC28 ")!"
 *   insn=0x000000000045FC20 string=0x000000000045FC24 "l\t"
 *   insn=0x000000000045FC28 string=0x000000000045FC2C "_"
 *   insn=0x000000000045FC30 string=0x000000000045FC34 ""
 *   insn=0x000000000045FC34 string=0x000000000045FC38 ""
 *   insn=0x000000000045FC3C string=0x000000000045FC40 "!"
 *   insn=0x000000000045FC50 string=0x000000000045FC54 "?"
 *   insn=0x000000000045FC54 string=0x000000000045FC58 "@"
 *   insn=0x000000000045FC58 string=0x000000000045FC5C "(#"
 *   insn=0x000000000045FC64 string=0x000000000045FC68 "K"
 *   insn=0x000000000045FC68 string=0x000000000045FC6C "+"
 *   insn=0x000000000045FC70 string=0x000000000045FC74 "l\t@"
 *   insn=0x000000000045FC70 string=0x000000000045FC80 "J!"
 *   insn=0x000000000045FC78 string=0x000000000045FC7C "l\t"
 *   insn=0x000000000045FC80 string=0x000000000045FC84 "?"
 *   insn=0x000000000045FC84 string=0x000000000045FC88 ")!"
 *   insn=0x000000000045FC8C string=0x000000000045FC90 ""
 *   insn=0x000000000045FC90 string=0x000000000045FC94 ""
 *   insn=0x000000000045FC94 string=0x000000000045FC98 ""
 *   insn=0x000000000045FCA4 string=0x000000000045FCDC "v"
 *   insn=0x000000000045FCAC string=0x000000000045FCB0 "@"
 *   insn=0x000000000045FCB0 string=0x000000000045FCB4 ""
 *   insn=0x000000000045FCB4 string=0x000000000045FCB8 ""
 *   insn=0x000000000045FCBC string=0x000000000045FCC0 ""
 *   insn=0x000000000045FCC0 string=0x000000000045FCC4 ""
 *   insn=0x000000000045FCCC string=0x000000000045FCD0 "?"
 *   insn=0x000000000045FCE0 string=0x000000000045FCE4 "s]"
 *   insn=0x000000000045FCE4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045FD14 string=0x000000000045FD18 ""
 *   insn=0x000000000045FD1C string=0x000000000045FD20 "4"
 *   insn=0x000000000045FD24 string=0x000000000045FD28 ""
 *   insn=0x000000000045FD34 string=0x000000000045FD38 ""
 *   insn=0x000000000045FD7C string=0x000000000045FD80 "\t"
 *   insn=0x000000000045FD80 string=0x000000000045FD84 "\t"
 *   insn=0x000000000045FD88 string=0x000000000045FD8C "*\t@"
 *   insn=0x000000000045FD88 string=0x000000000045FD98 "\t!"
 *   insn=0x000000000045FD8C string=0x000000000045FD90 "J"
 *   insn=0x000000000045FD90 string=0x000000000045FD94 "*\t"
 *   insn=0x000000000045FDA4 string=0x000000000045FDB4 "!"
 *   insn=0x000000000045FDA8 string=0x000000000045FDAC ")"
 *   insn=0x000000000045FDB4 string=0x000000000045FDB8 "\t"
 *   insn=0x000000000045FDB8 string=0x000000000045FDBC "?"
 *   insn=0x000000000045FDC0 string=0x000000000045FDC4 ")"
 *   insn=0x000000000045FDC4 string=0x000000000045FDC8 "5"
 *   insn=0x000000000045FDD4 string=0x000000000045FDD8 "*\t@"
 *   insn=0x000000000045FDD8 string=0x000000000045FDDC "J"
 *   insn=0x000000000045FDDC string=0x000000000045FDE0 "*\t"
 *   insn=0x000000000045FDE4 string=0x000000000045FDE8 "\t"
 *   insn=0x000000000045FDEC string=0x000000000045FDF0 "@"
 *   insn=0x000000000045FDF0 string=0x000000000045FDF4 ""
 *   insn=0x000000000045FDF4 string=0x000000000045FDF8 ""
 *   insn=0x000000000045FDFC string=0x000000000045FE00 ""
 *   insn=0x000000000045FE00 string=0x000000000045FE04 ""
 *   insn=0x000000000045FE1C string=0x000000000045FE2C "`"
 *   insn=0x000000000045FE20 string=0x000000000045FE24 ""
 *   insn=0x000000000045FE2C string=0x000000000045FE30 "t"
 *   insn=0x000000000045FE34 string=0x000000000045FE38 "@"
 *   insn=0x000000000045FE38 string=0x000000000045FE3C ""
 *   insn=0x000000000045FE3C string=0x000000000045FE40 ""
 *   insn=0x000000000045FE44 string=0x000000000045FE48 ""
 *   insn=0x000000000045FE48 string=0x000000000045FE4C ""
 *   insn=0x000000000045FE58 string=0x000000000045FE5C ""
 *   insn=0x000000000045FE60 string=0x000000000045FE64 "A"
 *   insn=0x000000000045FE84 string=0x000000000045FE88 " "
 *   insn=0x000000000045FE8C string=0x000000000045FE90 ""
 *   insn=0x000000000045FE90 string=0x000000000045FE94 ""
 *   insn=0x000000000045FE94 string=0x000000000045FE98 "\n"
 *   insn=0x000000000045FE98 string=0x000000000045FE9C "H"
 *   insn=0x000000000045FE9C string=0x000000000045FEA0 ""
 *   insn=0x000000000045FEAC string=0x000000000045FEB0 "J"
 *   insn=0x000000000045FEB0 string=0x000000000045FEB4 "_"
 *   insn=0x000000000045FEB8 string=0x000000000045FEBC "W"
 *   insn=0x000000000045FEC0 string=0x000000000045FEC4 "\n"
 *   insn=0x000000000045FEC8 string=0x000000000045FECC "v"
 *   insn=0x000000000045FEE0 string=0x000000000045FEE4 "\t\t@"
 *   insn=0x000000000045FEE4 string=0x000000000045FEE8 ")"
 *   insn=0x000000000045FEE8 string=0x000000000045FEEC "\t\t"
 *   insn=0x000000000045FEF4 string=0x000000000045FEF8 "@"
 *   insn=0x000000000045FEFC string=0x000000000045FF00 "h""
 *   insn=0x000000000045FF00 string=0x000000000045FF04 "j"
 *   insn=0x000000000045FF10 string=0x000000000045FF14 "l\t@"
 *   insn=0x000000000045FF10 string=0x000000000045FF20 ")!"
 *   insn=0x000000000045FF18 string=0x000000000045FF1C "l\t"
 *   insn=0x000000000045FF20 string=0x000000000045FF24 "_"
 *   insn=0x000000000045FF28 string=0x000000000045FF2C ""
 *   insn=0x000000000045FF2C string=0x000000000045FF30 ""
 *   insn=0x000000000045FF34 string=0x000000000045FF38 "!"
 *   insn=0x000000000045FF48 string=0x000000000045FF4C "?"
 *   insn=0x000000000045FF4C string=0x000000000045FF50 "@"
 *   insn=0x000000000045FF50 string=0x000000000045FF54 "(#"
 *   insn=0x000000000045FF5C string=0x000000000045FF60 "K"
 *   insn=0x000000000045FF60 string=0x000000000045FF64 "+"
 *   insn=0x000000000045FF68 string=0x000000000045FF6C "l\t@"
 *   insn=0x000000000045FF68 string=0x000000000045FF78 "J!"
 *   insn=0x000000000045FF70 string=0x000000000045FF74 "l\t"
 *   insn=0x000000000045FF78 string=0x000000000045FF7C "?"
 *   insn=0x000000000045FF7C string=0x000000000045FF80 ")!"
 *   insn=0x000000000045FF84 string=0x000000000045FF88 ""
 *   insn=0x000000000045FF88 string=0x000000000045FF8C ""
 *   insn=0x000000000045FF8C string=0x000000000045FF90 ""
 *   insn=0x000000000045FF9C string=0x000000000045FFD4 "v"
 *   insn=0x000000000045FFA4 string=0x000000000045FFA8 "@"
 *   insn=0x000000000045FFA8 string=0x000000000045FFAC ""
 *   insn=0x000000000045FFAC string=0x000000000045FFB0 ""
 *   insn=0x000000000045FFB4 string=0x000000000045FFB8 ""
 *   insn=0x000000000045FFB8 string=0x000000000045FFBC ""
 *   insn=0x000000000045FFC4 string=0x000000000045FFC8 "?"
 *   insn=0x000000000046000C string=0x0000000000460010 ""
 *   insn=0x0000000000460014 string=0x0000000000460018 "4"
 *   insn=0x000000000046001C string=0x0000000000460020 ""
 *   insn=0x000000000046002C string=0x0000000000460030 ""
 *   insn=0x000000000046003C string=0x0000000000460040 "!"
 *   insn=0x0000000000460064 string=0x0000000000460068 "vB"
 *   insn=0x0000000000460070 string=0x0000000000460074 "\t"
 *   insn=0x0000000000460074 string=0x0000000000460078 "?"
 *   insn=0x0000000000460078 string=0x000000000046007C "+"
 *   insn=0x000000000046007C string=0x0000000000460080 "("
 *   insn=0x000000000046008C string=0x0000000000460090 "\n"
 *   insn=0x0000000000460090 string=0x0000000000460094 "J"
 *   insn=0x0000000000460094 string=0x0000000000460098 "\n"
 *   insn=0x00000000004600A0 string=0x00000000004600A4 "5"
 *   insn=0x00000000004600A8 string=0x00000000004600AC ""
 *   insn=0x00000000004600BC string=0x00000000004600C0 "\t@"
 *   insn=0x00000000004600C8 string=0x00000000004600CC ""
 *   insn=0x00000000004600DC string=0x00000000004600E0 "@"
 *   insn=0x000000000046010C string=0x0000000000460110 "4"
 *   insn=0x0000000000460114 string=0x0000000000460118 ""
 *   insn=0x0000000000460128 string=0x000000000046012C "\t@"
 *   insn=0x0000000000460134 string=0x0000000000460138 ""
 *   insn=0x0000000000460148 string=0x000000000046014C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>>::_M_insert_aux(
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
      sub_565294(a1, a2, a3);
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

