/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E418
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver6SpriteEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Sprite>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000021E498  boost::detail::sp_counted_impl_p<Caver::Sprite>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000021E428 string=0x000000000021E42C "`"
 *   insn=0x000000000021E42C string=0x000000000021E430 "@"
 *   insn=0x000000000021E430 string=0x000000000021E438 "`"
 *   insn=0x000000000021E434 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000021E438 string=0x000000000021E43C "@"
 *   insn=0x000000000021E43C string=0x000000000021E444 "`"
 *   insn=0x000000000021E448 string=0x000000000021E44C "@"
 *   insn=0x000000000021E44C string=0x000000000021E450 ""
 *   insn=0x000000000021E450 string=0x000000000021E454 ""
 *   insn=0x000000000021E458 string=0x000000000021E45C ""
 *   insn=0x000000000021E45C string=0x000000000021E460 ""
 *   insn=0x000000000021E474 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Sprite>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  void *v2; // x0
  void *v3; // x0
  _DWORD *v4; // x0
  int v5; // w8

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (void *)v1[7];
    if ( v2 )
      operator delete[](v2);
    v3 = (void *)v1[4];
    if ( v3 )
      operator delete[](v3);
    v4 = (_DWORD *)*v1;
    if ( *v1 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    operator delete(v1);
  }
}

