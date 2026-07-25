/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000486E18
 * Mangled: _ZNKSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SoundEffectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE11equal_rangeERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::equal_range(std::string const&)
 *
 * Callers: 1
 *   0x0000000000201E40  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::equal_range(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 19
 *   insn=0x0000000000486E3C string=0x0000000000486E40 "5"
 *   insn=0x0000000000486E60 string=0x0000000000486E64 "|"
 *   insn=0x0000000000486E6C string=0x00000000001F5190 "P'"
 *   insn=0x0000000000486E70 string=0x0000000000486E74 "@"
 *   insn=0x0000000000486E9C string=0x0000000000486EA0 "b"
 *   insn=0x0000000000486EB4 string=0x0000000000486EB8 "J"
 *   insn=0x0000000000486ED0 string=0x0000000000486ED4 ""
 *   insn=0x0000000000486F04 string=0x0000000000486F08 ";"
 *   insn=0x0000000000486F14 string=0x0000000000486F18 "`"
 *   insn=0x0000000000486F1C string=0x0000000000486F20 ""
 *   insn=0x0000000000486F30 string=0x0000000000486F34 "@"
 *   insn=0x0000000000486F34 string=0x0000000000486F38 "hc"
 *   insn=0x0000000000486F34 string=0x0000000000486F5C "hC"
 *   insn=0x0000000000486F38 string=0x0000000000486F3C ""
 *   insn=0x0000000000486F40 string=0x0000000000486F44 "\n"
 *   insn=0x0000000000486F60 string=0x0000000000486F64 ""
 *   insn=0x0000000000486F80 string=0x0000000000486F84 "("
 *   insn=0x0000000000486F94 string=0x0000000000486F98 "`"
 *   insn=0x0000000000486FB8 string=0x0000000000486FBC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::equal_range(
        __int64 a1,
        const void **a2)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x19
  const void *v4; // x21
  size_t v5; // x23
  _QWORD *v6; // x22
  size_t v7; // x27
  __int64 v8; // x28
  size_t v9; // x2
  int v10; // w0
  int v11; // w0
  __int64 v12; // x28
  size_t v13; // x2
  int v14; // w0
  _QWORD *v15; // x27
  _QWORD *i; // x22
  _QWORD *v18; // x0
  unsigned __int64 v19; // x8
  __int64 v20; // x28
  size_t v21; // x2
  int v22; // w0
  int v23; // w0
  _QWORD *v24; // x1
  unsigned __int64 v25; // x8
  __int64 v26; // x27
  size_t v27; // x2
  int v28; // w0
  int v29; // w0

  v2 = *(_QWORD **)(a1 + 16);
  v3 = (_QWORD *)(a1 + 8);
  if ( !v2 )
    return v3;
  v4 = *a2;
  v5 = *((_QWORD *)*a2 - 3);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = (_QWORD *)v2[4];
      v7 = *(v6 - 3);
      v8 = v7 - v5;
      v9 = v7 <= v5 ? *(v6 - 3) : v5;
      v10 = memcmp(v6, v4, v9);
      if ( !v10 )
        break;
      if ( (v10 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v2 = (_QWORD *)v2[3];
      if ( !v2 )
        return v3;
    }
    if ( v8 <= 0x7FFFFFFF )
    {
      v11 = v8 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v7 - v5;
      if ( v11 < 0 )
        goto LABEL_8;
    }
LABEL_15:
    v12 = v5 - v7;
    if ( v5 <= v7 )
      v13 = v5;
    else
      v13 = v7;
    v14 = memcmp(v4, v6, v13);
    if ( v14 )
      goto LABEL_23;
    if ( v12 >= 0x80000000LL )
      break;
    if ( v12 <= (__int64)0xFFFFFFFF80000000LL )
      v14 = 0x80000000;
    else
      v14 = v5 - v7;
LABEL_23:
    v15 = (_QWORD *)v2[2];
    if ( (v14 & 0x80000000) == 0 )
      goto LABEL_28;
    v3 = v2;
    v2 = (_QWORD *)v2[2];
    if ( !v15 )
      return v3;
  }
  v15 = (_QWORD *)v2[2];
LABEL_28:
  for ( i = (_QWORD *)v2[3]; v15; v15 = (_QWORD *)v15[2] )
  {
LABEL_29:
    v18 = (_QWORD *)v15[4];
    v19 = *(v18 - 3);
    v20 = v19 - v5;
    if ( v19 <= v5 )
      v21 = *(v18 - 3);
    else
      v21 = v5;
    v22 = memcmp(v18, v4, v21);
    if ( v22 )
    {
      if ( v22 < 0 )
        goto LABEL_34;
    }
    else if ( v20 <= 0x7FFFFFFF )
    {
      v23 = v20 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v20;
      if ( v23 < 0 )
      {
LABEL_34:
        v15 = (_QWORD *)v15[3];
        if ( !v15 )
          break;
        goto LABEL_29;
      }
    }
    v2 = v15;
  }
  while ( i )
  {
    while ( 2 )
    {
      v24 = (_QWORD *)i[4];
      v25 = *(v24 - 3);
      v26 = v5 - v25;
      if ( v5 <= v25 )
        v27 = v5;
      else
        v27 = *(v24 - 3);
      v28 = memcmp(v4, v24, v27);
      if ( v28 )
      {
        if ( v28 < 0 )
          goto LABEL_48;
      }
      else if ( v26 <= 0x7FFFFFFF )
      {
        v29 = v26 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v26;
        if ( v29 < 0 )
        {
LABEL_48:
          i = (_QWORD *)i[2];
          if ( !i )
            return v2;
          continue;
        }
      }
      break;
    }
    i = (_QWORD *)i[3];
  }
  return v2;
}

