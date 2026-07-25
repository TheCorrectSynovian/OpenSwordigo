/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000449360
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver12MeshInstanceEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::MeshInstance>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8DC0  Caver::MeshInstance::~MeshInstance()
 *   0x00000000004493AC  boost::detail::sp_counted_impl_p<Caver::MeshInstance>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000449378 string=0x00000000001F8DC0 "0'"
 *   insn=0x0000000000449388 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004493A4 string=0x00000000004493A8 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::MeshInstance>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::MeshInstance::~MeshInstance(*(Caver::MeshInstance **)(a1 + 24));
    operator delete(v1);
  }
}

