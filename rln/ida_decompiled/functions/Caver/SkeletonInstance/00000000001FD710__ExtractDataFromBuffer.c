/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD710
 * Mangled: ._ZN5Caver16SkeletonInstance21ExtractDataFromBufferEPKNS_15FloatDataBufferE
 * Demangled: Caver::SkeletonInstance::ExtractDataFromBuffer(Caver::FloatDataBuffer const*)
 *
 * Callers: 1
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callees: 1
 *   0x00000000004510E4  Caver::SkeletonInstance::ExtractDataFromBuffer(Caver::FloatDataBuffer const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD718 string=0x00000000001FD71C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkeletonInstance::ExtractDataFromBuffer(
        Caver::SkeletonInstance *this,
        const Caver::FloatDataBuffer *a2)
{
  return _ZN5Caver16SkeletonInstance21ExtractDataFromBufferEPKNS_15FloatDataBufferE(this, a2);
}

