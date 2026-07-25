/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AAD40
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver14GUIRoundedRectEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIRoundedRect>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000004AAD50 string=0x00000000004AAD54 "`F@"
 *   insn=0x00000000004AAD54 string=0x00000000004AAD58 "@"
 *   insn=0x00000000004AAD58 string=0x00000000004AAD60 "`:@"
 *   insn=0x00000000004AAD5C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004AAD60 string=0x00000000004AAD64 "@"
 *   insn=0x00000000004AAD64 string=0x00000000004AAD68 "~("
 *   insn=0x00000000004AAD64 string=0x00000000004AAD6C "`*@"
 *   insn=0x00000000004AAD70 string=0x00000000004AAD74 "@"
 *   insn=0x00000000004AAD70 string=0x00000000004AAD90 "`"
 *   insn=0x00000000004AAD74 string=0x00000000004AAD78 ""
 *   insn=0x00000000004AAD78 string=0x00000000004AAD7C ""
 *   insn=0x00000000004AAD80 string=0x00000000004AAD84 ""
 *   insn=0x00000000004AAD84 string=0x00000000004AAD88 ""
 *   insn=0x00000000004AAD94 string=0x00000000004AAD98 "@"
 *   insn=0x00000000004AAD98 string=0x00000000004AAD9C ""
 *   insn=0x00000000004AAD9C string=0x00000000004AADA0 ""
 *   insn=0x00000000004AADA4 string=0x00000000004AADA8 ""
 *   insn=0x00000000004AADA8 string=0x00000000004AADAC ""
 *   insn=0x00000000004AADBC string=0x00000000004AADC0 "<1"
 *   insn=0x00000000004AADC0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004AADDC string=0x00000000004AADE0 "("
 *   insn=0x00000000004AADE0 string=0x00000000004AADE4 "\t\t@"
 *   insn=0x00000000004AADE4 string=0x00000000004AADE8 ")"
 *   insn=0x00000000004AADE8 string=0x00000000004AADEC "\t\t"
 *   insn=0x00000000004AADF0 string=0x00000000004AADF4 "\t"
 *   insn=0x00000000004AADF4 string=0x00000000004AADF8 ")"
 *   insn=0x00000000004AADFC string=0x00000000004AAE00 " "
 *   insn=0x00000000004AAE04 string=0x00000000004AAE08 "*1"
 *   insn=0x00000000004AAE10 string=0x00000000004AAE14 "N"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GUIRoundedRect>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  void *v2; // x0
  void *v3; // x0
  _DWORD *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (void *)v1[17];
    if ( v2 )
      operator delete[](v2);
    v3 = (void *)v1[14];
    if ( v3 )
      operator delete[](v3);
    v4 = (_DWORD *)v1[10];
    if ( v4 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    v6 = (_DWORD *)*v1;
    if ( *v1 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    operator delete(v1);
  }
}

