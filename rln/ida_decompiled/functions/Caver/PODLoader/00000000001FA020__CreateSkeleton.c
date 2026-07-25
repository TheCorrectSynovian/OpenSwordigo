/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA020
 * Mangled: ._ZN5Caver9PODLoader14CreateSkeletonEv
 * Demangled: Caver::PODLoader::CreateSkeleton(void)
 *
 * Callers: 1
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *
 * Callees: 1
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA028 string=0x00000000001FA02C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PODLoader::CreateSkeleton(Caver::PODLoader *this)
{
  return _ZN5Caver9PODLoader14CreateSkeletonEv(this);
}

