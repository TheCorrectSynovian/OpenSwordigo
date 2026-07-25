/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5400
 * Mangled: ._ZN5Caver15FloatDataBufferD2Ev
 * Demangled: Caver::FloatDataBuffer::~FloatDataBuffer()
 *
 * Callers: 3
 *   0x0000000000213200  Caver::AnimKeysNode::~AnimKeysNode()
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *   0x00000000004503F4  boost::detail::sp_counted_impl_pd<Caver::FloatDataBuffer *,boost::checked_array_deleter<Caver::FloatDataBuffer>>::dispose(void)
 *
 * Callees: 1
 *   0x00000000002134C8  Caver::FloatDataBuffer::~FloatDataBuffer()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5408 string=0x00000000001F540C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::FloatDataBuffer::~FloatDataBuffer(Caver::FloatDataBuffer *this)
{
  _ZN5Caver15FloatDataBufferD2Ev(this);
}

