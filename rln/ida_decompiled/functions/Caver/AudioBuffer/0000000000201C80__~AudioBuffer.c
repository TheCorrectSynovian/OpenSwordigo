/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201C80
 * Mangled: ._ZN5Caver11AudioBufferD2Ev
 * Demangled: Caver::AudioBuffer::~AudioBuffer()
 *
 * Callers: 2
 *   0x00000000004876C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>> const&)
 *   0x00000000004877D0  boost::detail::sp_counted_impl_p<Caver::AudioBuffer>::dispose(void)
 *
 * Callees: 1
 *   0x00000000004D0C74  Caver::AudioBuffer::~AudioBuffer()
 *
 * Referenced strings: 1
 *   insn=0x0000000000201C88 string=0x0000000000201C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AudioBuffer::~AudioBuffer(Caver::AudioBuffer *this)
{
  _ZN5Caver11AudioBufferD2Ev(this);
}

