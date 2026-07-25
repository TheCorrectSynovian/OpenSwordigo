/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045DB98
 * Mangled: _ZN5Caver13ObjectLibrary10AddTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::ObjectLibrary::AddTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x00000000001FE1A0  std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 20
 *   insn=0x000000000045DBCC string=0x000000000045DBD0 " "
 *   insn=0x000000000045DBD0 string=0x000000000045DC54 "h2@"
 *   insn=0x000000000045DBEC string=0x000000000045DBF0 "\"
 *   insn=0x000000000045DBF8 string=0x000000000045DBFC """
 *   insn=0x000000000045DBFC string=0x000000000045DC00 "d]"
 *   insn=0x000000000045DC00 string=0x00000000001F5190 "P'"
 *   insn=0x000000000045DC0C string=0x000000000045DC10 "l"
 *   insn=0x000000000045DC1C string=0x000000000045DC20 "`"
 *   insn=0x000000000045DC3C string=0x000000000045DC40 "T]"
 *   insn=0x000000000045DC40 string=0x000000000045DC44 "`"
 *   insn=0x000000000045DC64 string=0x000000000045DC68 ""
 *   insn=0x000000000045DC68 string=0x000000000045DC6C "\t\t@"
 *   insn=0x000000000045DC6C string=0x000000000045DC70 ")"
 *   insn=0x000000000045DC70 string=0x000000000045DC74 "\t\t"
 *   insn=0x000000000045DC80 string=0x000000000045DC84 "h2@"
 *   insn=0x000000000045DC98 string=0x000000000045DC9C "(\t@"
 *   insn=0x000000000045DC9C string=0x000000000045DCA0 ""
 *   insn=0x000000000045DCA0 string=0x000000000045DCA4 "(\t"
 *   insn=0x000000000045DCA8 string=0x000000000045DCAC "h."
 *   insn=0x000000000045DD00 string=0x000000000045DD04 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLibrary::AddTexture(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // x23
  _QWORD *v5; // x20
  _QWORD *v6; // x24
  size_t v7; // x25
  _QWORD *v8; // x26
  unsigned __int64 v9; // x28
  __int64 v10; // x27
  size_t v11; // x2
  int v12; // w0
  __int64 v13; // x8
  __int64 v14; // [xsp+8h] [xbp-58h]

  v3 = (_QWORD *)a1[10];
  v5 = (_QWORD *)a1[11];
  if ( v5 != v3 )
  {
    v6 = *(_QWORD **)(*a2 + 48);
    v14 = *a2;
    v7 = *(v6 - 3);
    while ( 1 )
    {
      v8 = *(_QWORD **)(*v3 + 48LL);
      v9 = *(v8 - 3);
      v10 = v9 - v7;
      if ( v9 <= v7 )
        v11 = *(v8 - 3);
      else
        v11 = v7;
      v12 = memcmp(v8, v6, v11);
      if ( !v12 )
      {
        if ( v10 > 0x7FFFFFFF )
          break;
        if ( v10 <= (__int64)0xFFFFFFFF80000000LL )
          v12 = 0x80000000;
        else
          v12 = v9 - v7;
      }
      if ( v12 >= 1 )
        break;
      if ( v9 == v7 && !memcmp(v8, v6, v7) )
        return;
      if ( v5 == ++v3 )
        goto LABEL_15;
    }
    if ( v5 == v3 && v5 != (_QWORD *)a1[12] )
    {
      *v5 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      goto LABEL_22;
    }
LABEL_24:
    std::vector<boost::intrusive_ptr<Caver::Texture>>::_M_insert_aux();
    return;
  }
LABEL_15:
  if ( v5 == (_QWORD *)a1[12] )
    goto LABEL_24;
  v13 = *a2;
  *v5 = *a2;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
LABEL_22:
  a1[11] = v5 + 1;
}

