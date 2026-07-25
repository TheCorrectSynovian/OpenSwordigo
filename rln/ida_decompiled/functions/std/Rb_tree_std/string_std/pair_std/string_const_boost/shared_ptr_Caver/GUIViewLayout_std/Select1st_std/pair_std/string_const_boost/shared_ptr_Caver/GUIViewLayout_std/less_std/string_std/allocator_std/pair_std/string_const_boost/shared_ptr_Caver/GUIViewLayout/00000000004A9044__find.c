/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9044
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE4findERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::find(std::string const&)
 *
 * Callers: 1
 *   0x00000000002031A0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::find(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 16
 *   insn=0x00000000004A9084 string=0x00000000004A9088 "@"
 *   insn=0x00000000004A908C string=0x00000000004A9090 ""
 *   insn=0x00000000004A9098 string=0x00000000004A909C "=0"
 *   insn=0x00000000004A909C string=0x00000000001F5190 "P'"
 *   insn=0x00000000004A90A0 string=0x00000000004A90A4 "@"
 *   insn=0x00000000004A90A4 string=0x00000000004A90A8 "Hc"
 *   insn=0x00000000004A90A4 string=0x00000000004A90CC "HC"
 *   insn=0x00000000004A90B0 string=0x00000000004A90B4 "\n"
 *   insn=0x00000000004A90F8 string=0x00000000004A90FC ""
 *   insn=0x00000000004A90FC string=0x00000000004A9100 ")"
 *   insn=0x00000000004A9104 string=0x00000000004A9108 """
 *   insn=0x00000000004A9108 string=0x00000000004A910C "!0"
 *   insn=0x00000000004A910C string=0x00000000004A9110 "`"
 *   insn=0x00000000004A9110 string=0x00000000004A9114 "@"
 *   insn=0x00000000004A9114 string=0x00000000004A9118 "\n"
 *   insn=0x00000000004A9134 string=0x00000000004A9138 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::find(
        __int64 a1,
        const void **a2)
{
  _QWORD *v2; // x26
  _QWORD *v4; // x19
  const void *v5; // x21
  unsigned __int64 v6; // x23
  _QWORD *v7; // x22
  _QWORD *v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x28
  size_t v11; // x2
  int v12; // w0
  int v13; // w0
  const void *v14; // x0
  _QWORD *v15; // x1
  size_t v16; // x8
  unsigned __int64 v17; // x9
  __int64 v18; // x20
  size_t v19; // x2
  int v20; // w0
  int v21; // w0

  v2 = *(_QWORD **)(a1 + 16);
  v4 = (_QWORD *)(a1 + 8);
  if ( !v2 )
    return v4;
  v5 = *a2;
  v6 = *((_QWORD *)*a2 - 3);
  v7 = (_QWORD *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      v8 = (_QWORD *)v2[4];
      v9 = *(v8 - 3);
      v10 = v9 - v6;
      v11 = v9 <= v6 ? *(v8 - 3) : v6;
      v12 = memcmp(v8, v5, v11);
      if ( !v12 )
        break;
      if ( (v12 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v2 = (_QWORD *)v2[3];
      if ( !v2 )
        goto LABEL_16;
    }
    if ( v10 <= 0x7FFFFFFF )
    {
      v13 = v10 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v10;
      if ( v13 < 0 )
        goto LABEL_8;
    }
LABEL_15:
    v7 = v2;
    v2 = (_QWORD *)v2[2];
  }
  while ( v2 );
LABEL_16:
  if ( v7 == v4 )
    return v4;
  v14 = *a2;
  v15 = (_QWORD *)v7[4];
  v16 = *((_QWORD *)*a2 - 3);
  v17 = *(v15 - 3);
  v18 = v16 - v17;
  if ( v16 <= v17 )
    v19 = v16;
  else
    v19 = *(v15 - 3);
  v20 = memcmp(v14, v15, v19);
  if ( v20 )
  {
    if ( v20 < 0 )
      return v4;
    return v7;
  }
  else
  {
    if ( v18 > 0x7FFFFFFF )
      return v7;
    v21 = v18 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v18;
    if ( (v21 & 0x80000000) == 0 )
      return v7;
  }
  return v4;
}

