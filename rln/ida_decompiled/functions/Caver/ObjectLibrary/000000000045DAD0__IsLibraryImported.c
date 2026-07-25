/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045DAD0
 * Mangled: _ZN5Caver13ObjectLibrary17IsLibraryImportedERKSsb
 * Demangled: Caver::ObjectLibrary::IsLibraryImported(std::string const&,bool)
 *
 * Callers: 2
 *   0x000000000045D684  Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *   0x000000000045DAD0  Caver::ObjectLibrary::IsLibraryImported(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 8
 *   insn=0x000000000045DAF8 string=0x000000000045DAFC " "
 *   insn=0x000000000045DAFC string=0x000000000045DB00 "u"
 *   insn=0x000000000045DB08 string=0x000000000045DB0C "("
 *   insn=0x000000000045DB10 string=0x000000000045DB14 ""
 *   insn=0x000000000045DB1C string=0x000000000045DB30 "9C"
 *   insn=0x000000000045DB28 string=0x000000000045DB2C "`"
 *   insn=0x000000000045DB28 string=0x00000000001F5190 "P'"
 *   insn=0x000000000045DB68 string=0x000000000045DB6C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLibrary::IsLibraryImported(__int64 a1, const void **a2, char a3)
{
  const void ***v3; // x23
  const void ***v4; // x24
  const void ***v7; // x22
  const void *v8; // x21
  const void ***v9; // x25
  size_t v10; // x22
  _QWORD *v11; // x0
  unsigned int v12; // w21
  const void **v13; // t1

  v3 = *(const void ****)(a1 + 56);
  v4 = *(const void ****)(a1 + 64);
  v7 = v3;
  if ( v4 == v3 )
  {
LABEL_7:
    v12 = 0;
    if ( v7 != v3 && (a3 & 1) != 0 )
    {
      v12 = 1;
      while ( 1 )
      {
        v13 = *v3;
        v3 += 2;
        if ( (Caver::ObjectLibrary::IsLibraryImported(v13, a2, 1) & 1) != 0 )
          break;
        if ( v7 == v3 )
          return 0;
      }
    }
  }
  else
  {
    v8 = *a2;
    v9 = *(const void ****)(a1 + 56);
    v10 = *((_QWORD *)*a2 - 3);
    while ( 1 )
    {
      v11 = **v9;
      if ( *(v11 - 3) == v10 && !memcmp(v11, v8, v10) )
        return 1;
      v9 += 2;
      if ( v4 == v9 )
      {
        v7 = v4;
        goto LABEL_7;
      }
    }
  }
  return v12;
}

