/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F44C0
 * Mangled: ._ZN5boost6detail12shared_countC2IPN5Caver15FloatDataBufferENS_21checked_array_deleterIS4_EEEET_T0_
 * Demangled: boost::detail::shared_count::shared_count<Caver::FloatDataBuffer *,boost::checked_array_deleter<Caver::FloatDataBuffer>>(Caver::FloatDataBuffer *,boost::checked_array_deleter<Caver::FloatDataBuffer>)
 *
 * Callers: 1
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Callees: 1
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F44C8 string=0x00000000001F44CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::FloatDataBuffer *,boost::checked_array_deleter<Caver::FloatDataBuffer>>()
{
  JUMPOUT(0x450318);
}

