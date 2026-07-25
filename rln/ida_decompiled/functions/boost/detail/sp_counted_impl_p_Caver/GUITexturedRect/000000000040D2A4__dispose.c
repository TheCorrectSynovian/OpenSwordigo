/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040D2A4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver15GUITexturedRectEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUITexturedRect>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000040D30C  boost::detail::sp_counted_impl_p<Caver::GUITexturedRect>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000040D2B4 string=0x000000000040D2B8 "`"
 *   insn=0x000000000040D2BC string=0x000000000040D2C0 "@"
 *   insn=0x000000000040D2C0 string=0x000000000040D2C4 ""
 *   insn=0x000000000040D2C4 string=0x000000000040D2C8 ""
 *   insn=0x000000000040D2CC string=0x000000000040D2D0 ""
 *   insn=0x000000000040D2D0 string=0x000000000040D2D4 ""
 *   insn=0x000000000040D2E8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000040D304 string=0x000000000040D308 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GUITexturedRect>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  _DWORD *v2; // x0
  int v3; // w8

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (_DWORD *)*v1;
    if ( *v1 )
    {
      v3 = v2[2] - 1;
      v2[2] = v3;
      if ( !v3 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    operator delete(v1);
  }
}

