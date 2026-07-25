/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8F40
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver4MeshEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Mesh>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC380  Caver::Mesh::~Mesh()
 *   0x00000000002B8F8C  boost::detail::sp_counted_impl_p<Caver::Mesh>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002B8F54 string=0x00000000002B8F58 "\n"
 *   insn=0x00000000002B8F58 string=0x00000000001FC380 "0'"
 *   insn=0x00000000002B8F68 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B8F84 string=0x00000000002B8F88 "O""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Mesh>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::Mesh::~Mesh(*(Caver::Mesh **)(a1 + 24));
    operator delete(v1);
  }
}

