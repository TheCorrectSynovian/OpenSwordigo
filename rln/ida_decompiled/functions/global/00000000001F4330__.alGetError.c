/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4330
 * Mangled: .alGetError
 * Demangled: .alGetError
 *
 * Callers: 13
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *   0x000000000047EB04  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *   0x000000000047ED50  Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *   0x000000000047EFBC  Caver::AudioSystem::CreateDevice(void)
 *   0x00000000004837BC  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x0000000000483B14  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x0000000000483E78  Caver::SoundEffectSource::~SoundEffectSource()
 *   0x0000000000484068  Caver::SoundEffectSource::setReferenceDistance(float)
 *   0x00000000004845E0  Caver::SoundEffectSource::isActive(void)
 *   0x00000000004D0C74  Caver::AudioBuffer::~AudioBuffer()
 *   0x00000000004D0DC0  Caver::AudioBuffer::InitWithStaticData(Caver::AudioBuffer::BufferFormat,int,int,uchar *)
 *   0x00000000004D12E4  Caver::AudioListener::setGain(float)
 *   0x00000000004D1574  Caver::AudioListener::UpdateOrientation(void)
 *
 * Callees: 1
 *   0x00000000006FE5F8  alGetError
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4338 string=0x00000000001F433C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 alGetError()
{
  return alGetError();
}

