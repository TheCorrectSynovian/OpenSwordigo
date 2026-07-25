/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8E40
 * Mangled: _ZN5boost6detail18sp_counted_impl_pdIPtNS_21checked_array_deleterItEEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_pd<ushort *,boost::checked_array_deleter<ushort>>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 3
 *   insn=0x00000000002B8E40 string=0x00000000002B8E44 "@"
 *   insn=0x00000000002B8E44 string=0x00000000002B8E48 "F"
 *   insn=0x00000000002B8E48 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_pd<unsigned short *,boost::checked_array_deleter<unsigned short>>::dispose(
        __int64 a1)
{
  void *v1; // x0

  v1 = *(void **)(a1 + 24);
  if ( v1 )
    operator delete[](v1);
}

