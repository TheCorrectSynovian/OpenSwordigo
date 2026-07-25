/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004877D0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver11AudioBufferEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::AudioBuffer>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201C80  Caver::AudioBuffer::~AudioBuffer()
 *   0x000000000048781C  boost::detail::sp_counted_impl_p<Caver::AudioBuffer>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000004877E4 string=0x00000000004877E8 "&"
 *   insn=0x00000000004877F8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000487814 string=0x0000000000487818 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::AudioBuffer>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::AudioBuffer::~AudioBuffer(*(Caver::AudioBuffer **)(a1 + 24));
    operator delete(v1);
  }
}

