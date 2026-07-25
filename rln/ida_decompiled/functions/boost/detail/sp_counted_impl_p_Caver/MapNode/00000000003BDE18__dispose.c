/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BDE18
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver7MapNodeEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::MapNode>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFA30  Caver::MapNode::~MapNode()
 *   0x00000000003BDE64  boost::detail::sp_counted_impl_p<Caver::MapNode>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 1
 *   insn=0x00000000003BDE40 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::MapNode>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::MapNode::~MapNode(*(Caver::MapNode **)(a1 + 24));
    operator delete(v1);
  }
}

