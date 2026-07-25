/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045C0C8
 * Mangled: _ZN5Caver13ObjectLibrary13ImportLibraryERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::ObjectLibrary::ImportLibrary(boost::shared_ptr<Caver::ObjectLibrary> const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x0000000000200210  std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>,boost::shared_ptr<Caver::ObjectLibrary> const&)
 *
 * Referenced strings: 16
 *   insn=0x000000000045C0FC string=0x000000000045C100 " "
 *   insn=0x000000000045C100 string=0x000000000045C184 "h&@"
 *   insn=0x000000000045C11C string=0x000000000045C120 "\"
 *   insn=0x000000000045C128 string=0x000000000045C12C """
 *   insn=0x000000000045C130 string=0x00000000001F5190 "P'"
 *   insn=0x000000000045C14C string=0x000000000045C150 "`"
 *   insn=0x000000000045C154 string=0x000000000045C158 "\n"
 *   insn=0x000000000045C16C string=0x000000000045C170 "d"
 *   insn=0x000000000045C188 string=0x000000000045C18C "@"
 *   insn=0x000000000045C190 string=0x000000000045C194 ""
 *   insn=0x000000000045C198 string=0x000000000045C19C "!"
 *   insn=0x000000000045C19C string=0x000000000045C1A0 "h&@"
 *   insn=0x000000000045C1BC string=0x000000000045C1C0 "\t"
 *   insn=0x000000000045C1C0 string=0x000000000045C1C4 ")"
 *   insn=0x000000000045C1C4 string=0x000000000045C1C8 "\t"
 *   insn=0x000000000045C1CC string=0x000000000045C1D0 "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLibrary::ImportLibrary(__int64 result, const void ***a2)
{
  __int64 v2; // x19
  const void ***v3; // x23
  const void ***v5; // x20
  _QWORD *v6; // x24
  size_t v7; // x25
  _QWORD *v8; // x26
  unsigned __int64 v9; // x28
  __int64 v10; // x27
  size_t v11; // x2
  const void **v12; // x8
  const void **v13; // x8
  const void **v14; // [xsp+8h] [xbp-58h]

  v2 = result;
  v3 = *(const void ****)(result + 56);
  v5 = *(const void ****)(result + 64);
  if ( v5 != v3 )
  {
    v6 = **a2;
    v14 = *a2;
    v7 = *(v6 - 3);
    while ( 1 )
    {
      v8 = **v3;
      v9 = *(v8 - 3);
      v10 = v9 - v7;
      if ( v9 <= v7 )
        v11 = *(v8 - 3);
      else
        v11 = v7;
      result = memcmp(v8, v6, v11);
      if ( !(_DWORD)result )
      {
        if ( v10 > 0x7FFFFFFF )
          break;
        if ( v10 <= (__int64)0xFFFFFFFF80000000LL )
          result = 0x80000000LL;
        else
          result = (unsigned int)v10;
      }
      if ( (int)result >= 1 )
        break;
      if ( v9 == v7 )
      {
        result = memcmp(v8, v6, v7);
        if ( !(_DWORD)result )
          return result;
      }
      v3 += 2;
      if ( v5 == v3 )
        goto LABEL_15;
    }
    if ( v5 == v3 && v5 != *(const void ****)(v2 + 72) )
    {
      v12 = v14;
      goto LABEL_20;
    }
    return std::vector<boost::shared_ptr<Caver::ObjectLibrary>>::_M_insert_aux();
  }
LABEL_15:
  if ( v5 == *(const void ****)(v2 + 72) )
    return std::vector<boost::shared_ptr<Caver::ObjectLibrary>>::_M_insert_aux();
  v12 = *a2;
LABEL_20:
  *v5 = v12;
  v13 = a2[1];
  v5[1] = v13;
  if ( v13 )
    v13[1] = (char *)v13[1] + 1;
  *(_QWORD *)(v2 + 64) = v5 + 2;
  return result;
}

