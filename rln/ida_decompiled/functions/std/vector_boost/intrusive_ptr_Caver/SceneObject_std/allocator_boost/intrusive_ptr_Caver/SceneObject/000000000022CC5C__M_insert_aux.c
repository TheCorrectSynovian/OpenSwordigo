/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022CC5C
 * Mangled: _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver11SceneObjectEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x00000000001F7F30  std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202B50  Caver::OverlayComponent::OverlayComponent(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 97
 *   insn=0x000000000022CC88 string=0x000000000022CC8C "\t"
 *   insn=0x000000000022CC8C string=0x000000000022CC90 "\t"
 *   insn=0x000000000022CC94 string=0x000000000022CC98 "*\t@"
 *   insn=0x000000000022CC94 string=0x000000000022CCA4 "\t!"
 *   insn=0x000000000022CC98 string=0x000000000022CC9C "J"
 *   insn=0x000000000022CC9C string=0x000000000022CCA0 "*\t"
 *   insn=0x000000000022CCB0 string=0x000000000022CCC0 "!"
 *   insn=0x000000000022CCB4 string=0x000000000022CCB8 ")"
 *   insn=0x000000000022CCC0 string=0x000000000022CCC4 "\t"
 *   insn=0x000000000022CCC4 string=0x000000000022CCC8 "?"
 *   insn=0x000000000022CCCC string=0x000000000022CCD0 ")"
 *   insn=0x000000000022CCD0 string=0x000000000022CCD4 "5"
 *   insn=0x000000000022CCE0 string=0x000000000022CCE4 "*\t@"
 *   insn=0x000000000022CCE4 string=0x000000000022CCE8 "J"
 *   insn=0x000000000022CCE8 string=0x000000000022CCEC "*\t"
 *   insn=0x000000000022CCF0 string=0x000000000022CCF4 "\t"
 *   insn=0x000000000022CCF8 string=0x000000000022CCFC "@"
 *   insn=0x000000000022CCFC string=0x000000000022CD00 ""
 *   insn=0x000000000022CD00 string=0x000000000022CD04 ""
 *   insn=0x000000000022CD08 string=0x000000000022CD0C ""
 *   insn=0x000000000022CD0C string=0x000000000022CD10 ""
 *   insn=0x000000000022CD28 string=0x000000000022CD38 "`"
 *   insn=0x000000000022CD2C string=0x000000000022CD30 ""
 *   insn=0x000000000022CD38 string=0x000000000022CD3C "t"
 *   insn=0x000000000022CD40 string=0x000000000022CD44 "@"
 *   insn=0x000000000022CD44 string=0x000000000022CD48 ""
 *   insn=0x000000000022CD48 string=0x000000000022CD4C ""
 *   insn=0x000000000022CD50 string=0x000000000022CD54 ""
 *   insn=0x000000000022CD54 string=0x000000000022CD58 ""
 *   insn=0x000000000022CD64 string=0x000000000022CD68 ""
 *   insn=0x000000000022CD6C string=0x000000000022CD70 "A"
 *   insn=0x000000000022CD90 string=0x000000000022CD94 " "
 *   insn=0x000000000022CD98 string=0x000000000022CD9C ""
 *   insn=0x000000000022CD9C string=0x000000000022CDA0 ""
 *   insn=0x000000000022CDA0 string=0x000000000022CDA4 "\n"
 *   insn=0x000000000022CDA4 string=0x000000000022CDA8 "H"
 *   insn=0x000000000022CDA8 string=0x000000000022CDAC ""
 *   insn=0x000000000022CDB8 string=0x000000000022CDBC "J"
 *   insn=0x000000000022CDBC string=0x000000000022CDC0 "_"
 *   insn=0x000000000022CDC4 string=0x000000000022CDC8 "W"
 *   insn=0x000000000022CDCC string=0x000000000022CDD0 "\n"
 *   insn=0x000000000022CDD4 string=0x000000000022CDD8 "v"
 *   insn=0x000000000022CDDC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022CDEC string=0x000000000022CDF0 "\t\t@"
 *   insn=0x000000000022CDF0 string=0x000000000022CDF4 ")"
 *   insn=0x000000000022CDF4 string=0x000000000022CDF8 "\t\t"
 *   insn=0x000000000022CE00 string=0x000000000022CE04 "@"
 *   insn=0x000000000022CE08 string=0x000000000022CE0C "h""
 *   insn=0x000000000022CE0C string=0x000000000022CE10 "j"
 *   insn=0x000000000022CE1C string=0x000000000022CE20 "l\t@"
 *   insn=0x000000000022CE1C string=0x000000000022CE2C ")!"
 *   insn=0x000000000022CE24 string=0x000000000022CE28 "l\t"
 *   insn=0x000000000022CE2C string=0x000000000022CE30 "_"
 *   insn=0x000000000022CE34 string=0x000000000022CE38 ""
 *   insn=0x000000000022CE38 string=0x000000000022CE3C ""
 *   insn=0x000000000022CE40 string=0x000000000022CE44 "!"
 *   insn=0x000000000022CE54 string=0x000000000022CE58 "?"
 *   insn=0x000000000022CE58 string=0x000000000022CE5C "@"
 *   insn=0x000000000022CE5C string=0x000000000022CE60 "(#"
 *   insn=0x000000000022CE68 string=0x000000000022CE6C "K"
 *   insn=0x000000000022CE6C string=0x000000000022CE70 "+"
 *   insn=0x000000000022CE74 string=0x000000000022CE78 "l\t@"
 *   insn=0x000000000022CE74 string=0x000000000022CE84 "J!"
 *   insn=0x000000000022CE7C string=0x000000000022CE80 "l\t"
 *   insn=0x000000000022CE84 string=0x000000000022CE88 "?"
 *   insn=0x000000000022CE88 string=0x000000000022CE8C ")!"
 *   insn=0x000000000022CE90 string=0x000000000022CE94 ""
 *   insn=0x000000000022CE94 string=0x000000000022CE98 ""
 *   insn=0x000000000022CE98 string=0x000000000022CE9C ""
 *   insn=0x000000000022CEA8 string=0x000000000022CEE0 "v"
 *   insn=0x000000000022CEB0 string=0x000000000022CEB4 "@"
 *   insn=0x000000000022CEB4 string=0x000000000022CEB8 ""
 *   insn=0x000000000022CEB8 string=0x000000000022CEBC ""
 *   insn=0x000000000022CEC0 string=0x000000000022CEC4 ""
 *   insn=0x000000000022CEC4 string=0x000000000022CEC8 ""
 *   insn=0x000000000022CED0 string=0x000000000022CED4 "?"
 *   insn=0x000000000022CEE8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022CF18 string=0x000000000022CF1C ""
 *   insn=0x000000000022CF20 string=0x000000000022CF24 "4"
 *   insn=0x000000000022CF28 string=0x000000000022CF2C ""
 *   insn=0x000000000022CF38 string=0x000000000022CF3C ""
 *   insn=0x000000000022CF48 string=0x000000000022CF4C "^R"
 *   insn=0x000000000022CF68 string=0x000000000022CF6C ""
 *   insn=0x000000000022CF74 string=0x000000000022CF78 "i"
 *   insn=0x000000000022CF78 string=0x000000000022CF7C "i"
 *   insn=0x000000000022CF7C string=0x000000000022CF80 "\t"
 *   insn=0x000000000022CF80 string=0x000000000022CF84 "j"
 *   insn=0x000000000022CF84 string=0x000000000022CF88 "\nA"
 *   insn=0x000000000022CF88 string=0x000000000022CF8C "i"
 *   insn=0x000000000022CF8C string=0x000000000022CF90 "\t"
 *   insn=0x000000000022CF90 string=0x000000000022CF94 "j"
 *   insn=0x000000000022CF94 string=0x000000000022CF98 " "
 *   insn=0x000000000022CF9C string=0x000000000022CFA0 ")"
 *   insn=0x000000000022CFA0 string=0x000000000022CFA4 ""
 *   insn=0x000000000022CFAC string=0x000000000022CFB0 ")a"
 *   insn=0x000000000022CFB4 string=0x000000000022CFB8 "i~"
 *   insn=0x000000000022CFBC string=0x000000000022CFC0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::intrusive_ptr<Caver::SceneObject>>::_M_insert_aux(char **a1, char *a2, _QWORD *a3)
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

