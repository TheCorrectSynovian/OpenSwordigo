/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005700A4
 * Mangled: _ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj
 * Demangled: __cxxabiv1::__pbase_type_info::__do_catch(std::type_info const*,void **,uint)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 11
 *   insn=0x00000000005700B8 string=0x00000000005700BC "!"
 *   insn=0x00000000005700C8 string=0x00000000005701A0 "!"
 *   insn=0x00000000005700D4 string=0x00000000005700F4 "u"
 *   insn=0x00000000005700E0 string=0x00000000005700E4 "!"
 *   insn=0x00000000005700E0 string=0x00000000001FA120 "0'"
 *   insn=0x00000000005700EC string=0x00000000005700F0 "`"
 *   insn=0x00000000005700FC string=0x0000000000570100 "!"
 *   insn=0x0000000000570104 string=0x0000000000570108 "!"
 *   insn=0x0000000000570150 string=0x0000000000570154 "C"
 *   insn=0x0000000000570154 string=0x0000000000570158 "d"
 *   insn=0x0000000000570168 string=0x000000000057016C "ex"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__pbase_type_info::__do_catch(
        __cxxabiv1::__pbase_type_info *this,
        const type_info *a2,
        void **a3,
        __int64 a4)
{
  const char *v6; // x0
  const char *v7; // x1
  int v8; // w0
  unsigned int v9; // w1
  __int64 v10; // x21
  const char *v11; // x0
  const char *v12; // x1
  int v13; // w0
  int v15; // w4
  int v16; // [xsp+30h] [xbp+30h]
  int v17; // [xsp+30h] [xbp+30h]
  void **v18; // [xsp+38h] [xbp+38h]
  void **v19; // [xsp+38h] [xbp+38h]

  v6 = (const char *)*((_QWORD *)this + 1);
  v7 = (const char *)*((_QWORD *)a2 + 1);
  if ( v6 == v7 )
    return 1;
  if ( *v6 != 42 )
  {
    v16 = a4;
    v18 = a3;
    v8 = strcmp(v6, v7);
    v9 = 1;
    a3 = v18;
    LODWORD(a4) = v16;
    if ( !v8 )
      return v9;
  }
  v10 = *(_QWORD *)this;
  v11 = *(const char **)(*(_QWORD *)(*(_QWORD *)this - 8LL) + 8LL);
  v12 = *(const char **)(*(_QWORD *)(*(_QWORD *)a2 - 8LL) + 8LL);
  if ( v11 != v12 )
  {
    v17 = a4;
    v19 = a3;
    if ( *v11 == 42 )
      return 0;
    v13 = strcmp(v11, v12);
    a3 = v19;
    LODWORD(a4) = v17;
    if ( v13 )
      return 0;
  }
  v9 = 0;
  if ( (a4 & 1) == 0 )
    return v9;
  v15 = *((_DWORD *)this + 4);
  if ( (*((_DWORD *)a2 + 4) & ~v15) != 0 )
    return v9;
  if ( (v15 & 1) != 0 )
    a4 = (unsigned int)a4;
  else
    a4 = (unsigned int)a4 & 0xFFFFFFFE;
  return (*(unsigned __int8 (__fastcall **)(__cxxabiv1::__pbase_type_info *, const type_info *, void **, __int64))(v10 + 48))(
           this,
           a2,
           a3,
           a4);
}

