/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004291A4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver11MapViewNodeEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::MapViewNode>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000429230  boost::detail::sp_counted_impl_p<Caver::MapViewNode>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000004291B4 string=0x00000000004291B8 "t"
 *   insn=0x00000000004291B8 string=0x00000000004291BC "4"
 *   insn=0x00000000004291C0 string=0x00000000004291C4 ""
 *   insn=0x00000000004291D0 string=0x00000000004291D4 "\t@"
 *   insn=0x00000000004291E0 string=0x00000000004291E4 ""
 *   insn=0x00000000004291F0 string=0x00000000004291F4 "@"
 *   insn=0x0000000000429208 string=0x000000000042920C ")8"
 *   insn=0x000000000042920C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000429220 string=0x0000000000429224 "#8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::MapViewNode>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (_QWORD *)v1[1];
    if ( v2 )
    {
      v3 = v2[1] - 1LL;
      v2[1] = v3;
      if ( !v3 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
        v4 = v2[2] - 1LL;
        v2[2] = v4;
        if ( !v4 )
          (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
      }
    }
    operator delete(v1);
  }
}

