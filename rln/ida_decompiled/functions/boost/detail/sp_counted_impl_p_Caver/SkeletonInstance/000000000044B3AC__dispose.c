/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044B3AC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver16SkeletonInstanceEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::SkeletonInstance>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000044B444  boost::detail::sp_counted_impl_p<Caver::SkeletonInstance>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000044B3B8 string=0x000000000044B3BC "S"
 *   insn=0x000000000044B3BC string=0x000000000044B3C0 "`\n@"
 *   insn=0x000000000044B3C0 string=0x000000000044B3C4 "@"
 *   insn=0x000000000044B3C4 string=0x000000000044B3CC "t"
 *   insn=0x000000000044B3C8 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044B3CC string=0x000000000044B3D0 "4"
 *   insn=0x000000000044B3D4 string=0x000000000044B3D8 ""
 *   insn=0x000000000044B3E4 string=0x000000000044B3E8 "\t@"
 *   insn=0x000000000044B3F4 string=0x000000000044B3F8 ""
 *   insn=0x000000000044B404 string=0x000000000044B408 "@"
 *   insn=0x000000000044B420 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044B43C string=0x000000000044B440 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::SkeletonInstance>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  void *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (void *)v1[2];
    if ( v2 )
      operator delete[](v2);
    v3 = (_QWORD *)v1[1];
    if ( v3 )
    {
      v4 = v3[1] - 1LL;
      v3[1] = v4;
      if ( !v4 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v5 = v3[2] - 1LL;
        v3[2] = v5;
        if ( !v5 )
          (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
    operator delete(v1);
  }
}

