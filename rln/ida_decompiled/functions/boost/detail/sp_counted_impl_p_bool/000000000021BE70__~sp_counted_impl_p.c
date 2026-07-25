/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BE70
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIbED0Ev
 * Demangled: boost::detail::sp_counted_impl_p<bool>::~sp_counted_impl_p()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 1
 *   insn=0x000000000021BE70 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall boost::detail::sp_counted_impl_p<bool>::~sp_counted_impl_p(void *a1)
{
  operator delete(a1);
}

