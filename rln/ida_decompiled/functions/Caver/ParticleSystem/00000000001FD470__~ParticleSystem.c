/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD470
 * Mangled: ._ZN5Caver14ParticleSystemD2Ev
 * Demangled: Caver::ParticleSystem::~ParticleSystem()
 *
 * Callers: 2
 *   0x00000000002AC460  boost::detail::shared_count::shared_count<Caver::ParticleSystem>(Caver::ParticleSystem *)
 *   0x00000000002AC4F4  boost::detail::sp_counted_impl_p<Caver::ParticleSystem>::dispose(void)
 *
 * Callees: 1
 *   0x00000000002AC548  Caver::ParticleSystem::~ParticleSystem()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD478 string=0x00000000001FD47C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ParticleSystem::~ParticleSystem(Caver::ParticleSystem *this)
{
  _ZN5Caver14ParticleSystemD2Ev(this);
}

