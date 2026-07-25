/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003644E0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver19GameSceneControllerEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GameSceneController>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F89D0  Caver::GameSceneController::~GameSceneController()
 *   0x000000000036452C  boost::detail::sp_counted_impl_p<Caver::GameSceneController>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000003644F4 string=0x00000000003644F8 "6Q"
 *   insn=0x00000000003644F8 string=0x00000000001F89D0 "0'"
 *   insn=0x0000000000364504 string=0x0000000000364508 "jK"
 *   insn=0x0000000000364508 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036451C string=0x0000000000364520 "dK"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GameSceneController>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::GameSceneController::~GameSceneController(*(Caver::GameSceneController **)(a1 + 24));
    operator delete(v1);
  }
}

