/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1738
 * Mangled: _ZN5Caver15AudioPlayerImplD0Ev
 * Demangled: Caver::AudioPlayerImpl::~AudioPlayerImpl()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000004D1738 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AudioPlayerImpl::~AudioPlayerImpl(Caver::AudioPlayerImpl *this)
{
  operator delete(this);
}

