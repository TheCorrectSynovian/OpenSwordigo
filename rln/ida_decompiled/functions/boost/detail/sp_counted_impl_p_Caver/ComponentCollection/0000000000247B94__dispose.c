/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000247B94
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver19ComponentCollectionEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::ComponentCollection>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000247C40  boost::detail::sp_counted_impl_p<Caver::ComponentCollection>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x0000000000247BA4 string=0x0000000000247BA8 "3"
 *   insn=0x0000000000247BA8 string=0x0000000000247BAC "tV@"
 *   insn=0x0000000000247BB4 string=0x0000000000247BEC "t"
 *   insn=0x0000000000247BBC string=0x0000000000247BC0 "@"
 *   insn=0x0000000000247BC0 string=0x0000000000247BC4 ""
 *   insn=0x0000000000247BC4 string=0x0000000000247BC8 ""
 *   insn=0x0000000000247BCC string=0x0000000000247BD0 ""
 *   insn=0x0000000000247BD0 string=0x0000000000247BD4 ""
 *   insn=0x0000000000247BE4 string=0x0000000000247BE8 "t"
 *   insn=0x0000000000247BF4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000247C20 string=0x0000000000247C24 "h"
 *   insn=0x0000000000247C38 string=0x0000000000247C3C """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::ComponentCollection>::dispose(__int64 a1)
{
  _QWORD *v1; // x19
  _QWORD *v2; // x20
  _QWORD *v3; // x21
  _DWORD *v4; // x0
  int v5; // w8

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v2 = (_QWORD *)*v1;
    v3 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v1 != v3 )
    {
      do
      {
        v4 = (_DWORD *)*v2;
        if ( *v2 )
        {
          v5 = v4[2] - 1;
          v4[2] = v5;
          if ( !v5 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
        }
        ++v2;
      }
      while ( v3 != v2 );
      v2 = (_QWORD *)*v1;
    }
    if ( v2 )
      operator delete(v2);
    operator delete(v1);
  }
}

