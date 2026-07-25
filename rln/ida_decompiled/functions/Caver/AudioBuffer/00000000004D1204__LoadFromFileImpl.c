/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1204
 * Mangled: _ZN5Caver11AudioBuffer16LoadFromFileImplERKSs
 * Demangled: Caver::AudioBuffer::LoadFromFileImpl(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FAF90  Caver::AudioBuffer::LoadFromFileImpl(std::string const&)
 *
 * Callees: 3
 *   0x00000000001F4B20  Caver::AudioBuffer::InitWithStaticData(Caver::AudioBuffer::BufferFormat,int,int,uchar *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD210  Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *
 * Referenced strings: 5
 *   insn=0x00000000004D1210 string=0x00000000004D1214 "T"
 *   insn=0x00000000004D123C string=0x00000000001FD210 "0'"
 *   insn=0x00000000004D1250 string=0x00000000004D1254 "3"
 *   insn=0x00000000004D1254 string=0x00000000001F4B20 "P'"
 *   insn=0x00000000004D1284 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::AudioBuffer::LoadFromFileImpl()
{
  _ReadStatusReg(TPIDR_EL0);
  if ( (Caver::GetAudioFileData() & 1) == 0 )
    return 0;
  Caver::AudioBuffer::InitWithStaticData();
  return 1;
}

