/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211B04
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver13GUIFileDialogEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GUIFileDialog>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000211B04 string=0x0000000000211B08 "@"
 *   insn=0x0000000000211B0C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GUIFileDialog>::dispose(__int64 a1)
{
  void *v1; // x0

  v1 = *(void **)(a1 + 24);
  if ( v1 )
    operator delete(v1);
}

