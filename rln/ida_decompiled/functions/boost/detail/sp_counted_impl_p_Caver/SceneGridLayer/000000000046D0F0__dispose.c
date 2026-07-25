/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D0F0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver14SceneGridLayerEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::SceneGridLayer>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200040  Caver::SceneGridLayer::~SceneGridLayer()
 *   0x000000000046D13C  boost::detail::sp_counted_impl_p<Caver::SceneGridLayer>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000046D114 string=0x000000000046D118 "f("
 *   insn=0x000000000046D118 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046D12C string=0x000000000046D130 "`("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::SceneGridLayer>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::SceneGridLayer::~SceneGridLayer(*(Caver::SceneGridLayer **)(a1 + 24));
    operator delete(v1);
  }
}

